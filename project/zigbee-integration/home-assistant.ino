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
 */

#ifndef ZIGBEE_MODE_ED
#error "Zigbee end device mode is not selected in Tools->Zigbee mode"
#endif

#include "Zigbee.h"

/* Zigbee binary sensor device configuration */
#define BINARY_DEVICE_ENDPOINT_NUMBER 1

uint8_t button = BOOT_PIN;

ZigbeeBinary zbBinaryShowering = ZigbeeBinary(BINARY_DEVICE_ENDPOINT_NUMBER);
ZigbeeBinary zbBinaryBrushingTeeth = ZigbeeBinary(BINARY_DEVICE_ENDPOINT_NUMBER + 1);
ZigbeeBinary zbBinaryHairDrying = ZigbeeBinary(BINARY_DEVICE_ENDPOINT_NUMBER + 2);

bool BrushingTeethStatus = false;

void setup() {
  Serial.begin(115200);
  Serial.println("Starting...");

  // Init button switch
  pinMode(button, INPUT_PULLUP);

  // Set analog resolution to 10 bits
  analogReadResolution(10);

  // Optional: set Zigbee device name and model
  zbBinaryShowering.setManufacturerAndModel("Leitrocki", "BathroomPro 2000");

  // Set up binary Showering status input + switch output (HVAC)
  zbBinaryShowering.addBinaryInput();
  zbBinaryShowering.setBinaryInputDescription("Showering Status");

  zbBinaryBrushingTeeth.addBinaryInput();
  zbBinaryBrushingTeeth.setBinaryInputDescription("BrushingTeeth Status");

  zbBinaryHairDrying.addBinaryInput();
  zbBinaryHairDrying.setBinaryInputDescription("HairDrying Status");

  // Add endpoints to Zigbee Core
  Zigbee.addEndpoint(&zbBinaryShowering);
  Zigbee.addEndpoint(&zbBinaryBrushingTeeth);
  Zigbee.addEndpoint(&zbBinaryHairDrying);

  Serial.println("Starting Zigbee...");
  // When all EPs are registered, start Zigbee in End Device mode
  if (!Zigbee.begin()) {
    Serial.println("Zigbee failed to start!");
    Serial.println("Rebooting...");
    ESP.restart();
  } else {
    Serial.println("Zigbee started successfully!");
  }
  Serial.println("Connecting to network");
  while (!Zigbee.connected()) {
    Serial.print(".");
    delay(100);
  }
  Serial.println("Connected");
}

void loop() {
  // Checking button for factory reset and reporting
  if (digitalRead(button) == LOW) {  // Push button pressed
    // Key debounce handling
    delay(100);
    int startTime = millis();
    while (digitalRead(button) == LOW) {
      delay(50);
      if ((millis() - startTime) > 3000) {
        // If key pressed for more than 3secs, factory reset Zigbee and reboot
        Serial.println("Resetting Zigbee to factory and rebooting in 1s.");
        delay(1000);
        Zigbee.factoryReset();
      }
    }

  }
  delay(100);
}
