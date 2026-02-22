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

  bool shower = digitalRead(PIN_SHOWER);
  bool tooth  = digitalRead(PIN_TOOTH);
  bool hair   = digitalRead(PIN_HAIR);

  zbBinaryShowering.setBinaryInput(shower);
  zbBinaryBrushingTeeth.setBinaryInput(tooth);
  zbBinaryHairDrying.setBinaryInput(hair);

#ifdef DEBUG
  Serial.printf(
    "GPIO State → shower:%d tooth:%d hair:%d\n",
    shower, tooth, hair
  );
#endif

  delay(100);
}