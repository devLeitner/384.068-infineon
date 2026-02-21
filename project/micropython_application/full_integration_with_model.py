import deepcraft_model as m
import array
from machine import PDM_PCM, Pin
import machine, time




### SETUP MICROPHONES ###

# Constants (adjust these according to your hardware and requirements)
SAMPLE_RATE_HZ = 16000 # Desired sample rate in Hz
AUDIO_BUFFER_SIZE = 512 # Size of the audio buffer (in samples)
AUDIO_BITS_PER_SAMPLE = 16 # Dynamic range in bits
MICROPHONE_GAIN = 12 # Microphone gain setting (best prediction observed at 12)

# PDM_PCM configuration
clk_pin = "P10_4"
data_pin = "P10_5"
receive_buffer = array.array('h', [0] * AUDIO_BUFFER_SIZE)

# Set the required clock frequency
machine.freq(machine.AUDIO_PDM_24_576_000_HZ)

# Initialize audio
pdm_pcm = PDM_PCM(
0,
sck=clk_pin,
data=data_pin,
sample_rate=SAMPLE_RATE_HZ,
decimation_rate=64,
bits=PDM_PCM.BITS_16,
format=PDM_PCM.MONO_LEFT,
left_gain=MICROPHONE_GAIN,
right_gain=MICROPHONE_GAIN,
)
pdm_pcm.init()

print("Microphone setup finished")

### SETUP ESP C8 communication

shower = Pin("P9_0", Pin.OUT, value=0)
hair = Pin("P9_1", Pin.OUT, value=0)
tooth = Pin("P9_2", Pin.OUT, value=0)
ZIGBEE_COMMUNICATION = [tooth, hair, shower]

print("Communication with ESP C8 setup finished")

### SETUP AI MODEL ###

IMAI_DATA_OUT_SYMBOLS = ["unlabelled", "brushing_teeth", "hair_drying", "showering"]
# IMAI_DATA_OUT_SYMBOLS = ["unlabelled", "air", "plastic", "plastic_out", "wood", "wood_out"]

# Initialize label scores and labels
label_scores = [0.0] * len(IMAI_DATA_OUT_SYMBOLS)
label_text = IMAI_DATA_OUT_SYMBOLS
output_buffer = array.array('f', [0.0] * len(IMAI_DATA_OUT_SYMBOLS))

# Initialize the model
model = m.DEEPCRAFT()
model.init()

print("Model setup finished")

# Function to normalize sample into range [-1, 1]
def sample_normalize(sample):
    return sample / float(1 << (AUDIO_BITS_PER_SAMPLE - 1))

while True:
    ### AUDIO PROCESSING and BABY CRY DETECTION ###
    # Read audio samples into buffer
    num_bytes = pdm_pcm.readinto(receive_buffer) # Read audio samples into buffer.
    num_samples = num_bytes // 2  # Each sample is 2 bytes

    start_time = time.time_ns()
    for i in range(num_samples):
        # Get sample from buffer and amplify it
        raw_sample = receive_buffer[i] * 10

        # Normalize the sample to range [-1, 1]
        normalized_sample = sample_normalize(raw_sample)
        
        # print(model.get_model_input_dim())

        # Pass the sample to the model
        enq_status = model.enqueue([raw_sample])
        if enq_status != 0:
            print("Could not enqueue")
            quit()

        # Check if there is any model output to process
        if model.dequeue(output_buffer) == 0:
            max_score = -math.inf
            best_label = 0
            for idx, score in enumerate(output_buffer):
                print(f"Label: {label_text[idx]:<10} Score(%): {score*100:.4f}")
                if score > max_score:
                    max_score = score
                    best_label = idx
                    
            if (best_label == 0):
                # If unlabeled set all false
                for statuspin in ZIGBEE_COMMUNICATION:
                    statuspin.value(False)
            else:
                # set best value high
                ZIGBEE_COMMUNICATION[best_label].value(True)
                # set other values low
                for statuspin in [x for x in ZIGBEE_COMMUNICATION if x != ZIGBEE_COMMUNICATION[best_label]]:
                    statuspin.value(False)

    end_time = time.time_ns()
    print((end_time - start_time) // 10**9, "ms")
