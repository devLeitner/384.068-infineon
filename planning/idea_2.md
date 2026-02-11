## Idea 2: 3D Printer Fault Detection with PSoC6 AI Kit

### Overview
Use the **IMU and audio sensor** to monitor a 3D printer’s operating state and detect potential faults. The system should learn the vibration patterns during normal operation identify anomalies such as print head collisions, loose parts or failed prints. To improve the accuracy maybe use the audio sensor.

### Objectives
1. **Anomaly Detection (Phase 1):**
   - Mount the PSoC6 board on the underside of the 3D printer.
   - Use the **IMU** to capture vibration signatures during normal prints.
   - Optionally use the **microphone** to add an audio-based anomaly layer.
   - Train an anomaly detection model via DeepCraft Studio.
   - Detect deviations from learned vibration patterns to indicate errors or print failures in real time.
   - Deploy onto board and integrate via micropython

2. **Home Automation Integration (Phase 2):**
   - Send fault or status notifications to **Home Assistant** through REST API or Zigbee.
   - Enable automations such as:
     - Pausing the print job on detection of major anomalies (This works through the octoprint integration and the power to the 3d printer is controllable too).  
     - Sending push notifications to phones if a fault occurs.

    The connection and communication layer will be realized via REST on the device itself or through an ESP C6 acting as a Zigbee bridge.

    ```mermaid
    flowchart TD
        A[PSOC6] -->|serial| B[ESP C6]
        B -->|zigbee| C[Home Assistant]
        C --> D[michael phone]
        C --> E[philip phone]
    ```