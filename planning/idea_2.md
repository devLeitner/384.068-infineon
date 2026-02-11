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

## Milestones

### Milestone 1 – Sensor Setup & Baseline
- [ ] Mount PSoC6 securely under 3D printer  
- [ ] Validate stable IMU readings during idle and printing states  
- [ ] Record sample vibration and audio profiles from normal prints  
- [ ] Segment and label normal/no-fault vibration dataset  
- [ ] Define basic criteria for future fault detection (e.g., skipped steps, head collision)  

### Milestone 2 – Model Training & Communication Layer
- [ ] Train basic anomaly detection model using IMU data via DeepCraft Studio  
- [ ] Deploy model to PSoC6 and test real-time inference during print runs  
- [ ] ~ Integrate REST or Zigbee communication path to Home Assistant via ESP C6  
- [ ] ~ Send basic “print normal/fault detected” notifications  
- [ ] ~ Conduct validation tests by simulating a few known faults  

### Milestone 3 – Refinement & Predictive Loop
- [ ] ~ Integrate REST or Zigbee communication path to Home Assistant via ESP C6  
- [ ] ~ Send basic “print normal/fault detected” notifications  
- [ ] ~ Conduct validation tests by simulating a few known faults  
- [ ] Improve anomaly thresholding and reduce false positives  
- [ ] Add logging of detected faults for pattern tracking  
- [ ] Optionally include audio analysis layer for multi-sensor anomaly detection  
- [ ] Prepare demonstration of real-time fault detection and Home Assistant integration  