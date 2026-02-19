import deepcraft_model as m
import array
from machine import PDM_PCM
import machine, time




### SETUP MICROPHONES ###

# Constants (adjust these according to your hardware and requirements)
SAMPLE_RATE_HZ = 16000 # Desired sample rate in Hz
AUDIO_BUFFER_SIZE = 512 # Size of the audio buffer (in samples)
AUDIO_BITS_PER_SAMPLE = 16 # Dynamic range in bits
MICROPHONE_GAIN = 1 # Microphone gain setting (best prediction observed at 12)
SOFTWARE_GAIN = 1.0 # Digital boost factor for input signal

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

### SETUP AI MODEL ###

IMAI_DATA_OUT_SYMBOLS = ["unlabelled", "brushing_teeth", "hair_drying", "showering"]

# Initialize label scores and labels
label_scores = [0.0] * len(IMAI_DATA_OUT_SYMBOLS)
label_text = IMAI_DATA_OUT_SYMBOLS
output_buffer = array.array('f', [0.0] * len(IMAI_DATA_OUT_SYMBOLS))

# Initialize the model
model = m.DEEPCRAFT()
model.init()

# Function to normalize sample into range [-1, 1]
def sample_normalize(sample):
    return sample / float(1 << (AUDIO_BITS_PER_SAMPLE - 1))

while True:
    ### AUDIO PROCESSING and BABY CRY DETECTION ###
    # Read audio samples into buffer
    num_bytes = pdm_pcm.readinto(receive_buffer) # Read audio samples into buffer.
    num_samples = num_bytes // 2  # Each sample is 2 bytes

    for i in range(num_samples):
        # Get sample from buffer and amplify it
        raw_sample = receive_buffer[i] * SOFTWARE_GAIN

        # Normalize the sample to range [-1, 1]
        normalized_sample = sample_normalize(raw_sample)

        # Pass the sample to the model
        enq_status = model.enqueue([normalized_sample])

        # Check if there is any model output to process
        if model.dequeue(output_buffer) == 0:  # IMAI_RET_SUCCESS
            # We have valid data, display it
            for idx, score in enumerate(output_buffer):
                print(f"Label: {label_text[idx]:<10} Score(%): {score*100:.4f}")
            
            # Have a look at the score for the baby cry label
