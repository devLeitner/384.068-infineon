// Copyright 2025 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * @brief This is the base for three zigbee states for our bathroom state detection.
 *
 * We have defined three binary switches that will be driven by the data form the ai over a serial connection.
 *
 * Device Info: 
 *    This software is deployed on an ESP32-C8-WROOM Module
 */

 
/* ================== GPIO DEFINES ================== */
#define PIN_SHOWER  18
#define PIN_TOOTH   19
#define PIN_HAIR    20

#define DEBUG

/* ================== DEBOUNCE / RATE LIMIT ================== */
#define STATE_UPDATE_INTERVAL_MS 30000UL  // 30 seconds

unsigned long lastShowerUpdate = 0;
unsigned long lastToothUpdate  = 0;
unsigned long lastHairUpdate   = 0;

bool lastShowerState = false;
bool lastToothState  = false;
bool lastHairState   = false;

enum BathroomState {
  STATE_NONE = 0,
  STATE_SHOWER,
  STATE_TOOTH,
  STATE_HAIR
};

/* ================== SLIDING WINDOW CONFIG ================== */
#define SAMPLE_INTERVAL_MS   100
#define WINDOW_DURATION_MS   5000
#define WINDOW_SIZE          (WINDOW_DURATION_MS / SAMPLE_INTERVAL_MS)

BathroomState window[WINDOW_SIZE];
uint16_t windowIndex = 0;

int16_t countNone   = WINDOW_SIZE;
int16_t countShower = 0;
int16_t countTooth  = 0;
int16_t countHair   = 0;

BathroomState lastReportedState = STATE_NONE;

unsigned long lastSampleTime = 0;

BathroomState readBathroomState() {
  if (digitalRead(PIN_SHOWER)) return STATE_SHOWER;
  if (digitalRead(PIN_TOOTH))  return STATE_TOOTH;
  if (digitalRead(PIN_HAIR))   return STATE_HAIR;
  return STATE_NONE;
}

void removeFromCount(BathroomState s) {
  switch (s) {
    case STATE_SHOWER: countShower--; break;
    case STATE_TOOTH:  countTooth--;  break;
    case STATE_HAIR:   countHair--;   break;
    default:           countNone--;   break;
  }
}

void addToCount(BathroomState s) {
  switch (s) {
    case STATE_SHOWER: countShower++; break;
    case STATE_TOOTH:  countTooth++;  break;
    case STATE_HAIR:   countHair++;   break;
    default:           countNone++;   break;
  }
}

BathroomState dominantState() {
  BathroomState result = STATE_NONE;
  uint16_t maxCount = countNone;

  if (countShower > maxCount) { maxCount = countShower; result = STATE_SHOWER; }
  if (countTooth  > maxCount) { maxCount = countTooth;  result = STATE_TOOTH;  }
  if (countHair   > maxCount) { result = STATE_HAIR; }

  return result;
}

/* ================== ZIGBEE ================== */
#ifndef ZIGBEE_MODE_ED
#error "Zigbee end device mode is not selected in Tools->Zigbee mode"
#endif

#include "Zigbee.h"

/* Zigbee binary sensor device configuration */
#define BINARY_DEVICE_ENDPOINT_NUMBER 1

uint8_t button = BOOT_PIN;

ZigbeeBinary zbBinaryShowering(BINARY_DEVICE_ENDPOINT_NUMBER);
ZigbeeBinary zbBinaryBrushingTeeth(BINARY_DEVICE_ENDPOINT_NUMBER + 1);
ZigbeeBinary zbBinaryHairDrying(BINARY_DEVICE_ENDPOINT_NUMBER + 2);

/* ================== SETUP ================== */
void setup() {

#ifdef DEBUG
  Serial.begin(115200);
  Serial.println("Starting...");
#endif

  // Configure GPIO inputs
  pinMode(PIN_SHOWER, INPUT);
  pinMode(PIN_TOOTH, INPUT);
  pinMode(PIN_HAIR, INPUT);

  pinMode(button, INPUT_PULLUP);

  // Device info
  zbBinaryShowering.setManufacturerAndModel("Leitrocki", "BathroomPro 2000");

  // Binary inputs
  zbBinaryShowering.addBinaryInput();
  zbBinaryShowering.setBinaryInputDescription("Showering Status");

  zbBinaryBrushingTeeth.addBinaryInput();
  zbBinaryBrushingTeeth.setBinaryInputDescription("Brushing Teeth Status");

  zbBinaryHairDrying.addBinaryInput();
  zbBinaryHairDrying.setBinaryInputDescription("Hair Drying Status");

  // Register endpoints
  Zigbee.addEndpoint(&zbBinaryShowering);
  Zigbee.addEndpoint(&zbBinaryBrushingTeeth);
  Zigbee.addEndpoint(&zbBinaryHairDrying);

#ifdef DEBUG
  Serial.println("Starting Zigbee...");
#endif

  if (!Zigbee.begin()) {
#ifdef DEBUG
    Serial.println("Zigbee failed to start! Rebooting...");
#endif
    ESP.restart();
  }

  while (!Zigbee.connected()) {
#ifdef DEBUG
    Serial.print(".");
#endif
    delay(100);
  }

#ifdef DEBUG
  Serial.println("\nZigbee Connected");
#endif
}

/* ================== LOOP ================== */
void loop() {

  unsigned long now = millis();
  if (now - lastSampleTime < SAMPLE_INTERVAL_MS and lastSampleTime != 0) {
    return;
  }
  
  lastSampleTime = now;

  BathroomState current = readBathroomState();

  // Remove old sample
  removeFromCount(window[windowIndex]);

  // Store new sample
  window[windowIndex] = current;
  addToCount(current);

  windowIndex = (windowIndex + 1) % WINDOW_SIZE;

  BathroomState majority = dominantState();

  Serial.printf("Dominant state changed → %d\n", majority);
  Serial.printf("Counts %d %d %d %d\n", countShower, countHair, countTooth, countNone);

  if (majority != lastReportedState) {

    zbBinaryShowering.setBinaryInput(majority == STATE_SHOWER);
    zbBinaryBrushingTeeth.setBinaryInput(majority == STATE_TOOTH);
    zbBinaryHairDrying.setBinaryInput(majority == STATE_HAIR);

    zbBinaryShowering.reportBinaryInput();
    zbBinaryBrushingTeeth.reportBinaryInput();
    zbBinaryHairDrying.reportBinaryInput();

    lastReportedState = majority;

#ifdef DEBUG
    Serial.printf("Dominant state changed → %d\n", majority);
#endif
  }
}
