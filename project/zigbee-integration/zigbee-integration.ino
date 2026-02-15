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


/* Defines */
#define UART_BAUDRATE 115200
#define UART_RX_PIN   16   // change if needed
#define UART_TX_PIN   17   // change if needed

#define DEBUG


/* Zibee Code */
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

/* UART Code */
void setBathroomState(const String &state) {
  bool shower = false;
  bool tooth  = false;
  bool hair   = false;

  if (state == "shower") {
    shower = true;
  } else if (state == "tooth") {
    tooth = true;
  } else if (state == "hair") {
    hair = true;
  } else {
    Serial.println("Unknown state received");
    return;
  }

  zbBinaryShowering.setBinaryInput(shower);
  zbBinaryBrushingTeeth.setBinaryInput(tooth);
  zbBinaryHairDrying.setBinaryInput(hair);

  #ifdef DEBUG
    Serial.printf("State updated → shower:%d tooth:%d hair:%d\n", shower, tooth, hair);
  #endif
}

String uartRXBuffer = "";


void setup() {

  #ifdef DEBUG
    Serial.begin(115200);
    Serial.println("Starting...");
  #endif

  // Using Serial1 to communicate with the PSOC6
  Serial1.begin(UART_BAUDRATE, SERIAL_8N1, UART_RX_PIN, UART_TX_PIN);

  // Init button switch
  pinMode(button, INPUT_PULLUP);

  // Set Zigbee device name and model
  zbBinaryShowering.setManufacturerAndModel("Leitrocki", "BathroomPro 2000");

  // Set up binary status inputs
  zbBinaryShowering.addBinaryInput();
  zbBinaryShowering.setBinaryInputDescription("Showering Status");

  zbBinaryBrushingTeeth.addBinaryInput();
  zbBinaryBrushingTeeth.setBinaryInputDescription("BrushingTeeth Status");

  zbBinaryHairDrying.addBinaryInput();
  zbBinaryHairDrying.setBinaryInputDescription("HairDrying Status");

  // Add endpoints to Zigbee
  Zigbee.addEndpoint(&zbBinaryShowering);
  Zigbee.addEndpoint(&zbBinaryBrushingTeeth);
  Zigbee.addEndpoint(&zbBinaryHairDrying);


  Serial.println("Starting Zigbee...");
  
  /* When all EPs are registered, start Zigbee in End Device mode */
  if (!Zigbee.begin()) {
    #ifdef debug
      Serial.println("Zigbee failed to start!");
      Serial.println("Rebooting...");
    #endif
    ESP.restart();
  } else {
    #ifdef debug
      Serial.println("Zigbee started successfully!");
    #endif
  }
  
  #ifdef debug
    Serial.println("Connecting to network");
  #endif

  while (!Zigbee.connected()) {
    #ifdef debug
      Serial.print(".");
    #endif
    delay(100);
  }
  Serial.println("Connected");

}

void loop() {

  /* UART handeling */
  while (Serial1.available()) {
    char c = Serial1.read();

    if (c == '\n') {
      uartRXBuffer.trim();

      if (uartRXBuffer.startsWith("state:")) {
        String state = uartRXBuffer.substring(6);
        setBathroomState(state);
      }

      uartRXBuffer = "";

    } else {

      uartRXBuffer += c;

    }
  }

  delay(100);

}
