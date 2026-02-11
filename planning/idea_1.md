## Idea 1: Smart Bathroom Presence & Activity Detection with PSoC6 AI Kit

### Overview
Use the audio sensor to detect bathroom usage and occupancy status. The system should classify audio input to check whether the bathroom is **empty** or someone is **showering** or **brushing teeth**

### Objectives
1. **Activity Detection (Phase 1):**
   - Capture audio via the onboard microphone.
   - Use an AI model to classify sound patterns into categories via DeepCraft Studio:
     - *Empty*  
     - *Brushing teeth*  
     - *Showering*
   - Deploy model on-device for real-time classification via micropython
   - Test first results

2. **Home Automation Integration (Phase 2):**
   - Send activity and occupancy updates to **Home Assistant** through REST API or Zigbee.
   - Create automations, e.g.:
     - Push notifications to smartphones.  
     - Control ventilation or lighting based on detected activity.

    This will be accomplished via REST on the device itself or an ESP C6, which acts as the zigbee connection.

    ```mermaid
    flowchart TD
        A[PSOC6] -->|serial| B[ESP C6]
        B -->|zigbee| C[Home Assistant]
        C --> D[philip phone]
        C --> E[michael phone]
    ```

3. **Person Identification (Phase 3):**
   - Extend the AI model to perform **person recognition** based on unique acoustic features (patterns like electrical toothbrush vs normal one, showering habits).
   - Allows personalization of Home Assistant automations per person.