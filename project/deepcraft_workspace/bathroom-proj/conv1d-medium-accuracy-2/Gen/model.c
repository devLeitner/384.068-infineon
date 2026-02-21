/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 15:48:24 UTC. Any changes will be lost.
* 
* Model ID  8a73844b-0471-407a-86fe-af29585e6213
* 
* Memory    Size                      Efficiency
* Buffers   19200 bytes (RAM)         100 %
* State     19592 bytes (RAM)         100 %
* Readonly  54008 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-medium-accuracy-2
* 
* Class Index | Symbol Label
* 0           | (unlabeled)
* 1           | brushing_teeth
* 2           | hair_drying
* 3           | showering
* 
* Layer                          Shape           Type       Function
* Sliding Window (data points)   [512]           float      dequeue
*    window_shape = [512]
*    stride = 160
*    buffer_multiplier = 1
* Hamming smoothing              [512]           float      dequeue
*    sym = True
* Real Discrete Fourier Transform [257,2]         float      dequeue
*    axis = 0
* Frobenius norm                 [257]           float      dequeue
*    axis = 0
* Mel Filterbank                 [40]            float      dequeue
*    num_filters = 40
*    sample_rate = 16000
*    f_low = 300
*    f_high = 8000
* Add Constant                   [40]            float      dequeue
*    A = 1
* Logarithm                      [40]            float      dequeue
* Clip                           [40]            float      dequeue
*    min = 0
*    max = 4
* Imagimob Speech Features       [40]            float      dequeue
*    output_freq = 100
*    output_features = 40
*    low_cut_freq = 300
*    high_cut_freq = 8000
* Sliding Window (data points)   [100,40]        float      dequeue
*    window_shape = [100,40]
*    stride = 560
*    buffer_multiplier = 1
* Contextual Window (Sliding Window) [100,40]        float      dequeue
*    contextual_length_sec = 1
*    prediction_freq = 7
* Input Layer                    [100,40]        float      dequeue
*    shape = [100,40]
* Convolution 1D                 [50,16]         float      dequeue
*    filters = 16
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,40,16]
* Batch Normalization            [50,16]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[16]
*    beta = float[16]
*    mean = float[16]
*    variance = float[16]
* Activation                     [50,16]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [50,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,16,32]
* Batch Normalization            [50,32]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [50,32]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [50,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Batch Normalization            [50,32]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [50,32]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [25,32]         float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Convolution 1D                 [25,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Batch Normalization            [25,32]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [25,32]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [25,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Batch Normalization            [25,32]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [25,32]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [12,32]         float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Global average pooling 1D      [32]            float      dequeue
*    trainable = True
* Dense                          [4]             float      dequeue
*    units = 4
*    use_bias = True
*    activation = linear
*    trainable = True
*    weight = float[32,4]
*    bias = float[4]
* Activation                     [4]             float      dequeue
*    activation = softmax
*    trainable = True
* 
* Exported functions:
* 
* int IMAI_dequeue(float *restrict data_out)
*    Description: Dequeue features. RET_SUCCESS (0) on success, RET_NODATA (-1) if no data is available, RET_NOMEM (-2) on internal memory error
*    Parameter data_out is Output of size float[4].
* 
* int IMAI_enqueue(const float *restrict data_in)
*    Description: Enqueue features. Returns SUCCESS (0) on success, else RET_NOMEM (-2) when low on memory.
*    Parameter data_in is Input of size float[1].
* 
* void IMAI_init(void)
*    Description: Initializes buffers to initial state. This function also works as a reset function.
* 
* 
* Disclaimer:
*   The generated code relies on the optimizations done by the C compiler.
*   For example many for-loops of length 1 must be removed by the optimizer.
*   This can only be done if the functions are inlined and simplified.
*   Check disassembly if unsure.
*   tl;dr Compile using gcc with -O3 or -Ofast
*/

/*
* Tensorflow Test Set
* 
* (ACC) Accuracy 93.329 %
* (F1S) F1 Score 93.210 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                5419             2021             1968             2441
* (FN) False Negative or Incorrect Negative Prediction              253                9                1              584
* (FP) False Positive or Incorrect Positive Prediction              583              101                3              160
* (TN) True Negative or Correct Negative Prediction                6441            10565            10724             9511
* (TPR) True Positive Rate or Sensitivity, Recall               95.54 %          99.56 %          99.95 %          80.69 %
* (TNR) True Negative Rate or Specificity, Selectivity          91.70 %          99.05 %          99.97 %          98.35 %
* (PPV) Positive Predictive Value or Precision                  90.29 %          95.24 %          99.85 %          93.85 %
* (NPV) Negative Predictive Value                               96.22 %          99.91 %          99.99 %          94.21 %
* (FNR) False Negative Rate or Miss Rate                         4.46 %           0.44 %           0.05 %          19.31 %
* (FPR) False Positive Rate or Fall-Out                          8.30 %           0.95 %           0.03 %           1.65 %
* (FDR) False Discovery Rate                                     9.71 %           4.76 %           0.15 %           6.15 %
* (FOR) False Omission Rate                                      3.78 %           0.09 %           0.01 %           5.79 %
* (F1S) F1 Score                                                92.84 %          97.35 %          99.90 %          86.78 %
*/

#include <float.h>
#include <math.h>
#include <stdint.h>
#include <string.h>

#include "model.h"

// Working memory
static int8_t _buffer[19200];
static int8_t _state[19592];

// Parameters
static const uint32_t _K5[] = {
    0x3da3d70a, 0x3da3e945, 0x3da41ff6, 0x3da47b1a, 0x3da4faae, 0x3da59ead, 0x3da66711, 0x3da753d1, 
    0x3da864e6, 0x3da99a43, 0x3daaf3de, 0x3dac71a8, 0x3dae1393, 0x3dafd990, 0x3db1c38b, 0x3db3d173, 
    0x3db60333, 0x3db858b5, 0x3dbad1e2, 0x3dbd6ea1, 0x3dc02eda, 0x3dc3126f, 0x3dc61946, 0x3dc9433f, 
    0x3dcc903c, 0x3dd0001c, 0x3dd392bc, 0x3dd747fa, 0x3ddb1fb0, 0x3ddf19b9, 0x3de335ed, 0x3de77423, 
    0x3debd432, 0x3df055ed, 0x3df4f929, 0x3df9bdb7, 0x3dfea369, 0x3e01d506, 0x3e0468b9, 0x3e070cb2, 
    0x3e09c0d8, 0x3e0c8510, 0x3e0f593f, 0x3e123d48, 0x3e15310f, 0x3e183476, 0x3e1b4760, 0x3e1e69af, 
    0x3e219b42, 0x3e24dbfc, 0x3e282bba, 0x3e2b8a5d, 0x3e2ef7c4, 0x3e3273cb, 0x3e35fe51, 0x3e399733, 
    0x3e3d3e4d, 0x3e40f37b, 0x3e44b697, 0x3e48877d, 0x3e4c6608, 0x3e50520f, 0x3e544b6e, 0x3e5851fc, 
    0x3e5c6591, 0x3e608606, 0x3e64b330, 0x3e68ece8, 0x3e6d3302, 0x3e718555, 0x3e75e3b6, 0x3e7a4df9, 
    0x3e7ec3f3, 0x3e81a2bc, 0x3e83e92d, 0x3e863537, 0x3e8886c2, 0x3e8addb8, 0x3e8d3a02, 0x3e8f9b87, 
    0x3e920232, 0x3e946de9, 0x3e96de94, 0x3e99541c, 0x3e9bce69, 0x3e9e4d61, 0x3ea0d0ec, 0x3ea358f1, 
    0x3ea5e557, 0x3ea87604, 0x3eab0ae0, 0x3eada3d1, 0x3eb040bc, 0x3eb2e189, 0x3eb5861c, 0x3eb82e5d, 
    0x3ebada30, 0x3ebd897b, 0x3ec03c23, 0x3ec2f20e, 0x3ec5ab21, 0x3ec86741, 0x3ecb2653, 0x3ecde83b, 
    0x3ed0acdf, 0x3ed37422, 0x3ed63de9, 0x3ed90a1a, 0x3edbd897, 0x3edea945, 0x3ee17c09, 0x3ee450c6, 
    0x3ee72760, 0x3ee9ffbb, 0x3eecd9bb, 0x3eefb544, 0x3ef29239, 0x3ef5707e, 0x3ef84ff6, 0x3efb3086, 
    0x3efe1210, 0x3f007a3c, 0x3f01ebd1, 0x3f035db8, 0x3f04cfe4, 0x3f064245, 0x3f07b4ce, 0x3f09276f, 
    0x3f0a9a1c, 0x3f0c0cc5, 0x3f0d7f5c, 0x3f0ef1d3, 0x3f10641b, 0x3f11d626, 0x3f1347e6, 0x3f14b94c, 
    0x3f162a4a, 0x3f179ad3, 0x3f190ad7, 0x3f1a7a48, 0x3f1be918, 0x3f1d5739, 0x3f1ec49d, 0x3f203136, 
    0x3f219cf5, 0x3f2307cc, 0x3f2471ae, 0x3f25da8c, 0x3f274259, 0x3f28a906, 0x3f2a0e86, 0x3f2b72ca, 
    0x3f2cd5c6, 0x3f2e376a, 0x3f2f97ab, 0x3f30f679, 0x3f3253c7, 0x3f33af88, 0x3f3509af, 0x3f36622d, 
    0x3f37b8f7, 0x3f390dfd, 0x3f3a6134, 0x3f3bb28d, 0x3f3d01fd, 0x3f3e4f76, 0x3f3f9aea, 0x3f40e44e, 
    0x3f422b95, 0x3f4370b1, 0x3f44b397, 0x3f45f439, 0x3f47328c, 0x3f486e82, 0x3f49a811, 0x3f4adf2b, 
    0x3f4c13c5, 0x3f4d45d2, 0x3f4e7547, 0x3f4fa219, 0x3f50cc3a, 0x3f51f3a1, 0x3f531841, 0x3f543a0f, 
    0x3f555901, 0x3f56750a, 0x3f578e20, 0x3f58a437, 0x3f59b746, 0x3f5ac742, 0x3f5bd420, 0x3f5cddd5, 
    0x3f5de457, 0x3f5ee79d, 0x3f5fe79c, 0x3f60e44a, 0x3f61dd9d, 0x3f62d38c, 0x3f63c60e, 0x3f64b518, 
    0x3f65a0a2, 0x3f6688a3, 0x3f676d11, 0x3f684de4, 0x3f692b13, 0x3f6a0495, 0x3f6ada62, 0x3f6bac72, 
    0x3f6c7abd, 0x3f6d453a, 0x3f6e0be2, 0x3f6ecead, 0x3f6f8d94, 0x3f70488f, 0x3f70ff97, 0x3f71b2a4, 
    0x3f7261b1, 0x3f730cb6, 0x3f73b3ac, 0x3f74568d, 0x3f74f553, 0x3f758ff8, 0x3f762676, 0x3f76b8c6, 
    0x3f7746e3, 0x3f77d0c8, 0x3f78566f, 0x3f78d7d4, 0x3f7954f0, 0x3f79cdc0, 0x3f7a423f, 0x3f7ab267, 
    0x3f7b1e35, 0x3f7b85a5, 0x3f7be8b3, 0x3f7c475a, 0x3f7ca197, 0x3f7cf767, 0x3f7d48c6, 0x3f7d95b2, 
    0x3f7dde26, 0x3f7e2221, 0x3f7e619f, 0x3f7e9c9f, 0x3f7ed31e, 0x3f7f051a, 0x3f7f3290, 0x3f7f5b80, 
    0x3f7f7fe7, 0x3f7f9fc5, 0x3f7fbb17, 0x3f7fd1dd, 0x3f7fe416, 0x3f7ff1c2, 0x3f7ffadf, 0x3f7fff6e, 
    0x3f7fff6e, 0x3f7ffadf, 0x3f7ff1c2, 0x3f7fe416, 0x3f7fd1dd, 0x3f7fbb17, 0x3f7f9fc5, 0x3f7f7fe7, 
    0x3f7f5b80, 0x3f7f3290, 0x3f7f051a, 0x3f7ed31e, 0x3f7e9c9f, 0x3f7e619f, 0x3f7e2221, 0x3f7dde26, 
    0x3f7d95b2, 0x3f7d48c6, 0x3f7cf767, 0x3f7ca197, 0x3f7c475a, 0x3f7be8b3, 0x3f7b85a5, 0x3f7b1e35, 
    0x3f7ab267, 0x3f7a423f, 0x3f79cdc0, 0x3f7954f0, 0x3f78d7d4, 0x3f78566f, 0x3f77d0c8, 0x3f7746e3, 
    0x3f76b8c6, 0x3f762676, 0x3f758ff8, 0x3f74f553, 0x3f74568d, 0x3f73b3ac, 0x3f730cb6, 0x3f7261b1, 
    0x3f71b2a4, 0x3f70ff97, 0x3f70488f, 0x3f6f8d94, 0x3f6ecead, 0x3f6e0be2, 0x3f6d453a, 0x3f6c7abd, 
    0x3f6bac72, 0x3f6ada62, 0x3f6a0495, 0x3f692b13, 0x3f684de4, 0x3f676d11, 0x3f6688a3, 0x3f65a0a2, 
    0x3f64b518, 0x3f63c60e, 0x3f62d38c, 0x3f61dd9d, 0x3f60e44a, 0x3f5fe79c, 0x3f5ee79d, 0x3f5de457, 
    0x3f5cddd5, 0x3f5bd420, 0x3f5ac742, 0x3f59b746, 0x3f58a437, 0x3f578e20, 0x3f56750a, 0x3f555901, 
    0x3f543a0f, 0x3f531841, 0x3f51f3a1, 0x3f50cc3a, 0x3f4fa219, 0x3f4e7547, 0x3f4d45d2, 0x3f4c13c5, 
    0x3f4adf2b, 0x3f49a811, 0x3f486e82, 0x3f47328c, 0x3f45f439, 0x3f44b397, 0x3f4370b1, 0x3f422b95, 
    0x3f40e44e, 0x3f3f9aea, 0x3f3e4f76, 0x3f3d01fd, 0x3f3bb28d, 0x3f3a6134, 0x3f390dfd, 0x3f37b8f7, 
    0x3f36622d, 0x3f3509af, 0x3f33af88, 0x3f3253c7, 0x3f30f679, 0x3f2f97ab, 0x3f2e376a, 0x3f2cd5c6, 
    0x3f2b72ca, 0x3f2a0e86, 0x3f28a906, 0x3f274259, 0x3f25da8c, 0x3f2471ae, 0x3f2307cc, 0x3f219cf5, 
    0x3f203136, 0x3f1ec49d, 0x3f1d5739, 0x3f1be918, 0x3f1a7a48, 0x3f190ad7, 0x3f179ad3, 0x3f162a4a, 
    0x3f14b94c, 0x3f1347e6, 0x3f11d626, 0x3f10641b, 0x3f0ef1d3, 0x3f0d7f5c, 0x3f0c0cc5, 0x3f0a9a1c, 
    0x3f09276f, 0x3f07b4ce, 0x3f064245, 0x3f04cfe4, 0x3f035db8, 0x3f01ebd1, 0x3f007a3c, 0x3efe1210, 
    0x3efb3086, 0x3ef84ff6, 0x3ef5707e, 0x3ef29239, 0x3eefb544, 0x3eecd9bb, 0x3ee9ffbb, 0x3ee72760, 
    0x3ee450c6, 0x3ee17c09, 0x3edea945, 0x3edbd897, 0x3ed90a1a, 0x3ed63de9, 0x3ed37422, 0x3ed0acdf, 
    0x3ecde83b, 0x3ecb2653, 0x3ec86741, 0x3ec5ab21, 0x3ec2f20e, 0x3ec03c23, 0x3ebd897b, 0x3ebada30, 
    0x3eb82e5d, 0x3eb5861c, 0x3eb2e189, 0x3eb040bc, 0x3eada3d1, 0x3eab0ae0, 0x3ea87604, 0x3ea5e557, 
    0x3ea358f1, 0x3ea0d0ec, 0x3e9e4d61, 0x3e9bce69, 0x3e99541c, 0x3e96de94, 0x3e946de9, 0x3e920232, 
    0x3e8f9b87, 0x3e8d3a02, 0x3e8addb8, 0x3e8886c2, 0x3e863537, 0x3e83e92d, 0x3e81a2bc, 0x3e7ec3f3, 
    0x3e7a4df9, 0x3e75e3b6, 0x3e718555, 0x3e6d3302, 0x3e68ece8, 0x3e64b330, 0x3e608606, 0x3e5c6591, 
    0x3e5851fc, 0x3e544b6e, 0x3e50520f, 0x3e4c6608, 0x3e48877d, 0x3e44b697, 0x3e40f37b, 0x3e3d3e4d, 
    0x3e399733, 0x3e35fe51, 0x3e3273cb, 0x3e2ef7c4, 0x3e2b8a5d, 0x3e282bba, 0x3e24dbfc, 0x3e219b42, 
    0x3e1e69af, 0x3e1b4760, 0x3e183476, 0x3e15310f, 0x3e123d48, 0x3e0f593f, 0x3e0c8510, 0x3e09c0d8, 
    0x3e070cb2, 0x3e0468b9, 0x3e01d506, 0x3dfea369, 0x3df9bdb7, 0x3df4f929, 0x3df055ed, 0x3debd432, 
    0x3de77423, 0x3de335ed, 0x3ddf19b9, 0x3ddb1fb0, 0x3dd747fa, 0x3dd392bc, 0x3dd0001c, 0x3dcc903c, 
    0x3dc9433f, 0x3dc61946, 0x3dc3126f, 0x3dc02eda, 0x3dbd6ea1, 0x3dbad1e2, 0x3db858b5, 0x3db60333, 
    0x3db3d173, 0x3db1c38b, 0x3dafd990, 0x3dae1393, 0x3dac71a8, 0x3daaf3de, 0x3da99a43, 0x3da864e6, 
    0x3da753d1, 0x3da66711, 0x3da59ead, 0x3da4faae, 0x3da47b1a, 0x3da41ff6, 0x3da3e945, 0x3da3d70a
};

static const uint32_t _K12[] = {
    0x00000009, 0x0000000b, 0x0000000d, 0x0000000f, 0x00000011, 0x00000013, 0x00000015, 0x00000017, 
    0x0000001a, 0x0000001d, 0x0000001f, 0x00000022, 0x00000025, 0x00000029, 0x0000002c, 0x00000030, 
    0x00000034, 0x00000038, 0x0000003c, 0x00000040, 0x00000045, 0x0000004a, 0x0000004f, 0x00000055, 
    0x0000005b, 0x00000061, 0x00000067, 0x0000006e, 0x00000076, 0x0000007d, 0x00000085, 0x0000008e, 
    0x00000097, 0x000000a0, 0x000000aa, 0x000000b4, 0x000000bf, 0x000000cb, 0x000000d7, 0x000000e4, 
    0x000000f2, 0x00000100
};

static const uint32_t _K20[] = {
    0xbe86e6a9, 0x3f4d2c6f, 0x3eba8dcf, 0x3d652664, 0x3ea75200, 0x3f3a3a6b, 0x3e2ad180, 0x3ed7eb53, 
    0x3e04a52d, 0xbf04deeb, 0xbeb7c830, 0x3e8fab7d, 0xbdd03673, 0xbf1abdb6, 0xbe8bcd80, 0xbe9282c9, 
    0xbdf1d946, 0xbf51832f, 0xbf1a590b, 0xbd882946, 0x3e8e5a73, 0x3dcfa81b, 0x3d300c6d, 0xbf019b67, 
    0x3ccf85a3, 0xbeae231f, 0x3e616a70, 0x3e8aeb3d, 0x3f874f4b, 0x3f0cfde5, 0x3e13d933, 0x3e13fd02, 
    0xbed8ff9e, 0xbe9d4a38, 0xbe47be4e, 0xbf02b3dd, 0xbf02e777, 0xbeea1f8a, 0xbf7a39f2, 0xbfade42f, 
    0x3d9bdc87, 0x3e8b8233, 0x3e028e99, 0x3c73eebd, 0x3f0131b3, 0x3efe4652, 0x3e61ad00, 0x3e5f1745, 
    0x3d2c80a8, 0xbf027efb, 0xbf1976be, 0x3ec04a8e, 0xbe77decc, 0xbea0be31, 0xbdbccc88, 0xbd7dacaa, 
    0xbee5a28b, 0xbf307103, 0xbe944af1, 0xbc3fff94, 0x3eaccd41, 0x3f2b9d69, 0x3e8a089a, 0xbe66b94f, 
    0x3e6372d4, 0x3e8bb306, 0x3f3e990a, 0x3f50b057, 0x3fce72ed, 0x3f366b6f, 0x3f4b0dc2, 0x3f4bce84, 
    0x3d8b1dec, 0x3c3b0d8c, 0x3ebca462, 0x3ef8efc1, 0x3d78c452, 0xbe67cbd5, 0xbf16bc4b, 0xbf9374eb, 
    0x3dd8479b, 0x3f34ca32, 0x3f037795, 0x3d960947, 0x3f102595, 0x3f3c50dc, 0x3ebd66f1, 0x3ec4339c, 
    0xbda3810e, 0xbf2b876d, 0xbf2434fe, 0x3e0fa546, 0xbe9024eb, 0xbf313332, 0xbe8971c2, 0xbe1ca756, 
    0xbe3d55f0, 0xbf36c4e5, 0xbf01053c, 0xbd1617e0, 0x3eae37cd, 0x3f2107af, 0xbc559c78, 0x3ee8e0cb, 
    0x3f1b222c, 0x3ec957f6, 0x3f05d1d8, 0x3f44f096, 0x3fc48084, 0x3f95ffeb, 0x3f4d4d37, 0x3f097d48, 
    0x3e858f18, 0xbd93fbb0, 0x3ee2672c, 0x3e44504b, 0x3e956f77, 0xbeeb9e03, 0xbeefe33d, 0xbf7186a7, 
    0xbe86e4b4, 0x3e57ab75, 0x3f2a1549, 0x3ede2e2e, 0x3e5d1842, 0x3e9290a4, 0xbd0ae89e, 0xbe5e7c3c, 
    0xbea847e0, 0xbec50f08, 0xbd3ac451, 0x3dfbd420, 0x3e129476, 0xbe455d92, 0x3ce9342e, 0xbd594739, 
    0xbe365622, 0xbebb066f, 0xbe859bcc, 0xbec2d39e, 0xbea45f33, 0x3e5bf447, 0x3ade7a19, 0x3e515cf1, 
    0x3e0c73f0, 0x3d83413e, 0x3ec774b6, 0xbe35dbec, 0x3f1edae8, 0x3d8da4d1, 0xbdcd1d84, 0xbdaacd55, 
    0xbe6d5a5a, 0xbe9444c5, 0xbdaa7de9, 0xbcd0d830, 0xbe2db7ea, 0xbee0af9c, 0xbef15828, 0xbef0d0bd, 
    0x3d1f4ee8, 0x3e2390a1, 0x3f075bfb, 0x3ef3475f, 0x3ea7bb96, 0x3da510f3, 0xbe56555c, 0xbe2f77f5, 
    0xbea2b36a, 0xbef59369, 0xbdfffbf3, 0x3e2d37ec, 0x3dd27f0a, 0xbdb727d5, 0x3d02cf35, 0xbe44e562, 
    0xbe906d64, 0xbeb18b76, 0xbe191ce5, 0xbed5e983, 0xbe12c13b, 0x3eb6e002, 0x3d99c02d, 0x3e53bcef, 
    0x3edc68eb, 0x3f25c87b, 0x3f12ca01, 0x3df945ef, 0x3f6f4a55, 0x3e675394, 0x3e589be8, 0x3eb3f703, 
    0xbc7db841, 0xbe228328, 0x3ea7cb3a, 0x3ed24281, 0x3ea37ca0, 0xbeab45fc, 0xbe26935c, 0xbec9e3e8, 
    0xbea75ffb, 0x3e56492d, 0x3f4b30fc, 0x3efd2cca, 0x3e145131, 0x3e84e208, 0x3d326d3c, 0xbe30dba0, 
    0xbe8a4f77, 0xbef36140, 0xbe3e371c, 0xbccd8b20, 0x3de982e4, 0xbe2c0332, 0x3c209584, 0x3d2953b3, 
    0xbe6dead7, 0xbf085cfd, 0xbe492c7b, 0xbe87fb89, 0xbdef467b, 0x3f098c4b, 0x3e2e504a, 0x3f2d91a2, 
    0x3f1ffc8f, 0x3ee82d9c, 0x3ee79517, 0x3d8b5e19, 0x3f6ac7bb, 0x3ec65828, 0x3dd61b92, 0x3f10ec80, 
    0x3e4f4b9d, 0x3e10483c, 0x3f00a6f5, 0x3eed0401, 0x3ebe4e06, 0xbec3f424, 0xbdd9f855, 0xbe25d2a8, 
    0x3faa3c77, 0xbf82f7b9, 0x3e4c7e2a, 0xbf43b55b, 0xbfb93253, 0xbf8fa51c, 0x3f084759, 0xbe4d5058, 
    0xbe38e2a7, 0x3f50486d, 0x3e235297, 0xbfaaa0dd, 0xbfa7fd1f, 0x3e88fe7e, 0x3bc6b111, 0x3ec2a2a0, 
    0x3e18f6cf, 0x3e8a8732, 0xbe6df386, 0x3ec6b163, 0x3d31cd23, 0xbf877cd2, 0x3ea3c9f6, 0x3d31a934, 
    0x3edaff3c, 0x3d7eec82, 0xbe8b95d1, 0x3f47aca3, 0x3d965ce5, 0x3e232d0c, 0x3f0c8b72, 0xbcf2dce1, 
    0x3edeeba1, 0x3e354676, 0xbed5a772, 0x3d08b721, 0x3e0e1713, 0xbe5f412d, 0x3e35458f, 0xbe82addd, 
    0x3fc0110b, 0xbf9f3bc8, 0xbddec6fc, 0xbf6a622c, 0xbfc17a10, 0xbf9b8274, 0x3e5df566, 0xbeb4c7be, 
    0xbe9ef448, 0x3ee6f374, 0xbdc0aaeb, 0xbfb376e8, 0xbfab42af, 0x3ef4d8ec, 0xbbd788c6, 0x3e503717, 
    0x3ebdd5c4, 0x3f2a4fb9, 0xbebbf54b, 0x3f04307a, 0xbeaa0073, 0xbf6cfe7d, 0x3f035a9d, 0x3d8a2cb0, 
    0x3f0d9492, 0xbe0a4e7b, 0xbec853ee, 0x3f861ee3, 0x3e3af865, 0x3e564b6d, 0x3ee53c87, 0x3ab3cb86, 
    0x3f36e1ca, 0x3ec46b55, 0xbee1fc12, 0x3ea4af10, 0x3a544c4a, 0x3e02e5cb, 0x3de715f2, 0xbdfcebaf, 
    0x3ffba601, 0xbf9c3f85, 0x3e978d60, 0xbf2186f4, 0xbf9be377, 0xbfb14111, 0x3ed617fe, 0xbe8807d2, 
    0xbe995325, 0x3f35a51f, 0xbcf605ed, 0xbfbfda70, 0xbfbc3a25, 0x3de2f2c1, 0x3cbc7f5f, 0x3e03034c, 
    0xbe00d2e0, 0x3edf2f51, 0xbeb429ae, 0x3e9073ea, 0xbd241433, 0xbf6f1332, 0x3eeb7887, 0xbe0cae45, 
    0x3e031bf4, 0xbe1f9fa7, 0xbec1e518, 0x3f689bff, 0xbead6a6b, 0xbd891ce5, 0x3e9888c3, 0xbe782cfe, 
    0x3f0a8ce0, 0x3d20c2ea, 0xbf37242e, 0x3ed19bd0, 0x3e2fa2a7, 0xbe522ba2, 0x3ea1791d, 0xbd9ba6e0, 
    0x3e73b8b6, 0x3e738854, 0x3ec2121c, 0x3ecd84e1, 0x3e75e23c, 0xbf0752c2, 0xbda503ca, 0xbdd538d4, 
    0xbe9dbf98, 0xbdf492af, 0x3c6e69fb, 0xbe7bdee1, 0x3e25538f, 0x3ca0ed9c, 0xbddad7cd, 0x3dbc3e75, 
    0xbe2305d8, 0xbe5fe715, 0x3e8d3c13, 0x3e56118c, 0x3ea2a977, 0xbe0c0fae, 0xbe499fbe, 0x3e33cb50, 
    0xbe5b430a, 0xbeb3f4f1, 0xbeb764ea, 0x3f0460ff, 0xbf412266, 0xbde6dd28, 0x3c1d2fc6, 0x3d18835a, 
    0x3eda0028, 0x3ee1a294, 0x3e8b3a57, 0xbd7afa5d, 0xbc41a4d8, 0x3e6111f6, 0xbe1611b3, 0xbeb3cd80, 
    0xbcbe3f1d, 0x3e6686e7, 0x3f19b74a, 0x3e908ea9, 0xbd6b019c, 0xbf03fa5d, 0xbe1094f9, 0xbe6d9e29, 
    0xbec092cf, 0xbdcf72b6, 0xbd7a3840, 0xbde4d2b1, 0x3e21655b, 0xbdd890c9, 0x3d2232fa, 0x3e19b4b7, 
    0xbed5f52f, 0xbe8a2c17, 0x3e8c541e, 0x3e3121e8, 0x3e7a3003, 0xbcbcb7b6, 0xbe32a7b8, 0x3e6fa4fa, 
    0xbd90de9d, 0xbe8551bb, 0xbe626cf2, 0x3ea0bceb, 0xbf4c7230, 0xbe9abc76, 0x3d01efdf, 0x3e1dc22a, 
    0x3e30289b, 0x3eae0798, 0x3e8a155d, 0xbe9bcb2e, 0xbe844e12, 0xbd7f03c3, 0xbe237c63, 0xbf06c61b, 
    0x3dbe5221, 0x3cd062b7, 0x3ea6a173, 0x3e9e8234, 0x3df048d3, 0xbf216e8f, 0xbe17a75a, 0xbe3a27db, 
    0xbe47d0b5, 0xbe55d3cd, 0xbdc85b51, 0xbe8250fa, 0x3e54e7c8, 0x3dcc3038, 0xbbe8aef0, 0x3e4dc41d, 
    0xbe77c84a, 0xbdfcde8b, 0x3ea973e3, 0x3ebc7994, 0x3ed55739, 0xbe3e3306, 0xbe127098, 0x3c67ccb4, 
    0xbdbe21d3, 0xbf04ff21, 0xbe8d5fba, 0x3ecfb5fb, 0xbf2b18ad, 0xbebfcd13, 0xbd04bab3, 0xbd09abeb, 
    0x3ebfdd51, 0x3ec8b7ca, 0x3eb28d11, 0xbe2018c1, 0xbe8a1bcf, 0x3c12e95e, 0xbe3a5d6a, 0xbed5aa47, 
    0x3dc7425c, 0x3fe9de4b, 0xbf111df1, 0xbec43660, 0x3dbf1c1b, 0x3ea92e8d, 0xbe224404, 0xbe96b0eb, 
    0xbf70787d, 0x3f839989, 0xbfa2af6d, 0x3f4477ca, 0x3ebcbd82, 0xbf5477da, 0xbea05131, 0xbfaa2872, 
    0x3e5aa233, 0x3f99eaba, 0x3e0465c9, 0xbf8f4f0e, 0xbed46d92, 0x3fb3b4a6, 0x3ec75736, 0x3ea991cc, 
    0xbef42bf6, 0x3f102620, 0x3e915523, 0xbfecebd5, 0x3e95d35e, 0xbf20b9a5, 0xbf4b58ca, 0xbf14f3da, 
    0xbeab23ef, 0xbf958ee5, 0xbf9f363e, 0xbe56452b, 0x3db1090f, 0xbec77743, 0x3e3decd5, 0x404c7716, 
    0x3e283dae, 0x40104405, 0xbe914aa2, 0x3c84b503, 0x3ef4d861, 0x3ef8916e, 0x3f12e1e7, 0xbe31dc0f, 
    0xbfbbce4c, 0x3ea6683d, 0xbfc59144, 0x3f5d5871, 0x3e291c12, 0xbfd3ef2e, 0xbf2a2ebc, 0xbfe328ab, 
    0xbf209f84, 0x3f1352f0, 0x3d94b174, 0xbf523a8d, 0xbe9e942d, 0x3f8ee2e1, 0x3f0fd155, 0x3e8d6ecf, 
    0xbdcf8aa8, 0x3eb4857e, 0x3ea681bc, 0xc00eab3c, 0x3eed036c, 0xbe9510c9, 0xbeff218a, 0xbf2e004a, 
    0xbf2cb993, 0xbf654a98, 0xbfa217cb, 0x3e9cb781, 0x3e6cf679, 0xbf161c35, 0xbe4c0d53, 0x4050d2e8, 
    0x3db3a02b, 0x3fb84358, 0xbeb1c61e, 0xbeb1322d, 0x3f0b46c1, 0x3efc5720, 0xbecbc33b, 0xbe456ec6, 
    0xbfb584c5, 0x3ecf73fe, 0xc006c4c3, 0x3ee630f8, 0xbc3af606, 0xbfd4249a, 0xbf1bb48d, 0xbf765ba7, 
    0xbeca5eb1, 0x3f095e00, 0xbd63ee1a, 0xbf605ee9, 0xbee7874e, 0x3f78c2fa, 0x3f4ce51e, 0x3eff2836, 
    0x3e515a41, 0x3f606402, 0x3f1a4d36, 0xbfbb69c6, 0x3f68c6ad, 0x3c910b3d, 0xbef292bb, 0xbc7ec3c8, 
    0xbe4f833d, 0xbf62b6d5, 0xbf85bb27, 0x3bea598d, 0x3ec4d9f5, 0x3d7c0ed0, 0x3ea1a915, 0x4049ecb7, 
    0x3b2ca946, 0x3cd28c0d, 0xbbb9b2e0, 0x3c02c807, 0x3c0bd36e, 0x3b570c87, 0x3cbf9044, 0xbd2233e7, 
    0xbcc325ad, 0x3c5afcc9, 0xbcf75b2e, 0xbd2fde9e, 0xbd151967, 0xbcace0d3, 0xbc9326b9, 0xbd120f63, 
    0xbc810471, 0x3cc86b3d, 0xbd1a3d2f, 0xbd323783, 0xbc0be10b, 0xbc03f80d, 0xbb2d1a0c, 0xbc99551e, 
    0x3cc45a38, 0xbc83fa2a, 0xbba19ebd, 0xbd5ea8ad, 0xbd55fa39, 0xbd41d54c, 0x3c0e0624, 0xbc098997, 
    0xbd2a7fd1, 0x3c6111c0, 0x3cdc2a5e, 0xbcda2ae3, 0xbd02e5b8, 0x3d27be6b, 0xbca43d27, 0x3cc40fcf, 
    0x3c1af0f0, 0xbcdc93b9, 0x3be73551, 0xbbfc13c2, 0x3d083df3, 0x3d3c61d8, 0xbce5aeac, 0x3ce50a6f, 
    0x3cfe2c53, 0x3b3b368e, 0x3ab7cffc, 0xbca7cde4, 0xba3d2e29, 0x3b902385, 0x3c4d4475, 0x3c8599cb, 
    0x3d14f04e, 0x3b040ed8, 0x3c7118b6, 0x3c4d62ae, 0xbcb3e7e5, 0xbcb9f1fd, 0xbcb6fba2, 0xbc8a6cc7, 
    0xbceb875d, 0x3c8850bd, 0xbd6e6e89, 0x3c8a4f0c, 0xbd34959f, 0xbcc27b21, 0x3c2815e4, 0x3b5ed78d, 
    0xbcf9b42d, 0x3b166726, 0xbc4eaa24, 0x3abb7706, 0x3c0ce50f, 0xbb96b297, 0x3c9eac25, 0xbd409c19, 
    0xbd6a6dd0, 0xbd2ddad8, 0xbd0b10cb, 0xbb9db6b3, 0x3b12a937, 0xbc88c8f0, 0xbd493015, 0xbd18f1ab, 
    0x3c9d9ccc, 0x3d069f12, 0xbd1e0535, 0xbcec53c6, 0xbd79caa9, 0x3ce3fef7, 0xbd4af1bc, 0xbd01ab89, 
    0xbd380c18, 0xbd6c5285, 0x3c8f1cf5, 0xbd6b50e4, 0x3c39e271, 0xbd963725, 0xbcaf39c6, 0x3c443dfd, 
    0xbd66cce8, 0xbd22c493, 0xbcd08268, 0x3be30c24, 0xbd12f557, 0x3c182824, 0x3c1c4658, 0x3b6f53a1, 
    0xbd67c2fc, 0x3b6b8bc6, 0xbc49b046, 0x3c1d8b89, 0xbd6f8093, 0xbcceb3dc, 0x3c60bfd0, 0xbd7e7dea, 
    0x3e048582, 0x3d92086a, 0x3d94f4cc, 0x3d2ac984, 0x3d4d2dbb, 0x3d8d3cfa, 0xbc2e65cb, 0xbd9b48bb, 
    0xbe2e4230, 0xbe090768, 0xbdcf616a, 0xbd72eeca, 0xbb786ee1, 0xbd8e06ba, 0xbd91e32c, 0xbd4b3f5c, 
    0xbd1a1d76, 0xbd80c75e, 0xbd7f9f62, 0xbd16b81d, 0xbd6de6c7, 0xbcb25151, 0xbc2c92fe, 0xbd09d6fa, 
    0xbd644a49, 0xbb103fca, 0x3d007e3a, 0xbd73fe04, 0x3ab91844, 0xbca39e09, 0xbd56f9c9, 0xbd917463, 
    0xbd7e236e, 0xbdb03445, 0xbdb74112, 0xbd80e957, 0xbd754bd6, 0xbda10e94, 0x3c0a24d3, 0x3b2214d3, 
    0x3e4de509, 0x3d9511e7, 0x3d0e5651, 0x3d92223f, 0x3db6d56f, 0x3cf5ccbe, 0xbbd80924, 0xbd2dd9c8, 
    0xbe3d3bcf, 0xbdf6c1de, 0xbdc173c6, 0xbd3b1223, 0x3bd6c1ac, 0xbd8f1cd3, 0xbc847882, 0xbd1c6742, 
    0xbd85d746, 0xbd919f54, 0xbd087f8a, 0xbc90898a, 0xbcc19d51, 0x3d1dcf52, 0xbb8f085b, 0xbd4cb5cc, 
    0x3ccc915e, 0x3da59baa, 0x3d1b6a62, 0x3d1b39e5, 0x3d9fc209, 0x3c9ed5e8, 0x3d2a87ff, 0x3d0c1b4f, 
    0x3cc8bf3f, 0x3b21ccd6, 0x3c59da10, 0x3d743b6d, 0x3d56a120, 0xbcc34200, 0x3cf7c938, 0x3cad68b7, 
    0x3e03e56d, 0x3dbff2b8, 0x3d9c6026, 0x3d6d7641, 0x3db905f3, 0x3d89fab8, 0xbd2d1560, 0xbd9e6c4c, 
    0xbe57a8b3, 0xbe1b7016, 0xbdb80651, 0xbdaa8b81, 0xbcdb93ee, 0xbe11162a, 0xbd6f099b, 0x3c439457, 
    0xbd33c2ef, 0xbd539d6f, 0xbcab5bcc, 0xbd9bc31f, 0xbd40af94, 0x3d9d3a3d, 0x3d24c5c0, 0x3d1eb550, 
    0x3aabb540, 0x3db27246, 0x3d51e71a, 0x3d63b012, 0x3df7fbc7, 0x3d6cd76c, 0xbc2b63d0, 0x3c4b7e56, 
    0x3cec03cc, 0xbb6d3661, 0x3b440567, 0x3d598af3, 0x3d43667e, 0xbd944c8c, 0x3cb41cc2, 0x3d8425c5, 
    0xbf112bdf, 0x3e42ba60, 0x3eecbb0f, 0x3f050985, 0x3ec4b004, 0xbf1ecd50, 0x3e0cc545, 0xbe6683d6, 
    0xbdb67fbd, 0x3d9c6c90, 0x3def58cf, 0xbea48d77, 0x3df58f85, 0x3d7309c8, 0x3da0bd55, 0x3e7100bb, 
    0xbe054b72, 0xbe8f1000, 0xbd1cb7dd, 0x3d0f09f7, 0x3ec487d3, 0xbe4a5072, 0xbe990342, 0x3ee0cfbe, 
    0xbde579a4, 0xbf5f4836, 0xbf966604, 0x3e1dba4b, 0xbfb82696, 0xbefd9f30, 0x3a1b8410, 0xbd4b35de, 
    0x3f058649, 0x3f5dbf69, 0x3e5f1b5f, 0xbe792e98, 0xbea111fc, 0xbdaf506c, 0xbe2370ce, 0x3bbf1bdf, 
    0xbf3825be, 0x3e988b6a, 0x3f18e8d8, 0x3f204088, 0x3da97a8f, 0xbf0c5fe2, 0x3d96dd22, 0xbdf472a5, 
    0xbe82d7fe, 0x3e7626d6, 0x3e80d340, 0xbdd2c58e, 0x3e2b4f71, 0xbdbb3278, 0x3c29b3f9, 0x3df925dc, 
    0xbedf60b6, 0xbeec8c2d, 0x3e25cd10, 0xbd8be86c, 0x3e20d68d, 0xbe24ba67, 0xbf262e16, 0x3ea1bfdf, 
    0xbe49ee3a, 0xbf3a3d25, 0xbf88141d, 0x3d321531, 0xbfdac9fa, 0xbf412020, 0xbe063d76, 0xbdde8d8e, 
    0x3f27cb21, 0x3f41a96a, 0x3e927985, 0xbe6a4a8a, 0xbef8f524, 0xbe715f82, 0xbeb504ed, 0xbe3883c7, 
    0xbf3b2da3, 0x3e0c5a39, 0x3ec8f7cf, 0x3ed73223, 0x3e7b3127, 0xbefb8a9e, 0x3decca71, 0xbdcf7613, 
    0xbe1166a0, 0x3dde46b8, 0x3e3791d1, 0xbeaba17e, 0x3ea6128e, 0xbc934e50, 0xbd95a4d8, 0x3ed5c540, 
    0xbdd6bc05, 0xbddae8ad, 0x3e943b5d, 0xbe510908, 0x3e0b179b, 0xbd85bd0f, 0xbebdfab2, 0x3ef5c278, 
    0xbead7d7f, 0xbf8cb6a2, 0xbfa0db46, 0xbe8491a2, 0xbfcf27d6, 0xbf06e1d9, 0xbdca7dc8, 0xbe384735, 
    0x3f18a106, 0x3f63f3dc, 0x3ed1e6d3, 0xbe692a27, 0xbe609309, 0xba9a98a2, 0xbe56aeaf, 0x3db36be8, 
    0xbd86ad05, 0xbe1e81b6, 0xbdfa35d3, 0xbd3f1293, 0xbd9acf7a, 0xbd9e2181, 0xbc2c2156, 0xbb9bc4d9, 
    0xbd96db17, 0xbd29396d, 0xbd0b9883, 0xbab551bb, 0xbd8b3d3b, 0xbd36c2ac, 0x3c92789c, 0xbd917ba1, 
    0xbded8372, 0xbd82d3c8, 0xbe299026, 0xbd8d8ac9, 0xbca7d0e7, 0xbc93591c, 0x3c511214, 0xbcb6edeb, 
    0x3db06ecf, 0x3ce35637, 0x3dcba2c7, 0x3da01ba6, 0x3d93fb58, 0x3af594c2, 0x3d64aad1, 0x3d3eee3f, 
    0x3c2135bb, 0x3c7ff61d, 0x3d3ab5ff, 0xbd369928, 0xbdb11972, 0xbc911b40, 0xbdae4282, 0xbe556bef, 
    0xbbedfaf4, 0xbdf6ba11, 0xbe230644, 0xbdf14476, 0x3d00d3d0, 0xbc498309, 0xbd37b665, 0x3c5d5b01, 
    0xbd6cd0fc, 0xbd98fc79, 0xbdc19aec, 0x3d67602b, 0xbc633524, 0xbd13e2b2, 0xbd201256, 0xbd2b42d4, 
    0xbcfc3a70, 0xbdbcf908, 0xbdd27552, 0xbe16901f, 0xbd42cd08, 0xbcfb8ec1, 0x3d3c290f, 0xbd4266fa, 
    0x3d13478a, 0xbd0daae1, 0xba8630cf, 0x3dc0b869, 0x3bd9d7bf, 0xbc7d0da8, 0x3d30b259, 0x3db9968e, 
    0xbb24f708, 0x3d8f5141, 0xbb8f8df3, 0x3d395cb9, 0xbc64b06e, 0x3a8a31f0, 0xbca4b226, 0xbe4ada42, 
    0xbd875309, 0xbdaab101, 0xbe174884, 0xbddba0fe, 0xbd77677a, 0x3cfc6407, 0xbc939db9, 0x3c0d0b62, 
    0xbd869110, 0xbd7681b7, 0x3c8f87a3, 0x3cf95b74, 0xbc996e62, 0x3d1b4e8b, 0x3bf70208, 0xbc1c444a, 
    0xbcc8adcf, 0xbdd015c7, 0xbda58a90, 0xbd81ac76, 0xbdef5399, 0xbc3e55e7, 0x3d2f86c2, 0xbd8d2ad7, 
    0xbcd5905e, 0xbc9669b5, 0xbd601e93, 0x3cae16bb, 0xbcb83b35, 0x3cb6e01d, 0x3d2b728c, 0x3d34f29c, 
    0xbc3a9007, 0xbb90bec0, 0x3c9a3885, 0xbc3ddc88, 0xbdad3200, 0xbddbc91d, 0xbcbb1cc7, 0xbe02359a, 
    0xbdd2edfa, 0xbe903347, 0x3e1ffffe, 0xbd6133f0, 0xbf8a1faa, 0xbf50d6c7, 0xbf8c09d5, 0xbf15f330, 
    0xbf24b22d, 0xbf11c03f, 0xbe87095f, 0xbf122282, 0xbdbe650d, 0xbdd8e5e5, 0xbe8553bb, 0x3e7f4d3c, 
    0x3eb7f122, 0xbe8a7cd9, 0xbe4fb5db, 0x3e8fddb2, 0xbee0d9a1, 0xbec41e4b, 0xbec3a122, 0xbd975943, 
    0x3ebc8a7c, 0x3cea0830, 0xbe8bc90e, 0x3e988550, 0xbe8cf6d2, 0xbd09d51b, 0xbe1642e4, 0x3d8f943c, 
    0x3d2cbc44, 0x3dc1aadc, 0x3ecdb210, 0x3c5ce793, 0x3d7365a1, 0x3e0e30a3, 0x3ea69f82, 0xbec947ef, 
    0x3e06f917, 0xbeeea86f, 0x3d907f85, 0xbdcf5e54, 0xbf5f12da, 0xbf2e2991, 0xbf6ad3fd, 0xbf03fc80, 
    0xbf0ed9aa, 0xbefae9a1, 0xbe726a2d, 0xbec6037a, 0x3e338422, 0x3c459437, 0xbd05efd8, 0x3e7bc179, 
    0x3ec99a97, 0xbdb021ca, 0x3c8f3ffe, 0x3ebd8a23, 0xbdc434c7, 0x3a851370, 0xbe3c254f, 0x3e93e895, 
    0x3ee16267, 0x3e2bc2e9, 0xbde7a798, 0x3f21110a, 0xbc95649a, 0x3e20a76f, 0x3ea67502, 0x3ed024bc, 
    0x3ea76198, 0x3ef1f9a2, 0x3f19cfc5, 0x3f00c994, 0x3e827034, 0x3e99c0ec, 0x3ef0ea76, 0xbeaaf031, 
    0x3e72c048, 0x3c97a75e, 0x3ee3e27f, 0x3ee499ec, 0xbf5d6612, 0xbf0e5bf5, 0xbf443676, 0xbf19351d, 
    0xbf2d24a7, 0xbeaa3aa9, 0xbb85adfd, 0xbefde8de, 0x3de020d3, 0xbca2bae3, 0xbc1c7af1, 0x3e9c4ff3, 
    0x3ef63e5f, 0x3ceca146, 0x3d953f6b, 0x3e77d9d9, 0xbe7f6bc4, 0x3e229f2a, 0xbe709065, 0x3e3597b1, 
    0x3ea001c8, 0x3dadfb5e, 0xbdb96cfa, 0x3eaab020, 0xbd8484da, 0x3c8c0967, 0x3e315692, 0x3e949b14, 
    0x3eb89a1e, 0x3ee613da, 0x3f103f89, 0x3ed1bc25, 0x3e4529bf, 0x3e83aec7, 0x3ebc3abe, 0xbe3c0f7c, 
    0x3f22d856, 0xbc411511, 0x3ef16fc3, 0x3e64b5bc, 0xbde02b87, 0xbedceb99, 0x3e8a7344, 0x3d28aaa5, 
    0xbd48aad3, 0xbd1ea998, 0xbdfb1b1a, 0xbd97f5bf, 0xbe0b663a, 0x3e170e72, 0xbdb1ea73, 0xbd8260ee, 
    0xbe0c5d26, 0x3d430a7b, 0xbe11b1ae, 0xbd99196b, 0x3df4c198, 0xbef6ce7b, 0xbe3fd2f5, 0xbea3f660, 
    0xbecec859, 0xbf02a1f3, 0xbe999d3d, 0x3e48cd88, 0xbdfb2c81, 0xbdf18713, 0x3de6b1f3, 0x3dbce657, 
    0x3ebf5591, 0x3dca1fbf, 0xbe44e83a, 0x3e24729f, 0x3dba2715, 0xbac2e2f0, 0x3d354f7c, 0x3dca13e8, 
    0x3ef6d291, 0xbd68243c, 0x3f10a6a7, 0x3e00d678, 0xbe0139ef, 0xbf0a2efe, 0x3e5a7c20, 0x3d96458e, 
    0xbdf78a01, 0xbd0eff49, 0xbdfbfc2f, 0xbe88f244, 0xbe44002e, 0x3e00c83c, 0xbdc4d74e, 0xbd835645, 
    0xbe765b25, 0xbda83558, 0xbdb72795, 0xbd2a4f42, 0x3d990264, 0xbf116944, 0xbe0e18dd, 0xbeaabedf, 
    0xbeba2b7b, 0xbf046f79, 0xbecd7f21, 0x3e4659a3, 0xbe7c7254, 0xbe3ace1d, 0x3d2a5625, 0x3cd1effa, 
    0x3e893d0b, 0x3e3efe4a, 0xbe2a93d1, 0x3e0cffba, 0x3d63d28b, 0xbd0cd6ad, 0x3e253174, 0x3d9e090a, 
    0x3f173b60, 0xbd9cdcde, 0x3ebac4f2, 0x3e0ca7e3, 0xbd93e65b, 0xbf0ca94c, 0x3e479c05, 0x3d2a5028, 
    0xbd7353a7, 0xbb46270f, 0xbeaace2d, 0xbe19c75b, 0xbccbcd97, 0x3e633111, 0xbd40a824, 0x3d03144e, 
    0xbe546009, 0x3da313be, 0xbe127d37, 0xbe07c3c9, 0x3bd56c6a, 0xbf1e1317, 0xbdc63660, 0xbea14036, 
    0xbf18a5ed, 0xbefa55e5, 0xbea2fbac, 0x3df855a5, 0xbe6a4a4b, 0xbda4e73e, 0x3dacc8e4, 0xbd63eb9a, 
    0x3ec828c8, 0x3e8b7fd2, 0xbe2ffa67, 0x3e1cc450, 0xbc11fef6, 0xbccd937e, 0x3dc2a018, 0x3e5f9c13, 
    0xbe4ee5a9, 0xbe6453d3, 0xbdaecb01, 0xbdc19f11, 0x3ba24b1d, 0xbd95e911, 0x3c5cde23, 0x3da26f3f, 
    0x3d0732e6, 0x3e06c9b3, 0x3db68d04, 0xbd3456ae, 0xbdb36a92, 0x3d541150, 0x3dde8f83, 0x3de05202, 
    0x3db6b343, 0xbca14848, 0xbdddf9aa, 0xbdca39f3, 0x3cc031e3, 0xbe3477a3, 0xbdec2847, 0xbc482ca1, 
    0xbb6af334, 0xbd601d1d, 0x3dc81e9a, 0x3e4fdd44, 0x3d44521c, 0x3d8c2c48, 0x3d93421d, 0x3e24f6cc, 
    0x3e212b82, 0x3e02ece8, 0x3d9dc782, 0x3d3ce786, 0x3bfefe17, 0x3ddfd79e, 0x3c964480, 0xbdf7f10c, 
    0xbe759379, 0xbe2e2bde, 0xbda2a8e4, 0xbcef3862, 0xba1e995b, 0x3cbaefce, 0x3d856d1b, 0x3d056aeb, 
    0x3da40284, 0x3e717680, 0x3d8fb3ba, 0xbde4c4d5, 0xbdaceb82, 0x3d216d58, 0x3dbee509, 0x3e6c18fe, 
    0x3e2b5930, 0x3d22c5e5, 0xbc74e0ff, 0xbcd53b39, 0xbcbfb22c, 0xbe2f878f, 0xbdfc8f35, 0x3cc6a02b, 
    0xbce1fbfa, 0xbdb1b64f, 0x3d0b023f, 0x3e086108, 0x3c56ce12, 0x3d3dc4e2, 0x3d32c445, 0x3dc09019, 
    0x3daa2f62, 0x3dfef6eb, 0x3d8df68f, 0xbd85f984, 0xbd5365a1, 0x3dc3dce5, 0xbd2c521b, 0xbde1d601, 
    0xbdede910, 0xbd90fa4c, 0x3cdeee78, 0x3d49f364, 0x3d572f7c, 0xbc579f93, 0x3e147779, 0x3e2bf366, 
    0x3e1879b0, 0x3e8e1645, 0x3de619b4, 0xbd4fdff6, 0xbdac1cfb, 0x3dd45d84, 0x3e289228, 0x3e702461, 
    0x3e2f1ca7, 0x3e0e453f, 0x3dab2c72, 0x3cf6d6b4, 0x3d9710ae, 0xbe2d596d, 0xbe21544d, 0xbc59d9d9, 
    0x3d000934, 0xbd651609, 0x3d93956a, 0x3e329097, 0x3c11f0c9, 0x3d572fad, 0x3d8834b0, 0x3dfb8238, 
    0x3e10842f, 0x3e3096c2, 0x3e0a9fab, 0xbcc90f40, 0xbc165ca9, 0x3e25da53, 0xbb3bef4d, 0xbda5dc2f, 
    0x3acb9f68, 0xbd69fce7, 0xbe3542c4, 0xbde228df, 0x3d331d23, 0x3d77271a, 0x3d6d0187, 0xbde7cbca, 
    0xbd2f0432, 0x3cb04529, 0xbd0bf64a, 0xbd9ac88f, 0xbe9834b6, 0xbe387eb4, 0xbe1d1b21, 0xbe375a3f, 
    0xbe191477, 0xbd992591, 0xbe3c84eb, 0xbe75a63c, 0xbe04a7d0, 0xbe49cf1d, 0xbe400754, 0xbe190e2d, 
    0xbe6012c0, 0xbe262c32, 0xbe0c218a, 0xbe4b1fa6, 0xbe16004e, 0xbe0fef5a, 0xbe0ba05b, 0xbd832e9c, 
    0xbce800ee, 0xbd9f146e, 0xbd2288bf, 0xbe4738e5, 0xbcdca23b, 0x3db0e960, 0x39e5296f, 0xbd433c17, 
    0x3ddcc2b7, 0x3e5d21ec, 0xbe03f90f, 0xbae5b3bf, 0x3e1a2bce, 0x3e830f8f, 0x3e14e5f6, 0xbd016a6c, 
    0x3de89e7a, 0x3e0e0783, 0x3d396099, 0xbd205940, 0xbe01b744, 0xbe2924bf, 0xbe021270, 0xbde14d2c, 
    0xbbf4f89a, 0x3c6be0cb, 0xbd26cacb, 0xbddb3011, 0xbd86adc8, 0xbe1f0873, 0xbdbb6978, 0xbe4ff366, 
    0xbe387d45, 0xbe42e9c1, 0xbdff71d6, 0xbdf5a6e7, 0xbdb59135, 0x3b902aa6, 0xbc0f0fd0, 0xbda596ea, 
    0xbdd56ea8, 0xbd85b05b, 0xbdb1014f, 0xbe616a99, 0xbce9aeb7, 0x3e45289e, 0x3e253197, 0x3e31ce7e, 
    0x3e976206, 0x3eb9e730, 0x3be38d1f, 0x3df467b7, 0x3e708a18, 0x3e99dbe2, 0x3dbb9b28, 0x3db6a653, 
    0x3e1618e9, 0x3e4592f3, 0x3df56490, 0x3daade7f, 0xbd848643, 0xbd95a840, 0x3b810fa5, 0xbd823291, 
    0x3da07954, 0x3e605716, 0x3d915049, 0xbd3e9252, 0x3c06c4c5, 0xbca7bc6e, 0xbdb000d8, 0xbe043a1f, 
    0xbe138bf7, 0xbe257f97, 0xbd5b29a0, 0xbd0b8cfa, 0x3d1ce522, 0x3e750eca, 0x3d2efba1, 0x3e0f6842, 
    0x3da6cda2, 0x3e916382, 0x3e1842d7, 0xbdc0030a, 0x3d92645e, 0x3ee7cb07, 0x3eccf0f8, 0x3e7a9b34, 
    0xbd13a942, 0x3b1148c9, 0x3e231b74, 0xbf20601b, 0xbd945ca1, 0x3eef8c76, 0x3efa973f, 0x3ebad9a3, 
    0xbdbbabe0, 0xbead5aea, 0xbed61393, 0x3e9fa3f6, 0xbeb7571c, 0xbf1d6df9, 0xbeac6de2, 0xbe5f5d3d, 
    0x3d1859ae, 0xbe6ce9f7, 0xbed37db1, 0xbf24e7ff, 0xbee7f7f8, 0xbed594b9, 0xbe9316bf, 0xbf05fc00, 
    0xbe8dd197, 0x3bf81945, 0x3f25795f, 0xbe85659b, 0x3f92aeaf, 0x3efc15bf, 0xbdf83481, 0x3e493d7c, 
    0xbed13430, 0xbf168557, 0xbf116c38, 0xbd693e06, 0xbf0c7d66, 0xbf433b36, 0xbf38ed63, 0xbeb1e656, 
    0x3e48fcd5, 0x3e926d10, 0xbd37997b, 0xbf1ab09e, 0x3f046a9f, 0x3f38f6a5, 0x3ef1aeb4, 0x3f068fab, 
    0xbd24aab6, 0xbecd7856, 0xbed51229, 0x3ee6193a, 0x3b98443d, 0xbf2c5959, 0xbe9dead7, 0xbdc43d01, 
    0xbde7fd41, 0xbe2a39ed, 0xbeb86905, 0xbf16b020, 0xbebf4c65, 0xbe7834d6, 0xbe1fd66d, 0xbedd3236, 
    0xbc6ca6b1, 0x3ec38b3c, 0x3f0ed331, 0x3e63c5d9, 0x3f949e8e, 0x3f3c37e6, 0x3e9c4028, 0x3eaebf14, 
    0xbe678f9f, 0xbe66fb3f, 0xbe8a3c45, 0x3f2215a0, 0x3d3c055b, 0xbf116a54, 0xbf1a7ff6, 0xbea28e4e, 
    0x3e760181, 0x3ecc0985, 0x3e8465fd, 0xbeebd79f, 0x3d96967f, 0x3eefe5d4, 0x3f066ef4, 0x3ec102d7, 
    0xbded20b3, 0xbed8e3f4, 0xbe892603, 0x3f005964, 0xbe513244, 0xbf706952, 0xbed89b62, 0xbeb5640e, 
    0x3c8468aa, 0xbe96e53d, 0xbf000b40, 0xbf3b9458, 0xbea1bb93, 0xbc87fdb5, 0xbe1af864, 0x3dad2f9b, 
    0xbe56ec52, 0x3e496050, 0x3f23f98a, 0x3e1aa8df, 0x3f99b962, 0x3f26fe7a, 0x3e19a7a3, 0x3ec074e5, 
    0xbd439d5f, 0xbe536553, 0xbe0a64c6, 0x3ec90b64, 0x3beb7abe, 0xbf4c6d95, 0xbef42ba3, 0x3cb256f8, 
    0xbeef8c24, 0xbf9cc8d2, 0xbf981c8a, 0xbea8cb14, 0xbec37873, 0xbf255447, 0xbf136623, 0xbeb13830, 
    0x3d66bb33, 0x3c17a4ff, 0x3ef79d99, 0x3eaa90e5, 0x3e644e78, 0x3e36b833, 0x3e75c9f1, 0x3e7546c5, 
    0xbd7d1d08, 0xbd8a9aff, 0x3e3bb9a4, 0x3e65d90d, 0x3e015220, 0x3e92ad70, 0x3edfd150, 0x3df537b3, 
    0x3e2c2c53, 0x3ec3542f, 0x3dde0ce6, 0x3ebd3623, 0xbe416aa9, 0x3e96570e, 0x3e2261fd, 0xbe5ed55d, 
    0xbcec0393, 0x3c9832b5, 0xbc748bf2, 0xbefac7e2, 0xbe8d4b68, 0x3e00f012, 0x3d6465f9, 0xbf3f3a5b, 
    0xbf030b2e, 0xbfcd5191, 0xbfa9b566, 0xbe9c3a7c, 0xbedf5c0b, 0xbf1c3eda, 0xbf50aef8, 0xbeb1defa, 
    0xbac5f707, 0x3e1fb725, 0x3ee1559b, 0x3eaff667, 0x3de73346, 0x3e8ecb86, 0x3e9f74c0, 0x3e846eb1, 
    0x3bdad93a, 0xbe24deeb, 0x3dd49c4a, 0x3e5043da, 0x3e0bb902, 0x3dd1bc02, 0x3f092a32, 0xbb183b76, 
    0x3dfe4106, 0x3eaa7ef4, 0x3c179475, 0x3e6ccba6, 0xbe6505f3, 0x3e0a1aef, 0x3e16a07c, 0xbd969aa1, 
    0xbb677ecc, 0x3d32c8f8, 0xbd74f1ad, 0xbf05f786, 0xbe74cf9f, 0x3ddb81b0, 0xbd170b53, 0xbf6a6a53, 
    0xbee01e69, 0xbfb48cac, 0xbf8d3a37, 0xbe208904, 0xbe88d706, 0xbf218aee, 0xbf406699, 0xbea8352e, 
    0xbcc392d1, 0xbbb04bce, 0x3eb2c559, 0x3eba1816, 0x3dc7acf2, 0x3e1367ce, 0x3d98f068, 0x3e084cbb, 
    0xbe3dcfc9, 0xbdda29fa, 0x3dd91d7b, 0x3e1e6637, 0x3e86143b, 0x3e9a5964, 0x3eeb411c, 0xbddbb231, 
    0x3e800901, 0x3e3535f5, 0xbd36541c, 0x3e59f3f6, 0xbeb73279, 0x3e4db274, 0xbd4646d5, 0xbeb0eed6, 
    0xbd9b3576, 0xbe32cfcc, 0xbe58f339, 0xbef69f75, 0xbe7eacad, 0x3e20bfe8, 0xbe34e9a1, 0xbf612e63, 
    0x3f8bf2a4, 0x3eabad50, 0x3f4f7b11, 0x3e98171b, 0x3dbc7b82, 0x3e6ab66f, 0xbe24cf26, 0xbe08d4d5, 
    0xbe1ecc2e, 0xbef9fb7d, 0xbeafbb31, 0xbf0ffb02, 0x3e06b76d, 0xbe595229, 0xbe0dc564, 0x3c86e9b1, 
    0x3e394a8a, 0xbe347ef8, 0x3dee6118, 0x3efa9914, 0xbe153191, 0x3f4a9ece, 0xbdafc20a, 0x3f3e9f28, 
    0x3ee29cb2, 0xbd6bbc16, 0xbbaf4ad4, 0xbf1db72a, 0x3e53e586, 0xbe7aecc5, 0xbe823685, 0x3e755fa6, 
    0xbea36892, 0xbdb02dad, 0x3f050c50, 0xbe4e2ecf, 0x3dd715a7, 0xbe0ce71d, 0xbe6fbf40, 0x3ea5e961, 
    0x3faf5ddd, 0x3ee49893, 0x3f1a4c64, 0x3e93ff7d, 0x3eaf1927, 0x3ebb4aa5, 0xbe6ea833, 0x3d9774dc, 
    0xbe43de6a, 0xbeccdf22, 0xbe49cb3f, 0xbed3e80a, 0x3df43f20, 0x3c99d2a1, 0xbe2b47b1, 0xbdb76254, 
    0xbe2107b3, 0xbebf9161, 0x3e5f6d6e, 0x3eba9469, 0x3e18a6f0, 0x3f79ada5, 0xbe110874, 0x3f5596db, 
    0x3eb0f12e, 0x3c5d84ca, 0x3dbdd3f4, 0xbf0cb136, 0x3e36d8b6, 0xbe037ca1, 0x3d3e431c, 0x3e97bce5, 
    0xbebb1d0e, 0x3c0fcb2d, 0x3eefb3ad, 0xbb4e6b04, 0x3e7b7c06, 0xbe07289d, 0xbd86afe6, 0x3ed5b501, 
    0x3fa6952b, 0x3f3d123f, 0x3f7a26ba, 0x3f082e69, 0x3ec50dce, 0x3ef1c626, 0xbd94b4a7, 0xbc876627, 
    0xbdf8f097, 0xbe98e69a, 0xbe5a4f14, 0xbef4f4af, 0x3c853edc, 0xbd55b526, 0x3da40d03, 0x3e51ee3f, 
    0x3ea341d3, 0xbe69581c, 0x3e5fa976, 0x3ef4ae8c, 0xbe1e8bfc, 0x3f6ec447, 0xbddda9ec, 0x3f5424af, 
    0x3ec7f971, 0x3d76f55a, 0xbd9f6e9c, 0xbf24fe68, 0x3a24d7ef, 0xbc4240e4, 0xbe236a18, 0x3e76b1ff, 
    0xbe2ae29d, 0xbbab41f9, 0x3eeb4d8e, 0xbd6a5929, 0x3ccbee24, 0xbdefa013, 0xbe1e5fd8, 0x3f121362
};

static const uint32_t _K23[] = {
    0xbef89d6f, 0xbf83f080, 0x3f256497, 0x3f58e89e, 0x3fbfffac, 0xbed6925c, 0x3e169a0e, 0x3f822b9b, 
    0xbf0446d9, 0x3f682ef4, 0x3ef61b5d, 0xbf4d4c4f, 0xbf54b4b9, 0x3f1fab6c, 0x3edbaa56, 0xbf3002e7
};

static const uint32_t _K27[] = {
    0x3d41edc1, 0x3de09159, 0x3da68dfb, 0x3dbdbaa0, 0xbeaa2865, 0xbce6b593, 0xbc85aa2d, 0xb99c0ec4, 
    0xbc4dc7af, 0xbdd63234, 0x3e437037, 0x3d9a295b, 0x3dbc762c, 0x3d60471c, 0x3bde9f81, 0xbdc05769, 
    0xbcacdabb, 0x3d0b4781, 0x3dcd6601, 0x3e1a42ed, 0xbec10f2c, 0x3c3dbe89, 0xbd47552d, 0xbc6551e5, 
    0xbc1f05ef, 0xbd4173b8, 0x3e291fc8, 0x3db0b114, 0x3d844973, 0x3c9874cb, 0x3d9de0f7, 0xbda42149, 
    0xbd9e4752, 0xbd5f6559, 0x3dc69568, 0x3ddc34e9, 0xbe99dd61, 0x3bb04c8b, 0xbd3bcf1d, 0x3c268b10, 
    0x3cedba65, 0xbd15cd20, 0x3dcc1f55, 0x3de7040c, 0x3dfa1dcc, 0xbd869b38, 0x3da75428, 0xbda25c7f, 
    0x3dbce4d4, 0x3e45abb0, 0x3f570551, 0xbe14035f, 0xbdc41f7a, 0xbda9ba76, 0xbda1ecb1, 0xbdfb8ca6, 
    0xbca15ba1, 0xbc8e5ed7, 0xbe040565, 0x3ea7ca04, 0xbe01a7d3, 0xbd24ee55, 0xbd8a5dd2, 0x3b53d113, 
    0x3dc50ea6, 0x3db26b03, 0x3fafd8a9, 0xbe11bcad, 0xbe06f981, 0xbd8aad09, 0xbbf6b544, 0xbde22da9, 
    0x3dd5cacd, 0x3e900a37, 0x3d624796, 0x3e7f683b, 0xbd9eff9b, 0x3d433cf4, 0x3bf0d60f, 0x3e06f161, 
    0xbe84546a, 0xbe2ded04, 0x3f5a1643, 0xbe1490c1, 0xbd9f433f, 0x3d5eae4a, 0xbebd17d0, 0xbd99a48a, 
    0x3d362034, 0xbe883b19, 0x3da4d8e7, 0x3e38442c, 0xbe67a2af, 0xbe632e65, 0xbdf0246b, 0xbccc7e4e, 
    0x3d9ae6c4, 0x3d2c68d6, 0xbe17079c, 0xbd861294, 0x3d5f426a, 0xbcbd9393, 0x3d0f83f9, 0xbe011505, 
    0x3d0733e7, 0x3d8e4f47, 0x3ca50a7f, 0xbc6dbb39, 0xba8d34ea, 0xbcfe493a, 0xbc5ea562, 0x3d9ea6ca, 
    0xbd16cccf, 0xbd20b9b6, 0xbe358ef1, 0xbd86d159, 0x3d26742c, 0x3cac21db, 0xbd928e8f, 0xbe0b5f32, 
    0xbcdbd6e7, 0xbba34c5e, 0x3d0b290f, 0xbc6d17df, 0xbdaad99f, 0xbd86715c, 0xbc0f871d, 0x3d80cb60, 
    0xbd7149cb, 0xbd664069, 0xbe7e0bd9, 0xbc396528, 0x3d3dcf00, 0xbc1c6564, 0xbdcd683d, 0xbdddad20, 
    0xbc8c6732, 0xbdf38998, 0xbc6bd414, 0x3c922a92, 0xbd2134b4, 0xbdf3e0d9, 0xbd5ca223, 0x3cc122e7, 
    0x3d44f275, 0xbd1b8337, 0xbe1464b8, 0x3de3de7b, 0xbde3dd23, 0xbd0d7ad7, 0xbd129130, 0x3e065b22, 
    0x3bc56068, 0xbe7caf77, 0x3d7a8fb7, 0x3dcbd2e6, 0x3d9d3764, 0xbd9facb4, 0xbce21691, 0x3d926a8f, 
    0x3d3a9e57, 0xba3183c5, 0xbd9a9d08, 0x3e123697, 0xbe49bd09, 0x3d1ffaa7, 0xbd7a8615, 0x3e5f6978, 
    0x3d07a694, 0xbe2bf51c, 0x3cc5e12e, 0x3e082540, 0x3e3a8848, 0xbd8e8bf7, 0xbd42c98b, 0x3e0037b5, 
    0x3cfcb98e, 0x3cd17f7e, 0xbe146200, 0x3dc82476, 0xbe0cedd1, 0x3c3700be, 0xbe088140, 0x3e53957e, 
    0x3d1cb168, 0xbdef141c, 0x3d6db252, 0x3e160052, 0x3e5d7a51, 0x3c3737e8, 0xbd9e6db1, 0x3e432016, 
    0x3d8c77f0, 0x3d64ddc7, 0x3d9702fd, 0x3dbcf658, 0xbd370359, 0x3ca080f8, 0xbcff3a5b, 0xbc1d6904, 
    0xbbb36e3f, 0x3d20f593, 0x3dbb8d62, 0x3dec295c, 0x3d7ba25b, 0xbe2feff7, 0x3e8f1a0f, 0x3ea595fb, 
    0x3d0a39c2, 0xbb55230c, 0x3e4ccdf8, 0x3dd05509, 0x3d6e757d, 0x3ce43b89, 0x3caf7d5f, 0x3d14aa3e, 
    0xbd23ed9d, 0x3dc0d028, 0x3e8c0c67, 0x3dda9036, 0x3e11f5fa, 0xbd94ab9d, 0x3ea394eb, 0x3e887a8e, 
    0x3c42577c, 0xbcffa382, 0x3e2e0f3c, 0x3df734a0, 0x3d09a738, 0x3b5cdc4d, 0x3ac4a60e, 0xbd645bad, 
    0xbd12044b, 0x3da60b9f, 0x3e4223ce, 0x3e0074ee, 0xbc0fa213, 0x3bb84b67, 0x3e9db257, 0x3e247859, 
    0x3d4b33c7, 0x3ce36404, 0x3d1ecfbe, 0x3bf898b2, 0xbdc2cc23, 0x3c0d098b, 0xbb6d4873, 0xbc6b9b91, 
    0x3cb9792d, 0x3c264222, 0x3c63194b, 0xbbb65467, 0xbd06bb44, 0x3d4eb880, 0x3c942954, 0xbd0963bb, 
    0x3d1ad58d, 0xbb9f2352, 0x3d629c7f, 0x3c97dc3a, 0xbdcd7ae1, 0x3b692721, 0xbc251ce6, 0xbb10e7cb, 
    0x3c6425c9, 0x3ce2071b, 0x3c4fe940, 0x3ccb595c, 0xbbc16afc, 0x3cc986e8, 0x3d70be81, 0xbd300ff9, 
    0xbb776755, 0xbcf994eb, 0x3d13c10b, 0x3c2ecb51, 0xbdab289b, 0x3c04b2fd, 0xbc09f8de, 0xbc6c0a09, 
    0x3cf4df23, 0xbba4283c, 0x3ba7a57c, 0x3c359294, 0xbc96d2c8, 0x3c3605b0, 0x3d01dfda, 0xbd45d5fb, 
    0x3d7979fb, 0x3e22e974, 0x3dc6fb7f, 0xbd0952f5, 0xbe5cf14d, 0x3bab3b51, 0xbe0061fd, 0xbc98c5ab, 
    0xbb170907, 0xbd4f3412, 0xbd3e6ca1, 0x3e083559, 0x3d3cb6b0, 0x3d952a91, 0xbe0f070f, 0xbcc3bf7e, 
    0x3e22cedc, 0x3e43af93, 0x3e229722, 0xbd5b0d78, 0xbe9a455b, 0xbcd41ade, 0xbd93e40c, 0xbd86552f, 
    0x3d7b1d27, 0x3c081140, 0xbd662991, 0x3dce86f0, 0xbcdad298, 0x3d58f41d, 0xbdd3fa09, 0x3d1b2a45, 
    0x3d573b35, 0x3ddaffe0, 0x3e320917, 0xbd7b9455, 0xbea2ad18, 0xbcee4700, 0xbe14d38b, 0xbd8edbf3, 
    0x3dd19986, 0xbd91b084, 0xbcedd191, 0x3dbae1bf, 0xbc9b8e44, 0x3cf0b987, 0xbdf3c0fb, 0x3cf94c05, 
    0xbe1cf863, 0xbd38c3bb, 0x3e073956, 0x3bd704ea, 0xbd88c415, 0x3bf17d06, 0xbc85556b, 0x3d238f64, 
    0xbd9ba4b0, 0x3d621780, 0x3de5c1c4, 0xbe06c504, 0xbe458a4f, 0xbe17f127, 0xbd80102a, 0xbe6449ca, 
    0xbe39e1ca, 0xbd827ec6, 0x3d7f7df5, 0x3d9d635c, 0x3dc5277c, 0xbd3f29a5, 0x3d934dc6, 0x3dc18f69, 
    0xbdd28184, 0xbc00afac, 0x3e0e97a8, 0xbd68badc, 0xbe2e8835, 0xbe7b6129, 0xbd4e18fe, 0xbe8ecdb2, 
    0xbe1cfd17, 0xbd6e6c3c, 0x3dd63168, 0x3da7de4a, 0x3c4a6057, 0xbc6cf954, 0xbb72e767, 0x3e0b053a, 
    0xbcbbf9d4, 0xbd101254, 0x3e095017, 0xbdb12210, 0xbe178080, 0xbe3dbd62, 0xbd723772, 0xbe724b8f, 
    0x3d45a03b, 0xbc80b0b7, 0x3c0b438b, 0x3d9840a9, 0x3e8a80b3, 0x3cf598d2, 0x3dfd4534, 0xbd6a913c, 
    0x3c5efe05, 0xbeb10b3a, 0x3ea9445e, 0xbd6ed67a, 0x3e6c37bf, 0xbe1d1158, 0xbe1be0b0, 0x3cfc19b0, 
    0xbda35a44, 0x3c0de316, 0x3dd9cf19, 0x3cfb2d5f, 0x3ea00c8c, 0xbaa0782c, 0x3daa09bb, 0xbb169688, 
    0x3d3c7a66, 0xbe5bd3c8, 0x3e8d5df2, 0x3d14d590, 0x3e3a7c9e, 0xbdabd8e8, 0xbe011b35, 0x3d005046, 
    0xbcea3b5c, 0xbe2cd82b, 0x3e81847d, 0x3e1ba8da, 0x3e4c7e8f, 0x3d052762, 0x3dd385c1, 0xbddba03c, 
    0x3d364d3e, 0xbcc8c22d, 0x3ea7fc8a, 0x3b167f08, 0x3e1a57e1, 0x3d426b63, 0xbded3f78, 0xbc9c89a9, 
    0xbe64d8b5, 0xbd8017a3, 0xbe0700c3, 0xbdb1e382, 0x3e84777a, 0x3cbb8c7d, 0xbdd726e4, 0xbe77c4fc, 
    0xbdda30dc, 0xbf0c1fbe, 0x3dd9ecd0, 0xbea25037, 0xbd1d3f73, 0x3f7377fc, 0xbc3dff31, 0xbec0abfb, 
    0x3ed125ca, 0x3ed18b50, 0xbe946ebe, 0xbed180cd, 0xbd8aafaf, 0xbd44133c, 0x3e26e937, 0xbe8ea57f, 
    0xbc20017d, 0xbe8569fc, 0xbed16c70, 0xbec6b894, 0xbdcf27dc, 0x3fadb72e, 0x3dd05dd8, 0xbe561e46, 
    0x3dad94cd, 0x3db3a6d6, 0x3d8d25fe, 0xbeb221d6, 0xbc922b48, 0xbe1c6eee, 0x3dcee7ae, 0xbe6de128, 
    0x3e4b9e6c, 0xbe3d6d9a, 0xbe020c0b, 0xbeee4faa, 0x3ea920b2, 0x3f9a83f0, 0x3eb5e89b, 0xbe37942b, 
    0xbcd04d60, 0xbcda4cb7, 0x3e0d2b2a, 0x3dc514c8, 0x3d6c613e, 0xbc4f9b47, 0xbd794cbe, 0x3d589549, 
    0x3cc8b340, 0xbe183919, 0x3e7d9787, 0x3dd095ed, 0xbd193bff, 0x3e253732, 0xbd029e9b, 0xbd2d4a0b, 
    0xbcc13941, 0xbd9fd7fc, 0x3e014d91, 0x3de2b772, 0x3cdfb880, 0x3cc4479c, 0xbdd7b178, 0x3d49cb22, 
    0x3cce0fa1, 0xbe1e938f, 0x3ea9c468, 0x3dd3222d, 0xbcdaab11, 0x3e07195a, 0xbdc58a0c, 0xbd28b2e1, 
    0xbd7dfdc2, 0xbdad889e, 0x3e24abb9, 0x3e175b15, 0x3d8f1db1, 0x3d3593e6, 0xbd1e741b, 0x3d90df52, 
    0x3cf35109, 0xbe21b93c, 0x3ed3b4ab, 0x3dcc841e, 0xbd894ff0, 0x3e1bf424, 0xbdac612a, 0xbdf31490, 
    0xbd6d78e4, 0xbcc532ab, 0x3d3502df, 0x3e34d716, 0xbdc164cc, 0x3cf4d3f4, 0xbd89a49b, 0x3f15fd56, 
    0x3da9567a, 0xbd867629, 0x3dfdbc89, 0x3e43c0e6, 0xbdd55ca6, 0x3d2bb2fa, 0xbca812dd, 0xbe2962c8, 
    0x3c27f7ea, 0xbd2e1d6c, 0xbd33ec32, 0x3e6c15f3, 0xbdf4c207, 0xbc2a244b, 0xbde63d36, 0x3f201fdd, 
    0x3c249989, 0xbd065717, 0x3e1651a1, 0x3e2b262d, 0xbd47b624, 0xbd2f35fa, 0xbd109da4, 0xbe0505f0, 
    0xbdafe813, 0x3d7b0586, 0xbdd763fc, 0x3e346bad, 0xbe31fef6, 0xbd232905, 0xbe514490, 0x3f12993b, 
    0xbc8e3ff7, 0xbd2c79dc, 0x3c48bf6f, 0x3dd50544, 0x3be64b00, 0xbd99e3e9, 0xbb855955, 0xbd548bf4, 
    0x3f3ba8ef, 0x3f590274, 0xbe409840, 0xbf4b0e1a, 0x3e2b02c6, 0xbe3d6c17, 0x3f1462a0, 0xbf31e12f, 
    0x3d47fc3a, 0x3eff43ea, 0x3e4ec1a0, 0xbe71a688, 0xbe8cd9e1, 0x3f18fcdb, 0x3df8a723, 0x3ef79639, 
    0x3e08fbd7, 0x3d948319, 0xbeda0c26, 0xbeab6fae, 0x3df5f178, 0xbd98456e, 0x3dffbe12, 0xbf112e0a, 
    0x3d54d8c1, 0x3df60f92, 0x3ea03efc, 0xbe8a7b64, 0xbe42ac99, 0x3ed123cd, 0xbe92f016, 0x3bf1f021, 
    0xbe40e776, 0xbf0eab13, 0xbe089700, 0x3d8a75e3, 0x3c846f09, 0x3c9e6c93, 0xbe8e8a9d, 0xbe201e47, 
    0xbea4872b, 0xbf0a7496, 0x3e9ffe23, 0xbe39c9b5, 0xbe6cdf72, 0x3dc4c29b, 0xbe8b8cba, 0xbf19b2cf, 
    0x3e32b6d1, 0x3d0d22d6, 0x3db169fb, 0x3eb3ceed, 0xbf4157a6, 0xbd2e1a0a, 0x3e06ede2, 0x3e4d7b8e, 
    0x3d8e0117, 0x3da86749, 0x3e949ec1, 0x3e36662f, 0x3d9c2334, 0x3e47ccdc, 0xbe0eaa5d, 0xbe7235d1, 
    0x3d7e2ead, 0xbd84cb6f, 0x3e481f0c, 0x3ea85792, 0xbf343c36, 0x3969654e, 0x3c6aa4c8, 0x3e2ca9f2, 
    0xbd824d3f, 0x3d81c68f, 0x3e4b3dd3, 0x3e4ab2ed, 0x3e2d535c, 0xbd4d2816, 0xbd1332fc, 0xbe122cc9, 
    0xbdb051de, 0xbe4b2d40, 0x3e2286eb, 0x3ec4ba3a, 0xbf0b5761, 0xbdb666d9, 0x3d4f812a, 0x3e2145d3, 
    0x3cabb931, 0x3cbd6100, 0x3e9597a9, 0x3e4100a9, 0xbd30e20e, 0xbe98f8d8, 0xbd41a92f, 0xbea577d3, 
    0xbdbb1bd0, 0xbdaf8ca6, 0xbe00a452, 0x3da66756, 0xbe08718e, 0x3d78f174, 0xbdf1e075, 0x3f0829c0, 
    0xbd068d91, 0xbd3589ac, 0x3ea1e27f, 0x3e1d0560, 0xbcd39499, 0xbc4f2c40, 0xbda6a210, 0xbe281138, 
    0xbd865014, 0x3b86969c, 0xbe0cb3fe, 0x3e513631, 0x3d837343, 0x3c3c5619, 0xbdbc8f0c, 0x3f4bfde8, 
    0xbc81602d, 0x3d8a334d, 0x3e854921, 0x3e8e1881, 0xbd8d73e3, 0x3cb48593, 0xbe03bbf8, 0xbdc54338, 
    0xbe0e7596, 0x3df5efa3, 0xbe617b81, 0x3d0a9a66, 0x3d52834a, 0x3cde9950, 0xbe1c1ef9, 0x3f1a2530, 
    0xbc853de1, 0xbd60c98e, 0x3e44e72d, 0x3e2eb419, 0x3d153e1b, 0xbdbfd118, 0xbd985f9f, 0xbd847d45, 
    0x3db44cca, 0x3d5bc968, 0xbe01c524, 0xbda63233, 0x3da27212, 0x3d912721, 0x3e63b526, 0xbda896ef, 
    0x3be60213, 0x3f03e1d3, 0x3d4b979d, 0xbc946d38, 0xbe319112, 0xbeafa195, 0xbd4756ed, 0x3e89d7a4, 
    0xbca49474, 0xbda0d2b7, 0xbeb25228, 0x3dc27efa, 0x3db80bd3, 0xbbb7aa1c, 0xbc499408, 0xbd29dcc9, 
    0xbd12f466, 0x3ea493dd, 0x3d294d53, 0xbddc16c8, 0xbe7b456c, 0xbf3c262e, 0xbe1e82e2, 0x3e635e8c, 
    0xbdfa51c1, 0xbd9b2a24, 0xbf1b5fec, 0x3e5d8fd8, 0x3db0c149, 0xbcacb23c, 0xbdf1bd87, 0x3c87b680, 
    0xbe441c29, 0xbe2599c1, 0xbd87d1b4, 0xbd7163e4, 0xbe5fea05, 0xbf1f20e7, 0xbd90524f, 0x3e4e2e11, 
    0xbe0fcbdf, 0xbdea6c2f, 0x3e0d41ec, 0xbd462c99, 0xbce99700, 0xbbfdb291, 0x3d77d028, 0x3d8fde4c, 
    0xbdc996b5, 0xbc9425ac, 0x3cb46d89, 0xbe297d43, 0xbd73d125, 0xbe102d91, 0x3e0429f4, 0xbec45a1c, 
    0xbe1776d1, 0xbe270ec0, 0x3e2f532f, 0x3d7e77c5, 0xbd3859a8, 0x3cb619fb, 0x3c38d3c4, 0x3df3f49e, 
    0xbd3af881, 0x3bdaebb0, 0x3de9ede3, 0xbd6829cd, 0xbdf3f39e, 0xbe7083c4, 0x3e490fa9, 0xbeea643e, 
    0xbe649d7d, 0xbe13efc0, 0x3e1b8985, 0x3e3e4b89, 0xbc36eb88, 0xbd453d16, 0x3d91f739, 0x3e657e66, 
    0xbdf92f05, 0xbcd21728, 0x3e495412, 0xbc857d16, 0xbd1fdfef, 0xbe82e4c9, 0x3e226b3f, 0xbf0042f4, 
    0xbdad8fac, 0xbda07087, 0xbeabaa6a, 0x3d8e680c, 0x3d705bff, 0x3cc12813, 0xbd06a031, 0xbb0f5deb, 
    0xbd4d07e8, 0xbe1d6f79, 0xbdf997d2, 0xbd461862, 0xbddabcc9, 0xbe6d2492, 0x3d3a2103, 0xbc67e925, 
    0x3da672b2, 0x3e37e8af, 0xbe9985f1, 0xbd7a26fe, 0x3d85172e, 0xbd45de22, 0x3d8a42f3, 0xbd586b05, 
    0xbd4f0fff, 0xbc927975, 0xbe19182b, 0xbcdb0e75, 0xbdd0d897, 0xbe65c88b, 0xbd9636fd, 0x3daef0ef, 
    0xba6e0e35, 0x3e2f0f7f, 0xbe203040, 0xbd83626a, 0xbd2d35b4, 0xbccb92c9, 0x3dcfb5b1, 0xbd581224, 
    0x3da3185e, 0x3e2f7076, 0xbd94e80b, 0xbdd5f6b5, 0xbe0145e6, 0xbe5a638d, 0xbd196cd7, 0x3dd8f86d, 
    0xbe84f259, 0xbe460450, 0x3c39da8f, 0xbdb22234, 0x3f149e1d, 0x3d2d2cc2, 0xbd75f165, 0xbca8417f, 
    0xbc0a8325, 0xbdf84621, 0x3ddd274b, 0x3e975b35, 0x3db0bb4d, 0xbe27a680, 0xbe48539a, 0x3e1c7656, 
    0xbe58e484, 0xbe7aeb4c, 0x3dc4bcd9, 0xbca288f3, 0x3f0eb165, 0xbcb8e134, 0xbd2918af, 0xbcd3b48d, 
    0xbdbf5648, 0xbd50f96d, 0x3d0f72f4, 0x3e16c85d, 0xbd2db230, 0xbe3baf20, 0xbe61093f, 0x3dfd9d4c, 
    0xbd39bfea, 0xbe0074b6, 0x3d277bd2, 0xbdc0c069, 0x3ec59c58, 0x3ca83794, 0xbd03b22e, 0xbd8b04c7, 
    0xbca1b531, 0xbdcfd006, 0x3e178810, 0x3e39e180, 0xbe75c15d, 0xbd38bc38, 0xbe3db728, 0x3d1e42d3, 
    0xbd9f533d, 0x3d68b5e8, 0xbe4531e4, 0x3d87bda1, 0xbda78555, 0x3d4dca80, 0x3cb8356b, 0xbdb7a49b, 
    0x3d54b049, 0xbf424fe8, 0x3dffa25d, 0x3ea7ced1, 0x3db31d9c, 0x3c40bbe3, 0xbe29bc2a, 0x3dcfb33f, 
    0xbc850fcc, 0x3cf0ee21, 0xbde677b9, 0x3e3492a5, 0x3d000d69, 0x3d09cb5c, 0x3d17af29, 0xbbc0d88b, 
    0x3c33b879, 0xbf39d20b, 0x3e5da762, 0x3e8bd2bd, 0x3bee39c1, 0x3d51a3cd, 0xbd29988b, 0x3d5fcc6d, 
    0xbcfe44f0, 0xbd857979, 0x3dfaf236, 0x3e1bf9ca, 0xbc5431ea, 0x3a056718, 0x3d20db9f, 0x3db9d8ac, 
    0xbab44770, 0xbeb25183, 0x3ea5ea11, 0x3ea11b2a, 0x3c30e98b, 0x3df49d39, 0xbbdf519b, 0xbe2ff344, 
    0x3cca5d0c, 0xbc091f9d, 0x3b9a0e26, 0x3e0e1806, 0xbe56e043, 0xbce3e189, 0x3bee4591, 0x3da8c1f2, 
    0xbc3d02a3, 0xbd4e3401, 0x3d250aa4, 0xbd4cc3bd, 0x3d929e59, 0xbd56bf6a, 0x3d055c17, 0xbe28a1d7, 
    0xbc1b5c99, 0xbd5fd6a6, 0x3d7b4218, 0x3e1b31c2, 0xbdfeceae, 0xbd32eb90, 0x3c993264, 0x3d8e9aab, 
    0xbc81e335, 0x3c51f721, 0xbc6c7be5, 0xbd9eb7c5, 0x3d82af85, 0xbd208f3c, 0x3d5d3574, 0xbe336d84, 
    0x3bd9a959, 0xbdf0ae8e, 0xbaa78c8c, 0x3e1dbaf7, 0xbdde6a01, 0x3c58fc3e, 0xbb74121f, 0x3db919f8, 
    0x3c4eb69b, 0x3cb500fe, 0x3cb832c6, 0xbcd16038, 0x3d987ee8, 0xbe039aad, 0x3cf32e1c, 0xbe15d94a, 
    0xbdacc652, 0xbdfbe8d6, 0xbd0010bc, 0x3d80433c, 0xbe0a9be1, 0x3c2bab5c, 0xbe404564, 0x3ebe6a76, 
    0x3d9bdf74, 0xbdab5e8f, 0x3e060071, 0x3dcb6083, 0xbd749adf, 0xbd2d7fe7, 0xbd07be87, 0xbe333b32, 
    0x3ca63904, 0xbdc9dcff, 0xbe305639, 0x3e0c1fd5, 0x3ce8dca5, 0x3c4375cc, 0xbe2bf63c, 0x3f0b5425, 
    0xbc9af2ed, 0xbcdea580, 0x3e3440a0, 0x3e0e22bb, 0xbe073d88, 0x3d052187, 0xbdb97cc9, 0xbe0ac6c1, 
    0xbdc6dde6, 0x3ca2d0ff, 0xbe3f248e, 0x3dc34f84, 0x3dfc558e, 0xbc1e08dc, 0xbe870464, 0x3f0ab374, 
    0xbc49c9c8, 0xbd8fc04f, 0x3e6beb52, 0x3e067045, 0xbcc7f430, 0x3d54f86d, 0xbca0b3ae, 0x3c00d2bd, 
    0xbdd2df44, 0xbe5934bb, 0xbc69fc63, 0x3d3e2761, 0x3d8f9536, 0xbca868c9, 0xbe60132f, 0xbdce2b24, 
    0xbdb080d1, 0xbf04c267, 0xbe214204, 0xbd8d7bd7, 0xbdbda27a, 0x3e01582c, 0x3c05e4c4, 0xbe50d576, 
    0xbe0b74be, 0xbe2569a3, 0xbcbbcc3f, 0xbd0ed4ae, 0x3e3c3d4d, 0xbba4573e, 0xbdf1d037, 0xbd1afaf9, 
    0xbdd8991f, 0xbf167193, 0xbdf00b70, 0xbda79525, 0xbd0b0873, 0x3e43efcd, 0xbd3c8633, 0xbe8477f3, 
    0xbd9c8b18, 0xbe7625c0, 0x3d93fb93, 0x3d940288, 0x3e35797b, 0x3c6c0258, 0x3b20518f, 0x3cbe4cf9, 
    0xbdcaa4fd, 0xbf0007d8, 0xbd78906f, 0xba88564e, 0xbdf8eeb1, 0x3e67838e, 0xbbc224ac, 0xbed5f1d7, 
    0xbd4ad734, 0xbdd3071a, 0xbeab55a3, 0x3e3817a9, 0x3e63b823, 0x3beebcaa, 0x3d6fb250, 0x3e15aae7, 
    0x3d28d67e, 0xbb9e1c6b, 0xbcc80068, 0xbe4b5fab, 0xbda13276, 0xbdeb6bbd, 0xbd150136, 0xbe378aea, 
    0xbda0ce39, 0xbe29eed9, 0xbed3e5be, 0x3c0e1585, 0x3e029f66, 0xbd0532a6, 0x3d89a54f, 0x3d3f6c80, 
    0x3d02e3aa, 0xbc010999, 0xbe5811b2, 0xbe2ab9d7, 0xbdfc3d36, 0xbe035983, 0xbc660bb6, 0xbe0200b7, 
    0xbd16b24a, 0xbdd38d16, 0xbf053de0, 0xbd93d712, 0x3dc3db62, 0xbd2b3fe6, 0x3b2610e4, 0x3cd0daf5, 
    0x3a9a6028, 0x3d87b020, 0xbe9d911e, 0xbe5671b9, 0xbe0d4c8f, 0xbe22ee81, 0xbdc8c1bb, 0xbdf0e912, 
    0xbdda8a73, 0xbdba713a, 0xbd35f1bf, 0x3e40b5f9, 0xbb9a087e, 0x3c6f6495, 0x3c356a43, 0x3f102b48, 
    0xbdac466a, 0xbd2ac77d, 0xbd46d544, 0xbda8c63b, 0xbe3818dc, 0xbd2a84d7, 0x3c4bb7b0, 0xbe308103, 
    0xbd795524, 0xbdbf8222, 0xbdaa358f, 0x3e73bba1, 0x3deb47b6, 0xbd0f9782, 0xbd9c7333, 0x3f3a92ae, 
    0xbbbbaadd, 0xbd0bbfdc, 0xbdc51b33, 0x3c8f420b, 0xbe6e10b2, 0xbe117784, 0x3da2af00, 0xbe45dd85, 
    0xbe0bbf7c, 0xbce2ecad, 0xbe3ddaff, 0x3dcef703, 0xbd9dbb3a, 0xbba06e22, 0xbde19821, 0x3f1364bc, 
    0xbb6d6411, 0xbc2be523, 0xbe493ed2, 0xbdaa43b4, 0xbca6d45d, 0xbe821325, 0x3d952c2b, 0xbe2c5423, 
    0x3db3e31d, 0x3da332fc, 0xbd1dbf00, 0x3c4704b3, 0x3dabf6b9, 0xbc37ebeb, 0x3dfa5d78, 0x3d91729a, 
    0x3d9b5a57, 0xbbffe18d, 0xbf004cc0, 0x3e59f376, 0x3be51f34, 0xbe32e1f4, 0x3fad5b42, 0x3a6f8e56, 
    0x3e528f99, 0x3dadf92a, 0xbdcc4eb6, 0x3dbb6b4d, 0x3e38917b, 0x3da54d2b, 0x3e6cc1e9, 0x3e254293, 
    0xbdd4a242, 0x3d51ec67, 0xbee157cb, 0x3e663a09, 0x3e8150fb, 0xbe8585b1, 0x3fc11ff6, 0x3ded72b9, 
    0x3d1754d7, 0x3e70f73a, 0xbde5c5ba, 0xbdaed4d8, 0x3e1050c5, 0xbdbeba9f, 0x3e31ec8d, 0x3d913fc9, 
    0xbdf1eb0e, 0x3c2a02af, 0xbeddb99f, 0x3eb45845, 0x3e90c055, 0xbe892ba3, 0x3fac2994, 0x3d88ab35, 
    0xbe230892, 0xbe8768a0, 0xbedfa3ab, 0x3d81e25a, 0x3e268f9b, 0x3d47a3e3, 0xbe6618e3, 0x3d94eefb, 
    0xbdba0fcd, 0xbe8cf53b, 0xbe33ef5b, 0x3d209c32, 0x3daf5150, 0xbcdf0035, 0x3bd4b08b, 0xbd2e3b5f, 
    0x3d389603, 0x3c0031d9, 0xbf1cb782, 0xbd5a3daf, 0x3e20f905, 0xbc2bcc0e, 0xbe001370, 0xbc761a07, 
    0xbda6645e, 0xbea1993b, 0xbe80f6f1, 0x3a1fc108, 0x3d0ebffd, 0x3da97de9, 0xbd2a805e, 0xbc5b719c, 
    0x3dab1425, 0x3ddb49c4, 0xbef178a3, 0xbdf6d86f, 0x3dbd99e9, 0xbd6943cd, 0x3cb7a9df, 0x3c5a7d84, 
    0xbcc70ce4, 0x3d4bdc8f, 0xbe9be50d, 0xbd289cdf, 0xbe32695e, 0x3d3c1bb2, 0x3d0aad3d, 0x3d98ce4a, 
    0xbe520a3c, 0xbe0eba65, 0xbeaf48d9, 0x3b082d5b, 0x3efa8d0e, 0x3d044d0b, 0xb9f683c5, 0x3e1e5c47, 
    0x3c8ebc45, 0x3c79203b, 0x3ce50b68, 0x3d40f6f0, 0x3d06f52e, 0xbde0de2b, 0xbd82fd82, 0x3e06aaac, 
    0xbe7c7f5a, 0xbe4c5405, 0xbeaae785, 0x3db5ddcb, 0x3eda789c, 0xbc843cfd, 0xbd28b8aa, 0x3e0d5d0d, 
    0x3d45ecba, 0xbd9cd249, 0x3d2e01c5, 0x3c43d703, 0xbd2ce7ac, 0xbe13d654, 0x3d2bbf58, 0x3d1cdafa, 
    0xbea2dff8, 0xbe1a1fe9, 0xbf128131, 0xbd745c3c, 0x3e678b26, 0xbb46a650, 0xbe34c969, 0x3cd63c21, 
    0xbd38a60d, 0xbe116b91, 0xbdec8387, 0xbc90477c, 0xbe43f193, 0xbe450b02, 0x3d213ed0, 0x3c689ab0, 
    0x3eb7ec01, 0x3e82c1f9, 0x3de4a6e7, 0xbe85e615, 0xbd80ee21, 0x3ccc2bac, 0xbd5d29c1, 0xbd07a280, 
    0x3e174db3, 0x3dde3013, 0xbe2e24c6, 0x3dbcac18, 0xbb5775fb, 0x3e190ce1, 0x3e9bbcde, 0x3c852b18, 
    0x3e229518, 0x3dfdc21f, 0xbc94c947, 0xbe294983, 0x3ca33de8, 0xbd0953bb, 0xbd789762, 0xbdc6db2b, 
    0x3dcc43da, 0xbd81b9fe, 0xbda9b26e, 0x3d4ec4ac, 0x3c6bc041, 0x3cfa2731, 0x3e62bb44, 0x3d9bfb94, 
    0x3c1306a4, 0xbd3722e8, 0xbd83c1d7, 0xbe42fe83, 0xbd5ae4bc, 0x3d231e42, 0xbe09527c, 0xbe0e60ce, 
    0x3d2101c6, 0xbe6b31b7, 0xbe17697e, 0x3d18d9cc, 0xbdb13244, 0xbd46d92a, 0x3e4f5f91, 0xba98753e, 
    0xbc9f069e, 0xbdbef8a9, 0x3d9cd866, 0x3e4eaa49, 0xbdc9999e, 0xbd3b85a9, 0xbdf59915, 0x3ee31b32, 
    0xbc0ae373, 0xbd81f79b, 0xbd9ccffb, 0x3de5b9d5, 0x3d07c74b, 0xbd25d316, 0x3d553baa, 0xbdc6eeba, 
    0x3c673d1f, 0xbd84b9a4, 0x3d2bcc10, 0x3e42d448, 0x3cbdd474, 0x3c870d30, 0xbd298836, 0x3ef96b58, 
    0xbd291b55, 0xbd8db59c, 0xbd6d438b, 0x3dbab686, 0x3d6ef842, 0x3cc51525, 0xbb6525cb, 0xbd86988d, 
    0xbbca53f4, 0x3cbe2ae6, 0xbd5a2ed3, 0x3dc94b7e, 0xbd92ed4f, 0x3c84a685, 0xbdf8bb5b, 0x3eda4553, 
    0x3be98e9c, 0xbde24844, 0xbdb11043, 0x3d86a3a3, 0x3dff7855, 0xbd9e15b1, 0x3d2a927d, 0xbdbd2446, 
    0xbf85436f, 0xbf6ec14c, 0x3d38beb2, 0x3e5fbd07, 0x3f311e90, 0x3c81c905, 0xbf16895d, 0x3eb58a4e, 
    0xbe205eca, 0xbf1c908c, 0x3f3abc61, 0xbd81075c, 0x3de89102, 0xbef6fa1c, 0xbd37c35d, 0xbf184157, 
    0xbd457625, 0x3e5bc53f, 0xbe2e8a7f, 0x3cf70973, 0x3f251cc6, 0xbe04447d, 0x3db4f421, 0x3e9b9ef4, 
    0xbd629d4f, 0xbe661ba6, 0x3eb192ed, 0xbe67f3ca, 0xbe6c83fe, 0x3e2ff1b1, 0xbf0836b6, 0xbe6edf7d, 
    0x3f5fa4ae, 0x3f3fa261, 0x3ee60dea, 0xbedf5c97, 0xbe9caae1, 0xbeb4ce31, 0x3f2eec00, 0x3db408f5, 
    0x3ea698c7, 0x3f4aed35, 0x3df2d7ae, 0xbea4a2e5, 0xbf4dde3d, 0x3f379c96, 0xbf052df5, 0x3e47a7ff, 
    0xbc8d464c, 0x3cdde9e6, 0xbc9f5db0, 0xbe33f545, 0x3ddf8ad0, 0xbd5ff7c6, 0xbd496805, 0xbec07da7, 
    0x3d1057d5, 0x3d4f28d3, 0xbe1156a9, 0x3ccd94fd, 0xbd2aefbb, 0x3c7542eb, 0x3d803f42, 0xbdc6cfc6, 
    0xbb5f3a90, 0x3cc26870, 0xbd9cfed2, 0xbea4892e, 0x3d85929a, 0xbd048f02, 0xbd5b1b83, 0xbef2c781, 
    0x3d754630, 0x3db879ab, 0xbe1a2dfd, 0xbc2500bb, 0xbdabab4f, 0xbc86d1ca, 0x3dc64110, 0xbcb43827, 
    0x3cdf69a6, 0x3d7de3f3, 0xbcc7319f, 0xbea4bb25, 0x3d8fe22a, 0xbd2b9ced, 0xbd0b220d, 0xbf00b04f, 
    0x3ddb8aea, 0x3da0222d, 0xbe27c051, 0xbbce04d2, 0xbd8057ca, 0x3d5b7a74, 0x3d1f2960, 0xbd04c07b
};

static const uint32_t _K30[] = {
    0x3fc181ac, 0xbf67deb5, 0x3e793025, 0xbc9d3f00, 0xc00188a0, 0x3dca2390, 0x3efc0117, 0x3eb8dcd9, 
    0xbfaa5376, 0x3f10732e, 0xbf3a0c19, 0xbfcf1660, 0x3edba111, 0x3fb81123, 0xbfcf98f4, 0x3c8a4990, 
    0x3fc56693, 0x3cf23f10, 0xbf26fb61, 0x400b9d45, 0x3e92fe12, 0xbf982752, 0x3fd7a70c, 0x3e86c378, 
    0xbe6befcf, 0xc00012a7, 0x3fc8483a, 0xbf0c5039, 0xbf0b19d0, 0xbf8f3225, 0xbfcc9048, 0x3f13ed84
};

static const uint32_t _K34[] = {
    0xbd19421f, 0xbdcde30f, 0x3bbc87c3, 0xbdbd7836, 0xbc22ebfd, 0xbd54ae0d, 0x3d6b485b, 0x3d8fa694, 
    0x3d5f8fc6, 0x3bd223d4, 0xbde49f94, 0x3e556de6, 0xbc50e801, 0xbb373672, 0x3da628e4, 0xbdc1d4c0, 
    0x3c8dd5ee, 0xbd080903, 0xbe01c936, 0x3ba7210e, 0x3c0219a1, 0x3e04dc7f, 0xbb459e1d, 0xbd9bb2e2, 
    0x3dd44536, 0x3d191ad9, 0xbc9368c3, 0xbde152be, 0x3c05ce1a, 0x3e897021, 0xbd8fe468, 0xbdff158d, 
    0xbc4d1f4f, 0xbda9407f, 0x3b8f3cfb, 0xbd6eb7b0, 0xbbb95d79, 0xbd49c523, 0x3d821f22, 0x3d9505bb, 
    0x3c0cf0d7, 0x3bc63b28, 0xbdc8fe33, 0x3e82d5f2, 0x3d16fc2f, 0xbcc9ec97, 0x3d92da04, 0xbdb7fb48, 
    0x3d95c327, 0xbd29a135, 0xbdfa008c, 0xbbd1806e, 0x396e21ec, 0x3deec78e, 0xbcca4468, 0xbd9d2e89, 
    0x3e20ee9a, 0x3d7d626a, 0xbc1c1291, 0xbce5056a, 0x3c083446, 0x3e68a27a, 0xbd55cc94, 0xbddc8567, 
    0x3cb961d6, 0xbd748429, 0xbc96da20, 0xbd38402b, 0xbc8677d3, 0xbcc90376, 0x3d08fdf7, 0x3cba8b68, 
    0x3cdc30b3, 0x3cad855f, 0xbdfb0758, 0x3e6ce096, 0xbb55e7c4, 0xbb7b3b5d, 0x3d593b2e, 0xbddbcc46, 
    0x3cbb3b54, 0xbd7ee33e, 0xbe0d4395, 0xbd1ab8bd, 0xbc5bb05e, 0x3d8b5ccb, 0xbd48be31, 0xbd95536b, 
    0x3e00c15b, 0x3da48e97, 0xbd0060b2, 0xbd1d36e3, 0xbcb2ffa1, 0x3e78bc55, 0xbda8f792, 0xbe093c8b, 
    0x3d96d56a, 0x3e216ac1, 0xbc6a06a8, 0x3cc33a44, 0xbdaf619f, 0x3d17d8a8, 0x3d81362a, 0x3c391f2f, 
    0x3d8342d6, 0x3d81fc68, 0x3d6e1e9f, 0xbe5007e2, 0x3d0f3bb8, 0x3b192b7d, 0xbdc69b2d, 0xbd6818e9, 
    0x3dd249e1, 0xbda0f849, 0x3cdea527, 0xbc1a28e5, 0x3d96e0d3, 0xbd51d323, 0xbd990a8b, 0x3dac6667, 
    0xbe6da404, 0x3d285a03, 0x3d76aefe, 0x3e376f3f, 0x3d940773, 0xbd9d89ca, 0xbd97488e, 0x3e1a11a8, 
    0x3dd6b527, 0x3de4b2cd, 0x3c486714, 0x3cd6d9de, 0xbdfb582d, 0x3db546b0, 0x3d95c8be, 0x3c83dae3, 
    0x3d59320f, 0x3d9dc51d, 0x3dc95902, 0xbe514f58, 0x3dfbb032, 0x3d4b6998, 0xbe06fdf8, 0xbcbb1ead, 
    0x3d222018, 0xbd980396, 0x3d37a5be, 0x3bf5f1e3, 0x3d72666f, 0xbce55fb9, 0xbd8ae0a4, 0x3daa7710, 
    0xbe650c0f, 0x3cc5a978, 0x3de333a3, 0x3e6eb658, 0x3d8c647d, 0xbdef198e, 0xbcde821b, 0x3deed6d5, 
    0x3d8cd19f, 0xbcf2ff74, 0x3cc0d3fd, 0x3dab4e48, 0xbe26689c, 0x3d4738bc, 0x3ce5e95a, 0xbbcb4263, 
    0x3daa41b8, 0x3d426781, 0x3d96669f, 0xbe6d7599, 0x3e25aeb4, 0xbcb20ffb, 0xbe0a7bb4, 0xbd779163, 
    0xbb84ce9f, 0xbdab058c, 0x3d9c1d22, 0x3d27d748, 0x3bb76bb5, 0xbd5275b9, 0xbd84636c, 0x3e04ae9e, 
    0xbe8b7edd, 0x3cba498a, 0x3db21fd0, 0x3e646866, 0x3d7e0c18, 0xbddcc79b, 0xbda5a15b, 0x3d8b0182, 
    0x3d21ded3, 0x3c789394, 0xbd08a165, 0x3d048ecb, 0xbc8fd106, 0x3c79faae, 0xbcc871cb, 0x3e25c668, 
    0xbdd3545c, 0xbd285ac5, 0x3c9c62ea, 0x3e66cbc2, 0x3d0f376b, 0x3d6b5043, 0x3dbd773a, 0xbd9da06f, 
    0x3e3d3d86, 0xbd46ac63, 0xbdeee3be, 0x3cf4bfd9, 0x3ddae71d, 0x3e29ce62, 0xbc8efd8c, 0xbd629c8c, 
    0x3cb5a548, 0x3d827330, 0xbd87c903, 0xbdf3e4cb, 0xbd1ae6f3, 0x3e36bdc5, 0xbd1c0184, 0xbe25ffc6, 
    0xbcb7bc50, 0xbcfea310, 0xbd31ace6, 0xbb3298dc, 0xbc23fadd, 0xbcc1bc04, 0xbc8aaf5f, 0x3e41be51, 
    0xbd950ff7, 0xbd638b77, 0x3d43ecee, 0x3e884b0e, 0x3cb1aa01, 0x3ae04215, 0x3e5777cb, 0xbd8d0736, 
    0x3e3866dd, 0xbcffb1c8, 0xbcc62a11, 0x3be0015a, 0x3d3173c5, 0x3e3e07a7, 0xbd0abbda, 0x3bc128aa, 
    0x3e92fc4c, 0x3d4ac30c, 0xbcae6d19, 0x3d6111c3, 0xbc9f3ea1, 0x3e405e9b, 0x3d4f2ebb, 0xbe389972, 
    0xbcc7bb7f, 0xbd463c00, 0xbc985316, 0x3d5ce09a, 0xbc93e975, 0x3c44ffc5, 0xbc9942a4, 0x3e2ecb4e, 
    0xbd91aee2, 0xbd43c78f, 0x3d17196c, 0x3e899bd3, 0xbcc90a4f, 0x3d0298cf, 0x3e46b3d8, 0xbd86fd6d, 
    0x3e285063, 0x3c9f40d7, 0x3cd22225, 0xbc73e46a, 0x3c46fc5e, 0x3e1fe41c, 0xbd360b91, 0x3d66f7ea, 
    0x3ea57e56, 0x3d5e15a8, 0xbc5b308b, 0x3d804237, 0xbd479975, 0x3e1490a1, 0x3d92920d, 0xbe4d8e11, 
    0x3c335d4e, 0x3cd2ba5d, 0xbc9f16d0, 0xbc34154c, 0xbdbb5927, 0x3d909f4d, 0x3cdaec76, 0x3cb5995d, 
    0x3c45af7f, 0x3da952d3, 0xbd664fd3, 0x3cab1703, 0x3d296a04, 0x3d0cb07b, 0x3d8e7792, 0xbd57b305, 
    0xbd2bac0b, 0xbdd592d1, 0xbc774671, 0xbe4fccbe, 0x3d80297c, 0x3d9e405b, 0xbe634e85, 0x36483902, 
    0x3bf832f2, 0xbb1eaa12, 0xbddce38e, 0x3daf0c5d, 0x3b509944, 0x3db87465, 0x3d1b1f24, 0x3c750cc3, 
    0xbc59711c, 0x3c31cc2d, 0xbb930bb6, 0x3cf5739f, 0xbddb6888, 0x3d94528f, 0x3c2416d7, 0xbd2606ce, 
    0x3d823b70, 0x3d52d219, 0xbd3f688b, 0x3d11a35b, 0x3cbc3b42, 0xbb915e42, 0x3d8b459e, 0x3a7e8c8a, 
    0xbd1ed958, 0xbd6b3ac1, 0xbd10d78b, 0xbe788cb7, 0x3d304815, 0x3d92f686, 0xbe973b1f, 0xbcc3c8df, 
    0xbce38e7a, 0x3b86cb9a, 0xbdbf544d, 0x3d891b45, 0xbb91829f, 0x3d87a52f, 0xbca13d57, 0x3d6121ac, 
    0x3bae89f9, 0x3a666d2a, 0x3ca5ebae, 0x3d9ad478, 0xbda18916, 0x3d8085f9, 0xbcb672ed, 0xbc1ac198, 
    0x3dc346be, 0xbcdec64b, 0xbd9989d4, 0x3cb3b160, 0x3d3fb2f6, 0xbca13a0e, 0x3ce1da68, 0x3c88bfc1, 
    0xbda87ab6, 0x3c90a273, 0xbbc25c50, 0xbe29de4f, 0x3d0bc2d2, 0x3d962220, 0xbe8b68e1, 0xbd4c990b, 
    0xbb92e0bc, 0x3c1609b5, 0xbddaead9, 0x3d59a44a, 0xbc2d6a3a, 0x3dcb950f, 0x3c9fbcca, 0x3d6e6db0, 
    0x3c6ae2f9, 0xbdafb9c8, 0x3e305d63, 0x3c99d8cb, 0xbcd7b514, 0xbb4afd3e, 0x3d05c5a5, 0x3b684a50, 
    0xbcc43485, 0xbdd995fc, 0xbd243e7a, 0xbe20acfb, 0x3d957f30, 0x3b9df061, 0xbd58eea5, 0x3e1f09de, 
    0xbe1ee058, 0x3d2fecfd, 0xbb119cbc, 0xbcac6c5e, 0xbc630108, 0xbdb081bc, 0x3d2db50d, 0xbcbe924c, 
    0xbd07991f, 0xbe035ef3, 0xbc79f642, 0x3c4cff23, 0x3cc7547d, 0xbdcdffb7, 0x3d1354fb, 0x3d3d64c5, 
    0x3c0ce8b1, 0xbe2424c6, 0x3e05a72d, 0x3d02fa7e, 0xbd149fe6, 0xbd0acbc0, 0x3cdb8a4d, 0xbd4156bc, 
    0x3cbf30a4, 0xbe1b3be4, 0xbc56a7fd, 0xbe19cd33, 0x3d397572, 0x3bc38b7a, 0xbd55c445, 0x3e1c48dc, 
    0xbe087ff9, 0x3c0a801b, 0x3a078d59, 0xbc9992bc, 0xbd53e616, 0xbd6d3747, 0x3d6433a3, 0xbbf0bf24, 
    0xbd4d5726, 0xbe161bdc, 0xbc25cdbd, 0x3cd04fcd, 0x3c161c04, 0xbe1e0a59, 0x3b79b6fd, 0x3c62253d, 
    0x3ca05324, 0xbe891724, 0x3de51510, 0x3d2259f1, 0xbc26d937, 0xbc6f5cf4, 0x3b03906a, 0xbc9cd12d, 
    0x3c3e7158, 0xbdc25765, 0xbd175c59, 0xbe135d3c, 0xbcd44c3b, 0xbd072f5b, 0xbd931358, 0x3da10631, 
    0xbde3e0df, 0x3d2058e5, 0x3ab45077, 0xbbfec592, 0xbd69db84, 0xbdb6f13b, 0x3da9baf9, 0x3cabeb85, 
    0xbd2878ae, 0xbe592581, 0x3d024716, 0x3d2d476d, 0xbda3e831, 0xbe164370, 0x3cae82ce, 0x3bf91347, 
    0x3ce2aa7f, 0x3d782480, 0xbd4953d2, 0x3d62b037, 0xbe071441, 0xbd4478cb, 0xbdc4f1b8, 0x3e6459ff, 
    0xbe03482b, 0xbdc2f01f, 0x3d9dd5d4, 0x3d5650e2, 0xbdccc7d1, 0xbdced473, 0x3d85c22e, 0x3cfebc90, 
    0x3e448c43, 0xbd81e8ca, 0x3dff8d6d, 0xbd73b407, 0xbcbbe39c, 0x3d50ed0b, 0xbe238978, 0xbdae1a97, 
    0x3aeb09f7, 0xbd9869f2, 0xbe1d8121, 0xbd7534e5, 0xbc984a38, 0x3c37233d, 0x3e07cc45, 0x3c694ad0, 
    0x3d2f664a, 0x3e164349, 0xbdb34791, 0x3da1dad2, 0xbe02e130, 0x3ca9ce62, 0xbc46ddbd, 0x3e2faa48, 
    0xbdcbef47, 0xbc5dcfec, 0x3d6958f8, 0x3d4103dc, 0xbdaf63b4, 0xbdafa9d2, 0x3d6429af, 0xbcd3b0a5, 
    0x3e2e3270, 0xbdad771e, 0x3e1d6d3c, 0xbda100fb, 0xbce53557, 0x3cf35c59, 0xbdda682d, 0xbdb41a44, 
    0x3c465ce8, 0xbd619c14, 0xbe4f217b, 0x3c2a6ea8, 0x3c952e90, 0xbb398aea, 0x3e14eda5, 0x3d2bb6f5, 
    0x3d7fc997, 0x3e443416, 0xbd9c7d9e, 0x3d7791d4, 0xbe169c8c, 0x3df5c5e8, 0x3c33714e, 0x3e2997db, 
    0xbd68d584, 0xbd29409f, 0x3e0436d2, 0x3db27c3b, 0xbc60419b, 0x3bf49992, 0x3c814a3e, 0xbc36f691, 
    0x3e2831de, 0xbd3203ad, 0x3df646ee, 0xbb88b27f, 0xbc853b19, 0x3d47df00, 0xbddd3ba0, 0xbde495ef, 
    0xbc3f69f7, 0xbd7b9c58, 0xbe38ae7a, 0xbc86faa7, 0x3d5d3868, 0x3cc00545, 0x3d821619, 0x3cd51633, 
    0x3dce64be, 0xbe2fef9a, 0x3da3c28a, 0x3da2482f, 0x3af20856, 0xba96c487, 0x3d4e0d5e, 0xbd547f3e, 
    0x3bc0c09a, 0xbc536f2d, 0x3c966702, 0xbdb41eb4, 0xbdde350b, 0x3d59b65c, 0xbd971915, 0x3c92e193, 
    0xbe439717, 0x3d063caf, 0x3d514201, 0x3b5ae1b8, 0x3d243f43, 0xbdb3358c, 0x3ddfe065, 0x3d1fac60, 
    0xbd0d3242, 0xbe44aacd, 0x3daa0e56, 0x3e05d8d8, 0xbd83c882, 0x3c1e8535, 0x3e57dca8, 0x3c98e456, 
    0x3dc37cdc, 0xbd243f2b, 0x3d8e344b, 0xbb21bab3, 0x3ca95f09, 0x3c28ffaf, 0x3dca1bcd, 0xbdfb83e9, 
    0xbcc44b6e, 0x3e00f159, 0x3cc9bec6, 0xbe26a202, 0xbe1e9d5f, 0x3dbc57ce, 0xbe111c06, 0xbd576543, 
    0xbe6e6ab1, 0x3d9ed0dc, 0x3ccc2630, 0xbd3263e6, 0x3c68306a, 0xbdfca80e, 0x3d90c776, 0x3cdc696e, 
    0xbde04f67, 0xbe5d37cd, 0x3d271ccb, 0x3de7333d, 0xbe0adcad, 0xbc0d1d66, 0x3e7b40bd, 0x3d534090, 
    0x3e1c41ee, 0x3db9890f, 0x3db861b0, 0x3c836f53, 0x3ce27e61, 0x3db476a4, 0x3db44cea, 0xbdc92238, 
    0xbd863028, 0x3e07d179, 0xbcc7f1bf, 0xbe30ec4a, 0x3d6f2c8f, 0x3e0dc857, 0xbe077a24, 0x3d3d7e29, 
    0xbe457539, 0x3d502264, 0x3d9f045e, 0x3c67955e, 0x3d6a482a, 0xbe185eb8, 0x3d471daa, 0x3bebeb9e, 
    0xbe10e3e8, 0xbe38574a, 0x3d17a2d4, 0x3dedba93, 0xbd509f14, 0xbd816aee, 0x3e12f238, 0x3db82b92, 
    0x3c0e8500, 0xbcf215ee, 0x3da2d832, 0xbe5bdd0d, 0x3d8ee7a4, 0xbd664e8a, 0x3daf7580, 0x3d46855b, 
    0xbdcf30de, 0xbdc31375, 0xbe4256f5, 0xbd9204d7, 0x3d2ee1ff, 0x3dc06707, 0x3ce21855, 0x3ddb85d3, 
    0xbdb544f4, 0x3c939c74, 0xbdc55d46, 0xbe989037, 0xbc18f943, 0xbce8ea37, 0xbe2c85bb, 0x39452e6e, 
    0x3d2e0fa8, 0xbd3fd41d, 0xbd29589f, 0x3c1fa189, 0x3e0ef788, 0xbc81f07e, 0xbd89f1a6, 0x3d700a27, 
    0xbd4b5913, 0xbdd696a4, 0x3dcc19cb, 0xbe6e1d43, 0x3c98bdd4, 0xbd9d8bd5, 0x3d018680, 0x3d8f8db8, 
    0xbd137123, 0xbe4f93bc, 0xbe509f00, 0xbcfaf2b7, 0x3d1eb094, 0x3da7403d, 0x3d973237, 0x3e3bddfd, 
    0xbde4feb9, 0x3d23513c, 0xbcbf9cbe, 0xbe8629d0, 0xbd63381b, 0xbc01ff7c, 0xbe0ec07b, 0x3cc3ac66, 
    0x3d6081dd, 0xbd9f634b, 0xbd360c24, 0x3bf5f02e, 0x3dfc20e5, 0xbcb886f8, 0xbdb69544, 0x3cc2f6e6, 
    0xbc1b9fdc, 0xbe5ee2b8, 0x3db9143c, 0xbe5056bf, 0xbcce4df1, 0xbd1d77c6, 0x3dcc0085, 0x3e144eda, 
    0xbda10034, 0xbe598626, 0xbe2c9cad, 0xbca8a1fb, 0x3d50f2da, 0x3da0f78d, 0x3d992df2, 0x3e2980a0, 
    0xbd58a84f, 0x3cd2ab29, 0xbd033a5a, 0xbe81f4a0, 0xbd0d1fe9, 0x3ac3f59b, 0xbe11a1b2, 0x3dba49a4, 
    0x3db20a60, 0xbd89f89a, 0xbd68e2cd, 0x3d7da1e1, 0x3d9ad076, 0x3d349151, 0xbe2ee8e8, 0xbd18a136, 
    0x3cb710dc, 0x3cdb9b90, 0xbd3798f1, 0xbce2a60d, 0xbc3097d4, 0xbbbb936f, 0x3d9054f7, 0xbd3997b3, 
    0x3ca79a07, 0x3d548d28, 0x3c2f241a, 0xbd6024ef, 0xbcbbc842, 0x39ff0627, 0xbd0e00c1, 0xbd6987fa, 
    0xbe058e57, 0x3d16efc3, 0xb7b593fd, 0x3c3b32af, 0xbd82e4e4, 0xbb040abb, 0x3ca0b07b, 0x3cc314e7, 
    0xbcf095bd, 0x3d709b5a, 0x3d8162de, 0x3c3c61ea, 0x3d3e6173, 0xbd3d9314, 0x3c90ae1e, 0x3d1d9507, 
    0x3cf92b13, 0x3d192e0f, 0xbb5741b5, 0xbcd479de, 0x3c62ef35, 0x3aa27bc2, 0x3dc5bb64, 0xbd765371, 
    0x3bd03412, 0x3c4f33e0, 0xb86da221, 0xbd38bfdb, 0x3b236d15, 0x3bacae69, 0xbd2e9439, 0xbd166048, 
    0xbe1c24b1, 0x3cd13295, 0xbcb1eaa8, 0xbb471424, 0xbd2d4342, 0xbceb44e3, 0x3cb7cbe9, 0x3ba05298, 
    0xbd4ec29b, 0x3d218fd5, 0x3d3fa610, 0xbbcfb44b, 0x3d689598, 0xbd52f41c, 0xbcecb226, 0x3d2bd734, 
    0x3d330928, 0x3d76640d, 0x3c168372, 0xbd2f37b1, 0x3ba9a808, 0x3cf35fe0, 0x3df8d4c5, 0xbd7b3c72, 
    0x3c23904c, 0xbc158e47, 0x3aec07a8, 0xbd92f057, 0x3d439ae4, 0x3c3c8f2a, 0xbd62f543, 0xbce65006, 
    0xbe0a9e8e, 0xbbbaacbd, 0xba6ba75d, 0xbaf4c16e, 0xbd43f7a7, 0xbcc7a410, 0x3c6fcc72, 0x3c3c85c1, 
    0xbd327747, 0x3cd1d6ad, 0x3d0d16db, 0x3c44a74c, 0x3d9723e7, 0xbd72335a, 0xbd5a275b, 0x3d2b3800, 
    0x3d5e59a0, 0xbb1b7671, 0xbe0197d4, 0x3c3911c3, 0xbc100a19, 0x3c3f34a8, 0xbce556a9, 0x3d62f5a0, 
    0xbcef4c53, 0xbdb2a962, 0xbcfb0a63, 0xbd9a4a67, 0xbde1a383, 0x3a779528, 0xbc3c0115, 0xbe0aeae4, 
    0x3dda1fbd, 0xbd9748e3, 0xbd42fbf9, 0xbc1b4392, 0x3ce242f0, 0xbd2b20ba, 0xbcbfeed8, 0x3c06411c, 
    0x3d7b30ac, 0x3d721adb, 0xbbc203b8, 0xbd941df1, 0x3d8bc2ee, 0xbd81eee7, 0xbcd6185c, 0xbdc72d6a, 
    0x3d343e38, 0xba83b107, 0xbdeec529, 0xbc681d37, 0xbc8d1367, 0x3aec91f4, 0xbd28d81a, 0x3d6246d9, 
    0xbc7b105a, 0xbda3be28, 0xbd72d41f, 0xbd4e0a46, 0xbdd58e58, 0x3d2c676c, 0xbcfee717, 0xbdfa993a, 
    0x3e09bc84, 0xbd8e9b88, 0xbd24ad88, 0xbb0e792a, 0x3c90560a, 0xbd3406c4, 0xbc9ecea3, 0xb9cafabf, 
    0x3d7792c0, 0x3d623045, 0xbc8de51e, 0xbda36316, 0x3d75bba2, 0xbd425d1d, 0xbb0cf58e, 0xbdb9d002, 
    0x3d2afc64, 0x3ccad227, 0xbdc600f0, 0xbcf0e8ee, 0xbcbbd897, 0x3ce4cb13, 0x3bfa6528, 0x3d542313, 
    0xbbfb37b3, 0xbd9b7220, 0xbd81728d, 0xbd955d4a, 0xbdceb4dd, 0x3cd6acc3, 0xbd12f87b, 0xbdfb308f, 
    0x3df8f17a, 0xbd85214f, 0xbd6ec367, 0xbc6f6560, 0x3ce585d3, 0xbd93e18c, 0xbd6f895d, 0xbc8ef6d1, 
    0x3d170f1d, 0x3d80faa2, 0xbd2cb0ac, 0xbd938168, 0x3d30f4d4, 0xbd14266c, 0xbce0644d, 0xbdd1939e, 
    0x3d839eb6, 0x3c86b570, 0xbd47f485, 0xbd569aef, 0xbd30d2e6, 0xbb961274, 0x3b9609b2, 0x3d163873, 
    0xbd1dc6c7, 0xbc58724a, 0x3cbe1547, 0x3c948181, 0x3c1034e6, 0x3d0683f7, 0x3d434db3, 0xbd126c1b, 
    0x3b945f50, 0xbd2c6cad, 0xbe0973d0, 0xbc3508ca, 0x3d33f57c, 0x3d16abc3, 0x3cfba5f7, 0x3be8cd57, 
    0x3ca2aeca, 0xbd2651f1, 0xbd6cbdf0, 0xbd966de5, 0x3cd9eb55, 0x3cad8926, 0xbe156cd1, 0x3c2f34d6, 
    0x3d5c2b57, 0x3c6c2d2f, 0xbd7eef63, 0xbcf475fc, 0xbd0bc555, 0xbae87d0c, 0x3c1c2755, 0x3d3891f4, 
    0xbca5b905, 0xbac60dfa, 0x3d32f2d4, 0x3c2168f8, 0xbce60a6b, 0x3cb65c18, 0x3cfcf47c, 0xbd783746, 
    0xbc86a1d9, 0xbcf0514e, 0xbe016b71, 0x3bd7a441, 0x3cdac1ac, 0x3c912689, 0x3cd6576a, 0xbbf5ba48, 
    0x3d0551aa, 0xbd4b5cea, 0xbd82fea5, 0xbd6aef92, 0xba466a7d, 0x3cc34517, 0xbdf8a6fa, 0x3b7a8f8c, 
    0x3d70af6e, 0x3d15f7d1, 0xbd69e91c, 0xbcc46aea, 0xbd1a6dc3, 0xbab54367, 0x3c0e8b48, 0x3ce8832e, 
    0xbd2ded0c, 0x3c1a3a52, 0x3cbf0dcf, 0x39ec0774, 0xbbe1afa7, 0x3d428744, 0x3d2436a0, 0xbd49fa19, 
    0xbb90892a, 0xbbe03913, 0xbe1d866d, 0x3c01eff5, 0x3d1f61cb, 0x3d259b22, 0x3c0dac82, 0xbc38c474, 
    0x3c8379ae, 0xbd10a062, 0xbd1d3817, 0xbdc250b4, 0x3c6ced0a, 0x3c326913, 0xbdf3cc2f, 0x3b9df873, 
    0x3c55828f, 0x3ddb28d7, 0xbcd38157, 0x3bf709b9, 0xbdfa4f5e, 0x3d0d9c9e, 0xbd2f664f, 0x3d91149a, 
    0xbe72becb, 0x3d8c370a, 0x3e1d6631, 0x3cd138b9, 0x3d18ba8d, 0xbe093ed6, 0x3d8ca82d, 0xbc8dac60, 
    0x3df1d50c, 0xbdde0938, 0x3c988a5f, 0x3d9c6412, 0xbdf203b1, 0x3dc2a3d5, 0x3d715eae, 0xbe83bcbb, 
    0x3a971787, 0xbd6d89f8, 0xbdffbe95, 0xbdf680ae, 0x3d990f24, 0x3d1131e3, 0x3ba0651b, 0xbd5dab97, 
    0xbd5fb040, 0xbb1ccdb3, 0xbcb27d1e, 0xbd19948c, 0xbe3844f2, 0xbcbb71ad, 0xbdf22e8c, 0x3dd9ed67, 
    0xbe3e4bea, 0x3d0cf815, 0x3e436aa1, 0x3d6e6418, 0xbd518388, 0xbe548d11, 0x3d9e9044, 0xbd941ec8, 
    0x3dfa65ca, 0xbdc7286a, 0x3c996a1a, 0x3d826fb8, 0xbe186b25, 0x3dd58ebd, 0x3d819325, 0xbe7de422, 
    0x3cec60f6, 0xbda336c1, 0xbe15cb31, 0xbe1e0098, 0xbd1dbfa5, 0x3d6311f6, 0x3dba3680, 0xbd62ff23, 
    0xbc90879e, 0x3ce907c0, 0xbd855d8a, 0xbd623ffc, 0xbe0ea332, 0xbd173616, 0xbd8064ad, 0x3dca14bc, 
    0xbe5b1e3d, 0x3df48420, 0x3e71cc2e, 0x3d360688, 0xbe35b30a, 0xbe425012, 0x3d931b37, 0xbe1839bb, 
    0x3e08fb01, 0xbcc4af47, 0x3d8569b6, 0x3d56f35f, 0xbe02afd9, 0x3dc14952, 0x3d850706, 0xbe86f18d, 
    0x3aabdf76, 0xbda7c4d5, 0xbe153396, 0xbe058627, 0xbe065834, 0x3cdbd48c, 0x3e3d8168, 0xbd7b05f1, 
    0x3d07a184, 0xbb23a688, 0x3c03267c, 0xbc1c6127, 0xbca04fcf, 0x3c74880c, 0x3d7520ad, 0xbcad2386, 
    0x3d25ac35, 0x3cb97eb2, 0xbcf38c72, 0xbea3cc2c, 0xbd350e65, 0x3d3b3be6, 0xbe571d62, 0xbd4278e0, 
    0xbe19f1a5, 0x3d527367, 0x3c13b74d, 0xbd56c5cd, 0x3c365a2a, 0xbe671b9e, 0xbdb56a92, 0x3d41c5aa, 
    0xbe3ace5b, 0xbc9a95a7, 0x3d2cba1d, 0x3da934d8, 0x3dff5e32, 0xbe757443, 0xbcb17a99, 0x3c3a989e, 
    0x3d3212a2, 0x3c8cd020, 0x3d3b64f1, 0x3c268264, 0x3baabe6d, 0x3d5f4020, 0x3dd90f77, 0x3d2f7853, 
    0x3dabaff3, 0xbd8d669b, 0xbce33590, 0xbe94b827, 0xba65b16f, 0x3d1b7106, 0xbe3dae63, 0x3c0f7bfd, 
    0xbe13be4c, 0x3cb69cea, 0x3d323184, 0xbd37291b, 0xbc240ea4, 0xbe4f31f1, 0xbd276126, 0x3d90076b, 
    0xbe3e4f6b, 0xbca25edb, 0xbc4d7ded, 0x3e01d332, 0x3e2e55c7, 0xbe7164cc, 0xbd59bc34, 0x3d17c1db, 
    0x3da6d470, 0x3c2bf11c, 0x3d6141da, 0x3cc8c343, 0xb821714d, 0x3d3f2987, 0x3db82fcf, 0x3ca0506d, 
    0x3dacaf46, 0xbdc0c92d, 0xbaf31bc0, 0xbe9984d3, 0x3d74e57b, 0x3da92513, 0xbe5fff8c, 0x3b1523d1, 
    0xbe1aefbe, 0xbc065c66, 0x3d450bcc, 0xbc97e578, 0xbc2a1f4b, 0xbe5a52b8, 0xbb2bd797, 0x3da3efca, 
    0xbe4976ca, 0xbd2ec111, 0x3d222a56, 0x3e2679cd, 0x3e132395, 0xbe814ee6, 0xbc742dcf, 0x3b96fb31, 
    0xbe0b08a1, 0xbe5565a7, 0xbe551173, 0xbd9f70df, 0xbe11c499, 0xbdb55b99, 0xbda22820, 0x3cbf2b2c, 
    0xbe87a231, 0x3dd95a34, 0x3de33615, 0x3e037c3d, 0xbef3e3aa, 0xbe4255d0, 0x3e2a2f78, 0xbea4c67f, 
    0x3d1c7800, 0xbd88406d, 0x3cc21059, 0xbdc475dc, 0xbe21422f, 0x3df56c0b, 0x3d849589, 0xbd47e9ab, 
    0x3d7e80e5, 0xbde075a0, 0x3dd074bc, 0x3cc269c5, 0xbe897f74, 0x3cf0686a, 0x3f2bb55d, 0xbd582919, 
    0xbd7a628d, 0x3daf4589, 0xbd36447f, 0xbd4ca44b, 0xbc3bce0a, 0x3c06c0e3, 0x3d535733, 0xbd7d15a9, 
    0xbe383df0, 0x3e0758dd, 0x3d88094b, 0x3d72129d, 0xbe51c80f, 0xbd8b41bf, 0x3dbebb38, 0xbe3b5fe0, 
    0xbde12bfa, 0x3ca5ad5f, 0xbd21af80, 0xba849d0a, 0xbd19b2bc, 0x3e06206d, 0x3df0e8e3, 0x3d80631f, 
    0x3d2c7ea8, 0xbe26a296, 0x3dd53f93, 0xbc012cce, 0xbe19ffc0, 0x3da52896, 0x3e6e85dd, 0x3d908808, 
    0x3d6cfac1, 0x3e44e254, 0x3e7edf3b, 0x3d840911, 0xbd209bab, 0x3e049c7b, 0x3d3ff164, 0xbe01b345, 
    0xbe54e871, 0xbdc0affe, 0x3db67943, 0x3dd7d005, 0x3e831890, 0x3e059448, 0x3da4737b, 0x3e832a65, 
    0xbe04866c, 0xbd22d9c4, 0xbc5f0a08, 0x3c2a6385, 0x3cb305ff, 0x3e274542, 0x3db18079, 0x3d73e531, 
    0xbcc521df, 0xbe3c1bf0, 0x3dd35878, 0xbd2efa7b, 0x3e17e19d, 0x3d71aa9b, 0x3d3fff91, 0x3e34735d, 
    0xbd6dd96b, 0xbcc5250e, 0xbd09440e, 0x3c9ae506, 0xbc822624, 0xbcddfc5f, 0xbda91341, 0x3bf0b4da, 
    0xbd50d695, 0xbd9fc7e2, 0xbdb76ce0, 0x3e25dd84, 0xbd897645, 0xbd2f9846, 0x3d8e2255, 0xbe0c6681, 
    0x3de6829e, 0xbce18759, 0xbdf58609, 0x3cc4f071, 0x3cdf3fe1, 0x3c3416e6, 0x3d6b050a, 0xbb81600b, 
    0x3e4a0f31, 0x3d785c02, 0x3ce4f716, 0xbd028c3b, 0xbd646109, 0x3e36455a, 0xbded9cd0, 0xbe4722b7, 
    0xbd714f98, 0xbd83a911, 0xbd83c225, 0x3d45fb1c, 0xbd1649c6, 0xbd855fc8, 0xbd4e90f8, 0x3d4126bc, 
    0xbd312074, 0xbda110aa, 0xbda6d21e, 0x3e319a20, 0xbda39d91, 0xbd2483e3, 0x3dccce48, 0xbe167cb4, 
    0x3e003e91, 0xbcb7dbe6, 0xbd8213f7, 0x3b7d9311, 0xbc051d14, 0x3d611d58, 0x3c4d5c42, 0xbade2382, 
    0x3e859628, 0x3dc3e561, 0xbc6f686b, 0xbb8e9faa, 0xbda17c18, 0x3e14ccfe, 0xbccf7f73, 0xbe6002ab, 
    0xbd4ad3c9, 0xbd68ed96, 0xbd1fb43e, 0x3d28db23, 0xbd69148f, 0xbcd430b0, 0xbd33623f, 0x3d1698b5, 
    0xbdc76179, 0xbd528426, 0xbd982898, 0x3e4fbec3, 0xbd7c02ce, 0xbd951812, 0x3dbbb0dc, 0xbe0f2e75, 
    0x3dbb1e55, 0xbbf2588a, 0xbdc07b77, 0xbc2a0870, 0xbca09644, 0x3c75b678, 0x3cebf591, 0x3d116579, 
    0x3e7d5faf, 0x3d9e2b86, 0xbc00782a, 0x3d8ba7ec, 0xbd5513f3, 0x3e216316, 0xbddb6e5b, 0xbe4de63c, 
    0xbe3131b5, 0xbdddea11, 0xbc56bf98, 0xbc15d422, 0x3ad85dbb, 0xbd27b6c8, 0xbd7130cf, 0x3d4d7c78, 
    0x3dae405f, 0xbdbaf83d, 0x3d4e0bb7, 0xbb53b41c, 0xbcbf3db1, 0xbe22b04b, 0x3c50b5b3, 0xbb31474d, 
    0x3caec723, 0x3ca3f1d3, 0x3df278d3, 0xbc9cafae, 0xbdd4fe1b, 0x3cabbc48, 0x3b8e314a, 0xbb14facc, 
    0x3d0b3b4d, 0xbcc84fe3, 0x3c8d65f1, 0x3daad686, 0xbc6594ac, 0xbbbab7fc, 0x3d820acb, 0xbd52eb7d, 
    0xbe25994f, 0xbdb32e5c, 0x3c8d62ca, 0x3bfe317a, 0xbc253e6f, 0xbca3242b, 0xbd89a863, 0x3d1e0e3b, 
    0x3dbf05ff, 0xbda05be8, 0x3d2b4386, 0xbbeb11be, 0xbd008fcd, 0xbdcc9e0b, 0x3bc269bb, 0x3d043090, 
    0x3a3aed28, 0x3c9e37aa, 0x3e07baf5, 0x3c88112b, 0xbd515f09, 0x3cf18605, 0xba9d823d, 0xbba59c9d, 
    0x3d26b156, 0xbc2e55c4, 0xbc03f0df, 0x3d395781, 0xbcb0d860, 0xbcb7dfe6, 0x3c6122e7, 0xbd993b32, 
    0xbe2af8d5, 0xbdca901b, 0x3c734d20, 0x3c90aee5, 0xbc1f9ec3, 0xbac9abcd, 0xbd000397, 0x3c7b212e, 
    0x3dc79c0a, 0xbda3fa8c, 0x3d173672, 0xbb8b0033, 0xbc7035ff, 0xbdfbfe4f, 0xbb759e09, 0x3cb24088, 
    0xba8084d0, 0xbc9e42ea, 0x3d9c468c, 0x3c9f1cf3, 0xbd87d16e, 0x3c99d2ab, 0x3c6d6707, 0xbd5c886e, 
    0x3d27f758, 0xbd18f8a9, 0xbc11cc72, 0x3d6e5ddb, 0xbd0406f4, 0xbc6efb12, 0x3c8b37fc, 0xbd298d24, 
    0xbd5216dd, 0xbd890652, 0x3d9dc1cb, 0xbd0da410, 0x3c56b875, 0xbd0684f4, 0xbca7a3cd, 0xbcc2decb, 
    0x3a510ece, 0x3b4f4187, 0x3ca55375, 0x3cc623eb, 0x3d81de17, 0xb9cea100, 0x3d078298, 0x3d528df6, 
    0x3b6540d7, 0x3dd70b32, 0x3cb50aa9, 0x3c1de97f, 0xbd1dd281, 0x3d8d39cc, 0x3da1b3a3, 0x3d75683d, 
    0xbb9036d9, 0x3d85d5a6, 0x3e052cf0, 0x3d8cafad, 0x3ce4fa44, 0x3ca4610d, 0x3c7fb28a, 0x3d91937c, 
    0xbd0f129d, 0xbcde0e73, 0x3d91f6c9, 0xbd2497a0, 0x3d5cc434, 0xbd388ceb, 0xbb20e9ad, 0xbcd6c7e0, 
    0xbb288384, 0x3bc05d4f, 0x3d2b2ea7, 0x3d0ea201, 0x3d40ab8f, 0xbc11004d, 0x3c9b0cb9, 0x3d55cfca, 
    0x3c6c410f, 0x3d8c166c, 0xb8c47bfc, 0x3bf34be3, 0xbcd293da, 0x3d6f7a81, 0x3d6de1dc, 0x3d694c85, 
    0xbb9648f3, 0x3d85bbe1, 0x3df3a3e0, 0x3d42c5f3, 0x3d26c3ff, 0x3b4c7e35, 0x3adb4efc, 0x3d4e7533, 
    0xbd4bb209, 0xbc4a67bc, 0x3d5d27fb, 0xbc87a561, 0x3c715ff4, 0xbd649a92, 0x3abafa07, 0xbbd75b6c, 
    0xbd0a64a3, 0x3cf721dd, 0x3c8ca9e2, 0x3c813e90, 0x3d2a6a02, 0x3b1254c6, 0x3cee11f1, 0x3d22bc70, 
    0x3c23193d, 0x3d943b94, 0x3bd67e45, 0x3ca61b6f, 0xbd2bfb28, 0x3d5ec035, 0x3d88b196, 0x3d6cf05e, 
    0xbc46aada, 0x3d5114d5, 0x3df09144, 0x3ccc2158, 0x3cf97752, 0x3c10cd85, 0x3cf3c2c4, 0x3d19c7c5, 
    0x3bc9793b, 0xbbab9229, 0x3c1d1b6f, 0x3bb346ee, 0x3bb90115, 0xbc276558, 0x3d174994, 0xbc84ecff, 
    0xbc609e70, 0x3ca1dd5d, 0xbc084952, 0xbd651809, 0xbd2a9f50, 0x3cb09f06, 0xbd2ba367, 0xbccc6325, 
    0xbd82b61e, 0x3cf22b4c, 0x3bda5f73, 0x3c1447df, 0xbc7a777f, 0xbccaf193, 0x3c84e316, 0x3ca941bc, 
    0xbd16563e, 0xbc655016, 0x3d389338, 0x3c8e1c82, 0xba8e5ddc, 0xbcad211a, 0x3ce3b4e4, 0x3c945061, 
    0x3ca18464, 0x3c9135c4, 0x3c31aa96, 0x3c0846f1, 0x3b8d1680, 0x3b18ae77, 0x3d553afb, 0xbc8ff074, 
    0xbb6bd7f8, 0x3c5e44e1, 0xbb8124e9, 0xbd30bd97, 0xbb906b59, 0x3ceb6f12, 0xbd0d623a, 0x3aee9a56, 
    0xbd7649f5, 0x3af9bf70, 0xbbe64f35, 0xb9913636, 0xbb8c5796, 0xbcc25657, 0x3c94a9a3, 0x3c9a4afe, 
    0xbce35010, 0xbc89116b, 0x3cd7fa5d, 0x3cc3e0cf, 0x3b9e9114, 0xbd117a05, 0x3c75a8ad, 0x3c867b98, 
    0x3c7951cd, 0x3c769d7e, 0x3d012ed9, 0x3c208887, 0xb9090de9, 0x3c5c0e86, 0x3d39a69b, 0xbc43a765, 
    0xbc662004, 0xbc9bc2bd, 0x3b856b53, 0xbcdb30b3, 0x3cb1f553, 0x3d06420d, 0xbcd203a1, 0x3bf84089, 
    0xbd6b29ee, 0xbc2147d8, 0xbb15050b, 0xba4f0991, 0xbba50fc2, 0xbc983c73, 0x3cb8e70b, 0x3c956709, 
    0xbd018c0a, 0xbcbf9a5a, 0x3cbcf915, 0x3c69196d, 0x3d01c5d6, 0xbcbb57fc, 0x3749ced6, 0x3c7674ca, 
    0x3c9ab6e5, 0xbcd3d807, 0xbd51cd84, 0xbe10baa2, 0xbd5d8054, 0x3c85a3c7, 0xbd45c53b, 0xbca694ed, 
    0xbd2f6087, 0xbbede804, 0xbdb65e37, 0x3cab3d53, 0xbd15f1c8, 0x3c49a094, 0x3d5da192, 0xbd9beb6e, 
    0x3cfb176a, 0xbd438225, 0xbd9728f4, 0xbe306a23, 0x3d0248f7, 0x3d30df38, 0xbd3719cb, 0x3ca8ab56, 
    0x3d7a6df8, 0x3ce797c4, 0xbd403082, 0x3a8cff23, 0xbd55994f, 0xbbf0be02, 0x3b40453e, 0x3d33eeb1, 
    0x3ca5e3b1, 0xbc63db11, 0xbcdd7f13, 0xbe11c0bc, 0xbd37f8b3, 0x3cc43f49, 0xbd3a133f, 0xbcdbede2, 
    0xbdd6a4e7, 0xbcdab9ea, 0xbdbae49f, 0x3b99ab4f, 0xbd0c168a, 0x3c98cf8f, 0x3d631a2f, 0xbceb4aac, 
    0xb6158c1a, 0xbd4f7ee2, 0xbe012e6d, 0xbe742090, 0x3d0730e3, 0x3b6df0d3, 0xbdbc56b6, 0xbb6197fe, 
    0x3d40e6fc, 0x3d333019, 0xbd964e2d, 0xbc9ff96b, 0xbcdfba9c, 0xbc850c78, 0xbccd53c9, 0x3d241a4f, 
    0xbc151a55, 0x3c8b998a, 0xbd051337, 0xbdd0e344, 0xbcd9c0d2, 0x3b9eb6dc, 0xbc82f7ac, 0xbd1a0d36, 
    0xbd942d6c, 0xbd708ea6, 0xbdd506ac, 0x3c2e5efb, 0xbd6f0594, 0x3c554e5a, 0x3c92324a, 0xbcc4fab4, 
    0xbd022e1f, 0x3c460bd5, 0xbe13ac1e, 0xbe80c12e, 0xbc18feca, 0x3cb72124, 0xbe1085a3, 0xbdb21384, 
    0x3cec596c, 0x3caefca8, 0xbe028c40, 0xbd8fc1f5, 0x3c8991b3, 0x3b609e30, 0xbd0b17bb, 0x3cf448d6, 
    0xbdc4dcf4, 0xbd12eee9, 0xba32e510, 0xbcd68c91, 0xbdf9d8f6, 0x3b87a96d, 0xbd84b9e1, 0x3d4ba619, 
    0x3d555574, 0xbe23d14d, 0x3c877937, 0x3d130fe0, 0x3d066337, 0xbdd2be19, 0x3d2b26cb, 0x3d44177c, 
    0x3b2d4dfb, 0xbce5432b, 0x3e283976, 0xbd938553, 0xbd0ca16f, 0x3d2a64dc, 0xbcf82173, 0x3ce540bb, 
    0x3ceec34e, 0xbe107817, 0x3c5aab5c, 0x3d8fd72b, 0xbd6908a7, 0x3c28a855, 0x3d2b4e95, 0xbbb2e89c, 
    0xbe062c11, 0xbd87c418, 0x3d35d604, 0xbd97fa47, 0xbd9dd4ea, 0xbcd3ba71, 0xbcbb8546, 0x3c96a91f, 
    0x3d4c2c50, 0xbd563c85, 0xbc89fb54, 0x3ca939df, 0xbd6f3827, 0xbe19a9ac, 0x3d33e9bd, 0x3d0be442, 
    0xbca14f5e, 0x3cf581e7, 0x3e049270, 0xbd92e9d2, 0xbd460873, 0x3d1b5ae0, 0xbd65cdb0, 0x3cbd43da, 
    0x3cd3b7af, 0xbe167eac, 0xbc56e181, 0x3d5e75e8, 0xbd8f7dba, 0x3c734222, 0x3e361595, 0x3d2fb69f, 
    0xbda1b76b, 0x3c80ff94, 0x3d297bf4, 0xbd871664, 0xbcef6602, 0x3d7d824c, 0x3dc3d2a4, 0x3cc44b65, 
    0xbc0fb438, 0x3d4d985c, 0xbd37188b, 0x3c132c71, 0xbc928442, 0xbdffc184, 0x3d5f90aa, 0xb99f33e6, 
    0xbd424dbd, 0x3deda88c, 0x3d2573e9, 0xbd82190b, 0xbd161891, 0x3c89fdbe, 0xbd6f1c50, 0xbb4f6a39, 
    0x3c3e9607, 0xbe3b2a1c, 0xbcff3909, 0x3ca160f1, 0xbd6e7773, 0x3bde0245, 0x3e2bfeb3, 0x3d504e69, 
    0xbc54fdfb, 0xbca694d7, 0xbdc26968, 0xbd6789e1, 0xbd94cf45, 0xbd4e7ce1, 0x3d64480c, 0xbd0e3bc1, 
    0xbdb6ccad, 0x3e3183cc, 0xbdbebed7, 0x3ddabfe3, 0xbd87b7a7, 0xbd890302, 0x3d92fba3, 0xbe02166b, 
    0xbc3b6be7, 0xbdb1352e, 0xbdc7bb4b, 0xbe49c196, 0xbc355e3f, 0x3d75c71e, 0xbe8846c8, 0xbd034049, 
    0x3d71f70d, 0xbbe9250b, 0xbde6145b, 0x3ccb85d1, 0xbd521e89, 0x3da35aeb, 0x3d491967, 0x3d756c0f, 
    0x3c6fe3ea, 0x3e030174, 0xbdb23063, 0xbdb57d51, 0xbd5afd72, 0x3d10d47e, 0x3da572f6, 0xbd12e02c, 
    0xbdb31d62, 0x3e07e304, 0xbda28128, 0x3dde0a78, 0x3d6f6b9b, 0x3cc2bbd4, 0x3da08bd4, 0xbe01ecd7, 
    0x3d12e899, 0xbe16e1ea, 0xbdf80c91, 0xbe4c3bbc, 0x3be72a3f, 0x3dc7705d, 0xbe5e5436, 0xbdf6f5c4, 
    0x3c3f8a9a, 0x3ce80617, 0xbe042a3e, 0xbad71e19, 0x3da77e3a, 0x3e09d67c, 0xbd3e8554, 0x3d99c9ec, 
    0x3d2646b6, 0x3e078bbb, 0xbdbdc954, 0xbd89a1dd, 0xbd9b4084, 0x3db5739e, 0x3d2f0a4d, 0x3c6f1970, 
    0xbd87471a, 0xbcdcb693, 0xbdf3fa0f, 0x3e0d739c, 0x3db32303, 0x3d0b6195, 0x3d8aebd7, 0xbdc80fdb, 
    0x3d82a08a, 0xbdf0040f, 0xbd8e3c33, 0xbe329535, 0xbcec7b8d, 0x3dcaede0, 0xbe85cf13, 0xbe0c269b, 
    0x3d349829, 0x3ccf485c, 0xbe1dde04, 0xbd38a254, 0x3dfeebd0, 0x3dafde8e, 0xbd998517, 0x3d54157b, 
    0x3d10563f, 0xbcb602c1, 0xbd010c05, 0xbccc0fc2, 0xbc8f5618, 0x3c167bcc, 0x3d023e1d, 0x3c93041b, 
    0xbc88e9b1, 0xbd097dfa, 0xbace1bb0, 0xbc98cae3, 0xbcc198c8, 0x3d46aaf9, 0x3cb2f5db, 0xbd36f60d, 
    0x3c92c687, 0x3ae80e65, 0xbe11eece, 0x3a797f9f, 0x3d7d5dfc, 0x3ca09a22, 0xbcd8b157, 0xbb45e7d1, 
    0x3cbcbf08, 0x3d800c87, 0xbc003f45, 0xbc1800bc, 0x3c9fb423, 0xbccd25dd, 0xbe0d9bbb, 0x3cab9509, 
    0x3d7dd330, 0x3b78b8f2, 0xbd34cd1d, 0x3a5906db, 0xbbaffb4b, 0x3c2dfde6, 0x3d219786, 0x3c44b236, 
    0xbd42b5d3, 0xbcb163f3, 0xbcb98801, 0xbc2d58ca, 0xbd89035b, 0x3d387b28, 0x3c9f15c1, 0xbd649c0b, 
    0x3c3a5e8c, 0x3d16ace9, 0xbe107a2f, 0xbbbae080, 0x3d4e9fd1, 0x3baebb7d, 0xbd3ea5fa, 0x3c4fc15b, 
    0x3cd5bdf7, 0x3d909a26, 0xbbae1a5e, 0xbcb263a9, 0x3c8908b8, 0xbcca7fa3, 0xbe04889d, 0x3c60c4b3, 
    0x3da5e965, 0x3cd97847, 0xbc7bfff6, 0x3c1c8fdc, 0xbb89e1f5, 0x3d45fa9f, 0x3db245ff, 0x3ba541d0, 
    0xbd19f402, 0x3bd09d99, 0xbbbca2a7, 0xbd0f8d52, 0xbc88063a, 0x3d912055, 0x3cded950, 0xbcb8870d, 
    0xbbd24e92, 0x3c8fb637, 0xbe310e10, 0xbc6efdc1, 0x3d79b3fc, 0x3cad70f7, 0xbd4c9ebb, 0xbcba8a83, 
    0x3c5023a9, 0x3d89c417, 0xbc840c72, 0xbc93eafe, 0x3d3837da, 0xbd2ed5f8, 0xbdcfcec1, 0x3cefd44d, 
    0x3d036e13, 0xbd9593d2, 0x3d230482, 0x3c8e3aec, 0xbd11c193, 0xbcd66e78, 0xbb88db88, 0x3c8d5bca, 
    0x3ca7e63d, 0xbd81fba9, 0xbcabcfa7, 0x3d553913, 0x3cbf96aa, 0x3dac0d98, 0x3caf1a1b, 0x3ccf16ca, 
    0xbb3af725, 0x3c0c65a8, 0xbd75e866, 0x3cd94204, 0x3d36e2ae, 0x3d1a05fc, 0x3b6d1526, 0x3c1fc1ef, 
    0x3c3444a8, 0xbcf77d50, 0xbd2094ef, 0x3a335e42, 0xbd9c5150, 0x3d13d3b7, 0xbd021351, 0xbd181bda, 
    0x3d00b361, 0xbd935b31, 0x3cf18191, 0x3b50944a, 0xbc32bcb2, 0xbc604eae, 0x3bf2a7f1, 0x3ced377f, 
    0x3c6d3380, 0xbd99e157, 0xbc6eb383, 0x3d1f89de, 0x3c829d7f, 0x3d8a0864, 0x3d3e0d6f, 0x3a998274, 
    0x3b5f7993, 0x3bcdca28, 0xbd2cbc48, 0x3d060c81, 0x3d1767e3, 0x3cdc1b4b, 0x3cfd5aba, 0x3c260e00, 
    0x3d161c33, 0xbd1a9145, 0xbcd4b6d2, 0xbc8d24b7, 0xbdb87b55, 0x3d3833fb, 0xbc22cef0, 0xbc80ff8f, 
    0x3d184da3, 0xbda9054d, 0x3c9f176f, 0x3bdfa192, 0xbc7e5151, 0xbcc40885, 0xbc8ae820, 0x3cbb9602, 
    0x3c564028, 0xbd818a8a, 0xbcdc5484, 0x3d39a2ce, 0x3ba3d778, 0x3d600f4f, 0x3d01f196, 0x3bd1b708, 
    0xbc2b6082, 0x3c5a654c, 0xbd28fdab, 0x3d052d3d, 0x3c602505, 0x3a68ccb0, 0x3c2f2c5e, 0x3c8f27c1, 
    0x3d2ed29d, 0xbcd95d00, 0xbcd46d27, 0xbb167712, 0xbd940795, 0x3d0682e2, 0xbd0355ff, 0xbd05839c, 
    0x3cff0e90, 0x3d37de33, 0xbd25c06d, 0x3cc8c0db, 0xbe379047, 0xbc746ced, 0xbdf16dd2, 0x3dbcc52d, 
    0x3bc7894f, 0xbe001c96, 0x3cddf857, 0x3c87f643, 0xbd1083ae, 0x3d2d3909, 0x3cd97b08, 0xbd87a3a9, 
    0x3e4b1fd8, 0xbd80de3c, 0xbcac7673, 0xbd133a77, 0x3d4458b7, 0x3c5452b7, 0xbdc22672, 0xbddd59b7, 
    0x3d1b5a21, 0x3dc964cc, 0xbe1fc1f9, 0xbdb5c4b6, 0xbd4d2b24, 0x3d4884de, 0xbc94c039, 0x3d86dc1d, 
    0x3c060708, 0x3d8dfe23, 0xbd041644, 0x3d42a85d, 0xbe1ae678, 0x3bbe9ed1, 0xbdc554ea, 0x3dffe69b, 
    0xbc673359, 0xbdad06af, 0x3cb880f5, 0x3c39ee50, 0xbdb4c910, 0x3b593fd8, 0x3cfdda13, 0xbdd16f20, 
    0x3e45a2be, 0xbd6724cd, 0x3c7e3d42, 0xbd5ed612, 0x3c70a78f, 0x3cc4e0db, 0xbe0e5e68, 0xbdd399c8, 
    0x3cd59d71, 0x3db520b7, 0xbe1cfb00, 0xbd0b86d7, 0xbce98faa, 0x3d3becad, 0x3c0a98ae, 0x3d521795, 
    0x3d0fe2fb, 0x3e0312e0, 0xbbbb53d5, 0x3cb080f7, 0xbe1f9827, 0xbca7fb35, 0xbd6829c5, 0x3dd8033f, 
    0xbca45c30, 0xbd9adf47, 0xbc434160, 0x3bc79608, 0xbd0c7996, 0x3d16786c, 0x3c4e19e5, 0xbd7a4ba1, 
    0x3e3a0bf2, 0xbd118786, 0x3a5e9ff1, 0xbd5857c1, 0x3d0c7b9e, 0xbc519eaf, 0xbe108bba, 0xbdd34ae4, 
    0x3cd181b5, 0x3d63d4df, 0xbe389121, 0xbd912e48, 0xbcabd980, 0x3cb03e5f, 0x3ce564dd, 0x3d7e967f, 
    0xbda2e246, 0xbd42a87c, 0x3aec8333, 0xbdc3c4ad, 0xbd45d4c5, 0xbd4c4430, 0xbe17ead0, 0x3d2c73d4, 
    0xbc949f30, 0xbdd40106, 0xbc04c163, 0xbd063e8c, 0xbbeec3fc, 0xbdadbf57, 0xbcefbec9, 0xbb4b462f, 
    0x3d493481, 0xbd131c70, 0x3d9b3415, 0xbcd34be0, 0xbc8d35d2, 0xbc38b9a0, 0x3c67bc71, 0xbcfffeb2, 
    0xbaf792e5, 0xbd9f7ed5, 0xbc72bceb, 0xbd1dcd16, 0xbd6a8585, 0xbd02c681, 0x3c7cdbf2, 0xbcbed8eb, 
    0xbdbe4435, 0xbd57ea93, 0xbcec6212, 0xbdf6508e, 0xbd1464e3, 0xbdb5ca45, 0xbde6c860, 0x3cacfc4e, 
    0x3c24c8b8, 0xbc2dc600, 0xbbf1000c, 0xbd39794f, 0xbd8d10b9, 0xbdef9018, 0xbd13cdf6, 0xbd1b4dea, 
    0x3cbb5bb4, 0x3c85a194, 0x3d4349a5, 0xbcced56c, 0xbd24313f, 0xbce73138, 0x3cccae3f, 0xbcc7e992, 
    0x3b86e3b4, 0xbdaf0e40, 0xbca81efd, 0xbd42aa78, 0xbdcf569c, 0xbc5f36a2, 0x3dbbe2b4, 0xbc2fd7c3, 
    0xbda4658b, 0x3c88c31f, 0xbd05e1e9, 0xbdb03a42, 0x3bdae569, 0xbcf4120d, 0xbcaa26cb, 0x3cae6c88, 
    0x3cede260, 0x3d6ea115, 0x3c926d2a, 0xbd002b2a, 0xbd4dd0ef, 0xbdb731bb, 0xbcc8db15, 0xbce6a3bb, 
    0x3c8d62d9, 0x3d3ba9c3, 0x3c72b373, 0xbc43d5e5, 0xbca7516b, 0xbcb07059, 0x3b758774, 0xbd4a4612, 
    0xbbebdb67, 0xbdb77010, 0xbc9dd1a5, 0xbd732591, 0xbd4c5190, 0xbcac500f, 0x3db8ad15, 0x3c46703d, 
    0xbe8036ea, 0xbe0db8d0, 0xbdd3ef28, 0x3ab5f7f2, 0xbd38d8a3, 0xbd08661b, 0xbd274186, 0x3dc5455d, 
    0xbde2aa71, 0xbc60948b, 0x3d280062, 0x3d728cff, 0xbdc9801d, 0xbe396fb3, 0x3db63097, 0xbdc028f9, 
    0x3cbecc0e, 0xbdfa4b21, 0x3d7c7cbf, 0xbc0c0639, 0xbe28f94e, 0x3dd3a7fa, 0x3cc1d7a9, 0x3db65e95, 
    0x3dd8f46d, 0xbcbe9758, 0x3d8e4b12, 0x3dc6d162, 0x3dda8050, 0x3ccbbb1d, 0x3d77f25e, 0xbe0b4673, 
    0xbe7d6b8e, 0xbe212dad, 0xbdb2a7dc, 0x3d0accc5, 0xbcc970fc, 0x3c752429, 0xbd5db0ae, 0xbd0e89bb, 
    0xbe041332, 0xbc5be7ae, 0xbd239665, 0x3db2e610, 0xbde244d0, 0xbe3b491a, 0x3dae4017, 0xbda30965, 
    0xbd89485a, 0xbd005bd4, 0xbb627adc, 0xbd84b422, 0xbdedb3fc, 0x3d9b398f, 0xbd192939, 0x3dd876a2, 
    0x3db3285a, 0xbc22cc64, 0x3db9dd4d, 0x3d8b8ade, 0x3d7f90b0, 0x3c4cdee9, 0x3d8cd61f, 0xbe1a9a13, 
    0xbe8e64c5, 0xbdf0b836, 0xbd81a6ec, 0x3db6d078, 0x3d5049f7, 0xbb06be51, 0xbd1f3f98, 0xbdbc581d, 
    0xbdcfa2da, 0xbd1b25a3, 0xbdb193a0, 0x3dbc5167, 0xbe06c0c3, 0xbe6da72c, 0x3d6bdebc, 0xbd30b55c, 
    0xbe005eaa, 0x3dbe0caa, 0xbd98edea, 0xbe0567fb, 0xbe0499cc, 0x3dd6aefb, 0xbdf02b09, 0x3d3caefe, 
    0x3d579dcd, 0x3ccbcb0c, 0x3d87be28, 0x3d0de814, 0x3d24ba0e, 0x3ceab79c, 0x3d22aaec, 0xbd9207c8, 
    0xbcb03843, 0xbd1b8e18, 0x3c0b8c4f, 0x3bee6494, 0xbdd19e86, 0x3cc1a9ab, 0xbcb6b839, 0x3d2209bc, 
    0x3cd57db4, 0xbddf4ebb, 0xbd2ad583, 0x3ca03565, 0x3cf44d7d, 0xbd2688b4, 0x3d59c48a, 0xbc70d65c, 
    0x3d0d6976, 0xbd41e399, 0x3db36db9, 0xbd9e1d9e, 0xbca524fe, 0x3cc6ac54, 0xbd57bda4, 0x3d1a1e6a, 
    0x3cdf1d03, 0xbd7444c4, 0x3be9f916, 0x3d3cf893, 0xbd3bb565, 0x3d162dff, 0x3c5c4d98, 0xbc988462, 
    0xbdd5d1d4, 0xbd889939, 0xbcf6427e, 0xbd6a3f91, 0xbd9b70c1, 0xbc4e60ad, 0xbb8e2395, 0x3c2f86aa, 
    0xbc138f9b, 0x3ca65045, 0xbd8aee6a, 0x3cd8203a, 0xbdc64c73, 0xbe08352d, 0x3d947bb1, 0xbd7fef09, 
    0xbcdb4503, 0x3cfb9824, 0x3d996c9f, 0xbdca0b53, 0xbd97f1c7, 0xbac5b441, 0xbd6792ad, 0x3da70f41, 
    0x3d17d8ec, 0xbd7ce8a3, 0x3d99c758, 0x3d48d6cf, 0xbdcaa78e, 0x3ce03690, 0x3e4bf1da, 0x3cd036aa, 
    0xbc8db7e4, 0x3d2eec30, 0x3b96627d, 0xbd4339e3, 0xbd52c32d, 0x3d5d42ea, 0x3dc74877, 0xbd06d5e6, 
    0xbcc59ec2, 0x3ddec53b, 0xbdc6c743, 0x3d5acb49, 0xbd0900f8, 0xbd7df5a2, 0x3d20320e, 0xbc3dd66a, 
    0xbdababe1, 0x3dd7eb21, 0x3cf433ee, 0xbdbc8239, 0xbca04847, 0x3c8b3099, 0xbd92e7e3, 0x3dd696dd, 
    0x3c7a6979, 0xbda61ab7, 0x3da4194d, 0x3d32a7e0, 0xbd586eaa, 0x3d711be7, 0x3e2d4b18, 0x3d9e3586, 
    0xbcf3a64a, 0xbca576d9, 0xbd8d35c0, 0x3c5db1f4, 0xbc5f9584, 0xbd4976c7, 0x3dcd8b5e, 0x3e33eee4, 
    0xbe5dd166, 0xbd1ffe79, 0x3db438d3, 0x3eeda959, 0xbd1a42f9, 0x3d5309b5, 0x3f0063da, 0xbd39ee88, 
    0x3d4daa0c, 0x3bda7d1c, 0xbcde4251, 0x3cdd7a9a, 0x3b3143d1, 0x3ea232d9, 0x3c101a8a, 0xbbeafee3, 
    0x3e238c30, 0xbdfd5641, 0x3ca2cf07, 0xbd99e717, 0x3d140d0c, 0x3e6dab16, 0x3dcee8bb, 0xbd9a2e4e, 
    0xbdd5f6a2, 0xbc025fd6, 0x3b8c1ea1, 0xbc8bf3e7, 0xbc810622, 0xbd732d9f, 0x3d992141, 0x3e1a307c, 
    0xbe538218, 0xbde2dfda, 0x3d978a34, 0x3f1106a4, 0xbc73acc5, 0xbd7b46a6, 0x3f1589a3, 0xbb3df652, 
    0xbc731bde, 0x3b786fc9, 0xbcb0247b, 0xbcf2c706, 0xbdced881, 0x3ee4f731, 0xbdb0ea5e, 0x3cf5293c, 
    0x3e4dbd00, 0xbdb01c44, 0x3cbcbbaa, 0x3d0fec3d, 0x3cfae6b2, 0x3e63bc68, 0x3e089a68, 0xbe0387e9, 
    0xbcdf7ed3, 0xbdb3c26e, 0x3d18128d, 0x3defacb4, 0x3c1b577b, 0xbda0d9b5, 0x3cbc1790, 0x3d094684, 
    0xbe045323, 0xbdb5a097, 0xbc198b41, 0x3f18b753, 0xbcab5073, 0xbcff5b57, 0x3ed32329, 0x3dc61472, 
    0xbda058e8, 0x3e39a030, 0x3bbd8a2f, 0xbcbc9743, 0xbd8adf52, 0x3e932a4e, 0xbdae7336, 0x3e21e6ea, 
    0x3e3b76d1, 0xbd972332, 0x3d82cfb0, 0x3dfdafc8, 0xbd030a5a, 0x3e5217a4, 0x3dfa24a9, 0xbdec03a6, 
    0x3c9fdb5f, 0xbd3f81f2, 0xbdb1c3bb, 0xbd970060, 0x3c14bf4e, 0x3c9fdd40, 0xbca3d202, 0x3c179fb3, 
    0xbb186500, 0x3cf6a9b5, 0xbc9adf8d, 0xbd8e5a56, 0xbe059deb, 0x3cee6c00, 0xbb0fff4e, 0xbd870878, 
    0xbd44d935, 0xbd2ae676, 0xbc02420e, 0xbdb73d44, 0x3d20bcb5, 0xbdc274cc, 0xbdb00668, 0x3c50ef4f, 
    0x3ce653ff, 0x3d798902, 0xbd43b334, 0x3ca3ed3d, 0x3bec5921, 0xbdc9df65, 0x3dc4c3e1, 0xbd462ecf, 
    0x3cdbdf7b, 0xbd33bfbb, 0xbcd68c21, 0xbd1b9a91, 0xbc760569, 0x3c80be22, 0x3c872596, 0xbaabd891, 
    0x3d14d282, 0x3ca9d5e5, 0xbdbd5ed0, 0xbde904f5, 0xbdc27bd9, 0x3d5c1b8b, 0xbcb77606, 0x3bde35e7, 
    0xbd8ca5ce, 0x3c1cf140, 0xbc0ceecf, 0xbdd7ed45, 0x3d6321d2, 0xbdc07b0b, 0xbe18c792, 0xbbaab97b, 
    0x3bd0afa2, 0x3d65f9a0, 0xbd188ce7, 0x3d348f66, 0x3d359834, 0xbde807ae, 0x3d621297, 0xbcac5cf8, 
    0x3c8abb1d, 0xbd3052ea, 0x3d02d01a, 0x3a99232e, 0x3c7bb79c, 0x3cded5f7, 0x3c509ed1, 0xbd37e194, 
    0x3d83ff53, 0xbcc78323, 0xbd903e13, 0xbdab0d5e, 0xbc4fcc45, 0x3d1b3981, 0xbd4e99c2, 0x3d45f9a1, 
    0xbdc3d986, 0x3d1070c2, 0x3c2b79ba, 0xbdff4344, 0x3cee2864, 0xbdc489f1, 0xbe142e05, 0xbbea27d1, 
    0xbd10807b, 0x3d1d9160, 0xbd46ba99, 0x3d4b88e2, 0x3d2b1d40, 0xbdb6307d, 0x3c608e30, 0xbada9ec5, 
    0xbdab85e6, 0xbd55a835, 0xbc945d18, 0x3c4482c0, 0xbd993566, 0xbd8b0e81, 0xbd852e15, 0xbcfb90ba, 
    0xbe75569e, 0xbcd4aa8a, 0xbd0cd6b6, 0x3e490152, 0xbd2131c3, 0xbdacc877, 0xbc6d318f, 0xbd9263b6, 
    0x3db19710, 0xbd3bcb3a, 0xbc20219c, 0x3bab34d7, 0x3a5231b9, 0x3dbfed63, 0x3d1ae997, 0xbe13432b, 
    0xbc527158, 0x3d77818c, 0xbad1ab14, 0xbd954481, 0xbde2d48c, 0x3e659df2, 0xbda8e44e, 0xbdf68fad, 
    0xbdd5c017, 0xbd6664fa, 0xbd5efe84, 0xbc50e0fc, 0xbd9189fd, 0xbdd03843, 0xbddaccdd, 0x3c8ec042, 
    0xbe4e6817, 0xbbccb857, 0x3b67a149, 0x3e476f74, 0xbdb09243, 0xbda030b3, 0x3c847ae1, 0xbdf7ee4f, 
    0x3d7acdb3, 0xbd6ad46c, 0xbc3f074a, 0x3d4cb8c1, 0x3aed652a, 0x3dd10f4e, 0x3dbca490, 0xbdf988bf, 
    0x3ced217a, 0x3d48aee5, 0xbba90a83, 0xbd6c87fa, 0xbe2be34b, 0x3e66e05b, 0xbc8d2e66, 0xbe1ed160, 
    0xbd904a81, 0xbdcceca6, 0xbd4f169c, 0x3cbf868e, 0xbd74dad3, 0xbdadaaba, 0xbdb59743, 0x3c2752e2, 
    0xbe392801, 0xbbc8c557, 0x3ce1af4c, 0x3e40a7d8, 0xbdef31b5, 0xbd99cfdb, 0x3c4acb5c, 0xbdafcf1f, 
    0x3d66e684, 0xbd25d4f8, 0x3bd0160c, 0x3d31b8ab, 0xbcbf072d, 0x3dd36f43, 0x3dfd004e, 0xbd8bbf86, 
    0x3d81394a, 0x3d269f9e, 0x3caa62dc, 0xbc556663, 0xbe371ed3, 0x3e7b3f3c, 0xbd1b3601, 0xbe2c31cd, 
    0x3d332672, 0xbba7d6de, 0xbcd671db, 0x3b7194c3, 0xbd26a8df, 0x3d282b5b, 0x3c55552b, 0xbc315d88, 
    0x3d1cabe4, 0xbd0faa9a, 0x3c85806f, 0x3d0d5e12, 0x3c76a7d0, 0x3d94c2f5, 0x3c97c96b, 0xbd14400a, 
    0x3c005011, 0x3c2c8660, 0xbda24f4d, 0x3c7cd21e, 0x3d530da4, 0x3cc48bfd, 0x3d24d4fa, 0xbc867f8e, 
    0x3d3e990f, 0xbc355045, 0xbd32e26d, 0xbcaf88bb, 0xbd2868c5, 0x3c9c4008, 0xbcb5f328, 0x3b84cb70, 
    0x3d754974, 0x3cc9430c, 0xbc883373, 0x3c7f7613, 0xbd497fa9, 0x3d58ca38, 0x3d1d14a2, 0xbcb988f5, 
    0x3cd9403d, 0xbcc68c1c, 0x3c6e9cfc, 0x3c875963, 0x3be7f75f, 0x3da49694, 0x3d27123b, 0xbd0536bf, 
    0x3b0aabfe, 0x3cb08580, 0xbd9919d2, 0x3ccd93a1, 0x3d903887, 0x3cff639d, 0x3d688170, 0xbc1fc1f3, 
    0x3d2339e7, 0xbc6b2619, 0xbd3dc403, 0xb99061e1, 0xbd139bd0, 0x3cd0eb9b, 0xbd4e6e07, 0x3960d1a3, 
    0x3d2da7e1, 0xbc1ed69e, 0xbc8f1d19, 0x3be626f7, 0xbc9401c9, 0x3cfb1971, 0x3d04b158, 0xbc4a4634, 
    0x3c217ec8, 0xbc820339, 0x3c6c7966, 0x3c2a0272, 0x3bb80e4f, 0x3da1dd58, 0x3d031e02, 0xbced2821, 
    0xbb16e557, 0x3cadf624, 0xbdbd5ad8, 0x3cb288b3, 0x3d95e965, 0x3d0e1762, 0x3d7386ed, 0xbcf706e9, 
    0x3cfffc4e, 0xbcea0c7d, 0xbd321157, 0xbce0854f, 0xbd1ba0d5, 0x3be4ed63, 0xbd8921a6, 0xbcaf2770, 
    0x3dbee786, 0xbd1d9d56, 0xbae48edd, 0xbd057f37, 0xbd40dab9, 0x3d681f63, 0x3dd4124a, 0xbb9f4711, 
    0xbca722a6, 0xbd5824f0, 0xbcb5a654, 0xbea383fb, 0xbd253140, 0x3d898c34, 0xbe4504fa, 0xbc32c851, 
    0xbe08519a, 0xbc947036, 0x3cf91f30, 0xbcc25959, 0x3c944d79, 0xbe69c495, 0x3d772f22, 0x3c8d8552, 
    0xbda1b4cf, 0xbd161c5f, 0x3d98d2af, 0x3e2c6c8a, 0x3d151ada, 0xbe4525e3, 0xbccb6be2, 0x3d33fe08, 
    0x3df4a87f, 0xbcc6ee88, 0xbba4382f, 0xbc918e79, 0xbd3383db, 0x3ddbd786, 0x3df1e0d8, 0xbc92658d, 
    0x3d01a871, 0xbd06550a, 0xbd2fef43, 0xbea9616f, 0x3ca3d376, 0x3de80a82, 0xbe423605, 0xbd30a600, 
    0xbe1a3c67, 0xbd83863b, 0x3d86052d, 0xbd173ea3, 0x3c831e44, 0xbe697ce4, 0x3d186422, 0x3d5cd4f6, 
    0xbe15e32d, 0xbcf2b3c5, 0x3d2c988f, 0x3e3f7ce0, 0x3d39cb90, 0xbe442634, 0x3ca7d700, 0x3d4e5bb3, 
    0x3dcb4e56, 0xbc6952d7, 0x3ae8498f, 0xbdaee616, 0xbdf195af, 0x3dba752d, 0x3df3b7eb, 0xbbd337e5, 
    0x3c1a9f1c, 0xbb3ee0c6, 0xbc0429bd, 0xbeaf6f0c, 0x3cba2272, 0x3e03d368, 0xbe3828f4, 0xbccce139, 
    0xbe189975, 0xbd9da7bf, 0x3d8dde1d, 0xbc3da0d4, 0x3cc1eee0, 0xbe39bc03, 0x3d1ae95b, 0x3cd6ef3b, 
    0xbe09c638, 0xbcdffd88, 0x3cf19ed0, 0x3e2bfc60, 0x3d478330, 0xbe76bad5, 0x3d182003, 0x3da68416
};

static const uint32_t _K37[] = {
    0xbf1b2775, 0xbefcc35e, 0xbfdf7392, 0x3fb8bca9, 0x3ea81fe9, 0xbfa08467, 0xbe634f80, 0x3f90ce9c, 
    0xbd2820e0, 0xbe0a3fe2, 0x3ec90a95, 0xbe6c52ad, 0x3f965101, 0xbf3d5260, 0xbcfe2e00, 0x3ee60639, 
    0xbf9bcb47, 0xbe687bce, 0x400fbb79, 0x3efe3a4a, 0x3faa9cdf, 0x3e99bc6c, 0xbf2b83fa, 0xbe4a05e5, 
    0x3f9bfc8f, 0x3fad67bb, 0x3db14498, 0xbfdfe186, 0x3f63b4c6, 0x3eee15d8, 0xbf8094be, 0xbdff50b4
};

static const uint32_t _K43[] = {
    0xbd20b002, 0xbc1d0c04, 0xbdc1d5ab, 0x3d1bab33, 0x3ca3faf5, 0xbcb8070a, 0xbd077b08, 0x3cd89eeb, 
    0x3c8d1fd3, 0xbca45ad8, 0x3c375869, 0xbd20f292, 0x3d51f1d8, 0xbd0edd76, 0xbdeeeda4, 0x3d02b402, 
    0xbccc546b, 0xbb794981, 0x3d252325, 0xbc0199b6, 0x3c5e659c, 0x3d4840b0, 0xba985fb1, 0xbca102d8, 
    0xbc89770c, 0x3c61183f, 0xbc43abab, 0x3c256afb, 0x3d104cf0, 0xbda751fa, 0xbc493b68, 0xbc9f26cb, 
    0xbcf27b9e, 0xbc8e9a4b, 0xbda9ec29, 0x3d562a8e, 0x3ce1811f, 0xbca1d249, 0xbbd34977, 0x3d058276, 
    0x3c419323, 0xbd533cda, 0x3d10959b, 0x3c4754b2, 0x3d8f40c8, 0xbca4c79b, 0xbdf74d60, 0x3d3b16c2, 
    0xbbc2aeb1, 0x3bc95159, 0x3d1427ee, 0x3c6a92a2, 0xb9b94365, 0x3d631a9f, 0xbc9a6a5e, 0xbd1dfef6, 
    0xba9cdf28, 0x3be548e3, 0x3c89da9c, 0x3bb082c4, 0x3d32fb76, 0xbdbb0a06, 0x3c35bdb0, 0x3c7e2e88, 
    0xbd2eaf89, 0xbcd68253, 0xbdb8e388, 0x3d0d21a1, 0x3d3fbbcf, 0xbc0622ea, 0x3cb27ab4, 0x3c66b1cc, 
    0x3d52b9a4, 0xbd6ac067, 0x3cf1ee49, 0x3b5a1770, 0x3d9de9f3, 0x3ce6f376, 0xbddc04f9, 0x3d368198, 
    0xbb9931df, 0x3d0dea7e, 0x3c905bd9, 0x3c804b9b, 0x3c9ecc26, 0x3d536496, 0xbd04e6cb, 0xbd043be6, 
    0x3abd1f7e, 0x3d13ca26, 0x3c13ecd7, 0x3ca99b49, 0x3d6ad08b, 0xbdbf747c, 0x3abe66c3, 0x3be0ad43, 
    0x3c20d51e, 0xbd519737, 0x3c890540, 0xbe274138, 0x3d9dfe84, 0x3d88cc9b, 0xbcec66b0, 0x3e0cb5c0, 
    0xbca5177a, 0x3cb1a85c, 0xbc12965d, 0x3d6f5b80, 0xbd48bb19, 0xbd9bbc72, 0x3ce4b593, 0xbdce21b0, 
    0xbb61d4a4, 0x3cdbfe66, 0xbdfc11cf, 0xbd8a543b, 0xbda0838f, 0x3c6bc118, 0x3d55419a, 0x3d32e290, 
    0xbd44bc66, 0xbdcc4184, 0xbd6ccbf7, 0x3ca13478, 0xbaf3836d, 0x3cebec0e, 0x3e05d508, 0xbbdcfff6, 
    0x3c6e3fb1, 0xbd4e62a9, 0x3d1e3a1b, 0xbe545481, 0x3c1618c8, 0x3dfca3ff, 0xbc3ab82a, 0x3d84a6f5, 
    0x3d045edf, 0x3cb9fafa, 0x3bec034a, 0x3e052050, 0xbd4df277, 0xbd317d5e, 0x3cb9bcfc, 0xbdc3449c, 
    0xbdac47c0, 0x3cfae226, 0xbe251314, 0xbd83788c, 0xbdb564c3, 0x3cea373a, 0x3d35ea47, 0x3d94e0fd, 
    0xbccda1bc, 0xbe187fcd, 0xbd82f59d, 0x3d2ed62c, 0xbd8faace, 0x3ccf4fe9, 0x3df9067d, 0x3c53ad7c, 
    0xbc115170, 0xbd1632a5, 0x3d3efd62, 0xbe6e2eed, 0x3ba2d3d8, 0x3df369d1, 0xbca36456, 0xbba50ed4, 
    0x3c36e59e, 0xbcf06cb4, 0xbd2634bd, 0x3e0ac17c, 0xbd8ff080, 0xbd8f0aa2, 0x3c99720a, 0xbd5538ec, 
    0xbdc07734, 0x3c18e48b, 0xbe47f26e, 0xbd925a7e, 0xbe1557be, 0xbcee0ebc, 0x3d167b73, 0x3d1dd376, 
    0x3ca3b83d, 0xbdc2c5fa, 0xbd8b2972, 0x3d5af7c6, 0xbdeef5ef, 0x3d9eb417, 0x3d8f0bb2, 0xbcb3cd5d, 
    0x3e8db7eb, 0xbd4e259a, 0x3d91151b, 0xbd8983d9, 0x3d0c622c, 0xbdb14d5f, 0xbb115f4d, 0xbddacedd, 
    0xbd820041, 0xbc9abae7, 0x3cb6ac16, 0xbe012a33, 0xbd4e5cd0, 0xbd9cd53f, 0x3db9e255, 0xbda30566, 
    0xbcf1a666, 0xbca8e60f, 0xbd89643f, 0xbdd37c77, 0xbd017b1d, 0x3d02e581, 0x3cf0d851, 0xbd5ef852, 
    0xbdbe10dd, 0x3c116ec3, 0xbc82b18a, 0x3d29aa5b, 0xbd01610c, 0x3c6576d4, 0x3d835c48, 0xbc73ed1c, 
    0x3e65966a, 0xbe1f2839, 0x3e16c411, 0xbcb27210, 0xbdba7329, 0xbd733712, 0xbdc0f3b4, 0xbdad22c1, 
    0xbe3254e7, 0xbcbf84fa, 0xbc4b813e, 0xbdbb108f, 0xbe28e995, 0xbd28c300, 0x3e4c0529, 0x3b8480d3, 
    0xbd6d5945, 0xbdd3d80a, 0x3c9c6b63, 0xbcf932a4, 0xbc33b4d7, 0xbd18406d, 0x3d7a6c9f, 0xbd602c7d, 
    0xbd8ebc7a, 0x3cbce899, 0x3c98f48f, 0x3d9dc47c, 0xbcbcdc14, 0x3de19d6e, 0x3ccd351a, 0xbdfd9d7d, 
    0x3e85f6cb, 0xbe3284c3, 0x3e19f61a, 0xbc4c7f7e, 0xbe0f1dfa, 0xbda781b4, 0xbcc76ad0, 0xbdbbc523, 
    0xbe2c033f, 0xbcb69117, 0xbd8d61e2, 0xbdeb9d78, 0xbe74a133, 0x3da1c947, 0x3e61fab6, 0x3d2825ff, 
    0x3d4a2fa4, 0xbd99b47c, 0xbc926d81, 0x3d645518, 0xbca28ca4, 0xbd9551dd, 0x3c0528c2, 0xbd6f729a, 
    0xbcb64ee8, 0x3e2e82c4, 0x3da4ad87, 0x3e02fbb0, 0x3c0ffba8, 0x3dcf1e12, 0x3d3dce76, 0xbdf2a0e7, 
    0xbe188e69, 0xbd6b6afa, 0xbe09462b, 0x3c8a5f3f, 0xbc9ce40e, 0xbdee126e, 0xbccd0a1c, 0x3d4031ec, 
    0x3bee3e0b, 0x3d006b19, 0x3ce3ee24, 0x3c48103a, 0xbc7b71e8, 0xbd2cd814, 0xbdbc6818, 0x3d90d901, 
    0xbd787345, 0xbca24a32, 0x3c597219, 0x3cb35b1f, 0xbc9d7fc1, 0x3d5cbcf3, 0xbd304d0e, 0xbd1cb3e7, 
    0x3d6b0891, 0x3d151ffe, 0xbb7c2bac, 0xbda8bfa9, 0x3d4105fa, 0xbced9cd3, 0x3ce56a9f, 0xbc342cf2, 
    0xbe2cd14f, 0x3cf7369a, 0xbe17f7af, 0x3d9fe11d, 0x3d6db277, 0xbd584dc0, 0x3cf989d8, 0x3d9a56b6, 
    0x3c92a00c, 0x3cc65df3, 0x3d39978c, 0xbd84d810, 0x3db9f37b, 0x3c966b2d, 0xbdf9501f, 0x3de28784, 
    0xbc898972, 0x3c8f32cb, 0x3d33ebf9, 0x3d14424f, 0x3d18563a, 0x3daec474, 0xbd22ad5d, 0xbcdac8f4, 
    0x3d881af2, 0x3d85dc64, 0x3ca5e4a7, 0xbce8855b, 0x3ddf3d7b, 0xbdddc2f9, 0x3d29ea25, 0x3d66bf64, 
    0xbe1fb7bd, 0x3c02f37d, 0xbe1db7fe, 0x3d91daa8, 0x3d84ff65, 0xbd12a15b, 0xbcc0ca67, 0x3d57b8a3, 
    0x3c8c6c4f, 0xbb8ef1a8, 0x3d7dbdcf, 0xbce58836, 0x3d654394, 0xbd891038, 0xbdcf743b, 0x3e01017c, 
    0xbcb00b54, 0x3b656532, 0x3d40605f, 0x3d15b246, 0xbc0f6999, 0x3d7cf129, 0xbd734658, 0xbcf8b020, 
    0x3da114d0, 0x3d5debec, 0x3b2d14ee, 0xbc47c253, 0x3ca151ec, 0xbde868ce, 0x3cf48c31, 0x3d4428fc, 
    0xbd087d11, 0xbca78880, 0x3d9c5f14, 0xbd18473b, 0xbdc5b8e6, 0xbd3e501e, 0x3d5eeb88, 0xbdaac7cc, 
    0x3c7d9ea1, 0xbd88512a, 0xbd4eb319, 0x3be9be76, 0xbd67eadf, 0x3e37b948, 0x3d0565d8, 0x3cf1af33, 
    0xbdc43521, 0xbcba9d26, 0xbdb5f736, 0x3df55a53, 0x3c03993f, 0xbd75537b, 0x3d368619, 0xbde0ceb1, 
    0x3e2bd078, 0x3e0d9a8a, 0x3e77bfac, 0x3dd4eebb, 0x3d5496d9, 0xbcbf7181, 0x3cdef987, 0xbcdac1a7, 
    0xbc0ad8a1, 0x3d546393, 0x3dc71420, 0x3cf483f6, 0xbd3b8987, 0xbcf1efad, 0x3b86ea85, 0x3c08edf9, 
    0x3d835437, 0xbd99719c, 0xbd4e97d4, 0xbdaa6043, 0x3ce64bee, 0x3e2e83cd, 0x3d8bba9b, 0x3cb5c6d1, 
    0x3bd55d44, 0x3cdc729a, 0xbd5b5421, 0x3d6dc111, 0x3df2964b, 0xbac372ef, 0x3c3efd23, 0xbda51d7e, 
    0xbb69d916, 0x3d711dd9, 0x3df64358, 0x3da7ac05, 0x3db6a307, 0xbce5c44e, 0xbc0c5d04, 0xbca54f4d, 
    0xbcc1a462, 0x3d649903, 0x3da99b50, 0x3b9fa0da, 0x3d2ad57d, 0xbcbf6be6, 0xbdf25254, 0x3dd017b1, 
    0xbb501e83, 0xbda784b6, 0x3c06e537, 0xbd9bc679, 0x3c86f5a9, 0xbd399e88, 0x3da0aa88, 0x3ce8ed78, 
    0x3ccbdb87, 0xbd77107a, 0xbd3f8807, 0xbbeea573, 0x3cae9942, 0x3cd84e87, 0xba884292, 0xbcc3109b, 
    0xbdca9015, 0x3ccdb61c, 0xbc470f10, 0x3dc3b270, 0xbd7f480e, 0x3bf6d331, 0x3d630661, 0xbc1a53e3, 
    0xbd32ef0d, 0xbae90cde, 0xbc9de33f, 0xbd6ac709, 0xbc45cd16, 0x3bae0e03, 0xbba579d1, 0x3d37f6a8, 
    0xba83539f, 0x3c27354c, 0xbd832727, 0xbc95ed4a, 0xbba257c9, 0x3d41f98f, 0xbc202502, 0x3c45b367, 
    0x3d387362, 0xbc4ccc4e, 0xbdcfbc19, 0x3ca5de68, 0xbda61049, 0xbd3a3b4c, 0x3b2e1f07, 0xbca0d298, 
    0x3c515373, 0x3d0cb7b3, 0x3d33ecc5, 0x3d0c0b17, 0xbbb9f9f9, 0xbc828248, 0x3d06addd, 0xbcdcb54b, 
    0xbcf8e657, 0x3c3372b0, 0xbc9dbb0d, 0xbd2b3c25, 0x386685cb, 0x3cbe1a79, 0xbcbb9978, 0x3cfdc8d9, 
    0xbcc46d41, 0x3c926101, 0xbd701a75, 0x3bc92b33, 0x3a8fff8a, 0xbc15dba2, 0xbc5f7cd0, 0xbb7ee620, 
    0x3ccf16f3, 0xbc2f8860, 0xbda06c47, 0x3c6ef625, 0xbd9cceaa, 0xbc90e2ef, 0x3c58a060, 0xbbf3cf4c, 
    0x3c4aa421, 0x3cb1d53d, 0x3cd8cdab, 0x3cab65f0, 0xbc3eb568, 0x3b4833bb, 0x3d18910b, 0xbbb56604, 
    0xbd2d8092, 0x3ce53b4b, 0xbb9264e2, 0xbd7c9a43, 0xbc4ce61d, 0x3c896d77, 0xbcc6bb14, 0x3c902dc9, 
    0xbc6d4426, 0x3c80e78a, 0xbd8f0846, 0x3d004199, 0xbbee0710, 0xbc8d033c, 0x3afb26cf, 0xbbde43fb, 
    0xbb21d462, 0xbc1461fa, 0xbde27cba, 0x3c5cd87c, 0xbda25c11, 0xbccf7697, 0x3cb3ea86, 0x3c47d8f5, 
    0x3c51709a, 0x3c03e7b5, 0x3cf951c1, 0x3bf9570e, 0xbc8b1ab1, 0xbb977fd1, 0x3ccd40f6, 0x3ccb8308, 
    0xbdaa2d63, 0xbdba7ce7, 0xbda06027, 0x3d8a49f3, 0xbd6a19e8, 0x3ceb4705, 0xbd08777e, 0xbd9ae4d2, 
    0xbe3f1c9d, 0x3e4020f6, 0x3d133573, 0x3c4f73ea, 0xbd0a8563, 0xbe54b3c7, 0xbd7dd54e, 0x3be3e957, 
    0xbd567378, 0xbe29ca55, 0x3e43cd06, 0x3caba0f3, 0xbda5a654, 0x3d83d5e5, 0x3d1b5b05, 0x3e0f3ca2, 
    0x3d69311f, 0xbc2e90ce, 0x3bbce86b, 0x3d65fee5, 0x3b85d901, 0xbdae3720, 0xbd2576de, 0xbda9a23d, 
    0xbdd9e14e, 0x3c817dd5, 0xbdc56e1c, 0x3d4f219b, 0x3c558d9e, 0x3dd0d81d, 0x3cc5f0c2, 0xbd2a6e32, 
    0xbdbe1483, 0x3e12373e, 0xbb0ae99d, 0xbd9dd8ea, 0x3d47e85b, 0x3cd59d50, 0xbdafe144, 0x3dc41d1a, 
    0xbd512fbb, 0xbd317290, 0x3dd2a4f1, 0x3d5123b2, 0xbc2a99da, 0x3ccf507a, 0xbc237ddb, 0x3da07354, 
    0x3cd18e67, 0x3cc314e8, 0x3cec67d0, 0x3d12225b, 0x3de50e3c, 0xbdd0a311, 0xbdad5658, 0x3cc42414, 
    0xbdc4acbd, 0x3e1f7c45, 0xbe0c1b96, 0x3e13e665, 0x3c4b9b61, 0x3e2199d1, 0x3c8226c2, 0xbd07fbfe, 
    0xbd335f66, 0x3e0573be, 0x3d2b775a, 0xbdda82ba, 0x3e04350b, 0xbd140028, 0xbe12b413, 0x3dddb56d, 
    0xbb6e8b66, 0xbc578f22, 0x3e12d706, 0x3d961e1a, 0x3dd10197, 0x3dd34234, 0xbd2c926b, 0x3dc03b5f, 
    0x3d0a8dc2, 0xbc715e2d, 0x3ca7fc7a, 0x3d8bb737, 0x3dbfdf4f, 0xbe425964, 0xbdb3d0fb, 0x3da0f0a1, 
    0xbe3027f6, 0xbd455efd, 0xbc29aca7, 0x3d217592, 0xbe17e268, 0xbdaa6e28, 0xbe4f1ee8, 0x3ce5d563, 
    0xbdfb57f2, 0xbd1b7243, 0xbdb341a9, 0x3de2f397, 0xbe2d1a15, 0x3d83812f, 0x3d3a5b54, 0x3d4a9548, 
    0xbdc6b5b0, 0xbe071c94, 0x3d3bd4c7, 0xbd11a90f, 0x3d8d03a8, 0xbdbd52c9, 0xbda9314c, 0xbd68e336, 
    0x3d091600, 0x3be774ad, 0xbc31a487, 0xbe383bce, 0xbcba24f3, 0x3e33643e, 0xbe1e2a16, 0xbdc58390, 
    0xbe1f680d, 0xbd8e5ae9, 0xbd0153d1, 0x3bedf340, 0x3bcd2ff2, 0xbe39789e, 0xbd9bcf88, 0x3d1e6cf5, 
    0xbd3853a1, 0xbdb01298, 0xbe1c738a, 0x3dd4b831, 0xbd6fb98e, 0x3c93adf8, 0x3d3d8ad2, 0x3c835a3c, 
    0xbd9c66d9, 0xbbd52f21, 0x3cd890c9, 0xbcdc51ab, 0xbcedcf1d, 0xbe373e6c, 0xbdeb8561, 0xbe1893f6, 
    0x3ce5d9f1, 0xbd1f721d, 0xbd974ee9, 0xbe55cae7, 0xbd292363, 0x3e353094, 0xbe00f460, 0xbcc4fdf6, 
    0xbe25f292, 0xbd3a0450, 0xbc43c20c, 0x3bce4976, 0x3dc87097, 0xbe48b4bc, 0x3b25dde5, 0x3d12fe6d, 
    0xbc9e754f, 0xbd00df30, 0xbe267a06, 0x3e0db695, 0xbd53125d, 0xbd193553, 0x3d86dc1a, 0x3d0cc866, 
    0x3ca80b00, 0x3d81dfa5, 0xba22b927, 0xbc963667, 0xbd08cf66, 0xbe3c5073, 0xbd929089, 0xbdc22434, 
    0x3d8bcecd, 0xbdb89fd0, 0xbdc4ce9a, 0xbe8833ba, 0xbd4c007e, 0x3e486675, 0xbe0013bb, 0x3dce2f83, 
    0xbe21c0f2, 0xbd0da13a, 0xbe4d5fcc, 0x3d2333af, 0xbd1c2ca4, 0xbdc042b2, 0xbc94e483, 0xbbb3a98f, 
    0x3d54e897, 0x3c61d747, 0x3cb87604, 0x3d0f70a6, 0x3ce7d94a, 0x3d12aee2, 0xbe3d955b, 0x3d6ab2a7, 
    0xbd8b138f, 0x3c80ff7a, 0x3d7ac2de, 0x3d40c5f3, 0xbcba41b6, 0x3d044fca, 0xbbcfcfa0, 0xbdbd9224, 
    0x3d95d9cb, 0x3db8703f, 0x3d6be340, 0xbc195dcf, 0x3da8d798, 0xbdb967fc, 0x3c930735, 0xbbf3dad6, 
    0xbdd3a716, 0xbc830d5e, 0xbe31ba17, 0x3dd665d5, 0x3d2fbd4b, 0xbd8c8295, 0x3ba22909, 0x3d83ac10, 
    0x3dc2a587, 0x3c382192, 0x3cc31231, 0xbd8fcfde, 0x3df5526d, 0x3d4d6e34, 0xbe3fd6d9, 0x3d9dc095, 
    0xbc3261f4, 0x3d43f694, 0x3d8d93b7, 0x3b106e26, 0x3d26b4f4, 0x3d0f0d90, 0xbc8c3507, 0xbd51e094, 
    0x3d500911, 0x3cf389df, 0xbd2129db, 0x3d859640, 0x3dcf60d3, 0xbe26c7f6, 0xbc3ff0b2, 0x3c48010b, 
    0xbe09fd0c, 0xbd0c99db, 0xbe62589f, 0x3c487cbe, 0x3df05b51, 0xbdc6572e, 0xbdcb3303, 0x3de5ec0d, 
    0x3d8dbae1, 0xbc559c18, 0x3d4ad6e9, 0x3d08c40e, 0x3dd9967a, 0xbe2d5384, 0xbe413a72, 0x3e12d1bb, 
    0x3d6cec01, 0xbbccfdcf, 0x3d33b7cb, 0xbcb6f315, 0xbd04569b, 0x3d615fe8, 0xbd5349a2, 0xbd3b5e79, 
    0x3c935672, 0x3cfdde94, 0xbdc61e79, 0x3d592063, 0xbd73a94d, 0xbe0a0055, 0x3c4645aa, 0xbd2d46f8, 
    0x3d1005c6, 0xbd204a2d, 0x3d247860, 0xbe354369, 0x3d3d3a9a, 0xbcc7bdc3, 0x3d322a8a, 0x3dd385bb, 
    0x3cb893ad, 0xbd83e44a, 0xbcfd526a, 0x3ae927e0, 0xb8a4e65d, 0xbcf892ec, 0x3b2a2bd3, 0xbe05e0db, 
    0x3ca700d3, 0x3ced30dc, 0xbe4a5ee6, 0xbdf5313b, 0xbd621985, 0xbcf84a79, 0xbd76f5d6, 0xbca5ab0d, 
    0xbe0082dc, 0xbd5cf1e4, 0xbd912dd9, 0x3d20dbe7, 0xbd4cf4c5, 0xbd5f4c7f, 0x3d5b2a3c, 0xbc9d0a6c, 
    0x3d1b8ff7, 0xbb0864f3, 0x3dad503f, 0xbe0684a9, 0x3d440e05, 0x3d64aa1a, 0x3d3e52bf, 0x3d48b66a, 
    0x3cc6b818, 0xbcbd122c, 0x3c8838a2, 0x3d989fa4, 0x3ba56310, 0x3cb0abd6, 0x3d035f78, 0xbdb7b036, 
    0xbbf3edee, 0x3ce476af, 0xbe0463d1, 0xbd6b345a, 0xbc611714, 0xbc099fc9, 0xbcfe6231, 0x3d3bc591, 
    0xbcbe90c6, 0xbd7b73c5, 0xbd051b78, 0x3d6208b1, 0xbd827d32, 0xbcb2136e, 0x3d8b3463, 0xbb6594c0, 
    0x3c8b65c5, 0x3b5adbab, 0x3dcef35f, 0xbdf94ffe, 0x3c68446d, 0x3db25db5, 0xbca04421, 0xbc41c895, 
    0x3d0a2c84, 0xbce7dcdd, 0xbcb05929, 0x3d58420e, 0xbcafc059, 0xbcfa3490, 0x3d9c7496, 0xbd75466e, 
    0xbd43036e, 0x3bafff60, 0xbe104723, 0xbd53e092, 0xbd28370d, 0x3c205192, 0xbcd91d71, 0x3d045e7d, 
    0xbcfc515d, 0xbd5a3159, 0xbd6c1d34, 0x3dfdd607, 0xbe0c3d75, 0x3caa80f6, 0x3d2dad9b, 0xbbd02ba7, 
    0x3cb475ab, 0xbdbc42bc, 0x3cd9457e, 0xbbdbf230, 0xbd91b46b, 0xbe0b8cf7, 0xbe076930, 0xbcf320b8, 
    0xbd5a06ee, 0x3d444602, 0xbdeee817, 0xbd575c91, 0xbd9364aa, 0xbd2f9987, 0x3ce4c5ab, 0xbcddd848, 
    0xbd275dd8, 0xbe046b94, 0x3c104670, 0xbd287f89, 0xbd2180a2, 0xbd363656, 0xbd4da156, 0xbd184f13, 
    0x3d1b2fe3, 0xbcfa66ec, 0xbd8d463d, 0xbc9119da, 0x3d443f0f, 0x3d677cc8, 0xbdc9e7a9, 0xbd98e6f5, 
    0x3d4f32ce, 0xbcdae0d0, 0xbb0bf763, 0x3cdc2b03, 0xbe36ef7b, 0xbe118c74, 0xbe1f8218, 0xbcef10f0, 
    0xbc7507e2, 0x3ddf4737, 0xbd1c2792, 0xbd98f1d9, 0xbd5f91da, 0xbd88ffc7, 0x3cf6e018, 0xbd3e42b4, 
    0xbdc9ce0b, 0xbe03c0aa, 0x3d9dc6f5, 0xbd8559b7, 0x3d2da711, 0x3caca3d2, 0xbd5e77d3, 0xbb005cd3, 
    0x3bd5b5b0, 0xbbf91d46, 0xbd800ca6, 0xbb191f79, 0x3d39dfb5, 0x3d03558a, 0xbd9f8418, 0xbd9073c9, 
    0x3ce3abe7, 0x3c338359, 0x3cb33ef0, 0x3d1df40b, 0xbe258938, 0xbdcfa060, 0xbe235b29, 0xbca98509, 
    0xbb1eb40f, 0x3ddc103b, 0x3b89519e, 0xbd87b3ab, 0xbd1431a6, 0xbd1df1f4, 0x3d2cca22, 0xbd4a4278, 
    0xbde5c759, 0xbdec8a3c, 0x3ddd5eb7, 0xbd97195c, 0x3dc986ad, 0x3d288c96, 0xbd5727c8, 0x3d07b582, 
    0xbb8b1c81, 0xbc9e3e82, 0xbd5883bb, 0xbccb672d, 0x3dc4ea10, 0x3ceb3471, 0xbde1b4a9, 0xbd26f219, 
    0x3dbd24e4, 0x3cc92031, 0xbdf8a478, 0x3df526a6, 0xbcdf8d0f, 0x3d7eb56b, 0xbcc28f0c, 0xbdebcc0a, 
    0xbd09d344, 0x3e0eced5, 0xbcec1201, 0x3d8851f0, 0x3d85fcaa, 0x3d494b7b, 0xbdf2b2dc, 0xbc61e057, 
    0x3d1bf476, 0xbd5e5c5d, 0x3e29c972, 0x3d896d7a, 0x3e4fdcf3, 0xbdbb40dd, 0xbd48c1a8, 0x3e97e897, 
    0x3d3dcf66, 0x3d329faa, 0x3d64cd18, 0x3d8b2a05, 0x3da1f5de, 0xbe38b883, 0xbc9d0d3c, 0xbde26f59, 
    0x3d800807, 0x3e7381c4, 0xbe010348, 0x3e3fbdb1, 0xbd1eed13, 0x3d4db636, 0xbdab82eb, 0x3d02fd4c, 
    0x3d1ae505, 0x3dc0f35d, 0x3a4b6856, 0xbd7281f1, 0x3d93215e, 0x3db815b7, 0xbddf4cf1, 0xbd14c320, 
    0x3d9cc4c0, 0x3d030500, 0x3df034d4, 0xbb91d85e, 0x3eab2607, 0xbc7cc590, 0xbd150387, 0x3e8e5cd5, 
    0x3c137a64, 0x3d5cd384, 0x3b7c607f, 0x3dc63adc, 0xbd14a029, 0xbe291e5d, 0xbb48faec, 0xbd9bd63e, 
    0x3d6dfc77, 0x3e5a03c2, 0xbdcb224f, 0x3dc40515, 0xbd4761bd, 0x3dd0f93e, 0xbe5d68ab, 0xbe161401, 
    0xbda96e1f, 0x3db9d09d, 0xbd5a5d6b, 0x3d15453d, 0x3d09fa19, 0xbd48fa83, 0xbe180a38, 0xbb87b2fa, 
    0x3e14bbd1, 0xbe110457, 0x3dff50e7, 0xbc6ea7cb, 0x3ccae927, 0xbdb937dd, 0xbda4f0a3, 0x3e838786, 
    0x3cd868ca, 0x3da698f7, 0xbd717005, 0x3d8e039a, 0xbe7489bf, 0xbe53e7a0, 0x3d6cde2e, 0xbe58e055, 
    0x3d9981d2, 0xbce59df3, 0x3d0e9f40, 0x3c460145, 0xbd5f9620, 0x3d2a8ffe, 0xbe07af84, 0xbdc63fe0, 
    0xbdf169e3, 0xbb755233, 0xbdb8b6be, 0x3d8f6be4, 0xbdbd8c2f, 0xbdd29cdd, 0x3d2d6852, 0xbc2a04aa, 
    0xbde730fb, 0xbdd6f6fb, 0x3d83b0b3, 0xbc7f4469, 0xbc7aa0e6, 0xbd10b942, 0x3caca780, 0x3d02e1f2, 
    0x3b82a8e7, 0xbd694a71, 0xbca2ad45, 0x3c86a844, 0xbdda8256, 0x3cd64328, 0x3c971e2d, 0xbdb44c83, 
    0x3d9d7b20, 0xbd9b98c9, 0x3c3f7262, 0xbbd20492, 0xbc04e865, 0x3d112181, 0xbbb15663, 0xbe2d48cb, 
    0xbd8e5a80, 0x3c5512e3, 0xbdfe1834, 0x3e123ed5, 0xbd9d6e3f, 0xbc334250, 0x3c3ffd66, 0x3d33542c, 
    0xbde55bc9, 0xbdb9fd05, 0x3d73d8ae, 0x3df72075, 0xbd262f56, 0xbdc9f738, 0xbadc049f, 0x3d9e9b12, 
    0x3e3a8b7b, 0x3cd7dde4, 0x3e0e76d8, 0xbb6a78ba, 0xbcc22a39, 0x3d08e091, 0x3b3cb043, 0xbd69de7f, 
    0x3d964f47, 0x3d5c6c47, 0x3c0ffcda, 0x3d874b73, 0xbc5f688e, 0x3d28b99a, 0x3d4f2649, 0xbde72937, 
    0x3d4ae334, 0x3c448937, 0xbd4799a0, 0x3bb08e12, 0x3d0e3c5a, 0x3dfc6a9a, 0x3cc5c291, 0x3d4526cd, 
    0xbdcadcd5, 0x3cb3b05a, 0x3dc13309, 0x3de2f54c, 0x3e00c0ac, 0xbcaa008a, 0xbca7262b, 0x3d9771ff, 
    0x3dc7b0cd, 0x3b7a6832, 0x3dcad0a8, 0x3ba78f06, 0x3d4d13ce, 0x3c0dc1ac, 0xbcca031d, 0x3d8a9f9b, 
    0xbdd514fc, 0xbc952515, 0xbdc6aae9, 0xbda5a0cd, 0xbd19bc5f, 0xbde5f624, 0xbd0ba645, 0xbb4e60b3, 
    0x3d9ca593, 0xbd5ab12a, 0x3c7eaa9e, 0x3d286d43, 0xbc8210c0, 0xbc27d581, 0xbd2abbdc, 0x3d85dea5, 
    0x3b25bf3f, 0xb8df4a67, 0xbd0506ac, 0xbd188670, 0xbd1307b7, 0x3cd910f9, 0xbc6811c0, 0xbd460f06, 
    0xbca909fc, 0x3cfa0feb, 0xbd69b677, 0xbd8c2cba, 0xbd994db3, 0x3db53040, 0x3d05bbdf, 0xbd9e2eb5, 
    0xbdb0b218, 0xbcb9dd27, 0xbe054f95, 0xbd0f2cb5, 0xbd1f239c, 0xbd83db0e, 0x3dcb6e9a, 0xbcc16f81, 
    0x3d7c5047, 0x3bd402f7, 0x3cccc101, 0x3db3caea, 0x3a51ce2e, 0x3d5be0e6, 0xbdede5a9, 0x3da25569, 
    0xbc05285e, 0x3c276f78, 0xbc56c8f6, 0x3cb95f56, 0xbc9a6805, 0x3c794ef4, 0xbd20cac8, 0xbbff847a, 
    0x3cfc61d3, 0x3d822e49, 0x3d65b10f, 0xbe0b7eb1, 0x3d20aac0, 0xbccc6549, 0x3bdfee06, 0x3b8afb63, 
    0xbda6e940, 0x3de3b12e, 0xbde8d64d, 0x3d0a1eda, 0x3cf0ccbd, 0xbcce95c7, 0x3d74bd30, 0x3cd1b6f9, 
    0x3db1fa8d, 0x3ce3bb2d, 0x3cec725e, 0xbc405681, 0x3df6940b, 0x3d9ce632, 0xbe0199c2, 0x3d9835d2, 
    0x3c28e4b0, 0x3dc4ad5d, 0x3bdae73c, 0x3c9fe707, 0x3e04a4cb, 0x3d2a1b74, 0xbc4dee46, 0x3d6e998b, 
    0x3c5a7f3f, 0x3cbb3b8e, 0x3bd53dcc, 0xbdb1532a, 0x3da84295, 0xbda74546, 0xbc008d18, 0x3dafc75a, 
    0xbe299f5e, 0xbdd740dd, 0xbdfd3d3e, 0x3d68d7a1, 0xbe098b2c, 0xbe326af8, 0xbbe4fbeb, 0x3d8c9a12, 
    0x3db1bd83, 0x3d8f3c8f, 0x3d6e12b1, 0x3d734937, 0xbcd244d8, 0x3e00babd, 0xbe11c807, 0xbd6bdd61, 
    0xbc94e5a5, 0x3c804b38, 0x3dab76c5, 0xbd04e6c3, 0x3d7e9fe0, 0x3caadb74, 0x3aca5505, 0xbad9d9b7, 
    0x3d57fbe0, 0x3dc6f8e3, 0x3d062423, 0x3d798f28, 0x3e216d3d, 0xbda93e1e, 0xbc92aced, 0xbd84f8bd, 
    0xbe0d6a4f, 0xbdc01a73, 0xbe1e8100, 0x3ded4dc8, 0x3ce98a29, 0xbe00e17a, 0xbdabdcd8, 0x3e2c49ae, 
    0x3d76989c, 0x3c8d0969, 0x3d0ef9fa, 0x3c83c5eb, 0x3dcf994a, 0x3d227140, 0xbe01e62b, 0xbdbe74fa, 
    0x3d4a7781, 0x3cde2720, 0x3e04e3a3, 0xbda0046c, 0x3cd9a6d3, 0x3c048ec3, 0xbba52883, 0xbd953620, 
    0xbca0638c, 0xbd1ea885, 0xbdd82bd5, 0x3dc8ca22, 0x3df28874, 0xbe343054, 0xbd803832, 0xbda50d4a, 
    0xbde8c17a, 0xbd81073e, 0xbe1c17c7, 0x3c47307d, 0x3db6f39e, 0xbdf7d5a6, 0xbe2425f6, 0x3e045728, 
    0x3d3eeab2, 0x3be1b98a, 0x3d2bf004, 0x3d856069, 0x3dec3fd2, 0xbe1e255d, 0xbe2b46ef, 0x3ccd6e47, 
    0x3d1acc90, 0x3b895768, 0x3c130a82, 0xbddaf3c4, 0xbdaa59d6, 0xbb83c7a7, 0xbcad2d15, 0xbdae3e2f, 
    0xbcb314bb, 0xbd7783c5, 0xbe13058c, 0x3d2aab88, 0xbceca7a4, 0xbe154972, 0x3cf6b036, 0xbcbf944a, 
    0x3e4852bd, 0xbdfb88fc, 0x3d6bb23a, 0xbdaf695d, 0xbc4ee553, 0xbe09b467, 0xbb79c8a5, 0xbe14b2f5, 
    0x3d97f3ef, 0x3d6cc965, 0xbe3f4e4c, 0xbe05af9d, 0xbe28cafa, 0xbda40ce3, 0x3e04b451, 0xbcfd11e6, 
    0xbd9f0c9b, 0x3ca9e15a, 0x3d732e41, 0xbd498cf9, 0xbc838068, 0xbe16127f, 0xbd4c30c7, 0x3cc53935, 
    0xbc77801c, 0xbdad634a, 0xbcee9e33, 0x3c8f0650, 0xbdf0ef5d, 0x3de82886, 0xbd4b547f, 0xbdb8a051, 
    0x3e3bf777, 0xbdc964af, 0x3cdf5cea, 0xbd5c895f, 0xbd25c61f, 0xbdab91f0, 0xbdb8e648, 0xbd6f581e, 
    0x3da6d3b2, 0x3dbe507f, 0xbe29564b, 0xbe060388, 0xbe08e9f7, 0xbdbf0b35, 0x3df166a0, 0xbce67ab7, 
    0xbdaf4100, 0x3d1b152c, 0x3d337a11, 0x3b64b9b1, 0x3c611b54, 0xbdf4268e, 0xbd576ee8, 0x3c500efe, 
    0x3d3058ac, 0xbcc2a559, 0x3d0ea5fe, 0x3cb72d3f, 0xbe0034ff, 0x3d7b255f, 0xbdc8f04c, 0xbdd7480c, 
    0x3e2e8515, 0xbdc5f88c, 0x3ca0564b, 0xbd0dfd61, 0xbe02a65e, 0xbdee53c0, 0xbe08ae6b, 0xbdc03a16, 
    0x3de608ec, 0x3d6dce14, 0xbe141ea8, 0xbe34351d, 0xbe05d62d, 0xbdeea23c, 0x3dadba7a, 0xbce1f624, 
    0xbdcd2cdf, 0xbca0d4be, 0x3d89ea25, 0xbd4f91e1, 0x3d0c2c1f, 0xbe08e28f, 0xbdd62a6c, 0x3c7babee, 
    0xbbc7e63e, 0xbd82aee2, 0x3cf55c4c, 0x3cfcb67e, 0xbdd75267, 0x3d1596ea, 0xbd462ac2, 0xbde4f240, 
    0x3c588b89, 0xbcd2e5f7, 0x3cc7778e, 0xbcf6f141, 0xbc6e1fdd, 0xbd496254, 0xbd31fc5d, 0x3bde3e1d, 
    0xbcd428b3, 0x3b9777d8, 0xbcb89b53, 0xbcdf670a, 0xbcec7d4e, 0xbde0d34b, 0x3c8adc26, 0xbc4e49a3, 
    0x3d3c438b, 0xbcb5797c, 0xbc839950, 0xbdd0949e, 0xbcb7236c, 0xbc159342, 0xbce57ce8, 0x3ba9a89c, 
    0xbd782386, 0xbc44bc5e, 0xbe07c95f, 0x3d32fbcf, 0x3ad52d89, 0xbb6f937d, 0xba1e9f4f, 0xbba80aac, 
    0x3be502e5, 0x3c6b139f, 0x3cc5a299, 0xbb15c2dd, 0xbd133742, 0xbc41556d, 0xbd5f8383, 0x3c834aa8, 
    0x3c21b75e, 0x3c757398, 0xb9e1aad3, 0xbc4b3eea, 0x3c30e1be, 0xbdef1778, 0x3c28f0f5, 0xbd0ff019, 
    0x3c94b92e, 0xbbf7c937, 0x3bec8117, 0xbddc824a, 0x3b1891ef, 0x3c62ee36, 0xbb8cf5d6, 0x3c602652, 
    0xbd805720, 0xbce85be4, 0xbe02a0e7, 0x3d12ec0e, 0x3b5f61c4, 0xb70d5e0e, 0xbccca6e3, 0x3c2894d8, 
    0x3ca0b387, 0x3c860cf3, 0x3ceade13, 0xb9dcc197, 0xbd7cdf5f, 0xbb52b761, 0xbd3bc225, 0xbb9a435a, 
    0x3ce90aa2, 0xbb269d33, 0x3c82b72c, 0xbce70bb4, 0x3ccc701f, 0xbdd1d233, 0x3bde4a0c, 0xbd8d0b45, 
    0x3bb651c0, 0xbc51e189, 0x3b2525cc, 0xbdf3ce00, 0x3cfc9095, 0x3d10edc6, 0xbca85340, 0x3cc7b6ab, 
    0xbdd16a7c, 0xbd0271bc, 0xbded2095, 0x3d0b27b3, 0x3cbad4f6, 0xbc90fe83, 0xbcd2e9e3, 0x3c07934b, 
    0x3e69b37f, 0xbd9bdec1, 0x3da0584b, 0x3c3471b7, 0xbd7c46a0, 0x3d3be165, 0xbccbd729, 0xbdd6cc6c, 
    0x3d2421b4, 0xbd21ccf5, 0xbdcc65fd, 0xbd5058cc, 0xbd4fe51a, 0xbd9cc117, 0x3d7b02c9, 0xbda5557a, 
    0xbdbde493, 0x3c06491e, 0xbd808efd, 0xbc35e705, 0x3d635f16, 0xbdaf5b78, 0xbcf3e358, 0xbc6358a6, 
    0xbd3c7509, 0xbcee5d92, 0xbd0cf1e7, 0x3d49cbbf, 0x3bd83b3d, 0xbc2fccc0, 0xbd934bcd, 0xbe0b79cc, 
    0x3e56a3e0, 0xbd98d37e, 0x3d8d853f, 0x3c22bf3d, 0xbd09be9f, 0x3d6d7073, 0xbb429024, 0xbdc5b469, 
    0x3d6e484f, 0xbd42f4e2, 0xbdc0b2b9, 0xbcd963ec, 0xbd69a16a, 0xbd652d4a, 0x3da67671, 0xbd8c69fd, 
    0xbdb45ae7, 0xbbdd3d09, 0xbcd9a88f, 0xbcb220e5, 0x3d4166f9, 0xbd897257, 0xbd2cdcd5, 0xbc2e0d32, 
    0x3b04a6d6, 0xbd3cc0e7, 0x3b73d085, 0x3d0646a1, 0x3c107435, 0x3cf51036, 0xbcb7cb71, 0xbdfb9b4b, 
    0x3e6780f9, 0xbd984968, 0x3d80af99, 0x3beba981, 0xbd0a7c5c, 0x3d6b0542, 0xbd2b5422, 0xbd9ec732, 
    0x3d418a72, 0xbd53a26d, 0xbd5f5ac1, 0xbd3e0167, 0xbcf5e920, 0xbd6cfe00, 0x3d76b72f, 0xbd9181bd, 
    0xbdc9d65e, 0xbb36b036, 0xbd2d4ebe, 0xbd408f21, 0x3cb88233, 0xbd34bbac, 0xbcb8579f, 0xbb5904bd, 
    0xbd86979c, 0xbd500a3f, 0xbcff8c45, 0x3d329cc5, 0xbcc6dcaa, 0x3ce972ab, 0xbc21a7a9, 0xbe00411c, 
    0xbaba75ff, 0x3c3841b5, 0x3cb97b64, 0xbd102b90, 0xb73b993e, 0x3cd932a5, 0xbc01b814, 0x3cc685b3, 
    0xbb87ddac, 0xbc2c2014, 0xbb20eff9, 0xbc42481e, 0x3ac52144, 0xbd8bbc0d, 0x3c0bb6f3, 0x3bb6c219, 
    0xbca1c5ae, 0xbc935e17, 0xbdb18020, 0x3bba7e11, 0xbdb1d29e, 0xbc750f62, 0x3bac998e, 0xbce24f64, 
    0xbce61bab, 0xbcdaa868, 0xbc8203a8, 0x3cd6444d, 0xbd007e1e, 0xbc1fabdc, 0x3d2183ee, 0x3b951233, 
    0xbaba8dc1, 0x3d18f936, 0x3b933c85, 0xbc92244c, 0x3b9e86d8, 0x3d3647c5, 0x3ca1eb70, 0xba0c2287, 
    0xbc887135, 0xbc605aca, 0xbb370742, 0x3c4d8421, 0x3c85ecda, 0xbd411473, 0xbb08ebd2, 0x3ce76826, 
    0xbd069b79, 0xbc87d8f8, 0xbdaae535, 0x3c25537f, 0xbe02bf19, 0xbc84ce6e, 0xbc015088, 0xbcd51637, 
    0x39d49b91, 0x3b65c92a, 0x3be14ae7, 0x3c70432e, 0xbb785693, 0xbba38c0f, 0x3d0d787e, 0x3cf555a2, 
    0xbb903953, 0x3cefab9e, 0x3bbe11f7, 0xbcb1f8ba, 0x3c82d8db, 0x3d1d1396, 0x3c82ec9f, 0xbc2b6cb5, 
    0xbba88415, 0xbca88f01, 0x3af2f3b6, 0xbbaaeabf, 0x3cfbd47d, 0xbd36eec3, 0x3b7700c7, 0x3d079be8, 
    0xbca2adaf, 0xbc38032e, 0xbdc800ba, 0x3cfe1aca, 0xbdef3b3b, 0xbc069dcb, 0x3b124448, 0xbd0e8abe, 
    0x3ce91772, 0x3d047715, 0x3d1c4252, 0x3c518015, 0xbb9682fb, 0xbcdfbba1, 0x3cdc0796, 0x3d729f14, 
    0x3d0c8d73, 0xbd88257a, 0x3d9c9099, 0xbd942150, 0xbcf2357d, 0xbdd9f668, 0xbd6b220b, 0xbd04ec6f, 
    0xbd5074f9, 0x3d8afd4d, 0xbd1388da, 0xbdd67ace, 0xbcd36eba, 0xbe39cddc, 0x3d99d442, 0xbd16dbab, 
    0x3dafc867, 0xbd4ee701, 0xbb1a1b49, 0xbea09780, 0xbdd4b98a, 0x3bd4ae1f, 0xbcd8edfa, 0x3d319a0c, 
    0xbe5f1c21, 0x3cfc6d00, 0xbe46508a, 0x3e2233ee, 0xbc6bc25c, 0x3ced9184, 0xbb1f0067, 0x3a58b1b0, 
    0x3d711b37, 0x3d0759d0, 0x3dcff31f, 0xbb97097e, 0xbd7523af, 0x3ca9208c, 0xbd3fefb0, 0x3bf423c2, 
    0x3d20e1c8, 0x3d9bed74, 0x3bc0a3c5, 0xbde57fd1, 0x3d514d21, 0xbe35659b, 0x3d5181f9, 0xbcab6aff, 
    0x3d552a5e, 0xbcc71de2, 0x3ca9b9b9, 0xbe8bda59, 0x3af9e801, 0x3d93ac0e, 0xbc1d52bc, 0x3d5fcb7c, 
    0xbe6d2470, 0x3dab5eae, 0xbe02ee7d, 0x3e0db26d, 0xbb4c9fa8, 0xbc887a8e, 0xbd3ab7ec, 0x3d0a1a5a, 
    0x3d3e534e, 0x3da65cca, 0x3d287ed2, 0x3aba1973, 0xbddef092, 0x3d8fc841, 0x39a7de0f, 0xbcfcb322, 
    0x3de47326, 0x3d44350d, 0x3d49efb1, 0xbe27641f, 0x3da786c7, 0xbe11b322, 0x3d2f9c3b, 0xbdc28255, 
    0x3d1dc36c, 0x3d3d3759, 0x3d265361, 0xbe80012f, 0x3d8d07a1, 0x3e387f87, 0xbd12f759, 0x3d86b5f4, 
    0xbea6dc52, 0x3cadccf4, 0xbd85ce91, 0x3dd81fe9, 0x3c65f496, 0xbd198ed7, 0xbd00c897, 0x3d2c05e4, 
    0x3b57a327, 0xbdc2795f, 0x3d6cae09, 0xbe389d84, 0x3dc43c4b, 0x3ca5c159, 0x3d240b98, 0x3e2602e9, 
    0xbbb1af5d, 0x3cf20b3d, 0x3d0861ae, 0x3d10d3a0, 0xbd66410f, 0x3dee2c61, 0x3c0d92b2, 0xbe1de865, 
    0x3d6ace0c, 0x3d229215, 0xbe653c64, 0xbe153ea3, 0xbe03fb46, 0x3d3a55b9, 0x3d3a5b75, 0x3da0383a, 
    0xbd997cff, 0xbda3844e, 0xba11b822, 0x3db4fdb5, 0x3d4a1d8f, 0x3c1e1b8d, 0x3df73e7c, 0xbccc5657, 
    0xbd0291a7, 0xbdbda37f, 0x3dbedb7c, 0xbe4c2c02, 0x3d633ac7, 0x3d2d5746, 0x3c98d5e3, 0x3e0448ac, 
    0x3d4cad6c, 0x3c4f2822, 0xbc18d4f2, 0x3dfcba2f, 0x3c82ca18, 0x3d67c054, 0x3ca6e5fe, 0xbdee253e, 
    0xbc00003d, 0x3d81e730, 0xbe4817fd, 0xbe02a813, 0xbdd1e8f4, 0x3d01d463, 0x3d87c677, 0x3dddafbb, 
    0xbdb153cd, 0xbe3185e4, 0xbd99802f, 0x3dbe49a2, 0xbcd3c237, 0x3d197764, 0x3ddeb508, 0xbd1226e1, 
    0x3b8d3c67, 0xbd38342a, 0x3e05aaca, 0xbe51c560, 0x3d22831a, 0x3e1cd8e6, 0xbba79813, 0x3d5e4cd7, 
    0x3c255686, 0xbd110c95, 0x3ca9d6d3, 0x3e21299b, 0xbccf9a7c, 0xbd04685c, 0x3d3cb774, 0xbddeaf9a, 
    0xbd3e3f09, 0x3cd90eb3, 0xbe59de2a, 0xbdf0acc8, 0xbdda4614, 0x3d1ca95f, 0x3d4d378c, 0x3dfaba8f, 
    0xbd0d789e, 0xbe38a138, 0xbdfdf954, 0x3de63d8c, 0xbdd99b77, 0x3d0f2cbd, 0x3dc8fc78, 0xbcb5ed1f, 
    0x3d655cbf, 0x3d4c9659, 0x3d965271, 0xbc9e5d4e, 0xbcbb03b0, 0xbe36b0d6, 0x3c929de1, 0x3dadc09f, 
    0x3d11539b, 0xbdcc86e9, 0x3ce0b8a4, 0xbe15b8be, 0x3d6feeb6, 0x3dcbf488, 0x3d494716, 0x3ce413ba, 
    0x3e0f68a0, 0x3d9a4cba, 0xbd6b82bb, 0xbd8bfc16, 0x3d8b7ede, 0x3cd04fcb, 0x3d07a37c, 0x3ce7314a, 
    0xbd94bf9c, 0x3dd671ff, 0x3c121b65, 0x3e7724a1, 0x3cbc631d, 0xbc5d4438, 0x3ca2e93a, 0x3cbcd6b4, 
    0x3db5f660, 0x3d34bdb7, 0x3d81ceab, 0xbd43552f, 0xbc1b51b3, 0xbe18be0d, 0x3ca069b5, 0x3d49f3cd, 
    0x3c20172d, 0xbd4554af, 0x3d5594e8, 0xbd84a980, 0x3cfa176f, 0x3b96e973, 0x3cd8e987, 0x3b5fcea9, 
    0x3dc73a92, 0x3c884f7f, 0xbd0ccc22, 0xbc859714, 0x3a6d6ff1, 0x3d24478c, 0x3d180f2d, 0x3d2d784a, 
    0xbd316e9f, 0x3de43660, 0x3d205674, 0x3e3ce3ee, 0x3bc26c74, 0xbccb32f2, 0x3d1285a6, 0x3d1c728c, 
    0x3da01566, 0x3e09dcf6, 0x3d3049be, 0xbc8cd454, 0x3c18adf6, 0xbe1b4d24, 0x3e283c70, 0x3d3941d2, 
    0x3cfc61ac, 0xbd60e746, 0x3d89b01f, 0xbdc2bf3c, 0x3de7b36d, 0x3d5fecd2, 0x3c13e3f5, 0x3d0ab7db, 
    0x3dd954c6, 0x3db876d4, 0xbd928d26, 0xbc017478, 0x3d5a027f, 0x3bf4d985, 0x3d6a2e13, 0x3d8a411a, 
    0xbcbcbda6, 0x3dcf7464, 0x3db7968d, 0x3e277ea5, 0x3d54e4ed, 0xbda236e5, 0x392ab947, 0x3e26362b, 
    0xbd4439ff, 0xbc8980c0, 0x3d069fc8, 0xbbbbf57a, 0x3c06ea16, 0x3ce2b706, 0xbb487200, 0xbccbdcc7, 
    0xbd0c80a1, 0xbd8a7a63, 0xbd002bad, 0x3d0a73b8, 0xbcd53771, 0xbc9d1428, 0x3c8fafeb, 0x3dc3df5d, 
    0xbcb477cc, 0xbcfd6457, 0x3c163dac, 0x3dd690a0, 0xbd01c88a, 0xbca87b83, 0x3cdced89, 0xbba356b9, 
    0x3d9af677, 0xbb1deb5b, 0x3d854102, 0x3c5586f4, 0xbbeec5bd, 0x3d1c7537, 0xbd1bd6ad, 0x3ca62aca, 
    0xbd2d2dcc, 0x3c8b50df, 0x3c5babca, 0x3c177d8d, 0xbc8572fe, 0x3cc48ac4, 0x3d4e79b4, 0xbd1b3dfb, 
    0x3c9271d8, 0xbd863ff1, 0xbda49415, 0x3ce891f4, 0x3ba36c35, 0x3d256486, 0x3cd94c9a, 0x3dc3ad3c, 
    0xbd0b4b80, 0x3cb2491b, 0xbca4b50f, 0x3e41fb4c, 0x3c96f761, 0xbcd98419, 0x3c2d6f8b, 0xbc7f424b, 
    0x3ddf4a57, 0x3d581423, 0x3e3a40a8, 0xbaa59235, 0x3d1af994, 0x3d1d842d, 0xbd9228e7, 0x3d360787, 
    0xbd0d2029, 0x3d5f7dcf, 0x3cb73762, 0x3d284bdb, 0xbc432449, 0x3cdc109c, 0x3c5eda76, 0x3c41575d, 
    0x3d9acaea, 0xbcb78f7c, 0xbab62833, 0xbd2fc183, 0x3cc52f28, 0x3d6e363c, 0x3d30d096, 0x3c33969d, 
    0xbd2127cc, 0x3d393ffd, 0x3ca3e78c, 0xbb6b8ef5, 0x3dbee65f, 0x3d23ef91, 0xbc916df2, 0xbc3c793f, 
    0xbc826783, 0xbca21df8, 0xbab46d86, 0xbc587378, 0x3cf46823, 0x3cbedbcb, 0xbd939bbe, 0x3d6f24ad, 
    0xbd7f4801, 0x3ce562f5, 0xbdb043ee, 0x3d6b682d, 0xbc33a4a4, 0xbc1d2de8, 0xbba4fbbd, 0x3cd42734, 
    0x3d78069c, 0xbc6a4c51, 0x3d0b40d7, 0xbd45b414, 0x3d898e41, 0x3b9aa32a, 0xbdd02be8, 0x3cb4b5df, 
    0xbc713f1d, 0x3c75b403, 0x3c610adb, 0xbc83ceef, 0x3d42667b, 0x3d406b7b, 0xbc478326, 0xbc0441a9, 
    0xbc96fa5e, 0x3c85a6f6, 0xbc074509, 0xbc77b437, 0x3d2d2da4, 0xbd75e029, 0xbd3e609e, 0x3a4de997, 
    0xbd5d7cde, 0x3cccd4f7, 0xbda54be7, 0x3d685954, 0x3c621176, 0x3c2796c2, 0xbc0dfa64, 0x3cef4a8c, 
    0x3d10a2f1, 0xbcc31fb9, 0x3d1cc0af, 0x3ca10a04, 0x3d6925bf, 0xbc91ce43, 0xbdcb80ab, 0x3d3c8cfb, 
    0xbc66aae0, 0x3c22f419, 0x3cb38101, 0x3c53ef71, 0x3c745f4a, 0x3d3b7f3b, 0xbc66817d, 0xbc6c0609, 
    0x3bfef3a3, 0x3bbcb4c0, 0x3c8f65f8, 0xbb2f7f81, 0x3d461ed4, 0xbd9e6536, 0xbd3c8caa, 0x3c86584e, 
    0xbd885f2e, 0x3cd8f41a, 0xbd87c36f, 0x3d0402ff, 0x3d18b034, 0x37f2408e, 0x3cda35d8, 0x3c65226d, 
    0x3d16d9fc, 0xbd892953, 0x3d7572dd, 0x3c935c94, 0x3da35d8f, 0x3ce9abed, 0xbdd37285, 0x3d38dcf1, 
    0xbc1f7ee7, 0x3ca0b16d, 0x3cbc4d2f, 0x3c61a4d8, 0x3c8ee971, 0x3d23febd, 0xbcb1db29, 0xbc2e29d4, 
    0x3c855ef7, 0x3cc1a627, 0x3d0c96c0, 0x3ba07d34, 0x3d4c1b0a, 0xbdc2af91, 0xbcb4edc4, 0x3d1534df, 
    0xbd1ced14, 0xbd71fb28, 0xbb89fa5b, 0x3c952f05, 0xbd46535a, 0xbcc9a47d, 0xbdb4fdb6, 0x3d289c66, 
    0x3d7ae0c3, 0xbe019d8f, 0xbdbe8def, 0x3d9aae5a, 0xbdc0806c, 0x3dd3152c, 0x3d97aa98, 0x3dd97d04, 
    0x3c8c9570, 0x3d81520d, 0xbd4607d5, 0x3d478f45, 0xbddd6e27, 0xbb37665d, 0xbc505655, 0xbe5ef2dd, 
    0xbcbf0f6c, 0x3d9013fc, 0x3cf250c7, 0x3d2daaa2, 0xbd1c35dc, 0x3e0a8a8a, 0xbd9190f9, 0xbda213e3, 
    0xbd94d62d, 0xbd93822b, 0x38a31723, 0x3c288a55, 0xbdaadf9a, 0xbd294077, 0xbddb1f5d, 0xbcc63770, 
    0x3d74596b, 0xbdc9a023, 0xbe185efa, 0x3d9c3888, 0xbde61bbd, 0x3d8f632f, 0x3d0a9c3a, 0x3dc2a4de, 
    0x3990b57e, 0xbca9bcd9, 0xbc82737a, 0x3d18d6ac, 0xbdbf210c, 0xbc14dabf, 0xbd29246b, 0xbe449c08, 
    0x3c97ef8e, 0x3d312512, 0xbc9f6ffd, 0xbc03fad6, 0xbd195f56, 0x3dd32d6b, 0xbdac53cf, 0xbdbc901a, 
    0xbda5b68b, 0xbb25d0a6, 0xbcde4055, 0x3d8fb536, 0xbd9e24af, 0xbcb0c6ca, 0xbdab04fe, 0xbd3c65cc, 
    0x3b89b865, 0xbdc3b457, 0xbe0377d7, 0x3d9ddc29, 0xbdbac93e, 0x3c81179f, 0x3d1f4854, 0x3d366e70, 
    0xbd654689, 0xbd61d4d4, 0x3c9161b1, 0x3c4b999a, 0x3d645f3b, 0xb8908ca3, 0xbd171ade, 0xbe24b791, 
    0x3ba82c2f, 0x3bf68037, 0xbc942e8f, 0x3b29dbaa, 0x3c81ae97, 0x3de0f3b6, 0xbdac48dd, 0xbdc3f3ee, 
    0x3d8423b6, 0xbd974d8a, 0x3bcbce9e, 0xbd3e2d08, 0xbd39ab63, 0x3d4cb480, 0xbd7e68d1, 0xbe40a365, 
    0xbd83ee7c, 0x3db5b1e6, 0xbd6f9d5f, 0x3d00d51d, 0xbd8c391f, 0xbe2927df, 0x3bdec6fa, 0xbe0155e1, 
    0x3b911556, 0xbd4201fe, 0x3c8e7044, 0xbb12b60e, 0xbd72e6fb, 0xbc9ed987, 0xbd19b6ba, 0x3d648a08, 
    0x3c7045d0, 0xbe2b64f3, 0xbd3ce968, 0xbac5da0c, 0xbd456dd0, 0xbb7cdb09, 0xbe131ef3, 0xbdcddef3, 
    0x3d875807, 0xbd494e64, 0x3d3bbe16, 0xbd1b5977, 0xbdb85c2d, 0x3db103ef, 0xbd32a463, 0xbe2b7e90, 
    0xbd1b3db5, 0x3df55e7f, 0xbcacc05d, 0x3ccaf7b3, 0xbd05f347, 0xbdcf0a3e, 0x39cfe518, 0xbdc1cdbf, 
    0xbc89baff, 0xbd646c5e, 0x3d54ffd0, 0x3c10ec8a, 0xbc942770, 0x3ccfed83, 0xbc946aa2, 0x3da3443d, 
    0x3d06d156, 0xbe08f202, 0xbd042c15, 0xbc341a25, 0xbd52aa72, 0x3b8def19, 0xbe0ddae5, 0xbd337c19, 
    0x3d4ed01c, 0xbd3a9462, 0x3cb4ae33, 0xbc2b8d07, 0xbe1b2e2e, 0x3dda89d2, 0xbd6564e0, 0xbe377838, 
    0xbcf4e318, 0x3de2ea75, 0x3c620ea4, 0x3d68b3f0, 0xbd909d29, 0xbdba8f7a, 0xbc1381ac, 0xbdcb57e3, 
    0xbd6809bf, 0xbdbd3464, 0x3d898584, 0x3c8f748c, 0x3d289555, 0x3c6e135c, 0xbd768d84, 0x3dd4e3d0, 
    0x3cb299d7, 0xbe1f8d4f, 0xbce357d4, 0x3c7462b0, 0xbd206b47, 0xbd1d294c, 0xbe0e3579, 0xbddf4c44, 
    0x3e6aa0a2, 0xbdf053a0, 0x3d8bd75a, 0xbd0cab9a, 0x3c987267, 0xbde89892, 0x3d21cec6, 0xbdb11f85, 
    0xbd84f266, 0xbd0229ee, 0xbd34a56a, 0xbde7ae84, 0xbde1a2ff, 0xbcd2dc66, 0x3de57f3f, 0xbd58521b, 
    0x3c35eb32, 0x3a3615f4, 0xbc804c46, 0xbda22145, 0xbd3a2f01, 0xbd0dbb65, 0x3bbb1012, 0xbd0ebe68, 
    0xbd9447f4, 0xbd03c172, 0xbd611a69, 0x3cc6fe8e, 0xbcf9a0bf, 0x3c2847fb, 0xbc279ec0, 0xbd3aa697, 
    0x3e56662b, 0xbe27cf98, 0x3e13fc79, 0xbd12b344, 0xbd39c634, 0xbd44f582, 0xbd9f9daf, 0xbd95be46, 
    0xbda9fe63, 0x3c5fae12, 0xbcfc0334, 0xbd816bc0, 0xbe249ffc, 0x3a452e87, 0x3e3fc518, 0xbc2764fb, 
    0xbd37afd6, 0xbd3aca98, 0x3c2461db, 0xbca0747b, 0x3b0372a0, 0xbcfb5af9, 0x3c46478e, 0xbcaf20ec, 
    0xbca13529, 0x3d09d503, 0x3d062c30, 0x3dd3a463, 0xbccfa503, 0x3d6488b5, 0xbce77ad8, 0xbdee46a6, 
    0x3e5bebc9, 0xbe19f9a9, 0x3e10ba7e, 0xbc0f0eb0, 0xbd259eb1, 0xbd2b83d1, 0x3b0fd4d1, 0xbd7ea3bb, 
    0xbdaa31d4, 0xbb489ba5, 0xbdd52afc, 0xbdacb2f7, 0xbe2d0dd8, 0x3d8e8fcb, 0x3e4611cd, 0x3cfd76a7, 
    0x3c41bab9, 0xbd45f2fb, 0xbc04fdd2, 0x3cca1339, 0xbd479f42, 0xbd4be439, 0x3c5ea338, 0xbd47c45c, 
    0xbc5750aa, 0x3e078307, 0x3dbabaa3, 0x3dff5e2d, 0x3ce57c9b, 0x3d8440d7, 0x3ae60380, 0xbdb26be5, 
    0x3e5fef9c, 0xbd80c184, 0x3d814cf9, 0x3c93b4cc, 0xbe5cfa27, 0xbcacb7ab, 0xbdff6001, 0xbdb7429f, 
    0xbd223090, 0xbd797e84, 0xbace1b0c, 0xbd21fc10, 0xbd331408, 0xbdd07046, 0x3d078cff, 0xbd4ca191, 
    0xbda25f95, 0xbd9fd0be, 0x3ce21c93, 0xbd78b1c4, 0xbc82c024, 0x3c86ad29, 0xbd7a4a9c, 0xbd510993, 
    0xbdf5108b, 0xbd78ef01, 0xbd36cd92, 0x3dc4e33b, 0x3bed8265, 0x3a64e4b6, 0xbcf349c8, 0xbdba47c3, 
    0x3e3d5f74, 0x3b91de54, 0x3da283e4, 0x3d696934, 0xbe615d83, 0xbb31d78f, 0xbdfeb9d9, 0xbd27b6ec, 
    0x3d15eccc, 0xbd14c010, 0x3ce87cbf, 0xbc8d5672, 0xbb20aa6f, 0xbd816f38, 0x3d78ca43, 0xbc21685a, 
    0xbd995aa7, 0xbc0df567, 0x3dc51b53, 0xbd4cdfed, 0x3d5431bc, 0x3d267575, 0xbd8f1eb3, 0xbd498434, 
    0xbcd3a772, 0xbc532fdd, 0xbd19513c, 0x3dc1f872, 0x3d53ac27, 0x3d292cc3, 0xbc7aa7a0, 0xbd8b6cb8, 
    0x3e5c6436, 0x3c1ddb12, 0x3d9d8cc0, 0x3d3db707, 0xbe6eba03, 0x3cf4686b, 0xbe03d137, 0xbd1b0618, 
    0x3ce4e479, 0xbd65ef8d, 0x3d2ce8a5, 0xbd40843d, 0x3c0c8cd7, 0xbd5a1256, 0x3d5ba114, 0xbb0a9232, 
    0xbdad4a50, 0xbd656b03, 0x3dd4ac99, 0xbd1b1cd4, 0x3d7e9f41, 0x3d42a377, 0xbd992cc6, 0xbd0dccff, 
    0xbd4f8ea1, 0xbb6e0d53, 0xbce76db4, 0x3dab1aea, 0x3d5c47cb, 0x3c77b1d1, 0xbbea0ef4, 0xbd52914a, 
    0xbdbb2cbf, 0xbda17aa4, 0x3d67238f, 0xbd8995de, 0xbd7c9031, 0xbd88fc5f, 0xbd2a5486, 0x3c2c23fa, 
    0xbda0098d, 0x3d54451b, 0x3ca922d6, 0xbdeb80e0, 0xbd987229, 0xbe3bee02, 0x3dbdb6be, 0x3d339ca2, 
    0x3d978adf, 0xbd107fd0, 0x3cdd1f10, 0xbe26734b, 0xbd82bfcf, 0x3d5c7a35, 0xbd317c99, 0x3d75f58d, 
    0xbe4ba1e6, 0x3d48f0e1, 0xbe0c95da, 0x3d4ed1ce, 0x3cc246a2, 0x3ccd6cba, 0xbcd4ba98, 0xbcc65382, 
    0xbdbe4cb3, 0x3b675868, 0x3d440138, 0xbc723729, 0xbd85afd5, 0x3b2f8970, 0xbd3b0e87, 0xbbd6a409, 
    0x3acd4009, 0x3d74b888, 0x3d74b1d6, 0xbdd2b45a, 0x3ccb0bf4, 0xbe600beb, 0x3d843fab, 0x3d79238b, 
    0x3d0294fa, 0xbcb9bebc, 0x3d0fe83b, 0xbe13aaf7, 0x3b016166, 0x3de9a578, 0xbd44cc03, 0x3d6f25c5, 
    0xbe62c214, 0x3d934710, 0xbda3e9d8, 0x3d64724e, 0xbbe192b1, 0xba352187, 0xbd895aa6, 0x3d8d6fe4, 
    0xbd9e28ac, 0x3d9562b1, 0x3d0e150f, 0x3d007d26, 0xbd96b632, 0x3d320706, 0xbc1404b7, 0xbc85e930, 
    0x3dc54716, 0x3c1423a5, 0x3dcd9959, 0xbe4690a5, 0x3d2eefe2, 0xbe431cc4, 0x3c9059a2, 0xbbeb1b89, 
    0x3cd5e5c5, 0x3c5c20f8, 0xbb51e1d4, 0xbdfbe5ae, 0x3d9ae987, 0x3e3e8dc1, 0xbd91ef42, 0x3d938f5b, 
    0xbe9552cc, 0x3d976334, 0xbcac41d5, 0x3c5b0141, 0x3d164550, 0xbd4b08f0, 0xbd8366b8, 0x3d543707, 
    0xbd4c97d8, 0xbde8fe4e, 0xbd2d2755, 0xbd179e2e, 0xbd0105b7, 0xbd575b7e, 0x3cc024cd, 0x3b6194fc, 
    0x3d8b2d42, 0xbdb221fa, 0x3c418916, 0x3d1ad338, 0xbd705011, 0x3d7a6e66, 0xbc502311, 0xbda09c97, 
    0x3d975873, 0x3d3369c1, 0xbc356dce, 0xbd61dda9, 0xbbfbbe52, 0xbd92eab7, 0xbd0ff9ae, 0xbdb0e3f1, 
    0xbd6619ea, 0x3dc7dac7, 0x3c061766, 0x3dc4dd63, 0x3c9fc5c8, 0x3a80f086, 0x3cbc2b6d, 0xbd982425, 
    0xbd896649, 0xbd007975, 0xbd6914f1, 0x3c874ef0, 0x3cdf3763, 0xbc477f53, 0x3c32ce58, 0x3dab95e7, 
    0x3e080b27, 0xbd599239, 0x3d5cbf49, 0xbced5c79, 0x3e187a13, 0x3d6cf14a, 0xbd02e557, 0xbd7b5adf, 
    0x3d95a280, 0x3dbcad47, 0x3d105de4, 0xbe172d96, 0x3d862b54, 0xbc74cd4d, 0xbbd20a00, 0xbc8def02, 
    0xbde1a81a, 0x3c8652cd, 0xbda17b3e, 0x3d8daa73, 0x3d0fc4c4, 0xbd497fd4, 0x3b3d664d, 0xbd4f3c2d, 
    0xbd67065e, 0x3d3f07cf, 0xbda3939b, 0x3cc59f0e, 0x3e0e7b11, 0xbbe2487e, 0xbd10690b, 0x3e0a5ee6, 
    0x3da30537, 0xbdb02f03, 0x3d7107d4, 0xbc8cbb2b, 0x3e746760, 0xbdebb492, 0xbd7b59c8, 0x3cec4541, 
    0x3cc76e4c, 0x3d35ab9e, 0xbc4f17fb, 0xbdfc22b1, 0xba02bc02, 0x3c7205c6, 0xbcd6b638, 0xbc832f55, 
    0xbe336239, 0xbd0111f0, 0xbe14a968, 0x3d071179, 0xbd0ab439, 0xbdb90708, 0x3c7b5ba3, 0x3d59099e, 
    0x3f11ea73, 0xbd9ae20e, 0x3e5f1cdf, 0xbdc55b0e, 0xbc350dfd, 0xbbcf7a86, 0x3d917456, 0xbdd10a7f, 
    0xbda45f83, 0xbdbac53a, 0x3c835d0a, 0x3dab604e, 0xbc002577, 0xbca1e137, 0xbd0ddbb5, 0xbe494b5c, 
    0xbddde439, 0xbbb75d9d, 0xbc96b037, 0xbce13309, 0x3c1644d2, 0xbd7a84e3, 0xb78cbbed, 0x3d509b67, 
    0xbe14f269, 0xbdeac34e, 0xbc77c754, 0x3d9dd579, 0xbc23c7cd, 0x3d710133, 0xbdc92d61, 0xbe04b1b3, 
    0x3f0d73ed, 0xbd4af65c, 0x3ee8cb00, 0xbd8d714e, 0xbd874b65, 0x3d3305e6, 0xbddd17f7, 0xbdd9f6c4, 
    0xbd9b7ad2, 0xbd3b3782, 0x3cac05c0, 0x3dc20173, 0xbbc7bd6b, 0x3d21dd47, 0x3e2244f6, 0xba88aa74, 
    0xbe0008d2, 0xbd1a1924, 0x3d3aee9f, 0x3d406b5c, 0x3d8ff810, 0xbd9c0059, 0x3c1f02db, 0x3d7c8d88, 
    0xbd399aa2, 0x3d0581d2, 0x3d3f3c38, 0x3e875b01, 0x3be340c3, 0x3e0d6b2d, 0xbdee9acb, 0xbe3dff17, 
    0x3f14d90b, 0xbde5e43b, 0x3edf2f48, 0xbc193336, 0xbd906be8, 0x3ae23fb8, 0x3cf1ca8e, 0x3c8ff5cc, 
    0xbe2c8204, 0xbdcd4c91, 0x3cd6e5df, 0xb90086a2, 0xbd0b318b, 0x3d59ff23, 0x3e1c1c43, 0x3c7de86c, 
    0xbd8f4b72, 0xbd525930, 0x3cc1e6cf, 0x3dbed79a, 0xbd61d453, 0xbd19ddaa, 0x3cfede80, 0xbccc979b, 
    0xbce0d8df, 0x3e3630a4, 0x3df02835, 0x3ed706c8, 0x3dce0360, 0x3ca4f838, 0xbddeed52, 0xbdff6487, 
    0xbd8915b8, 0x3d91704c, 0xbc7b1a25, 0xbd995037, 0xbdd6d175, 0x3da09cc4, 0xbdd6ed69, 0x3dbdd6a2, 
    0xbce6b394, 0xbd5e55ee, 0x3cfa9fac, 0x3e1b21ec, 0xbdd75a55, 0xbd902163, 0x3a8a99ad, 0xbdd88410, 
    0xbe47f9e5, 0xbd6ef29f, 0xbd6e9d9f, 0xbcd4ff4d, 0xbd497518, 0x3d1805ca, 0xbd9a3f93, 0xbdaf4671, 
    0xbce54333, 0xbdbe5bb3, 0xbd687335, 0xbcd70f04, 0x3c8902d0, 0x3da6a61b, 0xb9bcc617, 0x3ae74f0d, 
    0xbdbde583, 0x3d4de272, 0xbc6164e4, 0xbdea2eb5, 0xbd62b52e, 0x3da0c694, 0xbd0f4e91, 0x3d8e3b19, 
    0xbd96c06e, 0xbd82429e, 0xbd1c7ce1, 0x3e688b07, 0xbd7e0cab, 0xbc31e8ce, 0xbc663deb, 0xbd6c632b, 
    0xbd9458a5, 0xbc971de5, 0xbe02e309, 0xbd09a646, 0xbe1c20ee, 0xbc8ea83b, 0xbd97bc0e, 0xbd9ebaa9, 
    0x3cdd675e, 0xbdb5d004, 0xbce3d09d, 0xbd83420b, 0x3cc124f1, 0x3dbf1f6a, 0x3d00fdc5, 0x3cf9971b, 
    0xbd957fc1, 0x3d9cbd22, 0x3c227814, 0xbdb8fc49, 0xbd2531b3, 0x3dcc2fee, 0xbd693ef9, 0x3d0ca465, 
    0xbd273ef9, 0xbde40b71, 0xbd4b0564, 0x3e9b29d7, 0xbd9339b4, 0xbc37e98f, 0xbcfcfc3b, 0xbcc46a0f, 
    0xbdb8ff88, 0xbd870747, 0xbe07656b, 0xbbcc8708, 0xbdf72e2a, 0x3ca9397c, 0xbddac545, 0xbdb26ebb, 
    0x3d854254, 0xbd2bc58d, 0xbc6c0fac, 0xbcd24120, 0xbd168a4b, 0x3db94aed, 0x3d8005af, 0x3d6c4aaf
};

static const uint32_t _K46[] = {
    0xbf687628, 0x3fae20d5, 0x3f65f7a4, 0xbf466b6c, 0xbf3db1c2, 0x3eea0e68, 0xbfab5eac, 0xbe323faa, 
    0xbed20a80, 0x3f44ddb4, 0x3f575239, 0xbfce306c, 0xbf1f8016, 0xbedb45e6, 0x3c69da00, 0x3ecf1542, 
    0x3f894406, 0xbcb2c1c0, 0x3eddaf36, 0x3fa87a81, 0x3f5808b8, 0xbf03c569, 0xbf648234, 0xbf75effe, 
    0xbe8c76c5, 0x3f8a5f20, 0x3e7b4a4c, 0xbdeda298, 0x3f26af97, 0xbdd66da4, 0xbf8439d3, 0xbda2b47c
};

static const uint32_t _K50[] = {
    0x3c85366e, 0x3d2d27f8, 0x3ceaf332, 0xbd11805e, 0xbc836083, 0x3d5a6fdf, 0xbd736670, 0x3d4e338c, 
    0xbd99026b, 0xbc8518d6, 0x3c025556, 0xbdedf6f6, 0xbba14966, 0xbd2d5bf5, 0xbdefee20, 0xbd876ea3, 
    0xbd8500a9, 0xbd5940b9, 0x3d4f3859, 0xbc807f17, 0xbc845a6b, 0xbc6b40b9, 0xbd0b5989, 0x3a85a1e7, 
    0xbb1e4b0e, 0xbcb815f4, 0x3c9b23a1, 0xbe3a2ff8, 0xbcc96cb2, 0xbd8daa11, 0xbd53251f, 0xbbd8b241, 
    0x3d56eb78, 0x3d91c50d, 0x3d3809ea, 0xbcb4ea7e, 0xbd407516, 0x3d73fa64, 0x3cee9466, 0x3d4ee646, 
    0xbd9063b7, 0x3cdd2933, 0xbd3da2f6, 0xbdecb911, 0x3d78143c, 0x3d1e59d7, 0xbe1d0292, 0xbd59eb64, 
    0xbdac69cf, 0xbd6183e4, 0x3e00cc68, 0xbcec6035, 0x3d1caf69, 0x3cde646a, 0xbb53085f, 0x3d068fcc, 
    0x3d53ad5a, 0xbd3f5694, 0x3cc33c98, 0xbe2f0135, 0xbd28ef89, 0xbd656fff, 0xbd1d7b4c, 0x3c439611, 
    0x3d765b3a, 0x3d8cc4ed, 0x3d3938bc, 0x3d2e5996, 0x3bde1900, 0x3d8478b5, 0x3d08a391, 0x3d809e93, 
    0x3c3d0740, 0x3ceae068, 0xbd581cfb, 0x3cf6145e, 0x3ce2526e, 0x3dce3a68, 0xbcd19e5d, 0xbd527d0f, 
    0xbdc1ad19, 0xbd10046a, 0x3e0758b8, 0xbd69137e, 0x3c40591e, 0x3c893fb6, 0x3d593d7b, 0x3d709cba, 
    0x3c3516bd, 0xbd2c2523, 0x3d0b14b9, 0xbe2cb841, 0xbcde7410, 0x3d3bfda5, 0xbd2ccab7, 0xbc861067, 
    0xbccbec26, 0xba62de0b, 0x3cfd99ee, 0xb9df2c59, 0x3d3e3198, 0x3d4169c2, 0xbd551cde, 0x3cb6394c, 
    0x3d1d1f35, 0x3c72f60c, 0xbd0cbfe3, 0xbcc0d135, 0xbcd96b48, 0xbc6ca9ad, 0x3cb9307a, 0xbcfb7ab0, 
    0x3e06db95, 0xbdb7ba8f, 0xbd260107, 0x3e3767b0, 0x3d58fd5d, 0xbcc34b34, 0xbd8822cb, 0xbd9e601e, 
    0xbc162b63, 0x3bb4f3ef, 0x3cb882c4, 0x3b8180d2, 0x3e0dcaf9, 0x3c5e96cd, 0x3ce07ea6, 0xbd6a8038, 
    0xbcc0ae97, 0x3c424922, 0xba905257, 0x3b8db456, 0x3c190655, 0x3d4add31, 0x3d03478e, 0xbd0c9f10, 
    0xbb80c2b9, 0xbb8174a9, 0xbd63ab55, 0xbd91e7f4, 0xbc2bc6d1, 0xbc2e3a10, 0x3b6e5472, 0xbd1ad566, 
    0x3db54302, 0xbdf1ea39, 0xbcecf0df, 0x3e365174, 0x3d59e6c3, 0x3d34d0f1, 0xbda8e05e, 0xbcd17a61, 
    0xbbaf4cd1, 0xbd24e7ec, 0x3bc7aa3d, 0xbcb9e152, 0x3e2132e2, 0x3d08c320, 0x3d4595c3, 0xbdb16950, 
    0xbc4194d2, 0x3c0e3740, 0xbc481807, 0xbbab02a5, 0xbd6c30c0, 0x3c9ebc06, 0x3ccf3193, 0xbd968425, 
    0x3c9677f5, 0x3d333a7d, 0xbda6268a, 0xbcbdd7c7, 0xbd573149, 0x3d1a334c, 0xbae25120, 0xbcd1786c, 
    0x3e11230e, 0xbdeff7be, 0x3c5fff31, 0x3e599b53, 0x3dac6dc9, 0x3d1f7f85, 0xbdaa3a0b, 0xbb650fa9, 
    0xbc1b85a9, 0xbd2eedf4, 0xbb67b901, 0xbcfff604, 0x3e553ee9, 0x3dc7d198, 0x3d1cc5a3, 0xbdfbc6c7, 
    0xbe82cb69, 0x3da7794f, 0x3e7c34ab, 0xbca1d99a, 0xbcb856a1, 0xbd3bcbd3, 0x3dbc2c2f, 0xbe697110, 
    0xbdbc5f6f, 0x3e6a4a62, 0x3c354dfe, 0xbd102f09, 0xbe25f1fb, 0xbd8c525f, 0xbd2916e6, 0x3e8a3e0c, 
    0x3e62ca78, 0x3ec6ef36, 0x3b955510, 0x3e068f21, 0x3d724fa7, 0xbddb1e30, 0xbd5684c5, 0xbe635c47, 
    0x3d5112bd, 0xbe8d70e8, 0x3ee3e57d, 0x3e0d5515, 0x3df07057, 0xbcf39b66, 0x3f182fc0, 0xbe29d2c0, 
    0xbe6c387c, 0xbe4395d9, 0x3e937a24, 0xbd2efc34, 0x3d441a81, 0xbda4c3dc, 0x3bb131e3, 0xbe84f613, 
    0xbddcc27a, 0xbe32ad38, 0x3d3841cb, 0xbbc330e3, 0xbe1a789d, 0xbe401624, 0x3d7c9727, 0x3e972f0e, 
    0x3dae67ad, 0x3ea276e9, 0x3cb9f6a9, 0x3c344050, 0xbe5fba1d, 0xbe2c0b57, 0xbd9eee1c, 0xbe3f8a35, 
    0x3d95c420, 0xbe5853ce, 0x3ec93d2d, 0x3bf0da72, 0xbc92ca99, 0xbd8e7192, 0x3edea404, 0xbe4213b9, 
    0xbe86878c, 0xbe4fe6b9, 0x3ebfbf76, 0xbdd56413, 0x3e624193, 0xbcfe18c3, 0xbd39451f, 0xbe4cdfe5, 
    0xbe76596b, 0xbe484b83, 0x3da73811, 0xbdf9257b, 0xbddf26f8, 0x3cdd147e, 0xbd0d87ff, 0x3eb6583d, 
    0x3db9011f, 0x3eb5048f, 0x3d91f888, 0xbcdfc90f, 0xbe1eaac1, 0x3c700fe1, 0x3d9aa9fa, 0xbe2aa035, 
    0x3c31afda, 0xbe7c4b7d, 0x3e9cb0f4, 0x3d0e781d, 0xbd2c7f4a, 0xbde1ff56, 0x3e75e308, 0xbec6ae44, 
    0xb8c4f67c, 0xbdda791f, 0x3bdde996, 0x3b51c7ed, 0x3d73be93, 0xbd0a8847, 0x3d62de5c, 0xbc508a96, 
    0x3d59252b, 0xbde8e042, 0x3cb4a999, 0xbd4f1cdc, 0x3d537b2c, 0xbd13fea4, 0x3d5993a9, 0xbb5a5128, 
    0xbc0c3d8f, 0x3dafc334, 0xbceb6af9, 0xbd82b4bf, 0xbe1a0751, 0xbd9cd8db, 0x3c9feccb, 0x3c12035e, 
    0x3dab0f9b, 0xbcd08f3d, 0xbac01272, 0x3e018278, 0xb933a522, 0xbd13d8c5, 0x3c640195, 0xbcd9d86e, 
    0x3d54e636, 0xbe803254, 0xbcc8026c, 0x3bf728ad, 0xbcf241a7, 0xbd4a1a26, 0x3d9a8a69, 0xbd992e1d, 
    0x3cb9f32a, 0xbe43ef81, 0x3d6c11d6, 0xbbb129ce, 0xbbfde78c, 0xbd370af5, 0x3d2b57e5, 0xbc6925f2, 
    0x3af87e4f, 0x3d9b5780, 0xbc609402, 0xbd033469, 0xbe7d2b23, 0xbda9ab02, 0xbc6c5f70, 0x3cbec2b7, 
    0x3bee5f02, 0xbd54e3ec, 0xbc91f208, 0x3dd8a2d8, 0x3caa97ea, 0xbc8c6b2f, 0xbbed51f1, 0xbe2f9884, 
    0x3d2a5587, 0xbe755f0a, 0x3c7737a7, 0x3c45e769, 0xbb29370c, 0xbd3caa61, 0x3d89c8fc, 0xbd098168, 
    0xbad8b00a, 0xbe164195, 0x3dc484b1, 0x3cac4e6e, 0xbd5dc717, 0xbd942ddd, 0x3d087047, 0xbcc3862f, 
    0x3c258757, 0x3de14bb9, 0xbdaae1a3, 0xbbc35035, 0xbe366521, 0xbdebe2e4, 0xbb74a5a0, 0x3ca9708b, 
    0x3d23e526, 0xbc892bd5, 0xbc24879c, 0x3e09bd28, 0x3cfe679c, 0xbcb07909, 0x3ce69b89, 0xbe29d2bd, 
    0x3c4cda44, 0xbdd6a1cb, 0xbc8dce30, 0x3cec17f4, 0x3ca2ce13, 0xbcadd1d0, 0x3d9eb007, 0xbba36b25, 
    0x3d0a5622, 0xbdd96567, 0x3d93f033, 0x3d03b4a1, 0x3d8d28eb, 0xbbcb2a85, 0x3d8f57d0, 0x3d221ab8, 
    0x3cd35b45, 0x3bdd089b, 0xbcd04927, 0xbc4c5604, 0xbddb9bf5, 0xbd664037, 0x3d08a148, 0x3cf457d0, 
    0xbc880918, 0x3d01302d, 0x3bf4bc16, 0x3dd23c3a, 0x3b350624, 0x3b46dfb0, 0x3cf6ea01, 0xbcddae48, 
    0x3ce999c6, 0xbe2df448, 0xbac81854, 0x3d17fff2, 0x3c2cdf3f, 0xbcf1ba75, 0x3de9747f, 0xbd80fa40, 
    0x3d11217a, 0xbe00fa4d, 0x3d94d694, 0x3c738018, 0x3d23eccb, 0x3c34c577, 0x3d85ebb8, 0x3d137bf7, 
    0x3ce6645b, 0x3c8ab924, 0xbd36a9c9, 0x3c4051b7, 0xbddc358f, 0xbc88906e, 0x3d05f9ea, 0x3d2132ca, 
    0xbd55e535, 0x3c7488e2, 0x3bd229e8, 0x3da6e3a9, 0x3cdb99f7, 0x3c93e403, 0x3d044ae8, 0xbda4f5b3, 
    0x3d069f3a, 0xbdb6a15c, 0xba145416, 0x3c0c3c11, 0x3d408e32, 0xbd00be81, 0x3da2645a, 0xbd080b9a, 
    0x3c972fca, 0xbd53c967, 0x3d6e3d75, 0x3d4696c3, 0x3b27b7d8, 0xbc1c5b5d, 0x3d459f42, 0x3cc24497, 
    0x3cefed6f, 0x3ce60810, 0xbda58b76, 0x3afb41d1, 0xbbf0c4a7, 0xbd4b9372, 0x3cdd7b3d, 0x3cc9c457, 
    0xbc7bdfaf, 0x3cb82ec3, 0xbc483f37, 0x3dbe70bb, 0x3bccf6ac, 0x3c64d2e6, 0x3d28f246, 0xbd92ee6f, 
    0x3de57f88, 0x3d6dbdb3, 0x3c71088b, 0x3e023660, 0x3d398f10, 0x3d914ae4, 0xbd5fb975, 0xbc00a060, 
    0x3df9ee55, 0x3c3d66bf, 0xbcba70be, 0xbdb22c1a, 0xbd669247, 0x3d0b382d, 0x3d0812e0, 0x3d223559, 
    0x3d13580a, 0xbd3629b5, 0x3bd8b639, 0x3d270d09, 0x3c26a13b, 0x3da6b90c, 0x3ce743ce, 0x3d6b23d3, 
    0xbd1701f8, 0xbc11f153, 0x3bb7663c, 0xbc32f9c0, 0x3d445dd4, 0x3c351aa3, 0xbbb522f5, 0xbcb4f3a9, 
    0x3daded62, 0x3cd21050, 0x3c2ae25e, 0x3db6be2b, 0xbc3b9f0d, 0x3d123d84, 0xbbe0c9ca, 0xbcf4a0ab, 
    0x3d8f5c01, 0xbc2b2af9, 0xbd2c386f, 0xbdb07336, 0xbd8881dc, 0x3d783f51, 0x3d11cba3, 0x3ca36caa, 
    0x3d246701, 0xbd894504, 0x3d0a78df, 0x3d1c290c, 0x3cebbd7c, 0x3dc4218e, 0xbcd38b30, 0x3dd20358, 
    0xbd821275, 0x3bd96132, 0x3c97c88a, 0xbd15c5c5, 0x3d66d4dd, 0x3d01a867, 0xbcc14e20, 0xbd4efcbb, 
    0x3e277f33, 0x3d207b9a, 0xbb933d3b, 0x3de7d397, 0xbd8696f1, 0x3d245dee, 0xbd2e2406, 0xbcb208c8, 
    0x3d7f5577, 0x3ca02de4, 0xbd3ff952, 0xbde7e63b, 0x3c25486c, 0x3dc20ce9, 0xbc94bfd4, 0x3c415f02, 
    0x3b965416, 0xbd33dece, 0x3d975a04, 0x3d11f341, 0x3d368438, 0x3e10b6a4, 0x3c52925f, 0x3dfdca45, 
    0xbdabd141, 0xbcc0d261, 0x3c0af58c, 0xbd46a4d8, 0x3d6ab509, 0x3d5552b2, 0xbcc6b981, 0xbd581ba1, 
    0xbdfe726a, 0x3d063313, 0x3e2c192f, 0xbdd0c25e, 0xbc0a446e, 0xbcdca23a, 0xbdcffff7, 0xbcaa6b52, 
    0xbe0c163f, 0x3d8efec6, 0x3d51d18f, 0xbdf3f546, 0xbd65c7ed, 0x3c085009, 0xbd9c4c9c, 0x3d11dec8, 
    0x3db0c089, 0x3dbda70e, 0xbd5b5ae9, 0x3d852772, 0x3880c3eb, 0xbc9d8f3c, 0xbd0522d1, 0xbdbc2dcb, 
    0xbd2dc42d, 0xbc9bcde1, 0x3de9b740, 0x3c3557e7, 0x3d291fca, 0xbdd0c8c5, 0x3e10622e, 0xbe19c5de, 
    0xbe1c0eab, 0xbcb01a30, 0x3e6b8092, 0xbd8a9569, 0x3b8a6f31, 0xbd4878dc, 0xbe012252, 0xbbb7bb24, 
    0xbe1aaf0f, 0x3cbd4ce1, 0x3da0c8ba, 0xbde610a3, 0xbd135468, 0xbd81970e, 0xbda1b728, 0x3c981eb8, 
    0x3d32d8d1, 0x3df79153, 0xbdaa323b, 0x3b1f807c, 0xbd315d34, 0xbd86108a, 0xbd59a924, 0xbe00cdcf, 
    0xb943a5ff, 0xbd2655d3, 0x3e25d84f, 0x3d608f4a, 0xbd1d617d, 0xbe1d22ca, 0x3e113a3e, 0xbd8eadec, 
    0xbe3564a1, 0xbc918246, 0x3e9bac2c, 0xbd97d9b7, 0xbd090fb1, 0xbd91430d, 0xbdea0632, 0x3cf777e9, 
    0xbe212185, 0x3bac4aa8, 0x3dbbf244, 0xbdd56376, 0xbd3d547c, 0xbde8c90d, 0xbdeb8c34, 0x3dac81f2, 
    0x3b83e39c, 0x3e0b4c6f, 0xbd5ff27e, 0xbcf3ac16, 0xbd78cb12, 0xbdea8531, 0xbce3352f, 0xbe0e22d8, 
    0x3b837331, 0xbcccf9d0, 0x3e6d233f, 0x3d3d54c9, 0xbd567a2b, 0xbe2f7a01, 0x3e1b8d55, 0xbd1b10fd, 
    0xbcffc690, 0xbb766f21, 0xbcb12e43, 0xbd0ab27c, 0xbdeda4e3, 0x3d8b8030, 0xbb0e4083, 0xbd8f79d9, 
    0xbd20b771, 0x3bb9dde9, 0x3d52a5fe, 0xbd48a1ed, 0xbdabcd16, 0x3c2098bd, 0xbd40d379, 0x3d2645ec, 
    0x3e42bf3f, 0xbc4ef6d0, 0x3b57933e, 0x3e48a545, 0x3bc38d82, 0x3b15fb72, 0xbd900d01, 0xbdb747df, 
    0xbdc85b8a, 0x3d3dc313, 0xbcca2dac, 0x3da4185b, 0x3dd7dfdc, 0xbd2cacde, 0xbd10b92f, 0xbd3daef0, 
    0xbc8dbeeb, 0xbcda01b7, 0xbd0f8a69, 0xbc992832, 0xbdba86f5, 0x3d280186, 0x3d286ea1, 0xbd931ad2, 
    0xbc681ec0, 0xbc7168d7, 0x3bb58825, 0x3cbbf9c3, 0xbd160def, 0x3b09e1d3, 0xbc2e5029, 0x3aeaea9c, 
    0x3e149397, 0x3b827f69, 0xbc2064f5, 0x3e4ad4b5, 0xbcf0d0c3, 0x3c943165, 0xbd89204b, 0xbc5b52c0, 
    0xbda221e4, 0xbb10acc0, 0xbc463fed, 0x3d08905d, 0x3de0b126, 0x3c0965ec, 0xbd00b3c7, 0xbd3b027e, 
    0xbcb2d112, 0xbd68b484, 0xbd3e7642, 0x3bb4f730, 0xbd6887de, 0x3cb1f14a, 0x3cf9e538, 0xbde98f5b, 
    0x3bfe2543, 0xbd62f543, 0xbbd614c0, 0x3d8a6d01, 0x3b5956e0, 0x3be58159, 0x3b62c857, 0x3be94b76, 
    0x3e2ac422, 0x3aedfb27, 0xbb6faa3e, 0x3e917772, 0xbd7899a2, 0x3c1d3306, 0xbd9cc4ff, 0x3ba6ba95, 
    0xbdbd9ebc, 0xbbe307af, 0xbd21860d, 0x3d582a89, 0x3e4eb554, 0x3ccff811, 0xbc6de11e, 0xbd881a17, 
    0x3d128247, 0xbc7e1def, 0xbbd0b4cf, 0x3d48bafb, 0xbda61b0a, 0xbc6e039b, 0x3d59631d, 0x3d063ae4, 
    0x3c69291c, 0xbcd54b65, 0x3e1d13f0, 0xbd0b5d16, 0x3c3e08ff, 0xbb8616ab, 0x3c333bf6, 0x3d583216, 
    0x3e314301, 0xbccc904f, 0xbcecd1b0, 0x3e04ac14, 0xbb5e75df, 0xbd79f0be, 0xbccd3528, 0x3b2fd031, 
    0xbd6f730a, 0x3da55d75, 0xbcaad484, 0x3d8b73f1, 0x3dfdf4ef, 0xbcef81ed, 0xbd9fb4c0, 0x3d594cff, 
    0x3d8a543f, 0xbcf1e174, 0xbd1161b0, 0x3d8fcdaa, 0xbd36e63a, 0x3bf3cd64, 0x3da6642a, 0xbc9a1b3a, 
    0x3d988998, 0xbcb71e80, 0x3de9107d, 0x3ba0b63f, 0x3cdc3325, 0x3bc652d4, 0x3d4126c3, 0x3cc72281, 
    0x3e0da1ff, 0xbcc93bd7, 0xbd20622a, 0x3e0c636b, 0xbcadcfa9, 0xbd5a0f42, 0xbc48f2ad, 0x3d0c8663, 
    0xbd712516, 0x3da7e2d1, 0xbd1f48c8, 0x3d2df0c8, 0x3e1fb47e, 0x3c7b5df0, 0xbd92ff84, 0x3d33eb07, 
    0x3dd5000f, 0xbd33b54f, 0xbd0fb39e, 0x3db878bf, 0xbb85fef8, 0xbd2de4ff, 0x3db0d8a3, 0xbd6e1cec, 
    0x3d894fdc, 0xbd1f72b9, 0x3da88386, 0x3d132e84, 0x3d133f04, 0x3cc94685, 0x3d57e5be, 0x3ce5ed5a, 
    0x3e3a622b, 0xbcecda6a, 0xbd925e12, 0x3e2e28ab, 0xbd28f095, 0xbcaead40, 0x3ab00617, 0x3d6ad718, 
    0xbd589f6d, 0x3d5824cd, 0xbcbd503b, 0x3d08ccfd, 0x3e48888e, 0x3d25179d, 0xbd92d5ec, 0x3d050678, 
    0xbe0fb20f, 0x3d7f9029, 0x3d82dbdf, 0xbdf74c96, 0xbd9e795b, 0xbd0cce8e, 0x3ca03f51, 0xbe04cbdf, 
    0xbdfc76b5, 0x3d97e69e, 0xbd2cff2c, 0x3d31de98, 0x3daf8e96, 0xbd3cd892, 0xbd5c2abc, 0x3cc64ec9, 
    0x3cffb19f, 0x3e46694d, 0xbb8b4f80, 0x3c1b007b, 0x3d22e2d9, 0xbcdd8e9d, 0xbd7a871a, 0xbdd57ede, 
    0xbde91a5a, 0x3aa25b46, 0x3db7cbc6, 0x3d9a38bf, 0xbcd1b8ab, 0xbd3869e7, 0x3e2c8544, 0xbc89e72a, 
    0xbe19993c, 0x3cb725a8, 0x3d4e3028, 0xbe0de065, 0xbb2b7161, 0xbd029796, 0xbcc20386, 0xbdb67082, 
    0xbdd24afc, 0x3a94889c, 0xbd4dd769, 0x3d64cf63, 0x3c980a97, 0xbdbad952, 0xbd88fd6f, 0x3d7a950e, 
    0xbccb2b13, 0x3e41fab6, 0xbcc9484b, 0xbc067a0b, 0x3b2b1776, 0xbd461e76, 0xbd304e57, 0xbe09e26e, 
    0xbdc63080, 0xbc97d9f1, 0x3d42c70e, 0x3dadf2a3, 0xbd90d1bc, 0xbda70a8c, 0x3e1f5ba2, 0xbc8e697c, 
    0xbe46de48, 0x3d10f408, 0x3d7310a3, 0xbe2e24ee, 0x3c0559d0, 0xbcfdba9a, 0x3c1647d4, 0xbd944743, 
    0xbe1534c1, 0x3b36dd1a, 0xbc461c7f, 0x3d3c0f86, 0x3d2faae3, 0xbe0550f7, 0xbe016af6, 0x3d79801b, 
    0xbc6833ad, 0x3e458914, 0xbc47d9e8, 0xbcc9809c, 0x3b923719, 0xbce6968e, 0xbd0481ed, 0xbe2bed7a, 
    0xbda2e7be, 0x3b8c8dcd, 0x3da4cbcd, 0x3db78d22, 0xbcbd21b3, 0xbdb9b72e, 0x3dfdee8a, 0xbc8b84a8, 
    0xbe64f57b, 0xbdc76044, 0xbd1852ec, 0xbd878fd2, 0xbe6f395c, 0xbe7557b6, 0x3df978d7, 0xbe835b44, 
    0xbd47d723, 0xbc9820a1, 0xbe1a6537, 0x3e12cfc5, 0x3de12c35, 0xbe1ae310, 0xbc754684, 0x3e8affc2, 
    0x3da5f775, 0x3eee60ad, 0xbd169765, 0xbcee14f2, 0xbd7d01f0, 0xbe18cb86, 0xbe27720c, 0xbe86ce3e, 
    0xbdf05b2b, 0xbc1d2c8e, 0x3d7f2771, 0x3e69cebf, 0xbcf38351, 0xbd31e802, 0x3ec31958, 0xbd9a1253, 
    0xbe816086, 0xbddf0539, 0x3e419f9f, 0xbe1e1f23, 0xbcb2d1e6, 0xbda8f693, 0x3d429e67, 0xbe8c4747, 
    0xbd827ec3, 0x3ddd4108, 0xbd78950e, 0x3dfd0d42, 0xbccd79b8, 0xbe99cf6f, 0x3d99eda3, 0x3ec033d5, 
    0xbd068830, 0x3ef87278, 0xbda98468, 0xbdd02f4a, 0xbaadb6f9, 0xbdd64ff4, 0xbdb3ed68, 0xbe358be7, 
    0xbb0a3ceb, 0xbd8e8530, 0x3e76b16a, 0x3eab1298, 0xbd7f96bd, 0xbcb19666, 0x3f1ce158, 0xbd5ea417, 
    0xbea009ea, 0xbe746559, 0x3def8b2c, 0xbe436d45, 0x39f0c529, 0xbe58be1a, 0x3e293514, 0xbebe707e, 
    0xbe23f967, 0xbe0efa06, 0xbd2cdede, 0x3e258c6f, 0x3d96a03f, 0xbe511613, 0xbe0f4766, 0x3ee0995f, 
    0xbd6d8ac9, 0x3f162e03, 0xbd637a79, 0x3c5b7805, 0xbe612b66, 0xbd87732e, 0x3c40e8f9, 0xbe8cb9c1, 
    0xbc809881, 0xbcda8f4c, 0x3e44a070, 0x3ea10422, 0xbcd51885, 0xbdd01a5c, 0x3edbb420, 0xbe21722e, 
    0xbca9a757, 0x3ce93ffb, 0x3d7672d9, 0xbd92c820, 0x3d921e57, 0xbd266afc, 0x3d3611a3, 0xbda43fcf, 
    0xbe2bb7b7, 0xbdcf3e80, 0xbd9aec0e, 0xbdda9a4a, 0x3ec17cd0, 0x3dd55464, 0xbdf70587, 0xbc115058, 
    0xbe1bf38e, 0xbd9b105b, 0x3d3c3b4c, 0xbdbd20eb, 0xbdbb9c92, 0x3bda8ad8, 0x3e34a403, 0xbd1ed316, 
    0xbcdf1745, 0x3cfd6ba2, 0x3d93d877, 0xbd026f4d, 0x36314668, 0xbdd64872, 0x3d3f84d3, 0x3d5c6263, 
    0xbd807cfc, 0xbd80b1ba, 0x3df32950, 0x3c843dfb, 0x3ddf3d90, 0xbcf9d0b0, 0x3d888449, 0xbdaf410f, 
    0x3d2d27b1, 0xbe2c8e60, 0xbe12a3e8, 0x3d6baf36, 0x3e62da96, 0x3d415780, 0x3d56eb6b, 0x3d514e3b, 
    0xbe3b3eb8, 0xbd6eed7c, 0xbaf942fc, 0xbe0c11d4, 0xbe1416be, 0xbc8308eb, 0x3e751ab6, 0x3c2635b8, 
    0xbc12ea2a, 0xbd9a3c01, 0x3e0715f3, 0xbc665825, 0xbd8d8a29, 0x3d8631dd, 0x3dc282e0, 0xbd13364d, 
    0xbd0d1b78, 0xbcf2cac6, 0x3ddd99ca, 0xbccd31a7, 0x3dd554ea, 0xbc21aefb, 0xbe0f63c2, 0xbd852074, 
    0x3d2868cb, 0xbde947e2, 0xbda1b967, 0x3e0244c1, 0x3c6f09bf, 0xbca73dea, 0x3df763f1, 0x3d75ec9e, 
    0xbd1ecaa5, 0xbcd36211, 0xbd1c32f8, 0xbb99865c, 0xbdf2d5a2, 0x3ccca334, 0x3ca8fbce, 0x3d4156e6, 
    0xbc8d903e, 0xbd0d51ae, 0x3e05f483, 0xbce3eb3e, 0x3d9b2152, 0x3dd9b251, 0x3d2ed3db, 0xbe0092a9, 
    0x3ddbeca2, 0xba60660f, 0x3d9b7375, 0x3e1257c4, 0x3de8c6f7, 0xbd500648, 0xbd9c587a, 0x3d426006, 
    0x3e893c79, 0xbd71ea94, 0xbd243ef0, 0xbd678ae3, 0x3d0733b8, 0x3d71115d, 0x3e7b7d7e, 0xbd12c5eb, 
    0x3d514f4e, 0x3d9855a8, 0xbde8ea12, 0x3dab9416, 0xbd43cea9, 0xbc48e4a8, 0x3d19b1b9, 0x3d93e37c, 
    0x3d8c990a, 0xbd752ffa, 0x3d76db53, 0x3d8cec42, 0x3de10dfb, 0x3e84cecd, 0x3d77ef7f, 0x3d2a3238, 
    0x3dc8ccbb, 0xbd70e03e, 0x3d3764a5, 0x3de9f120, 0x3d2ed13c, 0xbae3d049, 0xbda6bfc4, 0x3ab6cfc2, 
    0x3e49e643, 0xbdc1f236, 0xbd39340b, 0xbd909795, 0x3cfa6a55, 0xbd21d704, 0x3e96d67f, 0xbd1eedb6, 
    0x3d90b0de, 0x3d6d77c5, 0xbd5eacac, 0x3d1c25be, 0xbd06e783, 0x3db5bc96, 0xbd972d3f, 0x3e20fc46, 
    0x3c77486d, 0xbd87f336, 0x3cb6d085, 0x3d09ed9d, 0x3dd4e138, 0x3e6f85c5, 0x3d524412, 0x3d395b91, 
    0x3e6a2f3b, 0x3a240a85, 0x3d53644e, 0x3dc7770b, 0x3c59827b, 0x3ce13692, 0xbd6d19db, 0x3c83af29, 
    0x3db511fb, 0xbd34fd59, 0xbceeb49a, 0xbdac48de, 0x3e161668, 0x3de790ff, 0x3e0518c0, 0xbd27576d, 
    0x3d038e74, 0x3d590d25, 0x3c433a55, 0x3d7a168e, 0x3cf1eae5, 0x3e0dbd34, 0x3ccbf9ab, 0x3e50dd74, 
    0x3ce3ddcc, 0xbd9a6cb9, 0x3d823a6b, 0x3d18cc9d, 0x3d9c1da7, 0x3e01a553, 0x3d8c2d73, 0x3cb5758f, 
    0x3c75c946, 0xbd4a6652, 0x3ca3e7a1, 0x3bd2980c, 0x3c1962a1, 0xbde3d051, 0x3cc47165, 0x3d0fb585, 
    0x3c2f113b, 0xbc5d7f22, 0x3e01b729, 0xbc9ac48a, 0xbc7aaf23, 0xbd0ea99b, 0x3d8d730f, 0x3d8edba4, 
    0x3d9c6e4b, 0xbc738c65, 0xbe03b57f, 0x3c2162c9, 0xbc645c08, 0xbd3375ee, 0xbd12e8a6, 0x3cafeb23, 
    0xbdd16c3f, 0x3d8110bf, 0x3c89141c, 0x3d8a15e9, 0x3cccf4b7, 0x3cc21038, 0x3b8ba55b, 0xbc8aab55, 
    0x3d132a69, 0xbcd899e5, 0x3c571fda, 0x3d160337, 0xbd1d59ff, 0xbe103d05, 0x3d4af5e9, 0xba55bfc1, 
    0x3c885852, 0xbc891c24, 0x3dec8a8a, 0xbc9c048f, 0xbc048d93, 0xbd01f8db, 0x3d2c5a25, 0x3d29656e, 
    0x3dbc703c, 0xbcdd3701, 0xbe110f83, 0x3d866357, 0xbca5363e, 0xbd681c6e, 0xbce7ccf3, 0x3c5aff37, 
    0xbdeb8647, 0x3d414d81, 0x3c6ffd31, 0x3d8bc3f3, 0x3d105619, 0x3ca97043, 0xbbdcbe0e, 0xbcb60452, 
    0x3d95da34, 0xbd3e7d4e, 0x3a807fc2, 0x3d33d5a3, 0xbd329f11, 0xbe3d1826, 0x3d3464f7, 0xbc6f356e, 
    0x3d0e028a, 0xbba83b72, 0x3dc53592, 0x3bb64743, 0x3ce03ee2, 0x3bdf58a5, 0x3d4a23a7, 0x3cf7e19d, 
    0x3dad0795, 0xbcf7d1d4, 0xbe2e2173, 0x3d8fe6b0, 0xbd061de3, 0xbcbbe5e9, 0xbc85655b, 0x3d6343b7, 
    0xbded88c1, 0x3d3b709f, 0x3ce6f1a0, 0x3dafe868, 0x3d7beb3b, 0x3d555524, 0xbc00138c, 0xbca22302, 
    0xbda28cd0, 0x3d3a2bc4, 0x3d8f3305, 0xbd6cc95f, 0xbcd7351a, 0xbbea63d5, 0xbd84114c, 0xbd191d10, 
    0xbdbc37e0, 0x3da5db0b, 0x3d5be49d, 0xbd9a15f3, 0xbd1df3f7, 0xbbb8b2b7, 0xbd99fbcd, 0x3d4db547, 
    0x3db6a51f, 0x3d8bb49d, 0x3cfc08f9, 0x3d4cd403, 0x3b27e209, 0xbc7c03ac, 0xbd4d6582, 0xbd06e53c, 
    0xbd979a81, 0xbd473a69, 0x3d4c57fa, 0x3d988464, 0xbc08b0e5, 0xbdaf378c, 0x3e012690, 0xbd95db46, 
    0xbde48d94, 0x3c332a16, 0x3e311103, 0xbcadf611, 0x3c979207, 0xbc723204, 0xbdc71905, 0xbcde4b8a, 
    0xbd8abb3c, 0x3b213a9b, 0x3d9de2c2, 0xbdcf5470, 0xbd20078e, 0xbdbaf25f, 0xbd829d49, 0x3d1e36ce, 
    0x3c0501e5, 0x3d949723, 0xbcba55d9, 0x39334c60, 0xbcf8acc3, 0xbd95d3e1, 0xbd384c09, 0xbdfa111a, 
    0xbc0d5f98, 0xbce8fae7, 0x3dfc4cf0, 0x3d960c0e, 0xbccb38a1, 0xbdf380ce, 0x3e26307d, 0xbd068442, 
    0xbe11b9d6, 0xbc8812e3, 0x3e33c4a9, 0xbd8307d3, 0x3c53777b, 0xbd85b43a, 0xbd6b5a47, 0xbc6431b2, 
    0xbda2198d, 0xbd6aefaa, 0x3df98d26, 0xbddff6e6, 0x3b95feac, 0xbdf288ff, 0xbd83a5cd, 0x3d947a87, 
    0xbc3ffbd4, 0x3dca44ed, 0xbc8d740a, 0xbcd4a744, 0xbd99e171, 0xbdcccb97, 0xbc54a90a, 0xbdead6e4, 
    0x3af1bdf9, 0xbcb44b0f, 0x3e2cedb7, 0x3db08710, 0xbd683c53, 0xbe04f3ae, 0x3e2f26ff, 0xbd169952, 
    0x3bb1a593, 0x3d26f4da, 0x3ca61239, 0x3cc4ec02, 0x3cd04100, 0x3c6d41db, 0xbb886ee6, 0x3bb7d5fe, 
    0x3cf81d53, 0x3d01c268, 0x3be88658, 0xbcf345ee, 0xbd10c7e1, 0x3bf0f6b4, 0x3ae73c34, 0xbc428151, 
    0x3cf48cbf, 0xbcc24a95, 0xbca0c209, 0x3d1b3fd6, 0x3d38c3c5, 0xbbe5fc48, 0x3c2a95d9, 0xbc971a35, 
    0xbc51d489, 0x3c210e9b, 0x3c9cd3c0, 0x3a1d3a1e, 0x3c965de8, 0x3c424e5e, 0x3ca1daae, 0xbc23965a, 
    0xbbaec4b1, 0x3cac10c0, 0x3cc75892, 0x3c3aa501, 0x3b6de052, 0x3c99bacf, 0xbc949efc, 0xbc335ed8, 
    0x3d0376b4, 0x3ce7dc2d, 0xbbca1dfa, 0xbd16c394, 0xbcd92a70, 0xbcc5ed5f, 0x3ca2f946, 0xbcce6762, 
    0x3ce66367, 0xbd06f42b, 0xbcc425c8, 0x3d1c122b, 0x3d4025fe, 0x3c1146dd, 0xbcb974f9, 0xbbbad084, 
    0xbc662049, 0x3bfaf126, 0x3ca84f03, 0x3beab78c, 0x3c0b3258, 0x3ccd8d31, 0x3cb8cd6f, 0xbcdf7ce4, 
    0x3ca0ce41, 0x3d267307, 0x3c9d70bb, 0x3b96e16c, 0xbd35cc59, 0xbba17fd5, 0xbcc4180d, 0xbcaac91f, 
    0x3b69384b, 0x3d883209, 0xbbe3ffb2, 0xbd4c5625, 0x3ba25ef7, 0x3c02bfcc, 0x3c510cb2, 0xbc1f354f, 
    0x3d3887e5, 0xbcacfb0e, 0xbcc72cff, 0x3d47d28e, 0x3daaf637, 0x3c912ee5, 0xbc8b9bcf, 0x39fe29ef, 
    0xbc8255d8, 0xba812fde, 0x3cb4263c, 0xbba5a5d5, 0x3d1c4458, 0x3d30a572, 0x3c729ebe, 0xbc93614f, 
    0x3ceddfd7, 0xbcf28823, 0x3da5be0a, 0xbca6d7ca, 0x3d516cb4, 0x3bfe342e, 0x3d915725, 0x3d0bf92f, 
    0xbd6c1760, 0xbd96fd13, 0x3ce337eb, 0xbddbd46e, 0x3deeaa86, 0x3d1299a3, 0xbdb0da9c, 0xbd3e0e42, 
    0xbdf8abd1, 0xbd814ee0, 0x3c64551a, 0xbddf6ce2, 0xbd525d9b, 0x3bce8384, 0x3d30a016, 0x3cb19c09, 
    0x3d96ec9f, 0xbca59d91, 0x3d47b218, 0xbd6faaf3, 0xbc8eff83, 0xbd4ab498, 0xb9eddfe7, 0x3b9c9748, 
    0x3d19cfd0, 0xbcfe3080, 0x3d95d000, 0x3cf7fc85, 0x3d147aec, 0xbc2d5551, 0x3dc9bab3, 0x3d2378f6, 
    0x3c08dcbe, 0xbd565266, 0x3cb2c331, 0x3d189f36, 0x3dbca4c4, 0x3ca06e7f, 0xbd59bb86, 0xbceed112, 
    0xbe0387c8, 0xbda0ad78, 0x3d584e3d, 0xbe0be83a, 0xbd82cf2a, 0xbc9a26c7, 0x3d7d59c4, 0x3d230eac, 
    0x3dc01650, 0xbcf5fcba, 0x3d9a1973, 0xbdc2d579, 0xbd4fce79, 0xbc8b07fa, 0x3cea1fd9, 0xbaaa2ad4, 
    0x3c9d71b0, 0xbd03692e, 0x3db40eea, 0xbca89e8e, 0x3c45bbd0, 0xbc96e1e7, 0xbc07c4a3, 0x3d9b53a8, 
    0x3bb00d13, 0xbd5a613b, 0x3cef9f8d, 0x3d55cffc, 0x3ab953f2, 0xbd192a6b, 0xbb1de727, 0xbd4a5f1b, 
    0xbd79fda5, 0xbd8d73e4, 0xbc4fd6dd, 0xbdf4f5c6, 0xbdbd12f9, 0xbd1a69c9, 0x3cdeaabf, 0x3ccffc30, 
    0x3d891259, 0x3b84a10b, 0x3db87e7e, 0xbd7859e0, 0xbd669750, 0x3b8b2a93, 0x3d39e50c, 0xbd4c069d, 
    0xbe33a909, 0xbdb07451, 0xbda16d92, 0x3c043aa1, 0xbd9ffe9e, 0xbe2f66dc, 0x3deb4cb4, 0xbebdfb17, 
    0xbda77aa5, 0x3c844e43, 0xbe2fbbd6, 0x3d9dfeec, 0x3dc4a542, 0xbdb32c0a, 0xbcda4b5c, 0x3dc86ba1, 
    0x3debc9a2, 0x3ed43cf3, 0xbd634e69, 0x3cb83117, 0x3d1a0130, 0xbd9f3618, 0xbe3c2c3c, 0xbe23cbad, 
    0xbdaf2ba3, 0xbe1831f4, 0xbc89041b, 0x3e3d1dce, 0xbcf745a2, 0xbdcead60, 0x3ebf2388, 0xbcaeba5c, 
    0xbe3dcd79, 0x3cc6dbb7, 0x3e58b537, 0xbcf52974, 0xbd97b8db, 0xbdf79d9f, 0x3c482865, 0xbeb9c7ac, 
    0x3b64c328, 0x3e3412a6, 0xbd6e0860, 0x3dc72bc3, 0x3d9091e3, 0xbe5df116, 0x3d47c711, 0x3df0517f, 
    0x3d631c90, 0x3ed461cb, 0xbdab3091, 0xbdac9b5d, 0x3d40d8b4, 0xbdd23958, 0xbe04461f, 0xbe4a1f65, 
    0xbd198649, 0xbd122e29, 0x3e556a79, 0x3e8ddd84, 0xbd604950, 0xbe126b93, 0x3f1d4d40, 0x3c9c9961, 
    0xbe6e336b, 0xbe14be1c, 0x3e1aa05d, 0xbd9a378d, 0x3ca10833, 0xbe1c36b3, 0x3e02bca0, 0xbeca3fd1, 
    0xbd7e48de, 0xbdf29a71, 0xbd03ec59, 0x3ddc1a63, 0x3df9e3cc, 0xbe029645, 0xbd0df852, 0x3e2605f1, 
    0xbcc191dc, 0x3ede0a39, 0xbdb20183, 0xbd22eef5, 0xbe0eb656, 0xbdb5adb9, 0x3d5a5410, 0xbe3bafd0, 
    0xbd777137, 0xbd28f1ad, 0x3e0c80d5, 0x3e3aacbf, 0xbd8e53a9, 0xbe3f57e9, 0x3f095203, 0xbdeaf102, 
    0x3b3fe218, 0xbb10c325, 0xbb1afd20, 0xba824a62, 0xbbd30726, 0xba975da9, 0x3b31c9b8, 0x3a0121aa, 
    0x3a470eb9, 0xba96d78f, 0xbb0bf6c8, 0xba87a9c1, 0xbafaeb1f, 0x3ab2ec70, 0xbaad71f0, 0xbb8e46cb, 
    0x3a40dd4d, 0xbac8293d, 0x3b70c2fb, 0x3b1cf5af, 0xbb1a87ac, 0x3a21eae4, 0xbb7cf1e9, 0x3b5f44ac, 
    0xbabaa72f, 0xbbf8cfb0, 0xbb0f3a92, 0xbb985553, 0x3aabd3e4, 0x3b140691, 0xbbcf2fca, 0xbb847212, 
    0x3b826a8d, 0xbb399c41, 0xbb823357, 0x3a98f66e, 0xbb80e01a, 0x3a4a28fe, 0x3a804692, 0xba7ac0d1, 
    0x3a9a95f9, 0xbaf04b10, 0xba8b9717, 0xbb98d747, 0xbabfe0d0, 0x3a7605ff, 0x3ae5b137, 0xbb94cdd2, 
    0x3ada39fb, 0xba8cb5cc, 0x3af674e3, 0x3af2e933, 0xbafecc01, 0xba39610c, 0x39fc80b1, 0x3ba5ba0f, 
    0x3a8d4e95, 0xbc0f8418, 0xbba59a77, 0xbbb330cb, 0x3b3f6388, 0x3adb8c52, 0xbbed18e5, 0xbb57a367, 
    0x3b942c8c, 0xbb1fa0ce, 0xbb971633, 0x388d8afe, 0xbb8c863e, 0x3b192768, 0x3b064d8f, 0xbb5af074, 
    0x3aca6dde, 0xbafbada2, 0xbb76680f, 0xbb9a92b9, 0xbb2a6ee4, 0xba44af99, 0x3ab83dbe, 0xbbe34c7f, 
    0xba57f93e, 0xba1625df, 0x3b57b8e7, 0x3ae1e108, 0xbb3405b0, 0x3ab10d91, 0xb9b74f86, 0x3ba456b8, 
    0x3a0ffee6, 0xbc17cd2f, 0xbb7472e9, 0xbb979736, 0x3b20e770, 0xba7ff5d3, 0xbbd3c23b, 0xbb773ac0, 
    0xbdc7c74e, 0xbcaa7a6c, 0xbc328147, 0xbcb7b7c8, 0x3c44080c, 0xbd090f54, 0x3d6ffb2f, 0xbcb2b9f7, 
    0xbbe92eda, 0xbcb909f3, 0x3da91112, 0x3d798529, 0xbd4e6627, 0xbd6675a9, 0xbc76e5d6, 0x3cd58647, 
    0x3d770100, 0x3d787277, 0xbd009ee5, 0x3d2e15fc, 0xbd1471a9, 0xbdd4e506, 0xbd0ad7dd, 0xbdc0097f, 
    0xbdabeef8, 0x3d69ac29, 0xbd2fa47c, 0x3daffe1a, 0x3d675235, 0xbd9c4922, 0x3c3c69de, 0xbd83cf18, 
    0xbcc41d7e, 0xbd784231, 0xbcf72b06, 0xbcb2afc8, 0xbcff4b41, 0xbcdbc14b, 0x3d54a79f, 0xbb9e50f4, 
    0xbc1f1c3c, 0xbd891e3c, 0x3db8c4e7, 0x3d20b97e, 0xbc2c0ddd, 0xbcb0921d, 0xbcbd4dee, 0x3d839704, 
    0x3d578275, 0x3d68114a, 0xbd0813bb, 0x3d2ec6fc, 0xbdb10f7e, 0xbd2b6741, 0x3b7237ae, 0xbd75cff1, 
    0xbcf7af33, 0x3d38ac3f, 0xbd1d1ec0, 0x3dabbcfd, 0x3d244c26, 0xbd9b9485, 0xbcb749ea, 0xbd4e66d5, 
    0xbd291ff7, 0xbd76b668, 0xbcf8694e, 0x3c6e5415, 0x3c53a2ef, 0x3b695a19, 0x3d98f537, 0x3bc80093, 
    0x3b535791, 0xbd937bd9, 0x3da3eab8, 0x3cd1b10e, 0xbd2cfb87, 0xbcabab80, 0xbc538f76, 0x3d7e8e38, 
    0x3d5d0f2f, 0x3d8e441f, 0xbce8e7d3, 0x3d692cc7, 0xbdaf4ec3, 0xbd6251e3, 0x3c50d38e, 0xbd43ffa4, 
    0xbd114c14, 0x3d0be4eb, 0xbd10cbee, 0x3d880558, 0x3cef4190, 0xbd8ae300, 0xbc5d6ab7, 0xbdb94976, 
    0xbe61147c, 0x3d58cc10, 0x3e197577, 0xbe1476f0, 0xbd6a153a, 0xbcdfe36b, 0xbe2f0b5a, 0x3dc91d1e, 
    0xbe68b50d, 0x3cfc1b3b, 0x3c733cc0, 0xbd5bc41f, 0xbd688d31, 0xbbb6cebd, 0xbe6a8399, 0x3da4dac0, 
    0x3de63e9c, 0x3e2c7bee, 0x3c5b1767, 0x3db5dd32, 0xbcadcfe0, 0x3cb1250f, 0xbd2940a8, 0xbe1c272d, 
    0xbdafa64f, 0xbd04659e, 0x3e4a0571, 0x3c81c15e, 0x3dceb8e7, 0x3c0bd4af, 0x3df900a8, 0xbd6728ff, 
    0xbe7a4105, 0xbc65d438, 0x3e3d4986, 0xbde17adc, 0xbd22ed98, 0xbca80ecb, 0xbe372cbd, 0x3dd5f468, 
    0xbe4d240d, 0x3ca23398, 0x3d4f0199, 0xbe032edb, 0xbda35dc6, 0xbdbb979e, 0xbe3039b3, 0x3d8dee4d, 
    0x3d5c3af5, 0x3e3803ce, 0x3c2ea55c, 0x3d3325b7, 0xbca577b4, 0x3c84e867, 0xbd3432b4, 0xbe287ef4, 
    0xbd4f92a4, 0xbd61d4eb, 0x3e1722c6, 0x3ce90d36, 0x3d78ec9d, 0x3c925a42, 0x3da41004, 0xbc1326fc, 
    0xbe5e8417, 0x3d8b896a, 0x3e8021a3, 0xbdf35698, 0xbce39fe9, 0xbceb23df, 0xbe44e790, 0x3de8e019, 
    0xbe6a3002, 0x3c424b77, 0x3d321efb, 0xbe2149ac, 0xbd97aa9b, 0xbe1ac02f, 0xbe529cf7, 0x3de88e84, 
    0x3db59cd5, 0x3e494146, 0x3c2694aa, 0x3da767c4, 0x3ca8b023, 0xbca38c3d, 0xbd96bc91, 0xbe288e01, 
    0xbd1507f1, 0xbcf946bf, 0x3e4860b9, 0x3ce7b447, 0x3cac4eeb, 0xbcd47009, 0x3dafba97, 0x3c588050, 
    0x3d4de244, 0xbca33475, 0x3c640dbf, 0xbd4b9863, 0xbe926f71, 0xbe6d8259, 0xbc720adc, 0x3dc25a4a, 
    0x3d5cca0d, 0xbc83dfb5, 0xbd8d02c5, 0xbd825e3e, 0xbd326e38, 0xbdb3ad00, 0x3bce427d, 0xbe36ec32, 
    0x3d3316c0, 0x3d25c556, 0xbdd6914d, 0x3a9b82e9, 0xbdca91db, 0xbe84b845, 0xbe4aebfe, 0x3c3ffa44, 
    0x3d6c2c59, 0xbe2d3b98, 0xbb574f51, 0xbd0a5d2f, 0x3caf5f6e, 0x3d3ebf41, 0xbdc0977f, 0xbd5a3049, 
    0x3dba06fc, 0xbd66ebfd, 0xbd831434, 0xbd2369bb, 0xbe63fba7, 0xbdc029f4, 0x3c3f382f, 0x3d3e5cbe, 
    0x3d37ad73, 0xbd1fd633, 0xbd1665e2, 0xbdcfd309, 0xbce7eb0b, 0xbd6cd235, 0x3e15171d, 0xbe7a9c37, 
    0x3d7d6ba4, 0x3d6981ab, 0xbb56f584, 0x3cb6543c, 0xbd131a7e, 0xbe0f91cb, 0xbe63acca, 0x3d440043, 
    0x3e0cdc9e, 0xbe8546d8, 0xbdbfaa51, 0xbd8e2b3f, 0x3d3e9715, 0x3dddc88a, 0xbdf0b4b1, 0x3cbe4c74, 
    0x3dc46e7e, 0xbd6c0c73, 0xbda62210, 0xbc0e36bb, 0xbe11b4cc, 0xbd888426, 0xbaf89edc, 0x3cca73a2, 
    0x3d9e3ef7, 0x3d1dcf12, 0xbdf3cba7, 0xbe1bd2f1, 0xbc9daf07, 0x3dd8c406, 0x3dbddd8f, 0xbe954711, 
    0x3d27ef29, 0x3d80d476, 0xbcfdc693, 0x3d650420, 0x3ce98f72, 0xbdb0fed0, 0xbda50aa2, 0x3d7d734f, 
    0x3d749a42, 0xbe97d04a, 0xbd8925e4, 0xbcc01d25, 0x3d741e2b, 0x3e29fca8, 0xbe1fd707, 0xbd90424f, 
    0xbd9ea4d5, 0x3ebf727c, 0xbe782998, 0x3d6e9596, 0xbbe7e2ab, 0x3d9fc7ce, 0xbdcd0bf6, 0xbe29a27f, 
    0x3b132b84, 0x3e2f44b1, 0xbe41c3da, 0xbe2976a0, 0x3e512775, 0xbce67a3f, 0x3dc376cd, 0xbd6df4df, 
    0x3c9c5f3d, 0x3d9de47c, 0xbc1ae9fd, 0x3d9b6892, 0x3ec21a99, 0x3d8ca33f, 0xbce63364, 0xbd9fe003, 
    0xbea4f4f9, 0x3df3edba, 0xbe6425c6, 0x3cf193d1, 0x3e0b2eee, 0x3e2c4861, 0x3e299aa3, 0x3e07382a, 
    0x3d1defff, 0x3ec37ebe, 0xbe4e7b02, 0xbd30a838, 0xbcd16d2a, 0x3d861c64, 0xbdb1e194, 0xbe822352, 
    0xbda08902, 0x3e454bc6, 0xbd825a98, 0xbe61344f, 0x3e448829, 0xbde91a35, 0x3d435236, 0xbad52c96, 
    0x3c9386db, 0x3dc57580, 0xbc9063bd, 0x3d32f32b, 0x3ed80fe6, 0x3c9d05d4, 0xbd9177f6, 0xbd0477e2, 
    0xbebc091b, 0x3e22242c, 0xbd906eff, 0x3e28a5fa, 0x3d38608e, 0x3d48e789, 0x3e4a8d3d, 0x3dd02b00, 
    0xbd302f99, 0x3ef27ef8, 0xbe80b1f6, 0xbd6cf4c0, 0xbe068c92, 0xbbe71df2, 0xbe11978b, 0xbe1ca708, 
    0xbe5286bf, 0x3e3a9b3d, 0xbd2b45d0, 0xbe16a5eb, 0xbad9fbb1, 0xbe9aa6cf, 0xbd778644, 0xbdccf002, 
    0x3d8cec85, 0x3d92da1c, 0xbc03da7e, 0x3c077f4b, 0x3eb47adb, 0xbce797a2, 0xbde930ec, 0xbca907fa, 
    0xbeda37fa, 0x3dd73e0d, 0xbe591107, 0x3cca3945, 0x3d354ab1, 0x3c72c4b8, 0x3e623695, 0x3d198764, 
    0xbdfd2622, 0x3d4dde0e, 0x3e05dc8e, 0xbd818e1f, 0xbd311158, 0xbc8c15b3, 0xbd9ff3bb, 0xbcd5be6c, 
    0xbe10c5b4, 0x3cd48f79, 0x3d8ad8e0, 0xbda442ff, 0xbd007a97, 0x3c1073a9, 0xbdd2ff9d, 0x3d4ba984, 
    0x3dd03c92, 0x3de0501f, 0x3c4f1e78, 0x3d3b0cf3, 0x3ba20cab, 0xbd4f81de, 0xbd2fcd97, 0xbdcc948f, 
    0xbd963653, 0xbd8d2dc3, 0x3df4aa84, 0x3cbe9608, 0x3cfe2179, 0xbdbdf8a0, 0x3ded4547, 0xbe1fa02b, 
    0xbe26ae6d, 0x3cf7703f, 0x3e94db2b, 0xbd87f362, 0x3c0b8734, 0xbd32f90e, 0xbe164ec5, 0x3ce0b5fb, 
    0xbe1a512d, 0x3cd0985d, 0x3d978bff, 0xbe090d89, 0xbd68239f, 0xbdc144bf, 0xbdf2cc3d, 0x3d0206dd, 
    0x3d814da7, 0x3de29717, 0xbd190849, 0xbca84066, 0xbcfbcdc2, 0xbdd5be4e, 0xbc99495e, 0xbe23ea9b, 
    0xbd0f56ff, 0xbc5ea11c, 0x3e75f986, 0x3dc28b3c, 0xbb166007, 0xbdd96c7f, 0x3e47db9c, 0xbd711420, 
    0xbe55b46f, 0xbc432fad, 0x3ea8c444, 0xbd9a2de6, 0x3b11718c, 0xbdc287b7, 0xbdd5dd58, 0x3d700f7a, 
    0xbe164093, 0xbd46779a, 0x3dbed385, 0xbddc6deb, 0xbd31b03b, 0xbdfe6601, 0xbdf33ed7, 0x3daf81f1, 
    0x3bc66fdb, 0x3e234a1e, 0xbd942b15, 0x3b3d6434, 0xbd853e3f, 0xbdd9cd3f, 0xbd9036d8, 0xbe2a8aca, 
    0x3cb15827, 0xbcbbe4b8, 0x3e81eb79, 0x3d00b037, 0xbc7c96f9, 0xbe11c464, 0x3e108505, 0xbd65f65b, 
    0x3bd2b70c, 0x3b02c8e2, 0x3b40ca70, 0x3c358292, 0x3b81501f, 0x3c14417c, 0x3abf3826, 0xbbbbca0f, 
    0x3bdf0958, 0x3bd7b675, 0xbb4c8c4c, 0xbae38d5b, 0xb9928034, 0x3b3a9f7b, 0x3c2666f9, 0x3a8cd197, 
    0x3b969cbe, 0x3c2ea3e9, 0x39e4b840, 0x3bf2fb37, 0x3abe7f57, 0x3bf5e0b0, 0x3b8fe208, 0x3c44afab, 
    0x3c0f179e, 0xbc3c81cf, 0x3bab9ac3, 0x3c110e1f, 0x3c1e97f7, 0x3c3159b3, 0x3c0a75de, 0x3b2f5fe7, 
    0x3c2fd0b3, 0xbb285dcb, 0xbab61726, 0x3bdffef3, 0xba6018f9, 0x3baf9bd0, 0xba98b291, 0xbb94ab59, 
    0x3c07e257, 0x3a9eb578, 0xb90b4ba3, 0xbc081b09, 0x3af61667, 0x3b83697c, 0x3c639ac1, 0xbb00037c, 
    0x3c014797, 0x3c28cd68, 0x3ba1d4ca, 0x3bc311fa, 0x3bd45fe1, 0x3b0d45e8, 0x3a1624c7, 0x3c0d4831, 
    0x3ba00f61, 0xbbcf7771, 0x3ac39be4, 0x3c02f015, 0x3c12c5bb, 0x3bd4d932, 0x3bc4ac77, 0x3b79bc83, 
    0x3bf334d3, 0x3ae874f2, 0xb9559070, 0x37ff3bb7, 0x3a33af54, 0x3b82dce1, 0xba980dfe, 0xbafbb085, 
    0x3b887df1, 0x3b6f5ba0, 0xba6bd2d8, 0xbc0fe442, 0x3bdff47e, 0x3b60e75d, 0x3ba0e021, 0x39271158, 
    0xba7c68f4, 0x3c29e2d0, 0x3b7a682d, 0x3be9839b, 0x3c2177f6, 0x3bd3ac53, 0x3afbb4d9, 0x3c0d344a, 
    0x3bfca760, 0xbc41554b, 0x3baa2abf, 0x3beda7b4, 0x3c20a662, 0x3c72ea9a, 0x3c0eded7, 0x3b700b30, 
    0x3d93f08d, 0xbd0eb81b, 0xbcdaec00, 0x3e46c0a3, 0x3c847eb5, 0xbd224ab7, 0x3e0b6cd2, 0x3d54d16b, 
    0x3dd40145, 0xbd9aa63a, 0x3a398bc1, 0xbd71fac9, 0x3de15eb6, 0x3d1c1d94, 0xbc14d418, 0xbd7432e1, 
    0xbd17c4fb, 0x3d3e3e0a, 0x3d90b3d8, 0xbd4119ef, 0xbd5c3993, 0xbd81cdf5, 0x3dac2e08, 0x3da47bbb, 
    0x3decf73b, 0xbd854e03, 0x3bb443e9, 0x3d2c4a27, 0xbb169df5, 0xbda9fa09, 0xbcedea6b, 0x3d11e438, 
    0x3dce295a, 0xbdfdf8bd, 0xbd42ce07, 0x3e2386cc, 0xbba77793, 0x3b24a83d, 0x3e321ea2, 0xbcf10a96, 
    0x3d878510, 0xbd68d2f0, 0xbce65ad8, 0xbd33b9de, 0x3d444045, 0x3d629e01, 0xbc8dcfc7, 0xbdd4cdc3, 
    0xbc9d1bd0, 0x3d0c284a, 0x3d0d7832, 0xbc3e69c1, 0xbd764daa, 0xbd4fe286, 0x3d521374, 0x3dc87ee0, 
    0x3d67bcfe, 0xbe0583d1, 0xbcb6744f, 0x3cf42dcf, 0x3c424d7b, 0xbd471bb5, 0x3ca20a8b, 0xbdb36030, 
    0x3dfb8448, 0xbdeae82a, 0xbca87a9f, 0x3e1290e8, 0x3b0cb722, 0xbbf02a8b, 0x3e05c198, 0x3c7cc5f4, 
    0x3d7b0756, 0xbcec6068, 0xbb2a153c, 0x3c27ef4f, 0xba736fe7, 0x3c8a8a23, 0xbd09a89e, 0xbdbd58f8, 
    0xbba15069, 0x3d4189c0, 0x3c784379, 0xbd075000, 0xbda1d435, 0xbdaf1767, 0x3d7f4ba8, 0x3dadf46c, 
    0x3d907c1b, 0xbda6c26d, 0x3c5b4285, 0x3d0ffc20, 0x3cb72cf1, 0xbd83599d, 0x3d565763, 0xbdc7786c, 
    0x3d46e80b, 0xbc1b3e9d, 0x3da243e9, 0xbdbb67ff, 0xbd22a321, 0x3cadbc19, 0x3d89d334, 0xbd8f52c7, 
    0xbe849893, 0xbd8f794f, 0x3c9f8c9b, 0xbe1d0cb1, 0x3ea73931, 0x3de1bcde, 0xbe7dea51, 0x3c1aaba0, 
    0xbda2e796, 0xbde2eb51, 0x3d170390, 0xbc9325e4, 0xbd152d74, 0x3d315d4b, 0x3e03fc75, 0x3ca2f1bd, 
    0xbb57f95e, 0xbcf85924, 0x3d51e29a, 0xbddc1dad, 0xbd36d67e, 0xbe4e06a3, 0x3cdb18fc, 0xbdfcedb5, 
    0xbbb00c4e, 0xbd34b3a7, 0x3da344bb, 0xbbdd30c1, 0x3d8c8d5c, 0xbc0a24a3, 0x3db17590, 0xbd475317, 
    0xbc39c63d, 0xbd9ca35b, 0xbd4eceab, 0x3d802aa1, 0x3e1e2d01, 0x3da0ccee, 0xbd828baa, 0x3932c941, 
    0xbe4d6bdc, 0xbd96d47f, 0xbb822a22, 0xbe3beaa0, 0xbda89bc5, 0xbd9baca2, 0x3e81d8ad, 0x3ac90741, 
    0x3d122fca, 0xbda94372, 0x3dc44734, 0xbda8fd3b, 0xbdf3f21e, 0xbd8fb42a, 0x3cced941, 0xbe00dbce, 
    0xbd3ad87a, 0xba62a4a7, 0x3def4f50, 0xbd45ca61, 0x3db4c531, 0xbc7e983a, 0xbe0097d3, 0xbc52a01b, 
    0x3b87604a, 0xbd68a48e, 0x3d124736, 0x3dc541ac, 0xbd5a1a31, 0xbdf4eed9, 0x3d39ee6e, 0x3cf26455, 
    0xbd78ef01, 0xbdcb1f92, 0xbcabea5d, 0xbe0fe579, 0xbd87ef0b, 0xbdd3d957, 0x3d36ab2d, 0x3d3c7f21, 
    0x3d8406a3, 0xbd2a074f, 0x3dd2820d, 0xbd74c768, 0xbd1b3f27, 0x3d501716, 0x3d08f429, 0xbdd72a3a, 
    0xbda6a94c, 0xbc584313, 0xbd81a437, 0xbdb26eb1, 0xbe8d4533, 0xbde934ad, 0x3e8889ba, 0xbe00dba4, 
    0xbd0c78b2, 0x3d80609a, 0x3e90251d, 0x3e2756ff, 0xbe0c5501, 0xbde3fbfb, 0xbdcd3599, 0x3f09dafc, 
    0x3daf8bf0, 0x3e966992, 0x3da05de7, 0x3d0537f9, 0xbe1ee625, 0xbdaa3b7f, 0xbe18f960, 0xbe956afe, 
    0xbef0ad44, 0x3f108777, 0x3dd6bd24, 0x3eca61ec, 0xba14448e, 0xbe75ee32, 0x3e6c4728, 0xbe3bf436, 
    0xbdb1b440, 0xbe5da0b4, 0xbe2578a3, 0xbdf92b87, 0xbe4fc198, 0xbd7207c9, 0x3e3d0748, 0xbd0fc566, 
    0xbd39f1de, 0xbe87e18e, 0x3e20a334, 0x3e394d65, 0xbe18f533, 0xbe72f76d, 0x3da910ae, 0x3ed28635, 
    0xbd884704, 0x3ea981bd, 0xbc0571c4, 0x3b7af723, 0xbe8078aa, 0xbde55769, 0xbdac10b0, 0xbd7c1313, 
    0xbe8ff36f, 0x3e83297f, 0xbd9e913f, 0x3e8de3f8, 0x3ccff0e8, 0xbe01c28b, 0x3dc868fa, 0xbe2e629e, 
    0xbd302575, 0xbe5c3ec7, 0xbe5e735c, 0xbd7d5cb1, 0xbe585d58, 0x3ba9c9b5, 0x3e807b85, 0xbe1b44e3, 
    0xbd4a1481, 0xbe713a2a, 0x3e5d5993, 0x3e6048f3, 0xbe217573, 0xbe26d552, 0xbc8ff2fe, 0x3f03a1b8, 
    0x3dfcddd3, 0x3ec04113, 0xbe5be4d4, 0x3d8b612d, 0xbe81ef86, 0xbd3c132a, 0x3c55ce58, 0xbd83c2f7, 
    0xbe50b5f5, 0x3eaca6a7, 0xbdeb2f81, 0x3ebe18fa, 0x3e281d24, 0xbe6032d8, 0xbc304607, 0xbe8da5f1, 
    0x3d9ff25e, 0xbd94ee5c, 0x3b362a67, 0x3ddb60d1, 0x3c97829a, 0xbc7687bf, 0x3e27feaa, 0xbc8cf1ca, 
    0x3d635684, 0xbd89b324, 0xbc750cfd, 0x3c851d23, 0x3dc2c3d3, 0x3cdc9bb2, 0x3cf8fc57, 0xbd17fe2c, 
    0xbcb820c7, 0x3c90df51, 0x3d2b4c38, 0xbcc7fcdf, 0xbde877fe, 0xbc1a6f29, 0x3d3f16de, 0x3de06f1a, 
    0x3d1ee578, 0xbd93a725, 0x3cf733ac, 0x3d251f52, 0x3d49ba6d, 0x3ce665f8, 0x3d13e851, 0xbc490c62, 
    0x3d9de11e, 0xbdcb4564, 0x393ecb8b, 0x3dd55eb6, 0x3caf640e, 0xbc4fe130, 0x3d814d80, 0x3cafacfc, 
    0x3d6f7565, 0xbd87acec, 0xb9b3efcd, 0x3d3d2dca, 0x3ab8617d, 0xbd08eb5a, 0x3bbd6a2e, 0xbcf50bed, 
    0xbb195299, 0x3b47c595, 0x3d21858b, 0xbd1af2c1, 0xbdf9b468, 0xbd1ac006, 0x3d135821, 0x3d9e7763, 
    0x3cde7135, 0xbd0bcf4d, 0x3c7c135c, 0x3c1fa22e, 0x3bccc78f, 0xbd1ebfa9, 0x3caba2aa, 0xbcf1d0a4, 
    0x3d3bc1a6, 0xbdd26bef, 0xbb0e6d5b, 0x3d28e8a9, 0x3c221e43, 0xbcccf59d, 0x3d165794, 0x3ce37ef6, 
    0x3c8be43e, 0xbdd4527a, 0x3c3fc9db, 0xbceb275d, 0xbca3846c, 0xbd1f680d, 0xbd123532, 0xbcc83ad8, 
    0xbbd0c428, 0x3c7f28a5, 0x3ba8e836, 0xbd1430dd, 0xbe068602, 0xbd62ec8a, 0x3c0b26d1, 0x3d3160db, 
    0x3d7a7386, 0xbd0425a5, 0x3ba31abb, 0x3cc574ba, 0x3c61338f, 0xbd8f5cb8, 0x3ce17680, 0xbd4eda9a, 
    0xbda07023, 0xbdf09cd1, 0x3d877437, 0x3ccc5f99, 0x3da62165, 0xbdec6f8f, 0xbde31046, 0x3d8b5e8b, 
    0x3da07145, 0xbceeb0e9, 0x3e0c1460, 0xbea89d11, 0xbdcbfb72, 0xbe19cebb, 0x3d6b0279, 0x3c87db1f, 
    0xbd1d0915, 0xbdc90c76, 0xbeb71a8f, 0xbe808fe5, 0xbda6aabd, 0xbe713b0c, 0x3b911161, 0xbdfffd97, 
    0x3da82161, 0x3d23c124, 0x3dc70a17, 0x3e180e39, 0xbe8eee10, 0x3c9f234e, 0x3d0a2a78, 0xbcfed9f7, 
    0xbc14a01e, 0xbe5a7402, 0x3df09da6, 0x3ddb664b, 0xbde1068a, 0xbed98fa8, 0xbda9a9d8, 0xbd2e0b01, 
    0x3ddce7b1, 0xbddbd626, 0x3e7ad2cc, 0xbe64e0fb, 0xbe1ab6c4, 0xbdab7b75, 0x3d67c5d8, 0xbcea608a, 
    0xbc52d468, 0xbdd02e58, 0xbee25b37, 0xbe1a1c06, 0xbe0e907a, 0xbe9d52ac, 0xbe1c8ac7, 0xbdbe5859, 
    0xbcf9f023, 0xbcda3294, 0x3e00b758, 0x3e1e1b97, 0xbe47b05b, 0xbbbe4f43, 0xbb0c6757, 0xbe08b6a3, 
    0x3d31c65d, 0xbe3a62f6, 0x3def1c9e, 0x3deb6880, 0xbdbd5cea, 0xbeed9e57, 0xbc530841, 0xbd7baa87, 
    0x3e534530, 0xbdb3c64c, 0x3e943e43, 0xbe274ce2, 0xbd4b5d87, 0x3caa7454, 0x3e558522, 0x3d719786, 
    0x3d2d0601, 0xbdb1476a, 0xbebb699a, 0xbcf622ab, 0xbe4ab148, 0xbea43363, 0xbe0f3b7d, 0xbd4fd89b, 
    0xbdd42640, 0x3cbb4d96, 0x3dbb7b9f, 0x3e51b88e, 0xbde2250e, 0x3d3442d1, 0x3d8682ee, 0xbdaba665, 
    0xbcff1a74, 0x3b66d889, 0xbb965a8c, 0xbcb7d4ba, 0xbe3da1a6, 0x3d3cfd5a, 0xbcc95abd, 0xbd5fb677, 
    0xbdcaf060, 0xbd01008d, 0xbd5281a2, 0xbd9ec479, 0xbdcfef2a, 0xbc286b1b, 0xbe1df708, 0x3c8e2d9a, 
    0x3dcdd40e, 0xbdc686ea, 0x3d164625, 0x3e167b18, 0xbc1dddb1, 0xbcc54c79, 0xbe0a4bbd, 0xbda6e054, 
    0xbd9b783b, 0xbd548cdb, 0x3d4dc765, 0x3d4ac5ff, 0x3d223c30, 0xbd62b8f9, 0x3d15b3f7, 0xbdcac02f, 
    0xbcd75465, 0xbbc05aa3, 0x3c3238ad, 0xbcc96ca2, 0xbdccfc77, 0x3d0dc139, 0x3cbd8171, 0xbddfb16e, 
    0xbd0326de, 0x3c1d93e7, 0xbd972b91, 0x3ce76a8d, 0xbdbb8ed9, 0x3beb487e, 0xbd3cf693, 0xbbe09561, 
    0x3e7b8d49, 0xbde84431, 0x3c8d1b34, 0x3ea0b8d3, 0xbce033f3, 0x3ccc1047, 0xbd9f6afd, 0xbd073c6d, 
    0x3bb6e507, 0xbc86f894, 0x3d7873f1, 0x3d281ec6, 0x3e07f544, 0x3b179139, 0x3d7e677e, 0xbd720c47, 
    0xbcfb4367, 0xbdf73265, 0xbcc28b02, 0x3bb2e831, 0xbdec6fa8, 0xbc1751ce, 0x3d6e6a73, 0xbe2fc822, 
    0xbb1751a0, 0xbda0056b, 0xbd939fd3, 0x3de5be4d, 0xbc82d523, 0x3d6cc40f, 0xbae6156f, 0xbc7ce1fb, 
    0x3ea553de, 0xbe10ebe0, 0xbc9636c6, 0x3efaaaa8, 0xbd5c0be6, 0x3d0926cb, 0xbdb56567, 0x3cbfa7ad, 
    0xbd0bdf1b, 0xbdafc6ca, 0x3c72987c, 0xba57cbd2, 0x3e9dd609, 0x3db05152, 0x3d861f1d, 0xbe009d80, 
    0xbd820c72, 0x3d4b3954, 0x3de4f264, 0xbe5b1caf, 0xbd6775c5, 0xbcb4c667, 0xbe871d01, 0x3e08a9e9, 
    0xbe241b1c, 0xbdc0a389, 0x3c9f24af, 0xbe9943d7, 0x3b7b812f, 0x3d546a34, 0xbe19fd0f, 0x3ec7d02c, 
    0xbe90f04b, 0x3d91cb2e, 0xbe0451b4, 0xbe348105, 0x3c31885f, 0xbb7a2b6c, 0x3d4297e3, 0xbc3bfb9e, 
    0xbe966b1c, 0x3d848339, 0x3e1d0531, 0x3df32eff, 0xbe92b3a6, 0xbd182128, 0xbc4f9ff1, 0xbeaa6639, 
    0xbdbc3438, 0x3cc1a648, 0x3e62f6e3, 0xbe5b1398, 0xbe249dda, 0xbe409c34, 0xbdcd776a, 0xbd3f0fbe, 
    0xbdd51250, 0xbcc25e69, 0x3e9b51e5, 0xbe81afab, 0x3c165c6f, 0x3d8fd939, 0xbe33d0cb, 0x3f06293f, 
    0xbd1a64b3, 0xbccc28fb, 0xbe70d514, 0xbbefda06, 0xbd8d513b, 0xbdf5a65c, 0xbdd9da1c, 0xbd264279, 
    0xbe95e44e, 0x3e89e64f, 0x3e3c2936, 0x3e82964d, 0xbc4ad675, 0x3db9b04c, 0x3c93a110, 0xbec68fe1, 
    0xbbfabd44, 0xbe016e61, 0x3e125463, 0xbd228f06, 0xbe85f89d, 0xbe25bb76, 0x3d5cc9fe, 0xbdf7a33b, 
    0xbd8e72fd, 0xbe24cd22, 0x3e9652a1, 0xbdf842c0, 0x3d749f30, 0x3e2f27bf, 0xbd4b0f19, 0x3f01801d, 
    0x3c356a31, 0xbc46868c, 0xbe1c9cfc, 0x3e108e28, 0xbe0b06af, 0xbd96604e, 0xbd153352, 0x3d96b344, 
    0xbec295f9, 0x3e2859b1, 0x3e0cdffc, 0x3e5caeba, 0x3dac7858, 0x3d8d7534, 0x3cee92bc, 0xbed168b4
};

static const uint32_t _K53[] = {
    0x3f410aa0, 0xbeec5ed0, 0x3d2d0850, 0x3f9a4c1f, 0x3e0a8169, 0xbf4805ea, 0x3e69daf2, 0xbe7f775f, 
    0xbf7b394c, 0x3f0d2e47, 0x3f375da2, 0xbd6874a8, 0xc012b18e, 0xbea6dc8c, 0x3db0c198, 0xbfa6b826, 
    0x3ed9efef, 0x3eb1cea4, 0xbe2abd80, 0xbcf179de, 0x3e766696, 0x3fd3de3f, 0xbf2643dd, 0x3deb9fd0, 
    0xbf55f9f8, 0x3f1a5662, 0x3f9c2314, 0x3e810fb1, 0x3e98814f, 0x3ff4dd34, 0xbe468500, 0xbe17e140
};

static const uint32_t _K59[] = {
    0x3d2268a8, 0xbe32436a, 0x3f872b82, 0xbd4668cb, 0x3d6c5f31, 0xbbbf0679, 0x3dec9a36, 0xbb8fe5f6, 
    0xbecb1db2, 0x3f32cd3d, 0x3f4f294e, 0x3ee05246, 0x3f6f4387, 0xbe812581, 0x3ed418ca, 0x3d940dc0, 
    0xbe2a5bf2, 0x3f70b1b8, 0xbdf37945, 0x3e2cce9f, 0x3e0bf6ee, 0xbf4ff06a, 0x3f027e8a, 0x3e5d7485, 
    0xbdecd56e, 0xbe8d43b9, 0x3e98b2c7, 0x3ef3df09, 0xbdc7ab56, 0xbf617bc1, 0xbd6b6cc6, 0xbe398605, 
    0xbfb8117f, 0x3dde6ae9, 0xbf41113d, 0x3eb0e730, 0x3ec77fb8, 0xbf5cf490, 0xbfe23466, 0x3eee44b6, 
    0x3f21d79b, 0xbf419e7c, 0x3dec17c2, 0xbf83d182, 0xbf6f1b61, 0x3e9e502b, 0xbf5360bd, 0x3d803e9d, 
    0xbfac8bec, 0x3eb68579, 0xbde118f6, 0x3e97bbac, 0xc014f366, 0x3db7a073, 0xbf582a1a, 0xc0036367, 
    0xbe4e7ab1, 0x3bae0361, 0xbfb191f9, 0x3ef167d1, 0xbe362522, 0x3effe496, 0x3ea878b3, 0x3f2aa58d, 
    0x3f39b1da, 0x3f2d9398, 0xbf3116b9, 0xc018471f, 0xc01818db, 0x3f069751, 0xbf818480, 0x3df72262, 
    0xbec6a219, 0xbe3ff9fb, 0xbfa39ec1, 0xbfe1f0b7, 0xbe3aee01, 0xbf40931a, 0xbf7557b2, 0x3ef5d7d3, 
    0xbe65934c, 0xbf4986ae, 0x3cf112b6, 0xbfc2c45f, 0x3d580195, 0x3e99bf86, 0x3f177ceb, 0xbf62dfca, 
    0xbe1062bd, 0xbf8ae55e, 0xbf298a4c, 0xbfc5bc80, 0xbff38600, 0xc00cfa42, 0x3f02aa9a, 0xbfdebe4a, 
    0x3eb64495, 0xbf807abb, 0xbf846bbe, 0x3ea03296, 0x3e8f61e8, 0xbedb75c0, 0x3e94b8e8, 0xbfb6ded2, 
    0xbeecc0a6, 0xbcd2a846, 0xbf843ac9, 0x3f08760d, 0xbe82337f, 0x3d733dbd, 0x3ed139cf, 0xbecf83ad, 
    0x3e5e812f, 0xbeb25abc, 0xbd9b8015, 0xbeebf2ca, 0x3e5f4f10, 0x3f244e3e, 0xbfa12c85, 0x3eb2e9c3, 
    0xbd9ca4e6, 0x3f235360, 0x3f0d01bd, 0xbfd640ad, 0x3ec110a4, 0x3e95b7cd, 0xbfd7d3b2, 0xbfcfb21d
};

static const uint32_t _K61[] = {
    0xbecdbd49, 0xbcec04fc, 0x3f3c5cf1, 0x3e0b4f2e
};

// Memory mapped buffers
#define _K12             ((int *)_K12)                       // s32[42] (168 bytes) 
#define _K20             ((float *)_K20)                     // f32[16,3,40] (7680 bytes) 
#define _K23             ((float *)_K23)                     // f32[16] (64 bytes) 
#define _K27             ((float *)_K27)                     // f32[32,3,16] (6144 bytes) 
#define _K30             ((float *)_K30)                     // f32[32] (128 bytes) 
#define _K34             ((float *)_K34)                     // f32[32,3,32] (12288 bytes) 
#define _K37             ((float *)_K37)                     // f32[32] (128 bytes) 
#define _K43             ((float *)_K43)                     // f32[32,3,32] (12288 bytes) 
#define _K46             ((float *)_K46)                     // f32[32] (128 bytes) 
#define _K5              ((float *)_K5)                      // f32[512] (2048 bytes) 
#define _K50             ((float *)_K50)                     // f32[32,3,32] (12288 bytes) 
#define _K53             ((float *)_K53)                     // f32[32] (128 bytes) 
#define _K59             ((float *)_K59)                     // f32[4,32] (512 bytes) 
#define _K61             ((float *)_K61)                     // f32[4] (16 bytes) 
#define _K18             ((int8_t *)(_state + 0x000008d0))   // s8[16208] (16208 bytes) 
#define _K4              ((int8_t *)(_state + 0x00000000))   // s8[2256] (2256 bytes) 
#define _K8              ((int *)(_state + 0x00004820))      // s32[24] (96 bytes) 
#define _K9              ((float *)(_state + 0x00004880))    // f32[258] (1032 bytes) 
#define _K10             ((float *)(_buffer + 0x00000000))   // f32[512] (2048 bytes) 
#define _K11             ((float *)(_buffer + 0x00000000))   // f32[257] (1028 bytes) 
#define _K13             ((float *)(_buffer + 0x00000404))   // f32[40] (160 bytes) 
#define _K14             ((float *)(_buffer + 0x00000000))   // f32[40] (160 bytes) 
#define _K15             ((float *)(_buffer + 0x000000a0))   // f32[40] (160 bytes) 
#define _K16             ((float *)(_buffer + 0x00000000))   // f32[40] (160 bytes) 
#define _K17             ((float *)(_buffer + 0x00000000))   // f32[100,40] (16000 bytes) 
#define _K19             ((float *)(_buffer + 0x00003e80))   // f32[50,16] (3200 bytes) 
#define _K21             ((float *)(_buffer + 0x00000000))   // f32[50,16] (3200 bytes) 
#define _K25             ((float *)(_buffer + 0x00000c80))   // f32[50,16] (3200 bytes) 
#define _K26             ((float *)(_buffer + 0x00001900))   // f32[50,32] (6400 bytes) 
#define _K28             ((float *)(_buffer + 0x00000000))   // f32[50,32] (6400 bytes) 
#define _K3              ((float *)(_buffer + 0x00000000))   // f32[512] (2048 bytes) 
#define _K32             ((float *)(_buffer + 0x00001900))   // f32[50,32] (6400 bytes) 
#define _K33             ((float *)(_buffer + 0x00000000))   // f32[50,32] (6400 bytes) 
#define _K35             ((float *)(_buffer + 0x00001900))   // f32[50,32] (6400 bytes) 
#define _K39             ((float *)(_buffer + 0x00000000))   // f32[50,32] (6400 bytes) 
#define _K41             ((float *)(_buffer + 0x00001900))   // f32[25,32] (3200 bytes) 
#define _K42             ((float *)(_buffer + 0x00000000))   // f32[25,32] (3200 bytes) 
#define _K44             ((float *)(_buffer + 0x00000c80))   // f32[25,32] (3200 bytes) 
#define _K48             ((float *)(_buffer + 0x00000000))   // f32[25,32] (3200 bytes) 
#define _K49             ((float *)(_buffer + 0x00000c80))   // f32[25,32] (3200 bytes) 
#define _K51             ((float *)(_buffer + 0x00000000))   // f32[25,32] (3200 bytes) 
#define _K55             ((float *)(_buffer + 0x00000c80))   // f32[25,32] (3200 bytes) 
#define _K57             ((float *)(_buffer + 0x00000000))   // f32[12,32] (1536 bytes) 
#define _K58             ((float *)(_buffer + 0x00000600))   // f32[32] (128 bytes) 
#define _K6              ((float *)(_buffer + 0x00000800))   // f32[512] (2048 bytes) 
#define _K60             ((float *)(_buffer + 0x00000000))   // f32[4] (16 bytes) 
#define _K62             ((float *)(_buffer + 0x00000010))   // f32[4] (16 bytes) 
#define _K7              ((float *)(_buffer + 0x00001000))   // f32[257,2] (2056 bytes) 

// Represents a Circular Buffer
// https://en.wikipedia.org/wiki/Circular_buffer
typedef struct
{
	char *buf;
	int size;		// total bytes allocated in *buf
	int used;		// current bytes used in buffer.
	int read;
	int write;
} cbuffer_t;

#define CBUFFER_SUCCESS 0
#define CBUFFER_NOMEM -1

// Reset instance (clear buffer)
static inline void cbuffer_reset(cbuffer_t* buf) {
	buf->read = 0;
	buf->write = 0;
	buf->used = 0;
}

// Initializes a cbuffer handle with given memory and size.
static inline void cbuffer_init(cbuffer_t *dest, void *mem, int size) {
	dest->buf = mem;
	dest->size = size;
	cbuffer_reset(dest);
}

// Returns the number of free bytes in buffer.
static inline int cbuffer_get_free(cbuffer_t *buf) {
	return buf->size - buf->used;
}

// Returns the number of used bytes in buffer.
static inline int cbuffer_get_used(cbuffer_t *buf) {
	return buf->used;
}

// Writes given data to buffer.
// Returns CBUFFER_SUCCESS or CBUFFER_NOMEM if out of memory.
static inline int cbuffer_enqueue(cbuffer_t *buf, const void *data, int data_size) {
	int free = cbuffer_get_free(buf);

	// Out of memory?
	if (free < data_size)
		return CBUFFER_NOMEM;

	// Is the data split in the end?
	if (buf->write + data_size > buf->size) {
		int first_size = buf->size - buf->write;
		memcpy(buf->buf + buf->write, data, first_size);
		memcpy(buf->buf, ((char *)data) + first_size, data_size - first_size);
	}
	else {
		memcpy(buf->buf + buf->write, data, data_size);
	}
	buf->write += data_size;
	if (buf->write >= buf->size)
		buf->write -= buf->size;

	buf->used += data_size;
	return CBUFFER_SUCCESS;
}

// Advances the read pointer by given count.
// Returns CBUFFER_SUCCESS on success or CBUFFER_NOMEM if count is more than available data
static inline int cbuffer_advance(cbuffer_t *buf, int count) {
	int used = cbuffer_get_used(buf);

	if (count > used)
		return CBUFFER_NOMEM;

	buf->read += count;
	if (buf->read >= buf->size)
		buf->read -= buf->size;

	// Reset pointers to 0 if buffer is empty in order to avoid unwanted wrapps.
	if (buf->read == buf->write) {
		buf->read = 0;
		buf->write = 0;
	}

	buf->used -= count;
	return CBUFFER_SUCCESS;
}

// Returns a read pointer at given offset and  
// updates *can_read_bytes (if not NULL) with the number of bytes that can be read.
// 
// Note! Byte count written to can_read_bytes can be less than what cbuffer_get_used() returns.
// This happens when the read has to be split in two since it's a circular buffer.
static inline void* cbuffer_readptr(cbuffer_t* buf, int offset, int* can_read_bytes)
{
	int a0 = buf->read + offset;
	if (a0 >= buf->size)
		a0 -= buf->size;
	if (can_read_bytes != NULL)
	{
		int c0 = buf->used;
		if (a0 + c0 > buf->size)
			c0 = buf->size - a0;

		*can_read_bytes = c0;
	}
	return buf->buf + a0;
}

// Copies given "count" bytes to the "dst" buffer without advancing the buffer read offset.
// Returns CBUFFER_SUCCESS on success or CBUFFER_NOMEM if count is more than available data.
static inline int cbuffer_copyto(cbuffer_t *buf, void *dst, int count, int offset) {
	
	if (count > cbuffer_get_used(buf))
		return CBUFFER_NOMEM;

	int can_read_bytes;
	void* src_ptr = cbuffer_readptr(buf, offset, &can_read_bytes);

	int c0 = (count < can_read_bytes) ? count : can_read_bytes;
	memcpy(dst, src_ptr, c0);
	
	int c1 = count - c0;

	if (c1 > 0)
		memcpy(((char *)dst) + c0, buf->buf, c1);

	return CBUFFER_SUCCESS;
}

typedef struct {
	cbuffer_t data_buffer;			// Circular Buffer for features
	int input_size;					// Number of bytes in each input chunk
	int window_count;				// Number of input chunks in output window.
} fixwin_t;

#ifdef _MSC_VER
static_assert(sizeof(fixwin_t) <= 64, "Data structure 'fixwin_t' is too big");
#endif

#define IPWIN_RET_SUCCESS 0
#define IPWIN_RET_NODATA -1
#define IPWIN_RET_NOMEM -2

/*
* Try to dequeue a window.
*
* @param handle Pointer to an initialized handle.
* @param dst Pointer where to write window.
* @param stride_count Number of items (of size handle->input_size) to stride window.
* @return IPWIN_RET_SUCCESS (0) or IPWIN_RET_NODATA (-1) is no data is available.
*/
static inline int fixwin_dequeuef32(void* restrict handle, void* restrict dst, int stride_count)
{
	fixwin_t* fep = (fixwin_t*)handle;

	const int stride_bytes = stride_count * fep->input_size;
	const int size = fep->window_count * fep->input_size;
	if (cbuffer_get_used(&fep->data_buffer) >= size) {
		if (cbuffer_copyto(&fep->data_buffer, dst, size, 0) != 0)
			return IPWIN_RET_NOMEM;

		if (cbuffer_advance(&fep->data_buffer, stride_bytes) != 0)
			return IPWIN_RET_NOMEM;

		return IPWIN_RET_SUCCESS;
	}
	return IPWIN_RET_NODATA;
}

static inline void hammingmul_f32(const float* restrict a, const float* restrict b, float* restrict result, int d0, int d1)
{
	for (int j = 0; j < d1; j++) {
		for (int i = 0; i < d0; i++) {
			*result++ = *a++ * b[i];
		}
	}
}

static void makeipt(int nw, int *ip)
{
    int j, l, m, m2, p, q;
    
    ip[2] = 0;
    ip[3] = 16;
    m = 2;
    for (l = nw; l > 32; l >>= 2) {
        m2 = m << 1;
        q = m2 << 3;
        for (j = m; j < m2; j++) {
            p = ip[j] << 2;
            ip[m + j] = p;
            ip[m2 + j] = p + q;
        }
        m = m2;
    }
}

static void makewt(int nw, int *ip, float *w)
{
    void makeipt(int nw, int *ip);
    int j, nwh, nw0, nw1;
    float delta, wn4r, wk1r, wk1i, wk3r, wk3i;
    
    ip[0] = nw;
    ip[1] = 1;
    if (nw > 2) {
        nwh = nw >> 1;
        delta = atan(1.0) / nwh;
        wn4r = cos(delta * nwh);
        w[0] = 1;
        w[1] = wn4r;
        if (nwh == 4) {
            w[2] = cos(delta * 2);
            w[3] = sin(delta * 2);
        } else if (nwh > 4) {
            makeipt(nw, ip);
            w[2] = 0.5 / cos(delta * 2);
            w[3] = 0.5 / cos(delta * 6);
            for (j = 4; j < nwh; j += 4) {
                w[j] = cos(delta * j);
                w[j + 1] = sin(delta * j);
                w[j + 2] = cos(3 * delta * j);
                w[j + 3] = -sin(3 * delta * j);
            }
        }
        nw0 = 0;
        while (nwh > 2) {
            nw1 = nw0 + nwh;
            nwh >>= 1;
            w[nw1] = 1;
            w[nw1 + 1] = wn4r;
            if (nwh == 4) {
                wk1r = w[nw0 + 4];
                wk1i = w[nw0 + 5];
                w[nw1 + 2] = wk1r;
                w[nw1 + 3] = wk1i;
            } else if (nwh > 4) {
                wk1r = w[nw0 + 4];
                wk3r = w[nw0 + 6];
                w[nw1 + 2] = 0.5 / wk1r;
                w[nw1 + 3] = 0.5 / wk3r;
                for (j = 4; j < nwh; j += 4) {
                    wk1r = w[nw0 + 2 * j];
                    wk1i = w[nw0 + 2 * j + 1];
                    wk3r = w[nw0 + 2 * j + 2];
                    wk3i = w[nw0 + 2 * j + 3];
                    w[nw1 + j] = wk1r;
                    w[nw1 + j + 1] = wk1i;
                    w[nw1 + j + 2] = wk3r;
                    w[nw1 + j + 3] = wk3i;
                }
            }
            nw0 = nw1;
        }
    }
}

static void makect(int nc, int *ip, float *c)
{
    int j, nch;
    float delta;
    
    ip[1] = nc;
    if (nc > 1) {
        nch = nc >> 1;
        delta = atan(1.0) / nch;
        c[0] = cos(delta * nch);
        c[nch] = 0.5 * c[0];
        for (j = 1; j < nch; j++) {
            c[j] = 0.5 * cos(delta * j);
            c[nc - j] = 0.5 * sin(delta * j);
        }
    }
}

static void bitrv2(int n, int *ip, float *a)
{
    int j, j1, k, k1, l, m, nh, nm;
    float xr, xi, yr, yi;
    
    m = 1;
    for (l = n >> 2; l > 8; l >>= 2) {
        m <<= 1;
    }
    nh = n >> 1;
    nm = 4 * m;
    if (l == 8) {
        for (k = 0; k < m; k++) {
            for (j = 0; j < k; j++) {
                j1 = 4 * j + 2 * ip[m + k];
                k1 = 4 * k + 2 * ip[m + j];
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 -= nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nh;
                k1 += 2;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 += nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += 2;
                k1 += nh;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 -= nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nh;
                k1 -= 2;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 += nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
            }
            k1 = 4 * k + 2 * ip[m + k];
            j1 = k1 + 2;
            k1 += nh;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 += nm;
            k1 += 2 * nm;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 += nm;
            k1 -= nm;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 -= 2;
            k1 -= nh;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 += nh + 2;
            k1 += nh + 2;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 -= nh - nm;
            k1 += 2 * nm - 2;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
        }
    } else {
        for (k = 0; k < m; k++) {
            for (j = 0; j < k; j++) {
                j1 = 4 * j + ip[m + k];
                k1 = 4 * k + ip[m + j];
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nh;
                k1 += 2;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += 2;
                k1 += nh;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nh;
                k1 -= 2;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= nm;
                xr = a[j1];
                xi = a[j1 + 1];
                yr = a[k1];
                yi = a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
            }
            k1 = 4 * k + ip[m + k];
            j1 = k1 + 2;
            k1 += nh;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 += nm;
            k1 += nm;
            xr = a[j1];
            xi = a[j1 + 1];
            yr = a[k1];
            yi = a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
        }
    }
}

static void bitrv216(float *a)
{
    float x1r, x1i, x2r, x2i, x3r, x3i, x4r, x4i, 
        x5r, x5i, x7r, x7i, x8r, x8i, x10r, x10i, 
        x11r, x11i, x12r, x12i, x13r, x13i, x14r, x14i;
    
    x1r = a[2];
    x1i = a[3];
    x2r = a[4];
    x2i = a[5];
    x3r = a[6];
    x3i = a[7];
    x4r = a[8];
    x4i = a[9];
    x5r = a[10];
    x5i = a[11];
    x7r = a[14];
    x7i = a[15];
    x8r = a[16];
    x8i = a[17];
    x10r = a[20];
    x10i = a[21];
    x11r = a[22];
    x11i = a[23];
    x12r = a[24];
    x12i = a[25];
    x13r = a[26];
    x13i = a[27];
    x14r = a[28];
    x14i = a[29];
    a[2] = x8r;
    a[3] = x8i;
    a[4] = x4r;
    a[5] = x4i;
    a[6] = x12r;
    a[7] = x12i;
    a[8] = x2r;
    a[9] = x2i;
    a[10] = x10r;
    a[11] = x10i;
    a[14] = x14r;
    a[15] = x14i;
    a[16] = x1r;
    a[17] = x1i;
    a[20] = x5r;
    a[21] = x5i;
    a[22] = x13r;
    a[23] = x13i;
    a[24] = x3r;
    a[25] = x3i;
    a[26] = x11r;
    a[27] = x11i;
    a[28] = x7r;
    a[29] = x7i;
}

static void bitrv208(float *a)
{
    float x1r, x1i, x3r, x3i, x4r, x4i, x6r, x6i;
    
    x1r = a[2];
    x1i = a[3];
    x3r = a[6];
    x3i = a[7];
    x4r = a[8];
    x4i = a[9];
    x6r = a[12];
    x6i = a[13];
    a[2] = x4r;
    a[3] = x4i;
    a[6] = x6r;
    a[7] = x6i;
    a[8] = x1r;
    a[9] = x1i;
    a[12] = x3r;
    a[13] = x3i;
}

static void cftf1st(int n, float *a, float *w)
{
    int j, j0, j1, j2, j3, k, m, mh;
    float wn4r, csc1, csc3, wk1r, wk1i, wk3r, wk3i, 
        wd1r, wd1i, wd3r, wd3i;
    float x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i, 
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i;
    
    mh = n >> 3;
    m = 2 * mh;
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] + a[j2];
    x0i = a[1] + a[j2 + 1];
    x1r = a[0] - a[j2];
    x1i = a[1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    a[j2] = x1r - x3i;
    a[j2 + 1] = x1i + x3r;
    a[j3] = x1r + x3i;
    a[j3 + 1] = x1i - x3r;
    wn4r = w[1];
    csc1 = w[2];
    csc3 = w[3];
    wd1r = 1;
    wd1i = 0;
    wd3r = 1;
    wd3i = 0;
    k = 0;
    for (j = 2; j < mh - 2; j += 4) {
        k += 4;
        wk1r = csc1 * (wd1r + w[k]);
        wk1i = csc1 * (wd1i + w[k + 1]);
        wk3r = csc3 * (wd3r + w[k + 2]);
        wk3i = csc3 * (wd3i + w[k + 3]);
        wd1r = w[k];
        wd1i = w[k + 1];
        wd3r = w[k + 2];
        wd3i = w[k + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] + a[j2];
        x0i = a[j + 1] + a[j2 + 1];
        x1r = a[j] - a[j2];
        x1i = a[j + 1] - a[j2 + 1];
        y0r = a[j + 2] + a[j2 + 2];
        y0i = a[j + 3] + a[j2 + 3];
        y1r = a[j + 2] - a[j2 + 2];
        y1i = a[j + 3] - a[j2 + 3];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 + 2] + a[j3 + 2];
        y2i = a[j1 + 3] + a[j3 + 3];
        y3r = a[j1 + 2] - a[j3 + 2];
        y3i = a[j1 + 3] - a[j3 + 3];
        a[j] = x0r + x2r;
        a[j + 1] = x0i + x2i;
        a[j + 2] = y0r + y2r;
        a[j + 3] = y0i + y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        a[j1 + 2] = y0r - y2r;
        a[j1 + 3] = y0i - y2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1r * x0r - wk1i * x0i;
        a[j2 + 1] = wk1r * x0i + wk1i * x0r;
        x0r = y1r - y3i;
        x0i = y1i + y3r;
        a[j2 + 2] = wd1r * x0r - wd1i * x0i;
        a[j2 + 3] = wd1r * x0i + wd1i * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3r * x0r + wk3i * x0i;
        a[j3 + 1] = wk3r * x0i - wk3i * x0r;
        x0r = y1r + y3i;
        x0i = y1i - y3r;
        a[j3 + 2] = wd3r * x0r + wd3i * x0i;
        a[j3 + 3] = wd3r * x0i - wd3i * x0r;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] + a[j2];
        x0i = a[j0 + 1] + a[j2 + 1];
        x1r = a[j0] - a[j2];
        x1i = a[j0 + 1] - a[j2 + 1];
        y0r = a[j0 - 2] + a[j2 - 2];
        y0i = a[j0 - 1] + a[j2 - 1];
        y1r = a[j0 - 2] - a[j2 - 2];
        y1i = a[j0 - 1] - a[j2 - 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 - 2] + a[j3 - 2];
        y2i = a[j1 - 1] + a[j3 - 1];
        y3r = a[j1 - 2] - a[j3 - 2];
        y3i = a[j1 - 1] - a[j3 - 1];
        a[j0] = x0r + x2r;
        a[j0 + 1] = x0i + x2i;
        a[j0 - 2] = y0r + y2r;
        a[j0 - 1] = y0i + y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        a[j1 - 2] = y0r - y2r;
        a[j1 - 1] = y0i - y2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1i * x0r - wk1r * x0i;
        a[j2 + 1] = wk1i * x0i + wk1r * x0r;
        x0r = y1r - y3i;
        x0i = y1i + y3r;
        a[j2 - 2] = wd1i * x0r - wd1r * x0i;
        a[j2 - 1] = wd1i * x0i + wd1r * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3i * x0r + wk3r * x0i;
        a[j3 + 1] = wk3i * x0i - wk3r * x0r;
        x0r = y1r + y3i;
        x0i = y1i - y3r;
        a[j3 - 2] = wd3i * x0r + wd3r * x0i;
        a[j3 - 1] = wd3i * x0i - wd3r * x0r;
    }
    wk1r = csc1 * (wd1r + wn4r);
    wk1i = csc1 * (wd1i + wn4r);
    wk3r = csc3 * (wd3r - wn4r);
    wk3i = csc3 * (wd3i - wn4r);
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0 - 2] + a[j2 - 2];
    x0i = a[j0 - 1] + a[j2 - 1];
    x1r = a[j0 - 2] - a[j2 - 2];
    x1i = a[j0 - 1] - a[j2 - 1];
    x2r = a[j1 - 2] + a[j3 - 2];
    x2i = a[j1 - 1] + a[j3 - 1];
    x3r = a[j1 - 2] - a[j3 - 2];
    x3i = a[j1 - 1] - a[j3 - 1];
    a[j0 - 2] = x0r + x2r;
    a[j0 - 1] = x0i + x2i;
    a[j1 - 2] = x0r - x2r;
    a[j1 - 1] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2 - 2] = wk1r * x0r - wk1i * x0i;
    a[j2 - 1] = wk1r * x0i + wk1i * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3 - 2] = wk3r * x0r + wk3i * x0i;
    a[j3 - 1] = wk3r * x0i - wk3i * x0r;
    x0r = a[j0] + a[j2];
    x0i = a[j0 + 1] + a[j2 + 1];
    x1r = a[j0] - a[j2];
    x1i = a[j0 + 1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[j0] = x0r + x2r;
    a[j0 + 1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2] = wn4r * (x0r - x0i);
    a[j2 + 1] = wn4r * (x0i + x0r);
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3] = -wn4r * (x0r + x0i);
    a[j3 + 1] = -wn4r * (x0i - x0r);
    x0r = a[j0 + 2] + a[j2 + 2];
    x0i = a[j0 + 3] + a[j2 + 3];
    x1r = a[j0 + 2] - a[j2 + 2];
    x1i = a[j0 + 3] - a[j2 + 3];
    x2r = a[j1 + 2] + a[j3 + 2];
    x2i = a[j1 + 3] + a[j3 + 3];
    x3r = a[j1 + 2] - a[j3 + 2];
    x3i = a[j1 + 3] - a[j3 + 3];
    a[j0 + 2] = x0r + x2r;
    a[j0 + 3] = x0i + x2i;
    a[j1 + 2] = x0r - x2r;
    a[j1 + 3] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2 + 2] = wk1i * x0r - wk1r * x0i;
    a[j2 + 3] = wk1i * x0i + wk1r * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3 + 2] = wk3i * x0r + wk3r * x0i;
    a[j3 + 3] = wk3i * x0i - wk3r * x0r;
}

static void cftmdl1(int n, float *a, float *w)
{
    int j, j0, j1, j2, j3, k, m, mh;
    float wn4r, wk1r, wk1i, wk3r, wk3i;
    float x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i;
    
    mh = n >> 3;
    m = 2 * mh;
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] + a[j2];
    x0i = a[1] + a[j2 + 1];
    x1r = a[0] - a[j2];
    x1i = a[1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    a[j2] = x1r - x3i;
    a[j2 + 1] = x1i + x3r;
    a[j3] = x1r + x3i;
    a[j3 + 1] = x1i - x3r;
    wn4r = w[1];
    k = 0;
    for (j = 2; j < mh; j += 2) {
        k += 4;
        wk1r = w[k];
        wk1i = w[k + 1];
        wk3r = w[k + 2];
        wk3i = w[k + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] + a[j2];
        x0i = a[j + 1] + a[j2 + 1];
        x1r = a[j] - a[j2];
        x1i = a[j + 1] - a[j2 + 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        a[j] = x0r + x2r;
        a[j + 1] = x0i + x2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1r * x0r - wk1i * x0i;
        a[j2 + 1] = wk1r * x0i + wk1i * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3r * x0r + wk3i * x0i;
        a[j3 + 1] = wk3r * x0i - wk3i * x0r;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] + a[j2];
        x0i = a[j0 + 1] + a[j2 + 1];
        x1r = a[j0] - a[j2];
        x1i = a[j0 + 1] - a[j2 + 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        a[j0] = x0r + x2r;
        a[j0 + 1] = x0i + x2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i - x2i;
        x0r = x1r - x3i;
        x0i = x1i + x3r;
        a[j2] = wk1i * x0r - wk1r * x0i;
        a[j2 + 1] = wk1i * x0i + wk1r * x0r;
        x0r = x1r + x3i;
        x0i = x1i - x3r;
        a[j3] = wk3i * x0r + wk3r * x0i;
        a[j3 + 1] = wk3i * x0i - wk3r * x0r;
    }
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0] + a[j2];
    x0i = a[j0 + 1] + a[j2 + 1];
    x1r = a[j0] - a[j2];
    x1i = a[j0 + 1] - a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[j0] = x0r + x2r;
    a[j0 + 1] = x0i + x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    a[j2] = wn4r * (x0r - x0i);
    a[j2 + 1] = wn4r * (x0i + x0r);
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    a[j3] = -wn4r * (x0r + x0i);
    a[j3 + 1] = -wn4r * (x0i - x0r);
}

static void cftmdl2(int n, float *a, float *w)
{
    int j, j0, j1, j2, j3, k, kr, m, mh;
    float wn4r, wk1r, wk1i, wk3r, wk3i, wd1r, wd1i, wd3r, wd3i;
    float x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i, y0r, y0i, y2r, y2i;
    
    mh = n >> 3;
    m = 2 * mh;
    wn4r = w[1];
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] - a[j2 + 1];
    x0i = a[1] + a[j2];
    x1r = a[0] + a[j2 + 1];
    x1i = a[1] - a[j2];
    x2r = a[j1] - a[j3 + 1];
    x2i = a[j1 + 1] + a[j3];
    x3r = a[j1] + a[j3 + 1];
    x3i = a[j1 + 1] - a[j3];
    y0r = wn4r * (x2r - x2i);
    y0i = wn4r * (x2i + x2r);
    a[0] = x0r + y0r;
    a[1] = x0i + y0i;
    a[j1] = x0r - y0r;
    a[j1 + 1] = x0i - y0i;
    y0r = wn4r * (x3r - x3i);
    y0i = wn4r * (x3i + x3r);
    a[j2] = x1r - y0i;
    a[j2 + 1] = x1i + y0r;
    a[j3] = x1r + y0i;
    a[j3 + 1] = x1i - y0r;
    k = 0;
    kr = 2 * m;
    for (j = 2; j < mh; j += 2) {
        k += 4;
        wk1r = w[k];
        wk1i = w[k + 1];
        wk3r = w[k + 2];
        wk3i = w[k + 3];
        kr -= 4;
        wd1i = w[kr];
        wd1r = w[kr + 1];
        wd3i = w[kr + 2];
        wd3r = w[kr + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] - a[j2 + 1];
        x0i = a[j + 1] + a[j2];
        x1r = a[j] + a[j2 + 1];
        x1i = a[j + 1] - a[j2];
        x2r = a[j1] - a[j3 + 1];
        x2i = a[j1 + 1] + a[j3];
        x3r = a[j1] + a[j3 + 1];
        x3i = a[j1 + 1] - a[j3];
        y0r = wk1r * x0r - wk1i * x0i;
        y0i = wk1r * x0i + wk1i * x0r;
        y2r = wd1r * x2r - wd1i * x2i;
        y2i = wd1r * x2i + wd1i * x2r;
        a[j] = y0r + y2r;
        a[j + 1] = y0i + y2i;
        a[j1] = y0r - y2r;
        a[j1 + 1] = y0i - y2i;
        y0r = wk3r * x1r + wk3i * x1i;
        y0i = wk3r * x1i - wk3i * x1r;
        y2r = wd3r * x3r + wd3i * x3i;
        y2i = wd3r * x3i - wd3i * x3r;
        a[j2] = y0r + y2r;
        a[j2 + 1] = y0i + y2i;
        a[j3] = y0r - y2r;
        a[j3 + 1] = y0i - y2i;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] - a[j2 + 1];
        x0i = a[j0 + 1] + a[j2];
        x1r = a[j0] + a[j2 + 1];
        x1i = a[j0 + 1] - a[j2];
        x2r = a[j1] - a[j3 + 1];
        x2i = a[j1 + 1] + a[j3];
        x3r = a[j1] + a[j3 + 1];
        x3i = a[j1 + 1] - a[j3];
        y0r = wd1i * x0r - wd1r * x0i;
        y0i = wd1i * x0i + wd1r * x0r;
        y2r = wk1i * x2r - wk1r * x2i;
        y2i = wk1i * x2i + wk1r * x2r;
        a[j0] = y0r + y2r;
        a[j0 + 1] = y0i + y2i;
        a[j1] = y0r - y2r;
        a[j1 + 1] = y0i - y2i;
        y0r = wd3i * x1r + wd3r * x1i;
        y0i = wd3i * x1i - wd3r * x1r;
        y2r = wk3i * x3r + wk3r * x3i;
        y2i = wk3i * x3i - wk3r * x3r;
        a[j2] = y0r + y2r;
        a[j2 + 1] = y0i + y2i;
        a[j3] = y0r - y2r;
        a[j3 + 1] = y0i - y2i;
    }
    wk1r = w[m];
    wk1i = w[m + 1];
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0] - a[j2 + 1];
    x0i = a[j0 + 1] + a[j2];
    x1r = a[j0] + a[j2 + 1];
    x1i = a[j0 + 1] - a[j2];
    x2r = a[j1] - a[j3 + 1];
    x2i = a[j1 + 1] + a[j3];
    x3r = a[j1] + a[j3 + 1];
    x3i = a[j1 + 1] - a[j3];
    y0r = wk1r * x0r - wk1i * x0i;
    y0i = wk1r * x0i + wk1i * x0r;
    y2r = wk1i * x2r - wk1r * x2i;
    y2i = wk1i * x2i + wk1r * x2r;
    a[j0] = y0r + y2r;
    a[j0 + 1] = y0i + y2i;
    a[j1] = y0r - y2r;
    a[j1 + 1] = y0i - y2i;
    y0r = wk1i * x1r - wk1r * x1i;
    y0i = wk1i * x1i + wk1r * x1r;
    y2r = wk1r * x3r - wk1i * x3i;
    y2i = wk1r * x3i + wk1i * x3r;
    a[j2] = y0r - y2r;
    a[j2 + 1] = y0i - y2i;
    a[j3] = y0r + y2r;
    a[j3 + 1] = y0i + y2i;
}

static int cfttree(int n, int j, int k, float *a, int nw, float *w)
{
    void cftmdl1(int n, float *a, float *w);
    void cftmdl2(int n, float *a, float *w);
    int i, isplt, m;
    
    if ((k & 3) != 0) {
        isplt = k & 1;
        if (isplt != 0) {
            cftmdl1(n, &a[j - n], &w[nw - (n >> 1)]);
        } else {
            cftmdl2(n, &a[j - n], &w[nw - n]);
        }
    } else {
        m = n;
        for (i = k; (i & 3) == 0; i >>= 2) {
            m <<= 2;
        }
        isplt = i & 1;
        if (isplt != 0) {
            while (m > 128) {
                cftmdl1(m, &a[j - m], &w[nw - (m >> 1)]);
                m >>= 2;
            }
        } else {
            while (m > 128) {
                cftmdl2(m, &a[j - m], &w[nw - m]);
                m >>= 2;
            }
        }
    }
    return isplt;
}

static void cftf161(float *a, float *w)
{
    float wn4r, wk1r, wk1i, 
        x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i, 
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i, 
        y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i, 
        y8r, y8i, y9r, y9i, y10r, y10i, y11r, y11i, 
        y12r, y12i, y13r, y13i, y14r, y14i, y15r, y15i;
    
    wn4r = w[1];
    wk1r = w[2];
    wk1i = w[3];
    x0r = a[0] + a[16];
    x0i = a[1] + a[17];
    x1r = a[0] - a[16];
    x1i = a[1] - a[17];
    x2r = a[8] + a[24];
    x2i = a[9] + a[25];
    x3r = a[8] - a[24];
    x3i = a[9] - a[25];
    y0r = x0r + x2r;
    y0i = x0i + x2i;
    y4r = x0r - x2r;
    y4i = x0i - x2i;
    y8r = x1r - x3i;
    y8i = x1i + x3r;
    y12r = x1r + x3i;
    y12i = x1i - x3r;
    x0r = a[2] + a[18];
    x0i = a[3] + a[19];
    x1r = a[2] - a[18];
    x1i = a[3] - a[19];
    x2r = a[10] + a[26];
    x2i = a[11] + a[27];
    x3r = a[10] - a[26];
    x3i = a[11] - a[27];
    y1r = x0r + x2r;
    y1i = x0i + x2i;
    y5r = x0r - x2r;
    y5i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    y9r = wk1r * x0r - wk1i * x0i;
    y9i = wk1r * x0i + wk1i * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    y13r = wk1i * x0r - wk1r * x0i;
    y13i = wk1i * x0i + wk1r * x0r;
    x0r = a[4] + a[20];
    x0i = a[5] + a[21];
    x1r = a[4] - a[20];
    x1i = a[5] - a[21];
    x2r = a[12] + a[28];
    x2i = a[13] + a[29];
    x3r = a[12] - a[28];
    x3i = a[13] - a[29];
    y2r = x0r + x2r;
    y2i = x0i + x2i;
    y6r = x0r - x2r;
    y6i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    y10r = wn4r * (x0r - x0i);
    y10i = wn4r * (x0i + x0r);
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    y14r = wn4r * (x0r + x0i);
    y14i = wn4r * (x0i - x0r);
    x0r = a[6] + a[22];
    x0i = a[7] + a[23];
    x1r = a[6] - a[22];
    x1i = a[7] - a[23];
    x2r = a[14] + a[30];
    x2i = a[15] + a[31];
    x3r = a[14] - a[30];
    x3i = a[15] - a[31];
    y3r = x0r + x2r;
    y3i = x0i + x2i;
    y7r = x0r - x2r;
    y7i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    y11r = wk1i * x0r - wk1r * x0i;
    y11i = wk1i * x0i + wk1r * x0r;
    x0r = x1r + x3i;
    x0i = x1i - x3r;
    y15r = wk1r * x0r - wk1i * x0i;
    y15i = wk1r * x0i + wk1i * x0r;
    x0r = y12r - y14r;
    x0i = y12i - y14i;
    x1r = y12r + y14r;
    x1i = y12i + y14i;
    x2r = y13r - y15r;
    x2i = y13i - y15i;
    x3r = y13r + y15r;
    x3i = y13i + y15i;
    a[24] = x0r + x2r;
    a[25] = x0i + x2i;
    a[26] = x0r - x2r;
    a[27] = x0i - x2i;
    a[28] = x1r - x3i;
    a[29] = x1i + x3r;
    a[30] = x1r + x3i;
    a[31] = x1i - x3r;
    x0r = y8r + y10r;
    x0i = y8i + y10i;
    x1r = y8r - y10r;
    x1i = y8i - y10i;
    x2r = y9r + y11r;
    x2i = y9i + y11i;
    x3r = y9r - y11r;
    x3i = y9i - y11i;
    a[16] = x0r + x2r;
    a[17] = x0i + x2i;
    a[18] = x0r - x2r;
    a[19] = x0i - x2i;
    a[20] = x1r - x3i;
    a[21] = x1i + x3r;
    a[22] = x1r + x3i;
    a[23] = x1i - x3r;
    x0r = y5r - y7i;
    x0i = y5i + y7r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    x0r = y5r + y7i;
    x0i = y5i - y7r;
    x3r = wn4r * (x0r - x0i);
    x3i = wn4r * (x0i + x0r);
    x0r = y4r - y6i;
    x0i = y4i + y6r;
    x1r = y4r + y6i;
    x1i = y4i - y6r;
    a[8] = x0r + x2r;
    a[9] = x0i + x2i;
    a[10] = x0r - x2r;
    a[11] = x0i - x2i;
    a[12] = x1r - x3i;
    a[13] = x1i + x3r;
    a[14] = x1r + x3i;
    a[15] = x1i - x3r;
    x0r = y0r + y2r;
    x0i = y0i + y2i;
    x1r = y0r - y2r;
    x1i = y0i - y2i;
    x2r = y1r + y3r;
    x2i = y1i + y3i;
    x3r = y1r - y3r;
    x3i = y1i - y3i;
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[2] = x0r - x2r;
    a[3] = x0i - x2i;
    a[4] = x1r - x3i;
    a[5] = x1i + x3r;
    a[6] = x1r + x3i;
    a[7] = x1i - x3r;
}

static void cftf162(float *a, float *w)
{
    float wn4r, wk1r, wk1i, wk2r, wk2i, wk3r, wk3i, 
        x0r, x0i, x1r, x1i, x2r, x2i, 
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i, 
        y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i, 
        y8r, y8i, y9r, y9i, y10r, y10i, y11r, y11i, 
        y12r, y12i, y13r, y13i, y14r, y14i, y15r, y15i;
    
    wn4r = w[1];
    wk1r = w[4];
    wk1i = w[5];
    wk3r = w[6];
    wk3i = -w[7];
    wk2r = w[8];
    wk2i = w[9];
    x1r = a[0] - a[17];
    x1i = a[1] + a[16];
    x0r = a[8] - a[25];
    x0i = a[9] + a[24];
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    y0r = x1r + x2r;
    y0i = x1i + x2i;
    y4r = x1r - x2r;
    y4i = x1i - x2i;
    x1r = a[0] + a[17];
    x1i = a[1] - a[16];
    x0r = a[8] + a[25];
    x0i = a[9] - a[24];
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    y8r = x1r - x2i;
    y8i = x1i + x2r;
    y12r = x1r + x2i;
    y12i = x1i - x2r;
    x0r = a[2] - a[19];
    x0i = a[3] + a[18];
    x1r = wk1r * x0r - wk1i * x0i;
    x1i = wk1r * x0i + wk1i * x0r;
    x0r = a[10] - a[27];
    x0i = a[11] + a[26];
    x2r = wk3i * x0r - wk3r * x0i;
    x2i = wk3i * x0i + wk3r * x0r;
    y1r = x1r + x2r;
    y1i = x1i + x2i;
    y5r = x1r - x2r;
    y5i = x1i - x2i;
    x0r = a[2] + a[19];
    x0i = a[3] - a[18];
    x1r = wk3r * x0r - wk3i * x0i;
    x1i = wk3r * x0i + wk3i * x0r;
    x0r = a[10] + a[27];
    x0i = a[11] - a[26];
    x2r = wk1r * x0r + wk1i * x0i;
    x2i = wk1r * x0i - wk1i * x0r;
    y9r = x1r - x2r;
    y9i = x1i - x2i;
    y13r = x1r + x2r;
    y13i = x1i + x2i;
    x0r = a[4] - a[21];
    x0i = a[5] + a[20];
    x1r = wk2r * x0r - wk2i * x0i;
    x1i = wk2r * x0i + wk2i * x0r;
    x0r = a[12] - a[29];
    x0i = a[13] + a[28];
    x2r = wk2i * x0r - wk2r * x0i;
    x2i = wk2i * x0i + wk2r * x0r;
    y2r = x1r + x2r;
    y2i = x1i + x2i;
    y6r = x1r - x2r;
    y6i = x1i - x2i;
    x0r = a[4] + a[21];
    x0i = a[5] - a[20];
    x1r = wk2i * x0r - wk2r * x0i;
    x1i = wk2i * x0i + wk2r * x0r;
    x0r = a[12] + a[29];
    x0i = a[13] - a[28];
    x2r = wk2r * x0r - wk2i * x0i;
    x2i = wk2r * x0i + wk2i * x0r;
    y10r = x1r - x2r;
    y10i = x1i - x2i;
    y14r = x1r + x2r;
    y14i = x1i + x2i;
    x0r = a[6] - a[23];
    x0i = a[7] + a[22];
    x1r = wk3r * x0r - wk3i * x0i;
    x1i = wk3r * x0i + wk3i * x0r;
    x0r = a[14] - a[31];
    x0i = a[15] + a[30];
    x2r = wk1i * x0r - wk1r * x0i;
    x2i = wk1i * x0i + wk1r * x0r;
    y3r = x1r + x2r;
    y3i = x1i + x2i;
    y7r = x1r - x2r;
    y7i = x1i - x2i;
    x0r = a[6] + a[23];
    x0i = a[7] - a[22];
    x1r = wk1i * x0r + wk1r * x0i;
    x1i = wk1i * x0i - wk1r * x0r;
    x0r = a[14] + a[31];
    x0i = a[15] - a[30];
    x2r = wk3i * x0r - wk3r * x0i;
    x2i = wk3i * x0i + wk3r * x0r;
    y11r = x1r + x2r;
    y11i = x1i + x2i;
    y15r = x1r - x2r;
    y15i = x1i - x2i;
    x1r = y0r + y2r;
    x1i = y0i + y2i;
    x2r = y1r + y3r;
    x2i = y1i + y3i;
    a[0] = x1r + x2r;
    a[1] = x1i + x2i;
    a[2] = x1r - x2r;
    a[3] = x1i - x2i;
    x1r = y0r - y2r;
    x1i = y0i - y2i;
    x2r = y1r - y3r;
    x2i = y1i - y3i;
    a[4] = x1r - x2i;
    a[5] = x1i + x2r;
    a[6] = x1r + x2i;
    a[7] = x1i - x2r;
    x1r = y4r - y6i;
    x1i = y4i + y6r;
    x0r = y5r - y7i;
    x0i = y5i + y7r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[8] = x1r + x2r;
    a[9] = x1i + x2i;
    a[10] = x1r - x2r;
    a[11] = x1i - x2i;
    x1r = y4r + y6i;
    x1i = y4i - y6r;
    x0r = y5r + y7i;
    x0i = y5i - y7r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[12] = x1r - x2i;
    a[13] = x1i + x2r;
    a[14] = x1r + x2i;
    a[15] = x1i - x2r;
    x1r = y8r + y10r;
    x1i = y8i + y10i;
    x2r = y9r - y11r;
    x2i = y9i - y11i;
    a[16] = x1r + x2r;
    a[17] = x1i + x2i;
    a[18] = x1r - x2r;
    a[19] = x1i - x2i;
    x1r = y8r - y10r;
    x1i = y8i - y10i;
    x2r = y9r + y11r;
    x2i = y9i + y11i;
    a[20] = x1r - x2i;
    a[21] = x1i + x2r;
    a[22] = x1r + x2i;
    a[23] = x1i - x2r;
    x1r = y12r - y14i;
    x1i = y12i + y14r;
    x0r = y13r + y15i;
    x0i = y13i - y15r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[24] = x1r + x2r;
    a[25] = x1i + x2i;
    a[26] = x1r - x2r;
    a[27] = x1i - x2i;
    x1r = y12r + y14i;
    x1i = y12i - y14r;
    x0r = y13r - y15i;
    x0i = y13i + y15r;
    x2r = wn4r * (x0r - x0i);
    x2i = wn4r * (x0i + x0r);
    a[28] = x1r - x2i;
    a[29] = x1i + x2r;
    a[30] = x1r + x2i;
    a[31] = x1i - x2r;
}

static void cftf081(float *a, float *w)
{
    float wn4r, x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i, 
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i, 
        y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i;
    
    wn4r = w[1];
    x0r = a[0] + a[8];
    x0i = a[1] + a[9];
    x1r = a[0] - a[8];
    x1i = a[1] - a[9];
    x2r = a[4] + a[12];
    x2i = a[5] + a[13];
    x3r = a[4] - a[12];
    x3i = a[5] - a[13];
    y0r = x0r + x2r;
    y0i = x0i + x2i;
    y2r = x0r - x2r;
    y2i = x0i - x2i;
    y1r = x1r - x3i;
    y1i = x1i + x3r;
    y3r = x1r + x3i;
    y3i = x1i - x3r;
    x0r = a[2] + a[10];
    x0i = a[3] + a[11];
    x1r = a[2] - a[10];
    x1i = a[3] - a[11];
    x2r = a[6] + a[14];
    x2i = a[7] + a[15];
    x3r = a[6] - a[14];
    x3i = a[7] - a[15];
    y4r = x0r + x2r;
    y4i = x0i + x2i;
    y6r = x0r - x2r;
    y6i = x0i - x2i;
    x0r = x1r - x3i;
    x0i = x1i + x3r;
    x2r = x1r + x3i;
    x2i = x1i - x3r;
    y5r = wn4r * (x0r - x0i);
    y5i = wn4r * (x0r + x0i);
    y7r = wn4r * (x2r - x2i);
    y7i = wn4r * (x2r + x2i);
    a[8] = y1r + y5r;
    a[9] = y1i + y5i;
    a[10] = y1r - y5r;
    a[11] = y1i - y5i;
    a[12] = y3r - y7i;
    a[13] = y3i + y7r;
    a[14] = y3r + y7i;
    a[15] = y3i - y7r;
    a[0] = y0r + y4r;
    a[1] = y0i + y4i;
    a[2] = y0r - y4r;
    a[3] = y0i - y4i;
    a[4] = y2r - y6i;
    a[5] = y2i + y6r;
    a[6] = y2r + y6i;
    a[7] = y2i - y6r;
}

static void cftf082(float *a, float *w)
{
    float wn4r, wk1r, wk1i, x0r, x0i, x1r, x1i, 
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i, 
        y4r, y4i, y5r, y5i, y6r, y6i, y7r, y7i;
    
    wn4r = w[1];
    wk1r = w[2];
    wk1i = w[3];
    y0r = a[0] - a[9];
    y0i = a[1] + a[8];
    y1r = a[0] + a[9];
    y1i = a[1] - a[8];
    x0r = a[4] - a[13];
    x0i = a[5] + a[12];
    y2r = wn4r * (x0r - x0i);
    y2i = wn4r * (x0i + x0r);
    x0r = a[4] + a[13];
    x0i = a[5] - a[12];
    y3r = wn4r * (x0r - x0i);
    y3i = wn4r * (x0i + x0r);
    x0r = a[2] - a[11];
    x0i = a[3] + a[10];
    y4r = wk1r * x0r - wk1i * x0i;
    y4i = wk1r * x0i + wk1i * x0r;
    x0r = a[2] + a[11];
    x0i = a[3] - a[10];
    y5r = wk1i * x0r - wk1r * x0i;
    y5i = wk1i * x0i + wk1r * x0r;
    x0r = a[6] - a[15];
    x0i = a[7] + a[14];
    y6r = wk1i * x0r - wk1r * x0i;
    y6i = wk1i * x0i + wk1r * x0r;
    x0r = a[6] + a[15];
    x0i = a[7] - a[14];
    y7r = wk1r * x0r - wk1i * x0i;
    y7i = wk1r * x0i + wk1i * x0r;
    x0r = y0r + y2r;
    x0i = y0i + y2i;
    x1r = y4r + y6r;
    x1i = y4i + y6i;
    a[0] = x0r + x1r;
    a[1] = x0i + x1i;
    a[2] = x0r - x1r;
    a[3] = x0i - x1i;
    x0r = y0r - y2r;
    x0i = y0i - y2i;
    x1r = y4r - y6r;
    x1i = y4i - y6i;
    a[4] = x0r - x1i;
    a[5] = x0i + x1r;
    a[6] = x0r + x1i;
    a[7] = x0i - x1r;
    x0r = y1r - y3i;
    x0i = y1i + y3r;
    x1r = y5r - y7r;
    x1i = y5i - y7i;
    a[8] = x0r + x1r;
    a[9] = x0i + x1i;
    a[10] = x0r - x1r;
    a[11] = x0i - x1i;
    x0r = y1r + y3i;
    x0i = y1i - y3r;
    x1r = y5r + y7r;
    x1i = y5i + y7i;
    a[12] = x0r - x1i;
    a[13] = x0i + x1r;
    a[14] = x0r + x1i;
    a[15] = x0i - x1r;
}

static void cftleaf(int n, int isplt, float *a, int nw, float *w)
{
    void cftmdl1(int n, float *a, float *w);
    void cftmdl2(int n, float *a, float *w);
    void cftf161(float *a, float *w);
    void cftf162(float *a, float *w);
    void cftf081(float *a, float *w);
    void cftf082(float *a, float *w);
    
    if (n == 512) {
        cftmdl1(128, a, &w[nw - 64]);
        cftf161(a, &w[nw - 8]);
        cftf162(&a[32], &w[nw - 32]);
        cftf161(&a[64], &w[nw - 8]);
        cftf161(&a[96], &w[nw - 8]);
        cftmdl2(128, &a[128], &w[nw - 128]);
        cftf161(&a[128], &w[nw - 8]);
        cftf162(&a[160], &w[nw - 32]);
        cftf161(&a[192], &w[nw - 8]);
        cftf162(&a[224], &w[nw - 32]);
        cftmdl1(128, &a[256], &w[nw - 64]);
        cftf161(&a[256], &w[nw - 8]);
        cftf162(&a[288], &w[nw - 32]);
        cftf161(&a[320], &w[nw - 8]);
        cftf161(&a[352], &w[nw - 8]);
        if (isplt != 0) {
            cftmdl1(128, &a[384], &w[nw - 64]);
            cftf161(&a[480], &w[nw - 8]);
        } else {
            cftmdl2(128, &a[384], &w[nw - 128]);
            cftf162(&a[480], &w[nw - 32]);
        }
        cftf161(&a[384], &w[nw - 8]);
        cftf162(&a[416], &w[nw - 32]);
        cftf161(&a[448], &w[nw - 8]);
    } else {
        cftmdl1(64, a, &w[nw - 32]);
        cftf081(a, &w[nw - 8]);
        cftf082(&a[16], &w[nw - 8]);
        cftf081(&a[32], &w[nw - 8]);
        cftf081(&a[48], &w[nw - 8]);
        cftmdl2(64, &a[64], &w[nw - 64]);
        cftf081(&a[64], &w[nw - 8]);
        cftf082(&a[80], &w[nw - 8]);
        cftf081(&a[96], &w[nw - 8]);
        cftf082(&a[112], &w[nw - 8]);
        cftmdl1(64, &a[128], &w[nw - 32]);
        cftf081(&a[128], &w[nw - 8]);
        cftf082(&a[144], &w[nw - 8]);
        cftf081(&a[160], &w[nw - 8]);
        cftf081(&a[176], &w[nw - 8]);
        if (isplt != 0) {
            cftmdl1(64, &a[192], &w[nw - 32]);
            cftf081(&a[240], &w[nw - 8]);
        } else {
            cftmdl2(64, &a[192], &w[nw - 64]);
            cftf082(&a[240], &w[nw - 8]);
        }
        cftf081(&a[192], &w[nw - 8]);
        cftf082(&a[208], &w[nw - 8]);
        cftf081(&a[224], &w[nw - 8]);
    }
}

static void cftrec4(int n, float *a, int nw, float *w)
{
    int cfttree(int n, int j, int k, float *a, int nw, float *w);
    void cftleaf(int n, int isplt, float *a, int nw, float *w);
    void cftmdl1(int n, float *a, float *w);
    int isplt, j, k, m;
    
    m = n;
    while (m > 512) {
        m >>= 2;
        cftmdl1(m, &a[n - m], &w[nw - (m >> 1)]);
    }
    cftleaf(m, 1, &a[n - m], nw, w);
    k = 0;
    for (j = n - m; j > 0; j -= m) {
        k++;
        isplt = cfttree(m, j, k, a, nw, w);
        cftleaf(m, isplt, &a[j - m], nw, w);
    }
}

static void cftfx41(int n, float *a, int nw, float *w)
{
    void cftf161(float *a, float *w);
    void cftf162(float *a, float *w);
    void cftf081(float *a, float *w);
    void cftf082(float *a, float *w);
    
    if (n == 128) {
        cftf161(a, &w[nw - 8]);
        cftf162(&a[32], &w[nw - 32]);
        cftf161(&a[64], &w[nw - 8]);
        cftf161(&a[96], &w[nw - 8]);
    } else {
        cftf081(a, &w[nw - 8]);
        cftf082(&a[16], &w[nw - 8]);
        cftf081(&a[32], &w[nw - 8]);
        cftf081(&a[48], &w[nw - 8]);
    }
}

static void cftf040(float *a)
{
    float x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i;
    
    x0r = a[0] + a[4];
    x0i = a[1] + a[5];
    x1r = a[0] - a[4];
    x1i = a[1] - a[5];
    x2r = a[2] + a[6];
    x2i = a[3] + a[7];
    x3r = a[2] - a[6];
    x3i = a[3] - a[7];
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[2] = x1r - x3i;
    a[3] = x1i + x3r;
    a[4] = x0r - x2r;
    a[5] = x0i - x2i;
    a[6] = x1r + x3i;
    a[7] = x1i - x3r;
}

static void cftx020(float *a)
{
    float x0r, x0i;
    
    x0r = a[0] - a[2];
    x0i = a[1] - a[3];
    a[0] += a[2];
    a[1] += a[3];
    a[2] = x0r;
    a[3] = x0i;
}

#ifdef USE_CDFT_THREADS
struct cdft_arg_st {
    int n0;
    int n;
    float *a;
    int nw;
    float *w;
};
typedef struct cdft_arg_st cdft_arg_t;


static void cftrec4_th(int n, float *a, int nw, float *w)
{
    void *cftrec1_th(void *p);
    void *cftrec2_th(void *p);
    int i, idiv4, m, nthread;
    cdft_thread_t th[4];
    cdft_arg_t ag[4];
    
    nthread = 2;
    idiv4 = 0;
    m = n >> 1;
    if (n > CDFT_4THREADS_BEGIN_N) {
        nthread = 4;
        idiv4 = 1;
        m >>= 1;
    }
    for (i = 0; i < nthread; i++) {
        ag[i].n0 = n;
        ag[i].n = m;
        ag[i].a = &a[i * m];
        ag[i].nw = nw;
        ag[i].w = w;
        if (i != idiv4) {
            cdft_thread_create(&th[i], cftrec1_th, &ag[i]);
        } else {
            cdft_thread_create(&th[i], cftrec2_th, &ag[i]);
        }
    }
    for (i = 0; i < nthread; i++) {
        cdft_thread_wait(th[i]);
    }
}


static void *cftrec1_th(void *p)
{
    int cfttree(int n, int j, int k, float *a, int nw, float *w);
    void cftleaf(int n, int isplt, float *a, int nw, float *w);
    void cftmdl1(int n, float *a, float *w);
    int isplt, j, k, m, n, n0, nw;
    float *a, *w;
    
    n0 = ((cdft_arg_t *) p)->n0;
    n = ((cdft_arg_t *) p)->n;
    a = ((cdft_arg_t *) p)->a;
    nw = ((cdft_arg_t *) p)->nw;
    w = ((cdft_arg_t *) p)->w;
    m = n0;
    while (m > 512) {
        m >>= 2;
        cftmdl1(m, &a[n - m], &w[nw - (m >> 1)]);
    }
    cftleaf(m, 1, &a[n - m], nw, w);
    k = 0;
    for (j = n - m; j > 0; j -= m) {
        k++;
        isplt = cfttree(m, j, k, a, nw, w);
        cftleaf(m, isplt, &a[j - m], nw, w);
    }
    return (void *) 0;
}


static void *cftrec2_th(void *p)
{
    int cfttree(int n, int j, int k, float *a, int nw, float *w);
    void cftleaf(int n, int isplt, float *a, int nw, float *w);
    void cftmdl2(int n, float *a, float *w);
    int isplt, j, k, m, n, n0, nw;
    float *a, *w;
    
    n0 = ((cdft_arg_t *) p)->n0;
    n = ((cdft_arg_t *) p)->n;
    a = ((cdft_arg_t *) p)->a;
    nw = ((cdft_arg_t *) p)->nw;
    w = ((cdft_arg_t *) p)->w;
    k = 1;
    m = n0;
    while (m > 512) {
        m >>= 2;
        k <<= 2;
        cftmdl2(m, &a[n - m], &w[nw - m]);
    }
    cftleaf(m, 0, &a[n - m], nw, w);
    k >>= 1;
    for (j = n - m; j > 0; j -= m) {
        k++;
        isplt = cfttree(m, j, k, a, nw, w);
        cftleaf(m, isplt, &a[j - m], nw, w);
    }
    return (void *) 0;
}
#endif /* USE_CDFT_THREADS */

static void cftfsub(int n, float *a, int *ip, int nw, float *w)
{
    void bitrv2(int n, int *ip, float *a);
    void bitrv216(float *a);
    void bitrv208(float *a);
    void cftf1st(int n, float *a, float *w);
    void cftrec4(int n, float *a, int nw, float *w);
    void cftleaf(int n, int isplt, float *a, int nw, float *w);
    void cftfx41(int n, float *a, int nw, float *w);
    void cftf161(float *a, float *w);
    void cftf081(float *a, float *w);
    void cftf040(float *a);
    void cftx020(float *a);
#ifdef USE_CDFT_THREADS
    void cftrec4_th(int n, float *a, int nw, float *w);
#endif /* USE_CDFT_THREADS */
    
    if (n > 8) {
        if (n > 32) {
            cftf1st(n, a, &w[nw - (n >> 2)]);
#ifdef USE_CDFT_THREADS
            if (n > CDFT_THREADS_BEGIN_N) {
                cftrec4_th(n, a, nw, w);
            } else 
#endif /* USE_CDFT_THREADS */
            if (n > 512) {
                cftrec4(n, a, nw, w);
            } else if (n > 128) {
                cftleaf(n, 1, a, nw, w);
            } else {
                cftfx41(n, a, nw, w);
            }
            bitrv2(n, ip, a);
        } else if (n == 32) {
            cftf161(a, &w[nw - 8]);
            bitrv216(a);
        } else {
            cftf081(a, w);
            bitrv208(a);
        }
    } else if (n == 8) {
        cftf040(a);
    } else if (n == 4) {
        cftx020(a);
    }
}

static void bitrv2conj(int n, int *ip, float *a)
{
    int j, j1, k, k1, l, m, nh, nm;
    float xr, xi, yr, yi;
    
    m = 1;
    for (l = n >> 2; l > 8; l >>= 2) {
        m <<= 1;
    }
    nh = n >> 1;
    nm = 4 * m;
    if (l == 8) {
        for (k = 0; k < m; k++) {
            for (j = 0; j < k; j++) {
                j1 = 4 * j + 2 * ip[m + k];
                k1 = 4 * k + 2 * ip[m + j];
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 -= nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nh;
                k1 += 2;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 += nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += 2;
                k1 += nh;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 -= nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nh;
                k1 -= 2;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 += nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= 2 * nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
            }
            k1 = 4 * k + 2 * ip[m + k];
            j1 = k1 + 2;
            k1 += nh;
            a[j1 - 1] = -a[j1 - 1];
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            a[k1 + 3] = -a[k1 + 3];
            j1 += nm;
            k1 += 2 * nm;
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 += nm;
            k1 -= nm;
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 -= 2;
            k1 -= nh;
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 += nh + 2;
            k1 += nh + 2;
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            j1 -= nh - nm;
            k1 += 2 * nm - 2;
            a[j1 - 1] = -a[j1 - 1];
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            a[k1 + 3] = -a[k1 + 3];
        }
    } else {
        for (k = 0; k < m; k++) {
            for (j = 0; j < k; j++) {
                j1 = 4 * j + ip[m + k];
                k1 = 4 * k + ip[m + j];
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nh;
                k1 += 2;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += 2;
                k1 += nh;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 += nm;
                k1 += nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nh;
                k1 -= 2;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
                j1 -= nm;
                k1 -= nm;
                xr = a[j1];
                xi = -a[j1 + 1];
                yr = a[k1];
                yi = -a[k1 + 1];
                a[j1] = yr;
                a[j1 + 1] = yi;
                a[k1] = xr;
                a[k1 + 1] = xi;
            }
            k1 = 4 * k + ip[m + k];
            j1 = k1 + 2;
            k1 += nh;
            a[j1 - 1] = -a[j1 - 1];
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            a[k1 + 3] = -a[k1 + 3];
            j1 += nm;
            k1 += nm;
            a[j1 - 1] = -a[j1 - 1];
            xr = a[j1];
            xi = -a[j1 + 1];
            yr = a[k1];
            yi = -a[k1 + 1];
            a[j1] = yr;
            a[j1 + 1] = yi;
            a[k1] = xr;
            a[k1 + 1] = xi;
            a[k1 + 3] = -a[k1 + 3];
        }
    }
}

static void bitrv216neg(float *a)
{
    float x1r, x1i, x2r, x2i, x3r, x3i, x4r, x4i, 
        x5r, x5i, x6r, x6i, x7r, x7i, x8r, x8i, 
        x9r, x9i, x10r, x10i, x11r, x11i, x12r, x12i, 
        x13r, x13i, x14r, x14i, x15r, x15i;
    
    x1r = a[2];
    x1i = a[3];
    x2r = a[4];
    x2i = a[5];
    x3r = a[6];
    x3i = a[7];
    x4r = a[8];
    x4i = a[9];
    x5r = a[10];
    x5i = a[11];
    x6r = a[12];
    x6i = a[13];
    x7r = a[14];
    x7i = a[15];
    x8r = a[16];
    x8i = a[17];
    x9r = a[18];
    x9i = a[19];
    x10r = a[20];
    x10i = a[21];
    x11r = a[22];
    x11i = a[23];
    x12r = a[24];
    x12i = a[25];
    x13r = a[26];
    x13i = a[27];
    x14r = a[28];
    x14i = a[29];
    x15r = a[30];
    x15i = a[31];
    a[2] = x15r;
    a[3] = x15i;
    a[4] = x7r;
    a[5] = x7i;
    a[6] = x11r;
    a[7] = x11i;
    a[8] = x3r;
    a[9] = x3i;
    a[10] = x13r;
    a[11] = x13i;
    a[12] = x5r;
    a[13] = x5i;
    a[14] = x9r;
    a[15] = x9i;
    a[16] = x1r;
    a[17] = x1i;
    a[18] = x14r;
    a[19] = x14i;
    a[20] = x6r;
    a[21] = x6i;
    a[22] = x10r;
    a[23] = x10i;
    a[24] = x2r;
    a[25] = x2i;
    a[26] = x12r;
    a[27] = x12i;
    a[28] = x4r;
    a[29] = x4i;
    a[30] = x8r;
    a[31] = x8i;
}

static void bitrv208neg(float *a)
{
    float x1r, x1i, x2r, x2i, x3r, x3i, x4r, x4i, 
        x5r, x5i, x6r, x6i, x7r, x7i;
    
    x1r = a[2];
    x1i = a[3];
    x2r = a[4];
    x2i = a[5];
    x3r = a[6];
    x3i = a[7];
    x4r = a[8];
    x4i = a[9];
    x5r = a[10];
    x5i = a[11];
    x6r = a[12];
    x6i = a[13];
    x7r = a[14];
    x7i = a[15];
    a[2] = x7r;
    a[3] = x7i;
    a[4] = x3r;
    a[5] = x3i;
    a[6] = x5r;
    a[7] = x5i;
    a[8] = x1r;
    a[9] = x1i;
    a[10] = x6r;
    a[11] = x6i;
    a[12] = x2r;
    a[13] = x2i;
    a[14] = x4r;
    a[15] = x4i;
}

static void cftb1st(int n, float *a, float *w)
{
    int j, j0, j1, j2, j3, k, m, mh;
    float wn4r, csc1, csc3, wk1r, wk1i, wk3r, wk3i, 
        wd1r, wd1i, wd3r, wd3i;
    float x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i, 
        y0r, y0i, y1r, y1i, y2r, y2i, y3r, y3i;
    
    mh = n >> 3;
    m = 2 * mh;
    j1 = m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[0] + a[j2];
    x0i = -a[1] - a[j2 + 1];
    x1r = a[0] - a[j2];
    x1i = -a[1] + a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[0] = x0r + x2r;
    a[1] = x0i - x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i + x2i;
    a[j2] = x1r + x3i;
    a[j2 + 1] = x1i + x3r;
    a[j3] = x1r - x3i;
    a[j3 + 1] = x1i - x3r;
    wn4r = w[1];
    csc1 = w[2];
    csc3 = w[3];
    wd1r = 1;
    wd1i = 0;
    wd3r = 1;
    wd3i = 0;
    k = 0;
    for (j = 2; j < mh - 2; j += 4) {
        k += 4;
        wk1r = csc1 * (wd1r + w[k]);
        wk1i = csc1 * (wd1i + w[k + 1]);
        wk3r = csc3 * (wd3r + w[k + 2]);
        wk3i = csc3 * (wd3i + w[k + 3]);
        wd1r = w[k];
        wd1i = w[k + 1];
        wd3r = w[k + 2];
        wd3i = w[k + 3];
        j1 = j + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j] + a[j2];
        x0i = -a[j + 1] - a[j2 + 1];
        x1r = a[j] - a[j2];
        x1i = -a[j + 1] + a[j2 + 1];
        y0r = a[j + 2] + a[j2 + 2];
        y0i = -a[j + 3] - a[j2 + 3];
        y1r = a[j + 2] - a[j2 + 2];
        y1i = -a[j + 3] + a[j2 + 3];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 + 2] + a[j3 + 2];
        y2i = a[j1 + 3] + a[j3 + 3];
        y3r = a[j1 + 2] - a[j3 + 2];
        y3i = a[j1 + 3] - a[j3 + 3];
        a[j] = x0r + x2r;
        a[j + 1] = x0i - x2i;
        a[j + 2] = y0r + y2r;
        a[j + 3] = y0i - y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i + x2i;
        a[j1 + 2] = y0r - y2r;
        a[j1 + 3] = y0i + y2i;
        x0r = x1r + x3i;
        x0i = x1i + x3r;
        a[j2] = wk1r * x0r - wk1i * x0i;
        a[j2 + 1] = wk1r * x0i + wk1i * x0r;
        x0r = y1r + y3i;
        x0i = y1i + y3r;
        a[j2 + 2] = wd1r * x0r - wd1i * x0i;
        a[j2 + 3] = wd1r * x0i + wd1i * x0r;
        x0r = x1r - x3i;
        x0i = x1i - x3r;
        a[j3] = wk3r * x0r + wk3i * x0i;
        a[j3 + 1] = wk3r * x0i - wk3i * x0r;
        x0r = y1r - y3i;
        x0i = y1i - y3r;
        a[j3 + 2] = wd3r * x0r + wd3i * x0i;
        a[j3 + 3] = wd3r * x0i - wd3i * x0r;
        j0 = m - j;
        j1 = j0 + m;
        j2 = j1 + m;
        j3 = j2 + m;
        x0r = a[j0] + a[j2];
        x0i = -a[j0 + 1] - a[j2 + 1];
        x1r = a[j0] - a[j2];
        x1i = -a[j0 + 1] + a[j2 + 1];
        y0r = a[j0 - 2] + a[j2 - 2];
        y0i = -a[j0 - 1] - a[j2 - 1];
        y1r = a[j0 - 2] - a[j2 - 2];
        y1i = -a[j0 - 1] + a[j2 - 1];
        x2r = a[j1] + a[j3];
        x2i = a[j1 + 1] + a[j3 + 1];
        x3r = a[j1] - a[j3];
        x3i = a[j1 + 1] - a[j3 + 1];
        y2r = a[j1 - 2] + a[j3 - 2];
        y2i = a[j1 - 1] + a[j3 - 1];
        y3r = a[j1 - 2] - a[j3 - 2];
        y3i = a[j1 - 1] - a[j3 - 1];
        a[j0] = x0r + x2r;
        a[j0 + 1] = x0i - x2i;
        a[j0 - 2] = y0r + y2r;
        a[j0 - 1] = y0i - y2i;
        a[j1] = x0r - x2r;
        a[j1 + 1] = x0i + x2i;
        a[j1 - 2] = y0r - y2r;
        a[j1 - 1] = y0i + y2i;
        x0r = x1r + x3i;
        x0i = x1i + x3r;
        a[j2] = wk1i * x0r - wk1r * x0i;
        a[j2 + 1] = wk1i * x0i + wk1r * x0r;
        x0r = y1r + y3i;
        x0i = y1i + y3r;
        a[j2 - 2] = wd1i * x0r - wd1r * x0i;
        a[j2 - 1] = wd1i * x0i + wd1r * x0r;
        x0r = x1r - x3i;
        x0i = x1i - x3r;
        a[j3] = wk3i * x0r + wk3r * x0i;
        a[j3 + 1] = wk3i * x0i - wk3r * x0r;
        x0r = y1r - y3i;
        x0i = y1i - y3r;
        a[j3 - 2] = wd3i * x0r + wd3r * x0i;
        a[j3 - 1] = wd3i * x0i - wd3r * x0r;
    }
    wk1r = csc1 * (wd1r + wn4r);
    wk1i = csc1 * (wd1i + wn4r);
    wk3r = csc3 * (wd3r - wn4r);
    wk3i = csc3 * (wd3i - wn4r);
    j0 = mh;
    j1 = j0 + m;
    j2 = j1 + m;
    j3 = j2 + m;
    x0r = a[j0 - 2] + a[j2 - 2];
    x0i = -a[j0 - 1] - a[j2 - 1];
    x1r = a[j0 - 2] - a[j2 - 2];
    x1i = -a[j0 - 1] + a[j2 - 1];
    x2r = a[j1 - 2] + a[j3 - 2];
    x2i = a[j1 - 1] + a[j3 - 1];
    x3r = a[j1 - 2] - a[j3 - 2];
    x3i = a[j1 - 1] - a[j3 - 1];
    a[j0 - 2] = x0r + x2r;
    a[j0 - 1] = x0i - x2i;
    a[j1 - 2] = x0r - x2r;
    a[j1 - 1] = x0i + x2i;
    x0r = x1r + x3i;
    x0i = x1i + x3r;
    a[j2 - 2] = wk1r * x0r - wk1i * x0i;
    a[j2 - 1] = wk1r * x0i + wk1i * x0r;
    x0r = x1r - x3i;
    x0i = x1i - x3r;
    a[j3 - 2] = wk3r * x0r + wk3i * x0i;
    a[j3 - 1] = wk3r * x0i - wk3i * x0r;
    x0r = a[j0] + a[j2];
    x0i = -a[j0 + 1] - a[j2 + 1];
    x1r = a[j0] - a[j2];
    x1i = -a[j0 + 1] + a[j2 + 1];
    x2r = a[j1] + a[j3];
    x2i = a[j1 + 1] + a[j3 + 1];
    x3r = a[j1] - a[j3];
    x3i = a[j1 + 1] - a[j3 + 1];
    a[j0] = x0r + x2r;
    a[j0 + 1] = x0i - x2i;
    a[j1] = x0r - x2r;
    a[j1 + 1] = x0i + x2i;
    x0r = x1r + x3i;
    x0i = x1i + x3r;
    a[j2] = wn4r * (x0r - x0i);
    a[j2 + 1] = wn4r * (x0i + x0r);
    x0r = x1r - x3i;
    x0i = x1i - x3r;
    a[j3] = -wn4r * (x0r + x0i);
    a[j3 + 1] = -wn4r * (x0i - x0r);
    x0r = a[j0 + 2] + a[j2 + 2];
    x0i = -a[j0 + 3] - a[j2 + 3];
    x1r = a[j0 + 2] - a[j2 + 2];
    x1i = -a[j0 + 3] + a[j2 + 3];
    x2r = a[j1 + 2] + a[j3 + 2];
    x2i = a[j1 + 3] + a[j3 + 3];
    x3r = a[j1 + 2] - a[j3 + 2];
    x3i = a[j1 + 3] - a[j3 + 3];
    a[j0 + 2] = x0r + x2r;
    a[j0 + 3] = x0i - x2i;
    a[j1 + 2] = x0r - x2r;
    a[j1 + 3] = x0i + x2i;
    x0r = x1r + x3i;
    x0i = x1i + x3r;
    a[j2 + 2] = wk1i * x0r - wk1r * x0i;
    a[j2 + 3] = wk1i * x0i + wk1r * x0r;
    x0r = x1r - x3i;
    x0i = x1i - x3r;
    a[j3 + 2] = wk3i * x0r + wk3r * x0i;
    a[j3 + 3] = wk3i * x0i - wk3r * x0r;
}

static void cftb040(float *a)
{
    float x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i;
    
    x0r = a[0] + a[4];
    x0i = a[1] + a[5];
    x1r = a[0] - a[4];
    x1i = a[1] - a[5];
    x2r = a[2] + a[6];
    x2i = a[3] + a[7];
    x3r = a[2] - a[6];
    x3i = a[3] - a[7];
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[2] = x1r + x3i;
    a[3] = x1i - x3r;
    a[4] = x0r - x2r;
    a[5] = x0i - x2i;
    a[6] = x1r - x3i;
    a[7] = x1i + x3r;
}

static void cftbsub(int n, float *a, int *ip, int nw, float *w)
{
    void bitrv2conj(int n, int *ip, float *a);
    void bitrv216neg(float *a);
    void bitrv208neg(float *a);
    void cftb1st(int n, float *a, float *w);
    void cftrec4(int n, float *a, int nw, float *w);
    void cftleaf(int n, int isplt, float *a, int nw, float *w);
    void cftfx41(int n, float *a, int nw, float *w);
    void cftf161(float *a, float *w);
    void cftf081(float *a, float *w);
    void cftb040(float *a);
    void cftx020(float *a);
#ifdef USE_CDFT_THREADS
    void cftrec4_th(int n, float *a, int nw, float *w);
#endif /* USE_CDFT_THREADS */
    
    if (n > 8) {
        if (n > 32) {
            cftb1st(n, a, &w[nw - (n >> 2)]);
#ifdef USE_CDFT_THREADS
            if (n > CDFT_THREADS_BEGIN_N) {
                cftrec4_th(n, a, nw, w);
            } else 
#endif /* USE_CDFT_THREADS */
            if (n > 512) {
                cftrec4(n, a, nw, w);
            } else if (n > 128) {
                cftleaf(n, 1, a, nw, w);
            } else {
                cftfx41(n, a, nw, w);
            }
            bitrv2conj(n, ip, a);
        } else if (n == 32) {
            cftf161(a, &w[nw - 8]);
            bitrv216neg(a);
        } else {
            cftf081(a, w);
            bitrv208neg(a);
        }
    } else if (n == 8) {
        cftb040(a);
    } else if (n == 4) {
        cftx020(a);
    }
}

static void rftfsub(int n, float *a, int nc, float *c)
{
    int j, k, kk, ks, m;
    float wkr, wki, xr, xi, yr, yi;
    
    m = n >> 1;
    ks = 2 * nc / m;
    kk = 0;
    for (j = 2; j < m; j += 2) {
        k = n - j;
        kk += ks;
        wkr = 0.5 - c[nc - kk];
        wki = c[kk];
        xr = a[j] - a[k];
        xi = a[j + 1] + a[k + 1];
        yr = wkr * xr - wki * xi;
        yi = wkr * xi + wki * xr;
        a[j] -= yr;
        a[j + 1] -= yi;
        a[k] += yr;
        a[k + 1] -= yi;
    }
}

static void rftbsub(int n, float *a, int nc, float *c)
{
    int j, k, kk, ks, m;
    float wkr, wki, xr, xi, yr, yi;
    
    m = n >> 1;
    ks = 2 * nc / m;
    kk = 0;
    for (j = 2; j < m; j += 2) {
        k = n - j;
        kk += ks;
        wkr = 0.5 - c[nc - kk];
        wki = c[kk];
        xr = a[j] - a[k];
        xi = a[j + 1] + a[k + 1];
        yr = wkr * xr + wki * xi;
        yi = wkr * xi - wki * xr;
        a[j] -= yr;
        a[j + 1] -= yi;
        a[k] += yr;
        a[k + 1] -= yi;
    }
}

static void rdft(int n, int isgn, float *a, int *ip, float *w)
{
    void makewt(int nw, int *ip, float *w);
    void makect(int nc, int *ip, float *c);
    void cftfsub(int n, float *a, int *ip, int nw, float *w);
    void cftbsub(int n, float *a, int *ip, int nw, float *w);
    void rftfsub(int n, float *a, int nc, float *c);
    void rftbsub(int n, float *a, int nc, float *c);
    int nw, nc;
    float xi;
    
    nw = ip[0];
    if (n > (nw << 2)) {
        nw = n >> 2;
        makewt(nw, ip, w);
    }
    nc = ip[1];
    if (n > (nc << 2)) {
        nc = n >> 2;
        makect(nc, ip, w + nw);
    }
    if (isgn >= 0) {
        if (n > 4) {
            cftfsub(n, a, ip, nw, w);
            rftfsub(n, a, nc, w + nw);
        } else if (n == 4) {
            cftfsub(n, a, ip, nw, w);
        }
        xi = a[0] - a[1];
        a[0] += a[1];
        a[1] = xi;
    } else {
        a[1] = 0.5 * (a[0] - a[1]);
        a[0] -= a[1];
        if (n > 4) {
            rftbsub(n, a, nc, w + nw);
            cftbsub(n, a, ip, nw, w);
        } else if (n == 4) {
            cftbsub(n, a, ip, nw, w);
        }
    }
}

// input array (any shape >= 1D)
// output array (shape = input.shape.replace(axis, n).insert(0,2))
// d0 = input.shape.step(axis)
// d1 = input.shape.size(axis)
// d2 = input.shape.slot(axis)
static inline void rdft_ndim_f32(
    const float* restrict input, 
    float* restrict output, 
    int d0, int d1, int d2,
    int* restrict temp_ip, float* restrict temp_w, float* restrict temp_a)
{
    void rdft(int n, int isgn, float* a, int* ip, float* w);

    int d3 = d0 * d1;
    int d_out = (d1 >> 1) + 1;

    for (int k = 0; k < d2; k++)
    {
        int dk = k * d3;
        int dm = k * 2 * d_out * d0;
        for (int i = 0; i < d0; i++)
        {                	           
            for (int j = 0; j < d1; j++)
            {
                temp_a[j] = input[dk + j * d0 + i];
            }
            rdft(d1, 1, temp_a, temp_ip, temp_w);

            for (int m = 2; m < d1; m+=2)
            {
                int index = (m * d0) + 2 * i + dm;
                output[index] = temp_a[m];
                output[index + 1] = -temp_a[m + 1];
            }
            int beta = dm + 2 * i;
            output[beta] = temp_a[0];
            output[beta + 1] = 0;
            output[beta + d3] = temp_a[1];
            output[beta + d3 + 1] = 0;
        }
    }
}

static inline float __norm_f32(const float* input, int step, int count)
{
	float sum = 0;
	for (int j = 0; j < count; j++) {
		float item = input[j * step];
		sum += item * item;
	}
	return sqrtf(sum);
}

// input array (any shape >= 2D)
// output array (same shape as input array except with axis removed)
// d0 = input.shape.step(axis)
// d1 = input.shape.size(axis)
// d2 = input.shape.slot(axis)
static inline void norm_f32(const float* restrict input, int d0, int d1, int d2, float* restrict output)
{
	const int d3 = d0 * d1;

	for (int k = 0; k < d2; k++) {
		int k3 = k * d3;
		int k0 = k * d0;
		for (int i = 0; i < d0; i++) {			
			*(output + i + k0) = __norm_f32(input + i + k3, d0, d1);
		}
	}
}

static inline float __mel_f32(const float* restrict input, const int* restrict filter_points, int filter)
{
	int n0 = filter_points[filter];
	int n1 = filter_points[filter+1];
	int n2 = filter_points[filter+2];
	int c0 = n1 - n0;
	int c1 = n2 - n1;
	float sum = 0;
	
	for (int i = 0; i <= c0; i++) {
		float rate = i / (float)c0;
		float value = input[i + n0];
		sum += value * rate;
	}

	for (int i = 1; i <= c1; i++) {
		float rate = i / (float)c1;
		float value = input[i + n1];
		sum += value * (1.0 - rate);
	}

	return sum;
}

// input array (any shape >= 1D)
// output array (same shape as input array except with 0 replaced with num_filter)
// size = input.shape.size(0)
// slot = input.shape.slot(0)
static inline void mel_f32(const float* restrict input, const int* restrict filter_points, int size, int slot, int num_filter, float* restrict output)
{	
	for (int k = 0; k < slot; k++) {
		const float *ip = input + k * size;
		for (int i = 0; i < num_filter; i++) {
			*output++ = __mel_f32(ip, filter_points, i);
		}
	}
}

static inline void addi_f32(
	const float* restrict x,
	int count,
	float immediate,
	float* restrict output)
{
	for (int i = 0; i < count; i++) {
		output[i] = x[i] + immediate;
	}
}

static inline void loge_f32(const float* restrict x, int count, float* restrict result)
{
	for (int i = 0; i < count; i++) {
		*result++ = logf(*x++);
	}
}

static inline void clip_f32(const float* restrict input, int count, float min, float max, float* restrict output)
{	
	for (int i = 0; i < count; i++) {
		float value = input[i];
		if (value > max)
			value = max;
		if (value < min)
			value = min;

		output[i] = value;
	}
}

/**
 * Enqueue handle->input_size values from given *data pointer to internal window buffer.
 *
 * @param handle Pointer to an initialized handle.
 * @param data Data to enqueue.
 * @return IPWIN_RET_SUCCESS (0) or IPWIN_RET_NOMEM (-2) if internal buffer is out of memory.
 */
static inline int fixwin_enqueuef32(void* restrict handle, const void* restrict data)
{
	fixwin_t* fep = (fixwin_t*)handle;

	if (cbuffer_enqueue(&fep->data_buffer, data, fep->input_size) != 0)
		return IPWIN_RET_NOMEM;

	return IPWIN_RET_SUCCESS;
}

static inline float mac_f32(const float* restrict a, const float* restrict b, int count)
{
	float sum = 0;
	for (int i = 0; i < count; i++) {
		sum += *a++ * *b++;
	}
	return sum;
}

static inline void conv1d_flat_f32(
	const float* restrict input,
	const float* restrict weight,
	float* restrict output,
	int top,
	int bottom,
	int n_output_rows,
	int filters,
	int strides,
	int kernel_size)
{
	for (int i = 0; i < n_output_rows; i++) {
		const float* wp = weight;		// Weight matrix
		const float* bp = input;		// Input matrix
		const int step = i * strides;	// Row size
		int len = kernel_size;			// Normally do one kernel

		int skip = top - step;			// Pad top?
		if (skip > 0) {
			len -= skip;				// Trim kernel length
			wp += skip;					// Advance kernel
		}
		else {						// No top padding,
			bp -= skip;					// Rollback input
		}

		skip = step + len - bottom;		// Pad bottom?
		if (skip > 0)
			len -= skip;				// Just cut the kernel at end

		float* op = output + i * filters;
		for (int j = 0; j < filters; j++) {
			*op++ = mac_f32(wp + j * kernel_size, bp, len);
		}
	}
}

static inline void add_f32(
	const float* restrict a,
	const float* restrict b,
	int l, int g1, int m, int g2, int r,
	float* restrict output)
{
	int index = 0;
	for (int x = 0; x < l; x++) {
		for (int i = 0; i < g1; i++) {
			for (int y = 0; y < m; y++) {
				for (int j = 0; j < g2; j++) {
					for (int z = 0; z < r; z++) {
						output[index] = a[index] + b[x * m * r + y * r + z];
						index++;
					}
				}
			}
		}
	}
}

static inline void relu_f32(const float* restrict x, int count, float* restrict result)
{
	for (int i = 0; i < count; i++) {
		const float value = *x++;
		*result++ = value > 0 ? value : 0;
	}
}

static inline float maxpool1d_f32_max(const float *restrict x, int ncols, int pool_size)
{
    float max = -FLT_MAX;
    for (int i = 0; i < pool_size; i++) {
        const float value = *(x + i * ncols);
        if (value > max)
            max = value;
    }
    return max;
}

static inline void maxpool1d_f32_row(const float* restrict x, int pool_size, int ncols, float* restrict result)
{
    for (int i = 0; i < ncols; i++) {
        const float* xp = x + i;
        *result++ = maxpool1d_f32_max(xp, ncols, pool_size);
    }
}

static inline void maxpool1d_valid_f32(
    const float* restrict input,
    int pool_size,
    int strides,
    int ncols,
    int n_output_rows,
    float* restrict result)
{
    int input_pointer_step = ncols * strides;

    for (int i = 0; i < n_output_rows; i++) {
        const float* input_current = input + (i * input_pointer_step);
        float* rp = result + (i * ncols);
        maxpool1d_f32_row(input_current, pool_size, ncols, rp);
    }
}

static inline float _globav1d_f32_mean(const float *restrict x, int nchannel, int nsteps)
{
	float mean = 0.0;
	for (int i = 0; i < nsteps; i++) {
		const float value = *(x + i * nchannel);
		mean = mean + value;
	}
	mean = mean/(float)nsteps;
	return mean;
}

static inline void globav1d_f32(const float *restrict x, int nsteps, int nchannel, float *restrict result)
{
	// Loop over all channels
	for (int i = 0; i < nchannel; i++) {
		const float* xp = x + i;
		*result++ = _globav1d_f32_mean(xp, nchannel, nsteps);
	}
}

static inline void dott_f32(const float *restrict a, const float *restrict b, float *restrict out, int d0, int d1, int d2)
{
	for (int i = 0; i < d2; i++) {
		float* op = out;
		for (int j = 0; j < d1; j++) {
			*op++ = mac_f32(a + j * d0, b, d0);
		}
		out += d1;
		b += d0;
	}
}

static inline void softmax_f32(const float* restrict x, int count, float* restrict result)
{
	float sum = 0;
	for (int i = 0; i < count; i++) {
		float value = expf(x[i]);
		sum += value;
		result[i] = value;
	}
	for (int i = 0; i < count; i++) {
		result[i] /= sum;
	}
}

/**
* Initializes a fixwin sampler handle.
*
* @param handle Pointer to a preallocated memory area of fixwin_handle_size() bytes to initialize.
*
* @param input_size Number of bytes to enqueue.
* @param window_count Number of items (of size input_size) in each window
*/
static inline void fixwin_initf32(void* restrict handle, int input_size, int window_count)
{
	fixwin_t* fep = (fixwin_t*)handle;
	fep->input_size = input_size;
	fep->window_count = window_count;

	char* mem = ((char*)handle) + sizeof(fixwin_t);

	int data_buffer = input_size * window_count;
	
	cbuffer_init(&fep->data_buffer, mem, data_buffer);
}

#define __RETURN_ERROR(_exp) do { int __ret = (_exp); if(__ret < 0) return __ret; } while(0)
#define __RETURN_ERROR_BREAK_EMPTY(_exp) {  int __ret = (_exp); if(__ret == -1) break; if(__ret < 0) return __ret;  } 

int IMAI_dequeue(float *restrict data_out) {    
    while(1) {
        __RETURN_ERROR_BREAK_EMPTY(fixwin_dequeuef32(_K4, _K3, 160));
        hammingmul_f32(_K3, _K5, _K6, 512, 1);
        rdft_ndim_f32(_K6, _K7, 1, 512, 1, _K8, _K9, _K10);
        norm_f32(_K7, 1, 2, 257, _K11);
        mel_f32(_K11, _K12, 257, 1, 40, _K13);
        addi_f32(_K13, 40, 1, _K14);
        loge_f32(_K14, 40, _K15);
        clip_f32(_K15, 40, 0, 4, _K16);
        __RETURN_ERROR_BREAK_EMPTY(fixwin_enqueuef32(_K18, _K16));
    }
    __RETURN_ERROR(fixwin_dequeuef32(_K18, _K17, 14));
    conv1d_flat_f32(_K17, _K20, _K19, 0, 4000, 50, 16, 80, 120);
    add_f32(_K19, _K23, 1, 1, 1, 50, 16, _K21);
    relu_f32(_K21, 800, _K25);
    conv1d_flat_f32(_K25, _K27, _K26, 16, 816, 50, 32, 16, 48);
    add_f32(_K26, _K30, 1, 1, 1, 50, 32, _K28);
    relu_f32(_K28, 1600, _K32);
    conv1d_flat_f32(_K32, _K34, _K33, 32, 1632, 50, 32, 32, 96);
    add_f32(_K33, _K37, 1, 1, 1, 50, 32, _K35);
    relu_f32(_K35, 1600, _K39);
    maxpool1d_valid_f32(_K39, 2, 2, 32, 25, _K41);
    conv1d_flat_f32(_K41, _K43, _K42, 32, 832, 25, 32, 32, 96);
    add_f32(_K42, _K46, 1, 1, 1, 25, 32, _K44);
    relu_f32(_K44, 800, _K48);
    conv1d_flat_f32(_K48, _K50, _K49, 32, 832, 25, 32, 32, 96);
    add_f32(_K49, _K53, 1, 1, 1, 25, 32, _K51);
    relu_f32(_K51, 800, _K55);
    maxpool1d_valid_f32(_K55, 2, 2, 32, 12, _K57);
    globav1d_f32(_K57, 12, 32, _K58);
    dott_f32(_K59, _K58, _K60, 32, 4, 1);
    add_f32(_K60, _K61, 1, 1, 1, 1, 4, _K62);
    softmax_f32(_K62, 4, data_out);
    return 0;
}

int IMAI_enqueue(const float *restrict data_in) {    
    __RETURN_ERROR(fixwin_enqueuef32(_K4, data_in));
    return 0;
}

void IMAI_init(void) {    
    fixwin_initf32(_K4, 4, 512);
    fixwin_initf32(_K18, 160, 100);
}

