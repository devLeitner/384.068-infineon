# BathroomPro 2000

1. Microphone samples at 16kHz.
2. MEL: removes rumble below 100Hz, cuts of above 6000Hz because toothbrush, showering is below that, 32 MEL Bands are enough for non speech environemtnts and save a lot of performance, 50 Hz output means 20ms hop
3. Context Window: 64 frames / 50 hz: 1.28 sec of audio context, prediction rate of 0.64 --> Every 0.64 seconds we get a prediction over a context window of 1.28 sec.

1. DPS samples at 64 hz
2. Sliding window for calculating deviation.
3. taking deviation because we need changes more than absolutes and we don't want to measure in absolute temperature (different environments, locations)

1. concatenate 