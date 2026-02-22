/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 21:35:53 UTC. Any changes will be lost.
* 
* Model ID  3c962bd6-ad17-4c98-a3c8-2a39f4532ff0
* 
* Memory    Size                      Efficiency
* Buffers   19200 bytes (RAM)         100 %
* State     19592 bytes (RAM)         100 %
* Readonly  45324 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-medium-accuracy-1
* 
* Class Index | Symbol Label
* 0           | (unlabeled)
* 1           | brushing_teeth
* 2           | hair_drying
* 3           | showering
* 4           | air
* 5           | plastic
* 6           | plastic_out
* 7           | wood
* 8           | wood_out
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
*    kernel_size = 5
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[5,40,16]
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
* Convolution 1D                 [25,16]         float      dequeue
*    filters = 16
*    kernel_size = 5
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[5,16,16]
* Batch Normalization            [25,16]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[16]
*    beta = float[16]
*    mean = float[16]
*    variance = float[16]
* Activation                     [25,16]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [13,16]         float      dequeue
*    filters = 16
*    kernel_size = 5
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[5,16,16]
* Batch Normalization            [13,16]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[16]
*    beta = float[16]
*    mean = float[16]
*    variance = float[16]
* Activation                     [13,16]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [13,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,16,32]
* Batch Normalization            [13,32]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [13,32]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [13,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Batch Normalization            [13,32]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [13,32]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [6,32]          float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Global average pooling 1D      [32]            float      dequeue
*    trainable = True
* Dense                          [9]             float      dequeue
*    units = 9
*    use_bias = True
*    activation = linear
*    trainable = True
*    weight = float[32,9]
*    bias = float[9]
* Activation                     [9]             float      dequeue
*    activation = softmax
*    trainable = True
* 
* Exported functions:
* 
* int IMAI_dequeue(float *restrict data_out)
*    Description: Dequeue features. RET_SUCCESS (0) on success, RET_NODATA (-1) if no data is available, RET_NOMEM (-2) on internal memory error
*    Parameter data_out is Output of size float[9].
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
* (ACC) Accuracy 89.334 %
* (F1S) F1 Score 89.535 %
* 
* Name of class                                               unlabeled              air   brushing_teeth      hair_drying          plastic      plastic_out        showering             wood         wood_out
* (TP) True Positive or Correct Positive Prediction                8800              171             1297             2454               97                0             1810              548                0
* (FN) False Negative or Incorrect Negative Prediction             1274              103               47               14              336               15                1                6               16
* (FP) False Positive or Incorrect Positive Prediction               79                2               74               24               45                0             1204              384                0
* (TN) True Negative or Correct Negative Prediction                6836            16713            15571            14497            16511            16974            13974            16051            16973
* (TPR) True Positive Rate or Sensitivity, Recall               87.35 %          62.41 %          96.50 %          99.43 %          22.40 %           0.00 %          99.94 %          98.92 %           0.00 %
* (TNR) True Negative Rate or Specificity, Selectivity          98.86 %          99.99 %          99.53 %          99.83 %          99.73 %         100.00 %          92.07 %          97.66 %         100.00 %
* (PPV) Positive Predictive Value or Precision                  99.11 %          98.84 %          94.60 %          99.03 %          68.31 %         100.00 %          60.05 %          58.80 %         100.00 %
* (NPV) Negative Predictive Value                               84.29 %          99.39 %          99.70 %          99.90 %          98.01 %          99.91 %          99.99 %          99.96 %          99.91 %
* (FNR) False Negative Rate or Miss Rate                        12.65 %          37.59 %           3.50 %           0.57 %          77.60 %         100.00 %           0.06 %           1.08 %         100.00 %
* (FPR) False Positive Rate or Fall-Out                          1.14 %           0.01 %           0.47 %           0.17 %           0.27 %           0.00 %           7.93 %           2.34 %           0.00 %
* (FDR) False Discovery Rate                                     0.89 %           1.16 %           5.40 %           0.97 %          31.69 %         100.00 %          39.95 %          41.20 %         100.00 %
* (FOR) False Omission Rate                                     15.71 %           0.61 %           0.30 %           0.10 %           1.99 %           0.09 %           0.01 %           0.04 %           0.09 %
* (F1S) F1 Score                                                92.86 %          76.51 %          95.54 %          99.23 %          33.74 %           0.00 %          75.03 %          73.76 %           0.00 %
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
    0x3c1aba9d, 0x3c42dddc, 0x3c91c2b0, 0x3cb8fe8d, 0x3ca7c129, 0x3c565ac3, 0x3c36d4e8, 0x3c16ad9f, 
    0x3b725d30, 0x3c05af12, 0xbb1fcef2, 0xbb979c75, 0xbba7deff, 0xbbe70b87, 0xbbffb514, 0xbba09977, 
    0x3b4ae3a9, 0xbb2a4895, 0xbbb77e52, 0xbbd2fb7b, 0xbb37d14c, 0xbbf3e3cf, 0x3b7441f5, 0x3be5b65c, 
    0x3c200cc8, 0x3c4aadfa, 0x3c174e5a, 0x3b5cb3cf, 0x3b95978a, 0x3bd6c2f0, 0x3b61114e, 0xbae26456, 
    0xbc14e3ba, 0xbc615763, 0xb99b2898, 0x3b6bdca4, 0xbc006596, 0xbbb90abc, 0x3bb983c6, 0x3a5179db, 
    0x3bb96651, 0x3c5eccca, 0x3c9a39f7, 0x3cc33f07, 0x3cd1a9db, 0x3c906f4d, 0x3c7b73fc, 0x3bb93bc3, 
    0x3b6af764, 0x3bea6b2c, 0x3a936ed7, 0xbb379a53, 0xbae90a5a, 0xba6a89ac, 0xb8ea1e98, 0x3b2f77ae, 
    0x3b511f14, 0xba92d12b, 0xbba86301, 0xba78a8c7, 0xbb58af3d, 0xbaf40947, 0xba866b92, 0x3c0d26cf, 
    0x3bfcba07, 0x3c54ca24, 0x3c35106f, 0x3c1ab46e, 0x3c0f9016, 0x3c18d1a7, 0x3b4679dc, 0x3b5676db, 
    0xbbea2d0d, 0xbc423265, 0xbb5d2e91, 0xbaa645d2, 0xbb8201b1, 0x3b291298, 0x3b7476b2, 0x3b3b44ea, 
    0x3c252780, 0x3c5d8ca2, 0x3c8dd54c, 0x3cab1f92, 0x3cb9ca3f, 0x3ca12314, 0x3c1ba20d, 0x3c2dbda9, 
    0x3b820277, 0x3b6c268f, 0x3b19e986, 0xbb26803a, 0xba32fc25, 0xbb0061cb, 0xbb150565, 0xbb23c775, 
    0x3b937fe9, 0xbbcbd707, 0xbc0da1d2, 0xba153767, 0xb9c8c0de, 0x39db771b, 0x3b82b9f8, 0x3b6c590b, 
    0x3c2ed8f9, 0x3c47bd65, 0x3c4f2956, 0x3b962290, 0x3bfd5984, 0x3b2ff7c8, 0x3aea1761, 0xbb35ad53, 
    0xbbad3c0f, 0xbc515168, 0x3b2ec77a, 0x3bd927b7, 0x3abd2258, 0x3a1e5587, 0x395f3ddc, 0x3bbdce02, 
    0x3acc34d3, 0x3c507234, 0x3ca53b8e, 0x3c9a5b53, 0x3cbb99b9, 0x3c8d7552, 0x3c04e471, 0x3c253982, 
    0x3b90afa8, 0x3b7dcc26, 0x3881c96b, 0xbb8195ed, 0xbbd718ec, 0xba0b1b43, 0xbbb40e12, 0xbb85b050, 
    0x3b426abb, 0xbbaa8524, 0xbc598c00, 0xbb396899, 0xbb6c1134, 0xbb0ec7d6, 0xbadc2bb9, 0x3b234dfa, 
    0x3baebcd7, 0x3c1cfba4, 0x3c1dc8b4, 0x3bf67c04, 0x3bb15e73, 0x3a29b63d, 0x3baeaf44, 0x3a8b2b83, 
    0xbb8e6ec3, 0xbc474192, 0xb98fe789, 0x3aeb12f7, 0xbbb84c44, 0xbba4418b, 0x3b6ed23a, 0x3a916770, 
    0x3c077ed3, 0x3c864f7f, 0x3cc59fb9, 0x3cc2c15e, 0x3caf1065, 0x3c5f5388, 0x3c1bfe9e, 0x3c259190, 
    0x3b3b9bcb, 0x3b89b6d7, 0xbb594fb8, 0xba80b3ae, 0xbbaedfb8, 0xbb06aff4, 0x3ae48c86, 0x3b5e9a56, 
    0x3b9c311d, 0x3a45b647, 0xbbc647fc, 0xbb4a1ca5, 0xbaaf476e, 0xbb37adce, 0x3bb66007, 0x3b972383, 
    0x3bcfb4f4, 0x3c2b3c13, 0x3bd5337c, 0x3b982f25, 0x3c2cabf0, 0x3be90e1c, 0x3be28c32, 0x3b425d4e, 
    0xba34985e, 0xbbdadc5d, 0x3a10e03d, 0x3ac6b200, 0xbb8a6e8e, 0xba8ba6e1, 0xba3d6c82, 0x3b258857, 
    0x3b05b6ea, 0x3bb7c4ac, 0xbc944f21, 0xbc0c2af3, 0xbc9d5683, 0xbc3b752e, 0xbc14dc30, 0x3ab62828, 
    0x3c62079a, 0x3a4edb21, 0x3ccf4123, 0x3cf58ea8, 0x3b054701, 0x3c9da994, 0x3c866834, 0xbaa1c4dd, 
    0x3bc15fa8, 0x3c90d9cd, 0x3bc13905, 0x3c2f8f09, 0xbba50ded, 0x3b329161, 0xbc540f00, 0xbbfc678d, 
    0xbb05b51e, 0xbb0d9152, 0xbc00234b, 0xbc0e778c, 0xbaf1bafa, 0xbc2b47ec, 0xbc190273, 0xbca58b5c, 
    0xbc1d7483, 0xbb3681ab, 0x3ae9e46f, 0xbb18f9cd, 0xbc287da8, 0xbc0258e1, 0xbc30099f, 0xbc28be30, 
    0xba2a328c, 0xba483ec8, 0xbc90e88c, 0xbc9b9212, 0xbc93a61e, 0xbc0fec8f, 0xbc80651a, 0x3c450714, 
    0x3b386785, 0x3c79feb5, 0x3cb5176b, 0x3cf15707, 0x3bf9e727, 0x3c9cdd08, 0x3c1c5e09, 0x3bd29356, 
    0x3c7ce0a5, 0x3bb3d43f, 0x3b4c32c4, 0x3b747261, 0x3ad6f4d9, 0xbbc27fe8, 0xbc8241d9, 0xbc9d7efc, 
    0xbb9c4cbc, 0xbc070496, 0xbb805da9, 0xbc03462a, 0xbbf5120e, 0xbc0ab701, 0xbc8514e1, 0xbc8c024b, 
    0xbc0678e6, 0xbc170a8d, 0xbb56c9d2, 0xbc3841a7, 0xbc4e6a5e, 0xbc3719f5, 0xbbd4b1f1, 0xbc835ac4, 
    0x3c13817f, 0xbb723320, 0xbc547c62, 0xbc261b43, 0xbc8521d9, 0xbcc129d4, 0xbc000e8b, 0x3b514873, 
    0x3c5c6f12, 0x3c583758, 0x3cae546b, 0x3cc43956, 0x3c0661a3, 0x3c0ea5a1, 0x3c025252, 0x3b867205, 
    0x3b728bbf, 0x3c53070c, 0x3c635445, 0x3c0aeeb4, 0x3b1da66a, 0xbb90ead9, 0xbb89024f, 0xbc240d15, 
    0xbc390ba6, 0xbbc4a37a, 0xbc46a248, 0xbc5c0f93, 0xbb042dc8, 0xbc37fea4, 0xbc53ba07, 0xbc918432, 
    0xbc6995f9, 0xbc6c1db8, 0xbb0217dc, 0xbc4d4575, 0xbc96bcfd, 0xbbfaf022, 0xbbe6d61a, 0xbc9a84d5, 
    0x3c1e826c, 0xbbb01962, 0xbbc50964, 0xbcb1dfbc, 0xbcd35feb, 0xbc4c6a69, 0xbc699635, 0x3b64c7b7, 
    0x3c7b6b43, 0x3c1ad407, 0x3cef9e5d, 0x3ca41887, 0x3bb68937, 0x3c271270, 0x3c974a56, 0x3b9b0fe4, 
    0x3c87b857, 0x3c97c6ae, 0x3be34cca, 0x3bcef3a2, 0xbb5107e4, 0x3ba56bbf, 0xbc34afcf, 0xbc6ef4f8, 
    0xbc046064, 0xbc45f009, 0xbc2c5ef9, 0xbc2a29cc, 0xbbaf6b67, 0x3b36a5d2, 0xbc0ce117, 0xbc90a6d1, 
    0xbc4923d2, 0xba2b2d02, 0xbbd6d09e, 0x39e38c2a, 0xbc088958, 0xbb8a3bfc, 0xbbe78846, 0xbcaa992e, 
    0x3c2a0c63, 0x39a1192c, 0xbb834584, 0xbc22c12f, 0xbc80c0fb, 0xbc8f3637, 0xbc2dfa34, 0x3be51f1c, 
    0x3c411e52, 0x3c643609, 0x3ceeb7ae, 0x3cce160c, 0x3c4b74c8, 0x3c61a708, 0x3c5b9d44, 0x3c7a1322, 
    0x3c4df74c, 0x3cceba61, 0x3c8f34ee, 0x3b86d965, 0x3882ee20, 0xbad35ce5, 0xbc0a7e2d, 0xbc8d29b6, 
    0xba480376, 0x3a988932, 0xbb12a0bc, 0xbac9827b, 0xbbbdd5ff, 0xbb5199e0, 0xbc10526b, 0xbbe02a94, 
    0xbc376d6f, 0xbc17f551, 0x3a3beaba, 0xbbb27e8d, 0xbc36fd76, 0xbbb4b620, 0xbb20b2a6, 0xbca1af93, 
    0x3d64acbd, 0x3dc8bc01, 0x3d0d1e4f, 0x3c81924a, 0x3ceff5d1, 0x3cc55527, 0xbc94043b, 0xbb9ec930, 
    0xbd85d308, 0xbd85a191, 0xbc2cd208, 0xbd66f73e, 0xbd05f18d, 0xbcbea84d, 0xbc9ce170, 0xbc9b1a00, 
    0xbccdf398, 0xbd19c009, 0xbce38bc9, 0xbc8d1204, 0xbb281c86, 0x3ce91c91, 0x3c715abc, 0x3d30372e, 
    0x3cc0c6d9, 0x3cec53c4, 0x3d306385, 0x3d79fff8, 0x3da1da87, 0x3d6a6b70, 0xbbe7be00, 0x3c6eeefd, 
    0xbc93548d, 0xbbe50377, 0xbcc8baa8, 0xbd0198af, 0xbd0a61ab, 0xbcbb5c1a, 0xbc50b9bd, 0xbcb763bc, 
    0x3d6dcab5, 0x3dd324dc, 0x3cec93b2, 0x3cb97e4d, 0x3c0e6d9d, 0x3ccc37e3, 0xbccf9995, 0xbc7603c1, 
    0xbd257458, 0xbd580998, 0xbcdbcfc8, 0xbd708db4, 0xbd387dba, 0xbd1b17a1, 0xbd440515, 0xbceab025, 
    0xbcadc0c3, 0xbd17b917, 0xbd221b29, 0xbce5b769, 0x3c54f1e5, 0xbb40d121, 0x3d0e561e, 0x3cf29808, 
    0x3d2cf60c, 0x3d0d9dd0, 0x3ccf0ac4, 0x3d438f3b, 0x3d8b032b, 0x3d3c0cd1, 0xbbed5eb9, 0x3c0fb21c, 
    0xbc02ac39, 0xbbee107f, 0xbbd55d07, 0xbd009207, 0xbd142781, 0xbc27c527, 0x3b2d2407, 0xbc9a1a32, 
    0x3d3370ac, 0x3ddc93d8, 0x3cc7d083, 0xb8fc994c, 0x3cb0d30a, 0x3cd0b71e, 0xbcfac3f2, 0xbd00ef66, 
    0xbd95d133, 0xbd53bc48, 0xbd15043a, 0xbd4b9457, 0xbcdbdf97, 0xbd4d73d1, 0xbcf1f0aa, 0xbd2461f5, 
    0xbd50d334, 0xbd3f3493, 0xbd3ec12b, 0xbc54d779, 0xbbc9890a, 0x3be2bc7b, 0x3bb3bde9, 0x3ceffbc5, 
    0x3ccb9d9e, 0x3cc40592, 0x3c959dcc, 0x3d8d0357, 0x3d906fdf, 0x3d6690f9, 0x3c850e0f, 0x3c923668, 
    0x3c8a9dda, 0xbc801dde, 0xbcb07994, 0xbcee3625, 0xbd1bc868, 0xbc556160, 0x3a35d589, 0xbc8cfa7e, 
    0x3bc87aa4, 0x3d8fec6c, 0xbb89900b, 0x39f3070a, 0x3b39b39d, 0x3baffe04, 0xbd30d63d, 0xbd55ded5, 
    0xbd865251, 0xbd95ecd1, 0xbd5dff9d, 0xbd25632b, 0xbd7dab27, 0xbd1c77a8, 0xbd46fcb0, 0xbd4e3c44, 
    0xbd16d683, 0xbd996675, 0xbd91736c, 0xbd647d07, 0xbccb426f, 0xbcb91c6c, 0x3b350bf0, 0x3c16eae8, 
    0x3c2dde6e, 0x3a75c97e, 0x3c94e4b0, 0x3cc7557e, 0x3d5532bd, 0x3d036921, 0xbbcc4ed3, 0xbb215ad0, 
    0xbb85ccd8, 0x3a9c1f60, 0xbc827471, 0xbd519353, 0xbd2297dc, 0xbc34adf1, 0xbc7ebace, 0xbd06127b, 
    0xbaa97b38, 0x3d130a38, 0xbaca9707, 0xbbd665a6, 0x3c418f1e, 0xbb881096, 0xbcc4f54c, 0xbd4c3de1, 
    0xbda94d18, 0xbdb309e1, 0xbd2641ca, 0xbd504e03, 0xbd58c531, 0xbd2e5562, 0xbd0f367e, 0xbd5c4eeb, 
    0xbd590d86, 0xbd497c9a, 0xbd7bc946, 0xbd40e322, 0xbcc493d4, 0xbcf5b9bb, 0xbb0f90cb, 0xbb7a9e28, 
    0x3c8499f8, 0x3c5ea51b, 0x3cb1c1d4, 0x3d3bb99f, 0x3d535136, 0x3d3445df, 0x3c39b239, 0xbb09e252, 
    0xbc344eea, 0xbc0dde53, 0xbd0bb510, 0xbd4617df, 0xbd1b3653, 0xbc464d07, 0xbc644765, 0xbd3280c9, 
    0xbd74d531, 0xbd397ce3, 0xbca8c990, 0xbca8b125, 0xbcb83c16, 0x3b450d9d, 0xbb15284e, 0x3d1ddf8b, 
    0x3d43e4e7, 0x3d0423ad, 0x3da54e7a, 0x3dd05f8b, 0xbda7d813, 0xbd84a074, 0x3bc39ace, 0xba36d958, 
    0xbbcce665, 0x3cc2df6e, 0x3cd84651, 0xb9eed0a3, 0x3b7f6cac, 0xbc82101c, 0xbd17f035, 0xbd4ed5b3, 
    0xbd5b7b5e, 0x3c5fe127, 0x3c3f5742, 0x3beb594d, 0x3ce54358, 0x3d83f224, 0xbd3eeed7, 0xbdc98761, 
    0xbdd7bfd5, 0xbddc5dce, 0xbc4db429, 0x3cda7e60, 0xbc7faac4, 0xbb0860de, 0x3c54f9e7, 0xbc926a9b, 
    0xbcd3fa72, 0xbc949792, 0x3c743206, 0x3d1c1b2c, 0x3bad63fc, 0x3d41b555, 0x3ce0486d, 0x3d9b6b02, 
    0x3d65ffb6, 0x3d9d64b3, 0x3d9d7629, 0x3da1e63d, 0xbd68d8fd, 0xbd53405b, 0xbc229cc4, 0x3d11f762, 
    0x3caa13d8, 0x3d8f0058, 0x3d4197d2, 0x3c86ee5f, 0x3cc5ae38, 0xbce39c22, 0xbcb86d1e, 0xbd18087a, 
    0xbd3a765a, 0xba4fbfb1, 0x3cda5cdf, 0x3cfbaaef, 0x3d5281f0, 0x3d80e5a7, 0xbd2f2819, 0xbd8818b1, 
    0xbd9a9282, 0xbdb947e0, 0x3c9fa641, 0x3d560eb5, 0xbcab017f, 0x3baa414d, 0x3ce85f8e, 0xbcae82af, 
    0xbceca8ba, 0x3b97a761, 0x3d893948, 0x3d8acb5c, 0x3cd68e7c, 0x3d8fcb92, 0x3d76d1d5, 0x3dcb89b8, 
    0x3d733201, 0x3da5a09e, 0x3dce3b2b, 0x3dde65d8, 0xbd14b239, 0xbd190c45, 0x3be50072, 0x3c7307bf, 
    0x3cece328, 0x3d95883c, 0x3d6b68cc, 0x3d6f7d6c, 0x3d2e4d4f, 0xbaa79eb0, 0xbd15b0d0, 0xbbf5f409, 
    0xbb625f67, 0x3c89de9f, 0x3d603a96, 0x3c115a4f, 0x3d49b23b, 0x3d9cb838, 0xba88e797, 0xbda092cc, 
    0xbda84844, 0xbda994fb, 0x3c69b154, 0x3d111d72, 0xbd15ba92, 0x3c35b06c, 0x3cba79aa, 0x39d8d2e4, 
    0x3c0853e7, 0xbc21136e, 0x3d87fde5, 0x3d5d138c, 0x3ce06bc6, 0x3d9ac5f0, 0x3d8d370d, 0x3dd4323d, 
    0x3d8dc68e, 0x3dc04608, 0x3dd5d6ce, 0x3de5b354, 0xbd3240d7, 0xbd3fbdc9, 0xbbe4a48e, 0x3cfc8adc, 
    0x3d34137b, 0x3d699ef7, 0x3d4b99d9, 0x3d1e3c5a, 0x3d21f7ef, 0x3c6ed971, 0xbd393706, 0xbc906834, 
    0xbcbfd8d5, 0x3d0d66b4, 0x3d0d134a, 0x3d289cdc, 0x3da4f32e, 0x3d99e0be, 0xbbdd028c, 0xbd32c392, 
    0xbd641699, 0xbdbecacd, 0x3cf66454, 0x3d8cfc7b, 0x3b08177c, 0x3c43c86f, 0x3ce2dd4e, 0xbc17c11c, 
    0xbc8a680e, 0x3a009d15, 0x3d99ed04, 0x3d8a6634, 0x3cc24286, 0x3d17628d, 0x3d66dc0e, 0x3dd03ff3, 
    0x3d030081, 0x3d9a089d, 0x3dc77ac2, 0x3dac4ebc, 0xbda61c4e, 0xbd6450e3, 0x3c9c186d, 0x3af63e51, 
    0x3ae02325, 0x3d1c5671, 0x3d7858f3, 0x3c6553be, 0x3cb056f5, 0xbcd8529c, 0xbd45efd4, 0xbcc454e7, 
    0xbcc88ab5, 0x3b80091a, 0x3d11296e, 0xbb41b526, 0x3d70fb3b, 0x3d83fb5d, 0xbd094542, 0xbd6daa3d, 
    0xbdaada45, 0xbda3f083, 0x3b9ecdde, 0x3cf63d85, 0xbd01caa7, 0x3c92a605, 0x3d1fe4eb, 0xbbec43f7, 
    0x3b982e46, 0x3bea1ab9, 0x3c528a44, 0x3b1ec8ed, 0xbcb6a87e, 0xbc81f20b, 0xbcc04637, 0xba209d1c, 
    0x3cb53c71, 0x3cb19196, 0x3cacffed, 0x3d033624, 0x3c3efb94, 0x3c8a907f, 0x3c9070dc, 0x3cbb97df, 
    0x3c256496, 0x3cbb4ce8, 0x3c98f814, 0x3c0b2663, 0x3ab1987e, 0xbb8d5e8b, 0xbbff7def, 0xbc6e5487, 
    0xbbf38a3a, 0xbc13b77c, 0xbc5a5730, 0xbc8eb841, 0xbba8bb84, 0xb7816017, 0xbc90f4d0, 0xbcc8a11d, 
    0xbc433f6d, 0xbcbac309, 0xbac88dc4, 0x3ab46dc5, 0xbc147fce, 0xbc879542, 0xbc0bfe85, 0xbc85f4dc, 
    0x3c4d798c, 0x3c2f2d25, 0x3cabb2da, 0x3bd3e354, 0xbc787ed8, 0xbc1f8667, 0xbca95d7b, 0x3c170bcc, 
    0x3cab1f9d, 0x3d001961, 0x3cd89b98, 0x3d04d9bf, 0x3bd8be7a, 0x3c632bc1, 0x3c8a734d, 0x3c7f26e6, 
    0x3c901719, 0x3c8863f6, 0x3c9eceb1, 0x3c002ab7, 0xb92ddcc2, 0xbc0eb53c, 0xbc20095a, 0xbbe9d290, 
    0xbc4b74ba, 0xbbd8af26, 0xbc035209, 0xbbfc1b64, 0xbb909db6, 0xba60cd38, 0xbc65e429, 0xbca9e433, 
    0xbc857436, 0xbccb63a2, 0xbb8f840c, 0xbba498b9, 0xbc589269, 0xbc49ee83, 0xbba54aa6, 0xbbfa7bda, 
    0x3c7e3de4, 0x3c6629ab, 0x3cc7b65b, 0x3c02e9bc, 0xbc994dc1, 0xbc6db578, 0xbc338b59, 0x3c254e4e, 
    0x3cbca4ff, 0x3d01f435, 0x3cc597cc, 0x3d0d205f, 0x3bcfdd27, 0x3cb62ffd, 0x3c53f16e, 0x3ca9b6d7, 
    0x3baec8e3, 0x3ca9d496, 0x3c593538, 0x3c0c68f4, 0x3b783fd5, 0xb9c374db, 0xbc0c36bc, 0xbbe73ff7, 
    0xbbf4f5e4, 0xbc2ad4bc, 0xbc3ae7c2, 0xbc7ff9a7, 0xbc0096a1, 0x3a3050c9, 0xbc928ce3, 0xbcb24b74, 
    0xbcb29d68, 0xbcab04c6, 0xbb893e59, 0xbaa88cdd, 0xbc4ba6f7, 0xbc0b5dde, 0xbc00733b, 0xbc510963, 
    0x3bec4821, 0x3bae9bcb, 0x3cc9300b, 0x3bb4ceb0, 0xbca0fc9a, 0xbbf46f24, 0xbc52d05b, 0x3c30b61d, 
    0x3c4695fc, 0x3cac1c74, 0x3caa40ee, 0x3cd417a1, 0x3ab999d1, 0x3bf3217f, 0x3c922aa0, 0x3c1f725a, 
    0x3c7ddaed, 0x3c045717, 0x3c330f96, 0x3c5b5921, 0x3b949c44, 0xbb6c32a9, 0xbc8d29c2, 0xbc39aa9e, 
    0xbc76913e, 0xbbe98a0d, 0xbb53c760, 0xbc419ab3, 0xbbaa5fb6, 0xba563eec, 0xbc3759ba, 0xbcdd7f48, 
    0xbcb58f39, 0xbcbef86f, 0xbc1744ea, 0xbb66f7b6, 0xbcb4b8ac, 0xbc129909, 0xbc78f1be, 0xbc55d526, 
    0x3b114c54, 0x3bdf46ec, 0x3c9f9c58, 0x3c29f9ac, 0xbc447b73, 0xbc8c14c1, 0xbc9f6abd, 0xb93126a2, 
    0x3c538470, 0x3c61714e, 0x3c950de1, 0x3ca24b48, 0x3b1e597d, 0x3be8d2b2, 0x3ca9dae7, 0x3c451fba, 
    0x3c1a5fda, 0x3c88a6dc, 0x3c9a97c4, 0x3bb6d184, 0x3ac1f9e0, 0xbc2b4b99, 0xbb99c8f7, 0xbc6b791b, 
    0xbbcf9ac6, 0xbc382fd4, 0xbc292644, 0xbc321dd5, 0xbbabec1e, 0xbb4f9d30, 0xbcb13a41, 0xbcc0f780, 
    0xbcb275a2, 0xbca05ad8, 0xbb606efe, 0xbb44d3f8, 0xbcabdd7a, 0xbc2d1e94, 0xbc830c30, 0xbc8b0e37, 
    0x3cc658e7, 0x3ce275d7, 0x3d290b45, 0x3cd202a8, 0x3c8c7ed1, 0x3c23a23b, 0x3c08db1b, 0xbb02c709, 
    0xbb9dfa77, 0xbbbb9567, 0xbcb34aa6, 0xbc0d8b94, 0x3d3c794d, 0x3ba20db9, 0xbc83afe4, 0xbd011b55, 
    0x3b118955, 0xbbb1b31b, 0x3bc8bedc, 0xbc788ae6, 0x3c48fe1d, 0x3ccc1f73, 0x3ccdfd85, 0x3c90ff1b, 
    0xbc23d058, 0x39976ef7, 0x3aa75b9b, 0xbcaa85f5, 0xbc90ed29, 0xbc9c045a, 0xbb9c1313, 0x3d3f3058, 
    0x3d444c76, 0x3d54d55b, 0xbc8b018e, 0xbc9e4989, 0x3c7c401b, 0xbc268578, 0xbce68930, 0x3c6dd4e1, 
    0x3c8f2c19, 0x3c490fd3, 0x3d065647, 0x3c28bca1, 0x3cbb984e, 0xbcc64778, 0x3b01611b, 0xbc037f88, 
    0xbb0c07a8, 0xbc9d8b3f, 0xbcb3fb72, 0xbc1c3762, 0x3d1cb777, 0xbbd50829, 0xbcae3fb5, 0xbccfa918, 
    0xbbd5799f, 0xbb96da42, 0x3c954319, 0xbc86cd28, 0x39e9c2fd, 0x3c4e6be5, 0x3c8c7ca8, 0x3b548db3, 
    0xbbd3210d, 0xbc093ce2, 0xbadf4626, 0xbccb03e7, 0xbcc0461f, 0xbcfefe1f, 0x3bda9d10, 0x3d3d313d, 
    0x3d6cd4df, 0x3d26cda8, 0xbc758eea, 0xbc5acddf, 0x3c836d7c, 0xbc1ed694, 0xbc892723, 0x3c5f2729, 
    0x3c9b1386, 0x3cc2459a, 0x3d0610c7, 0x3ca312c1, 0x3cb90460, 0x3a28668b, 0xb9a29772, 0xbc94609b, 
    0x3aa733ff, 0xbcde0536, 0xbc973995, 0xbb45f098, 0x3d204277, 0xbbdcb4aa, 0xbccf2a4b, 0xbca827da, 
    0x3a37f9fa, 0xbb88b5c9, 0x3c24de1c, 0xbc89eceb, 0xb9fc9bdc, 0x3cd8ed9c, 0x3c422d57, 0x3c917c05, 
    0xbc4ffff3, 0xbae068da, 0x3b9b0998, 0xbc682c9a, 0x3ae07de5, 0xbc5af481, 0x3ca38dd8, 0x3d8b8075, 
    0x3d4db862, 0x3d686a43, 0xbb32ffab, 0xbc96e38f, 0x3c13818d, 0xbc4c8d7e, 0xbc7f1d76, 0x3cb199d4, 
    0x3c3ddd81, 0x3c8741ea, 0x3d05217b, 0x3c70f60c, 0x3c03b32b, 0xbc2a0fc9, 0xbc1fcfb2, 0xbc80ba2d, 
    0xbc4a8759, 0xbc9283ce, 0xbcc5722a, 0xbb764daf, 0x3d40c069, 0x3b87e67a, 0xbc5a5024, 0xbcccdc51, 
    0xbb958426, 0xbbe237ee, 0x3b5b625f, 0xbc48f2bf, 0xbabc5770, 0x3c890cda, 0x3c969f96, 0x3c78d9cb, 
    0xbb079abe, 0xbb691f7a, 0xba48dba1, 0xbbb86d0f, 0xbb836948, 0xbc34c263, 0x3c3d2d00, 0x3d8a9172, 
    0x3d87c24b, 0x3d5554da, 0xbb7f31f9, 0xbc848dc7, 0x3c46c64d, 0xbb4ba429, 0xbcae85ee, 0x3c9681e8, 
    0x3d12f1ad, 0x3d099d10, 0x3d43d165, 0x3cf5f81d, 0x3c0ee028, 0xbc3af9dc, 0xbbe6b86c, 0x3a93174f, 
    0xbc0ad23b, 0xbc91e67d, 0xbca3777d, 0xbb169f73, 0x3d4511a1, 0x3c1dfe6f, 0xbcd3abb0, 0xbc850c69, 
    0xbad84e39, 0x3bb3f40b, 0x3bfb1617, 0xbc613f34, 0x3bd66410, 0x3c81af39, 0x3c37e940, 0x3cdb45c8, 
    0xba92f331, 0x3c5353f6, 0x3c079824, 0xbc7abe6b, 0xbb9c764a, 0x3b375f38, 0x3c6fa406, 0x3d82d611, 
    0x3d813e35, 0x3d6f089d, 0xbb8ad426, 0xbbe16698, 0x3ca6afb6, 0xbb49ea76, 0xbc943081, 0x3cc45e70, 
    0xbc7ae655, 0x3c21b4a7, 0xbc20905f, 0xbc0520c6, 0x3a2d7ff1, 0xbc9004e9, 0xbbba6d18, 0xbbac397c, 
    0x3a5c17d5, 0xbb2374c1, 0xbc97f39e, 0xbc3d506f, 0x3aeef2fd, 0xbc54c313, 0xbc6cbe0c, 0xbca6e3b3, 
    0xbbe69e2a, 0xbaae55a4, 0xbc27bddb, 0xbccb10bc, 0xbbad4f17, 0xbb3536b9, 0xbc080240, 0x3ab2bc55, 
    0xbb349eb3, 0xbb736947, 0xbb087480, 0xba499d7b, 0xbc01dc16, 0xbbe75268, 0xbc1a6af7, 0xbb8e5f9b, 
    0xbb85b21e, 0xbc392fe0, 0xbc8f48f2, 0xbb805d4c, 0xbbf2ec28, 0xbb9c32b0, 0xbb75e1a5, 0x3b7e8893, 
    0xbc6d2bf5, 0x39a37bfa, 0xba874ecc, 0xbc34a7ac, 0xbc3d6af6, 0xbc0bb09b, 0xbc24b56f, 0xbc393b25, 
    0xbc102001, 0x3b4e6f87, 0xbca7d6e7, 0xbb751f38, 0xbb8116fd, 0xbc7404cc, 0xbc3bf0c9, 0xbcb6c867, 
    0x3ab0bbb5, 0xbba2d95e, 0xbc9e5d1d, 0xbcb0b1ce, 0xbbe08770, 0x39504463, 0xbba1618e, 0x3a2fc8db, 
    0x3b3868f1, 0xbb23c143, 0xb9feaa9e, 0xbb9e0103, 0xbbb44af5, 0xbc19d7b7, 0xbbb832b0, 0xbb13cfb1, 
    0xba0cc266, 0xbbb00bc5, 0xbc262c73, 0xb9a5ea0d, 0xbaf31d71, 0xb928505a, 0xb9a13855, 0x3b16d8be, 
    0xbcb1cf0a, 0x3bb0c8a3, 0xbb7353a2, 0xbbfde2d0, 0xbbe36e62, 0xbc982624, 0xbc227be6, 0xb9bb9b35, 
    0x3b575f40, 0xbbaf9ea3, 0xbcaeaa41, 0xbc6eda44, 0x361e3e8d, 0xbc200dc3, 0xbc8aaac3, 0xbcb22347, 
    0xbbaf0add, 0xbadfe50b, 0xbc49f64e, 0xbc843fd8, 0x3b271428, 0xbbf904e3, 0xbafbfe05, 0xbae18377, 
    0x3b25025d, 0xbb9c20fc, 0x3b52f119, 0x3a94212b, 0xba9a02fa, 0xbc51d296, 0xbaf7213f, 0xbc18981b, 
    0xbb8909a6, 0xbc099f3b, 0xbc9c2f6e, 0xbc1d50fb, 0xbb751a4b, 0xbc0db74f, 0xbb4d6982, 0x3bcd372f, 
    0xbc478113, 0x3c3d8506, 0xbb861b8a, 0x3b1f194a, 0xbbb6cf1b, 0xbc70c480, 0xbb0633c9, 0xbbedba95, 
    0xbbd9444e, 0x3b09ac30, 0xbc8d3a11, 0xbbb62f24, 0xbb987545, 0xbc20e2e4, 0xbc467d0b, 0xbc45f362, 
    0x38ed01d6, 0xb9a699e7, 0xbc6b78c2, 0xbcac0891, 0x3b63238e, 0x3b502ec5, 0xbb8dc7c8, 0xba2fb153, 
    0x3c0e7f29, 0x3bbc8616, 0x3bc92046, 0x3a8e6ab2, 0xba60977e, 0xbbd087a2, 0xbb5217c1, 0xbbc23475, 
    0x3b3a70f6, 0xbac5b550, 0xbc4afed2, 0xba4a5667, 0xbbb24caa, 0xbc115953, 0xbbccea56, 0x3c4db062, 
    0xbb9e8a82, 0x3c6ecb72, 0x3b94885f, 0xbbe4ab32, 0xbb04ff7e, 0xbc9383cc, 0xbb4b712a, 0xb9ba2016, 
    0x3b912310, 0x3b928c10, 0xbbcd5f8a, 0xbc16d08a, 0x3b5e4d92, 0x3a8f4971, 0xbc0f927d, 0xbbf15c6b, 
    0xba1cf095, 0x3aa9a941, 0xbc635e48, 0xbc6cd29e, 0x3ba6835f, 0xbb2af2b9, 0xbbc40b4f, 0x3be32054, 
    0xbaf1eff6, 0xbaecac3a, 0x3b7b2e96, 0x3b16380e, 0xbbfacc34, 0xbc00e83a, 0xbc0c3206, 0xbc486591, 
    0xbbc8c040, 0xbbee623b, 0xbc5d1f25, 0xbb82ba97, 0xbb1aa6ab, 0xbc02dd73, 0x3b54d4df, 0x3c628de8, 
    0x3c819182, 0x3cb17da2, 0x3c9a99e9, 0x3c34d75e, 0xbac05016, 0xbc2838ef, 0xbcd56a9b, 0x3c72332c, 
    0x3c793d49, 0x3d0631b2, 0x3d00bf5b, 0x3d2ff501, 0x3bd2c9eb, 0xbc344d4d, 0x3c527c63, 0x3c379549, 
    0x3bf7515b, 0x3b7e68b5, 0x3cea236f, 0x3c02676f, 0xbb95e268, 0xbc0468f8, 0xbc061299, 0xbcae03ee, 
    0xbb370dda, 0xbbc95189, 0x3b9822c5, 0xbaf179e2, 0x3cd3bbac, 0x3ccd9b04, 0xbcc6700a, 0xbd104728, 
    0xbd50fe91, 0xbd201ed7, 0xbc7e3952, 0x3b94c45f, 0xbc5fd693, 0x3c0391e8, 0x3ccff88e, 0xbca1b035, 
    0x3cad5509, 0x3cec2494, 0x3cc28ecb, 0x3c82e10f, 0x3bebb943, 0x3bcbe231, 0xbd083099, 0x3c0e64fe, 
    0x3c89f9fb, 0x3d12ede9, 0x3d2a1cfe, 0x3d05fc14, 0xba9705f1, 0xbba5582a, 0x3c0c2032, 0x3c77dae7, 
    0x3b96e8d1, 0x3c7c635e, 0x3c4e101e, 0x36019a85, 0xbb42e7b9, 0x3b990ba6, 0xbc8bd778, 0xbc91b2e6, 
    0xbc497194, 0x3b65daf7, 0x3ba75f36, 0xbc9aea53, 0x3c183d28, 0x3cf22ded, 0xbcb2053d, 0xbd4ed2c0, 
    0xbd19802e, 0xbd1b5447, 0xbb04e09e, 0x3c09cdbf, 0xbca1e116, 0x3bb20141, 0x3caa61e9, 0xbc01ff53, 
    0x3cbecd81, 0x3cbbf413, 0x3c7fe7a8, 0x3c497219, 0x3be685c7, 0xbc11e02e, 0xbcd8592f, 0x3cc107b6, 
    0x3c557c14, 0x3d23e7ec, 0x3d2009b5, 0x3d1f3f39, 0xbc1cbe0c, 0xbae05c5d, 0x3c1904d1, 0x3c366e0c, 
    0xbbc4ea1e, 0x3c677302, 0x3cdfe76a, 0x3c29dd6c, 0xbc0103f5, 0xbc50c5a5, 0xbc8341ef, 0xbc7f5024, 
    0xbc8fbf2b, 0xbb8d539d, 0x39cd9011, 0xbc82714d, 0x3bdf05e0, 0x3cea1ae7, 0xbd1500bf, 0xbd179120, 
    0xbd543bef, 0xbd257dc3, 0xbbcb4bf9, 0x3bfc12c1, 0xbc9fe31d, 0x3c9f2191, 0x3cc36f9a, 0xbc479f7b, 
    0x3ca3a8f4, 0x3c6f3cfa, 0x3c9efc6b, 0x3ccba9c1, 0x3ba87e8c, 0xbbb8d727, 0xbd045df5, 0xb9f7fb68, 
    0xba81bf0e, 0x3c9047f3, 0x3cd87bf8, 0x3ce65eea, 0xbc716a84, 0xbc580302, 0x3c15a230, 0x3cc7ccac, 
    0xb938b6ad, 0x3be14dc1, 0x3c9abf53, 0x3c3789a8, 0xbc29348b, 0xbc694794, 0xbcf1d56e, 0xbcb41617, 
    0xbcc6ef53, 0xbc5a9754, 0xbc1465db, 0xbcc1144f, 0x3b428e26, 0x3cb8595e, 0xbccfdcfa, 0xbd3c41c7, 
    0xbd299ad9, 0xbd336e29, 0xbc591337, 0x3baeae2f, 0xbcda7dda, 0xbbbb0ee6, 0x3ca7b768, 0xbc8b82fd, 
    0x3c991304, 0x3ca02b78, 0x3bc940a7, 0x3bd70019, 0xbc53242c, 0xbba5a064, 0xbcb064d8, 0x3c343912, 
    0x3c2de727, 0x3c2bfe46, 0x3c4f7bb9, 0x3cdc0319, 0xbc72572e, 0xbc9073a5, 0x3c3a49d4, 0x3ca56323, 
    0xbc4a9f26, 0x3c140346, 0x3c11f7db, 0xb9265678, 0xbc3bbbc0, 0xbc49dbea, 0xbd13faa4, 0xbcba4fa7, 
    0xbcb1a8d6, 0xbc3093b2, 0x39faf616, 0xbc9f9ce4, 0x3c5bc978, 0x3c0f11f9, 0xbcf8f0bc, 0xbd4b2105, 
    0xbd37b107, 0xbd2c28fa, 0xbcb4bf0a, 0xbabe50f0, 0xbcbb0334, 0x3a602b5e, 0x3c5c326d, 0xbcccc3f5, 
    0xbe7d4546, 0x3e1a2816, 0xbde1133c, 0x3c50fba7, 0xbc77b1a1, 0xbe14b56e, 0x3c96b07c, 0x3c2896a3, 
    0xbd635b5c, 0x3e0215d2, 0xbe01136b, 0xbd379314, 0xbd7fff16, 0xbc954a84, 0xbd853127, 0xbe2e0393, 
    0x3d3c1ed5, 0x3db82b85, 0xbe250606, 0xbe8fecdd, 0x3e03b0f5, 0xbd859087, 0xbde6365d, 0xbc4491b5, 
    0x3bc1a9a1, 0xbd91568f, 0xbda6b401, 0xbda3878f, 0xbdb95ebc, 0xbdd1fba1, 0xbdbcf8bb, 0xbde329f8, 
    0x3d2af646, 0xbdf6398d, 0xbe692c79, 0xbd808d55, 0xbcad1c80, 0xbdd96eb4, 0xbd7089a2, 0x3e3cfb25, 
    0xbe767d0e, 0x3df06c19, 0xbe222d79, 0xbd0689fb, 0x3cff221a, 0xbe0f8087, 0x3d75c273, 0x3c883f6e, 
    0x3d023de3, 0x3e100ebe, 0xbe131c33, 0xbb3dcc40, 0xbcdbcc98, 0x3c9782e4, 0xbce1e67a, 0xbe43148e, 
    0x3dceff53, 0x3e142d40, 0xbe21f657, 0xbe42919b, 0x3de2c72c, 0x3c43062c, 0xbd307207, 0x3d18a281, 
    0x3d352ed9, 0x3d26ed00, 0x3b0744f1, 0xbd4c311d, 0xbd8fd201, 0xbdf8c36c, 0xbd56d48b, 0xbd8e2aa4, 
    0x3d97d49d, 0xbd4a9768, 0xbe5b5c08, 0x3c538f05, 0x3d3e2601, 0xbd8a41e6, 0xbda0e28f, 0x3e85f986, 
    0xbe820a46, 0x3e360623, 0xbd8bf4d2, 0x3c65bbd2, 0x3c51dbe2, 0xbe08e409, 0x3d0e3751, 0x3c3a227a, 
    0xbca0c40a, 0x3deb94a8, 0xbe0cc0a4, 0xbd0e659a, 0xbca3ff4f, 0x3d0ab4bc, 0xbd3d06fa, 0xbe28d20a, 
    0x3d7077c9, 0x3dd1c132, 0xbe380215, 0xbe3b937a, 0x3e2374a8, 0xbcba90f6, 0xbcbd43c5, 0x3d2c46f1, 
    0x3d41d93d, 0x3d08e017, 0x3caba755, 0xbd3211c1, 0x3c7d46a4, 0xbd2f10fd, 0xbd4e9cc1, 0xbd99158e, 
    0x3d9160ea, 0xbddac36a, 0xbe6f15b4, 0xbd395a74, 0x3c21aa44, 0xbd9cd077, 0xbd160f64, 0x3e7050c0, 
    0xbe3d88e7, 0x3e10c7fc, 0xbd85c862, 0xbcc17927, 0xbbdf746b, 0xbdc2260d, 0x3d428d2e, 0xbb9e5395, 
    0x3cb200d9, 0x3e01b5a9, 0xbda992e8, 0xbd3a1ff9, 0xbca31e7f, 0x3cd04220, 0x3d45bec4, 0xbdcdd424, 
    0x3e0bc0a3, 0x3de77d16, 0xbe029a71, 0xbe1d5cba, 0x3e4bc7e6, 0x3c101cec, 0xbd2ecc7a, 0x3dce391c, 
    0x3dbe64a8, 0x3db22391, 0x3d42e83e, 0x3d08b5ae, 0x3d14093b, 0x3b37a0e2, 0xbc59513a, 0xbcbd0061, 
    0x3e18b535, 0xbc462219, 0xbe00b8f6, 0x3ce98c64, 0x3d912da3, 0xbccfbc50, 0xbcfb9a3f, 0x3e55420c, 
    0xbe584d58, 0x3e3943f9, 0xbdbd4dfa, 0x3d0d3b0e, 0xbcdd1cc6, 0xbe43f381, 0x3b22035b, 0xbcc58f52, 
    0x3c6044a1, 0x3e3c3e11, 0xbda6b25d, 0xbdb68071, 0xbd8deff6, 0x3cc61732, 0xb97c4bdc, 0xbd6b842d, 
    0x3dba05ce, 0x3dac473e, 0xbdd3205a, 0xbe3775ab, 0x3df4f42c, 0xbc9c1b6e, 0xbd01b4dc, 0x3e0920c7, 
    0x3dd689a7, 0x3d9b7508, 0x3d8c3970, 0x3c9f21d5, 0x3daff64d, 0xbd3b57c9, 0xbd66eaf0, 0xbc7c210c, 
    0x3dd0f905, 0xbcf4fccc, 0xbe43c08b, 0xbcbfa30c, 0x3d0ce085, 0xbd6c6483, 0xbd2265a7, 0x3e2b9b10, 
    0xbd8cf3fd, 0xbe5c63c1, 0xbe83ecaa, 0xbe2f1746, 0xbcdd59a9, 0xbe8d9c3b, 0xbe25238a, 0x3b89d6c4, 
    0x3e2fe2fd, 0x3d84245e, 0x3d88d7e5, 0xbe3a1237, 0xbde84281, 0x3d84f0cd, 0x3d9a2d40, 0x3d5981ba, 
    0x3ddb9d40, 0x3d44fd51, 0xbc8113a6, 0x3de0840d, 0xbd24953c, 0xbe0c41eb, 0xbd0c591b, 0xbc03765b, 
    0x3d4e740e, 0x3934d45d, 0x3ca84475, 0x3e20c14c, 0xbd098869, 0xbd21347f, 0x3d237c90, 0x3d1b2cca, 
    0x3da1dadc, 0x3d7e0f28, 0x3c908b3a, 0x3bce2736, 0xbcaf6679, 0x3db7f14a, 0x3db5b2a5, 0xbe2f8a7e, 
    0xbe2ad06d, 0xbe10b38d, 0xbe6d294d, 0xbe11f9b1, 0xbd9e53eb, 0xbea8e3cc, 0xbe37a5ad, 0xbd89d5bc, 
    0x3dc5ce1c, 0x3b59c3b9, 0x3cdebd3b, 0xbe577b63, 0xbdb6e4ab, 0x3de8f14b, 0x3cf551c9, 0x3caded75, 
    0x3da178b8, 0xbc9f9749, 0xbccd3ca7, 0x3ddefde9, 0xbc435b64, 0xbe074847, 0xbc586329, 0xbd8d93c8, 
    0x3d98ebd6, 0xbc9eef4e, 0xbcde67b0, 0x3e083b3c, 0xbd850092, 0xbd763ca0, 0x3cf9ac6b, 0x3d8c2415, 
    0x3cd58cfc, 0x3d870a77, 0x3d8fb730, 0xbc227883, 0xbb899134, 0x3d7b8b9b, 0x3d22f226, 0xbe3a407d, 
    0xbdf73061, 0xbe8c2b94, 0xbe8ded4f, 0xbe70ef11, 0xbdcd681d, 0xbea82797, 0xbe4154fb, 0xbcd2b10d, 
    0x3e14f3c2, 0x3cd863ba, 0xbaf8e67a, 0xbe631cf0, 0xbe09aa0b, 0x3da0825a, 0x3d9b64af, 0x3d5287f8, 
    0x3e01f6ac, 0x3bd8d9b8, 0xbc06ca6d, 0x3e12568e, 0xbcd3592d, 0xbdfee0a0, 0xbca8f1d2, 0xbd29596e, 
    0x3d79c278, 0x3c6ab257, 0xbccca63f, 0x3e0e7bc0, 0xbd85ec75, 0xbda582fe, 0x3cc8e667, 0x3d8792cb, 
    0x3d82a362, 0x3d3cbec3, 0xbc0bd2ce, 0xbb2eff9f, 0xbcfe3f34, 0x3d8755f4, 0x3d007879, 0xbe24d744, 
    0xbdf6387f, 0xbe10d4f5, 0xbe90a979, 0xbe061300, 0xbd9a72f1, 0xbeac8535, 0xbe7c388f, 0xbd844e9b, 
    0x3e0c2bd1, 0x3c5121cb, 0xbbc025ab, 0xbe5a5cdf, 0xbdd3ba31, 0x3da6c36f, 0x3d1a75d2, 0x3d72f40f, 
    0x3d709a9b, 0x3c0d8ee3, 0xbd7f9b9f, 0x3db45d7a, 0xbbefce5d, 0xbde7ee17, 0xbcc9cb83, 0xbdb9442c, 
    0x3ce71b9b, 0xbc9281a9, 0xbcb2743e, 0x3e33a995, 0xbda6d37f, 0xbdacef89, 0xbaac84f0, 0x3c5d7b74, 
    0x3d6d8d2d, 0x3d7bb279, 0x3b6e6ee8, 0x3cd35363, 0xbd43b4e2, 0x3d2572b7, 0x3cb76286, 0xbe462ff3, 
    0xbdad77ea, 0xbdff39d6, 0xbe634e4a, 0xbe190973, 0xbd10836e, 0xbe9b526e, 0xbe6846f8, 0x3c958123, 
    0x3dfaee3b, 0x3cfc6287, 0x3d857317, 0xbe395230, 0xbdfed1b9, 0x3d8aaba5, 0x3da83d90, 0x3d69b944, 
    0x3e045ef6, 0x3d0ec8d9, 0xbd12b9f2, 0x3dd4a980, 0xbd8480e2, 0xbe0919b0, 0xbd822617, 0xbd90722d, 
    0x3daeae70, 0x3c2f0b20, 0xbd38a213, 0x3e006183, 0xbd820c80, 0xbd88a510, 0x3ca0c7e1, 0x3d2c4e57, 
    0x3c756b86, 0x3d078066, 0x3cbcc943, 0xbc8881ab, 0xbc94ca5f, 0x3da38c15, 0x3cd7deb2, 0xbe530c2d, 
    0x3b9c77e6, 0xbb74ef1b, 0xbaf1c97d, 0xbb25a69f, 0xbc0d88d5, 0xbc000509, 0xbb2f57f7, 0xbb968da1, 
    0xbbfac790, 0xbbf8a72d, 0x39ae7f36, 0xbabe1192, 0xbbbcee59, 0xbb7ab563, 0xbbe57a1d, 0xbbac9be5, 
    0xbbcc875c, 0xbb225d2c, 0xbb83c2e0, 0xbb8e752b, 0xb8a5df23, 0x3b26def4, 0xbb5bbeea, 0xbac908d4, 
    0xbb34d62c, 0xbacf8be7, 0xbbcdce80, 0xbb4efa14, 0xbb69ea9c, 0xbb6b2378, 0x39edc6fc, 0xba63a7f6, 
    0xbbf7220b, 0xbc0202d0, 0xbada9bbb, 0xba2dd177, 0xbb8058cf, 0xbb979970, 0xbb9aa33c, 0xbb96f408, 
    0x3b7dd627, 0xbbe8e24f, 0x3b307848, 0xbbd04d1c, 0xbc075937, 0xbbc4ac9d, 0xb929c95b, 0xba51234f, 
    0xbc384747, 0xbc039d4b, 0xbb8ce275, 0xbba3bc2e, 0xbbc904f4, 0xbb842464, 0xbb114a15, 0xbbe42f49, 
    0xbbabbbc4, 0xbb162d9d, 0xbba02538, 0xbac47c1e, 0xbbdc1669, 0x3af12177, 0xbadcc110, 0xbc018628, 
    0xbbb37276, 0xbbe27ce0, 0xbaf90f70, 0xbba4b0c2, 0xbb90d4a5, 0x3ab12cb5, 0x3ae5c03b, 0xbc0c2f80, 
    0xbbea855a, 0xbc3e8943, 0xbbaa96cf, 0xba9fc1ae, 0xbb892f7a, 0xbbae0aa8, 0xba7e26a5, 0x3a891a9c, 
    0x3ba22dc5, 0x3b219f4b, 0x3b8af3ac, 0xbc030aff, 0xbc486504, 0xbc0ea8eb, 0xbae0ed31, 0xbbc2e71f, 
    0xbbfda388, 0xbc33ba98, 0xbab576e0, 0xb8d605ea, 0xbb92ab61, 0xbc1b1364, 0xbc0a309c, 0xbbc868a6, 
    0xbb81e703, 0xbbb5a701, 0xbba00d01, 0xbb2e78a9, 0xba9d27a1, 0x3a4db6d7, 0x3a3ce5ff, 0xbb69b4a0, 
    0xbbdc64ea, 0xbaeabd1a, 0xbb08d868, 0xbba5a074, 0x39f04a48, 0x3ade642e, 0x38521728, 0xbbdf7a94, 
    0xbbc53b55, 0xbbadd505, 0xba4d9bcf, 0xbb990d66, 0xba2058e9, 0xbb7a0015, 0xbb6f79a7, 0xb978ee78, 
    0x3b49af98, 0xbbe55deb, 0xbb436c43, 0xbb67b5c0, 0xbc5945fa, 0xbc32c67e, 0xbb5fcea8, 0xbb606950, 
    0xbc0d740e, 0xbc480a80, 0xbb229ade, 0xb8975278, 0xbb9bac06, 0xbb4d7015, 0xbbeb0874, 0xbb48ef48, 
    0xbb9ccd75, 0xbb12f83a, 0xbbfc8ba8, 0xbbb66c57, 0xba8a40aa, 0x3b4dd02a, 0xba607672, 0xbba3cba1, 
    0xbb033add, 0xbafb1030, 0xbbb7a6d6, 0xbbe147eb, 0xbb42dfc1, 0xbb89a233, 0x3acccc81, 0xbc091ce5, 
    0xbc2e709b, 0xbbb3e6b3, 0xba8e14f6, 0x3846e60a, 0xbb211c65, 0xbbdcb9c2, 0xbb88c947, 0xbbbc48e5, 
    0x3b6fd06a, 0xbba2a5da, 0xba09873f, 0xbc275704, 0xbc23122a, 0xbc1c7574, 0xbb91bfdc, 0xbbb7ad7a, 
    0xbbfcb2e2, 0xbc1908b4, 0xbb730e7d, 0xbb57e7e4, 0xbab71991, 0xbc197007, 0xbb86d752, 0xbbaf56d6, 
    0xbbcc58c5, 0xbb93d1a6, 0xbbe39781, 0xbb5ab639, 0xbbe0b74f, 0x3b6a12dd, 0xbb01f751, 0xbb9a925d, 
    0xbbb3a486, 0xbc00a6ec, 0xbbcb252f, 0xbc2e677f, 0xbb53c7df, 0xbb1687fc, 0xbb2bdb1f, 0xbb19d33e, 
    0xbbd3d3ee, 0xbbb132c0, 0xbb716f2e, 0xbb73b161, 0xbb0bd40a, 0xbb7bcd24, 0xbb9cefac, 0xba29e1e3, 
    0xbda8fd24, 0x3c286f27, 0xbc17c206, 0xbda0a112, 0x3c10d71a, 0xbd0d69a3, 0xbb73597c, 0xbd8a07e6, 
    0x3d9e930d, 0x3d0ae1ee, 0x3d29f8f8, 0xbcd446f6, 0x3d62b562, 0x3dbcb7db, 0xbc0502d4, 0x3bad5c44, 
    0x3d87320c, 0x3cc43379, 0xbdb703d6, 0x3c21e427, 0x3d89f614, 0x3bcff97f, 0x3d479419, 0x3da1ce3f, 
    0x3d5ccf9d, 0x3c02fb49, 0xbc36d65a, 0x3ca5d56a, 0x3d25fdf5, 0xba455112, 0x3ce4125c, 0x3b700efc, 
    0xbc29301b, 0x3c89e7be, 0x3c1ea443, 0xbd8f2475, 0xbdae0e21, 0xbda68af2, 0xbde7edbb, 0xbcb99f62, 
    0xbd9b2741, 0xbc64d592, 0x3c99b4d7, 0xbd4277cf, 0xbb06b569, 0xbd147703, 0x3c77cacd, 0xbd5937bb, 
    0x3dc766ab, 0x3d288ffe, 0x3cb536bc, 0xbd2e57bb, 0x3d22c00a, 0x3e0437f4, 0x3c95b316, 0x3ca3541b, 
    0x3d41a551, 0x3cb4316f, 0xbd8a36ed, 0x3c2a3c57, 0x3d2ff099, 0x3bff1fe2, 0x3cac7bed, 0x3db6e42e, 
    0x3d85eb3b, 0x3d020848, 0x3c2d3d57, 0x3d4da0f6, 0x3cc11952, 0x3c9dc8be, 0x3bc0e7bb, 0x3c36a8ed, 
    0xbbc73886, 0x3d2c6093, 0x3cd367aa, 0xbd935dcb, 0xbd984293, 0xbda73204, 0xbda3f1e3, 0xbbd39035, 
    0xbd939d00, 0xbb4fce02, 0x3c7225f7, 0xbd734241, 0x3bc53b47, 0x3c1b5b4b, 0x3cb3a9f8, 0xbd323e05, 
    0x3dccea6d, 0x3d477dd8, 0x3cdc3723, 0xbd162d79, 0x3d8df327, 0x3de12a8c, 0x3c7654d0, 0x3d2cf1a2, 
    0x3dadb394, 0x3d55a360, 0xbd362fce, 0x3c76c305, 0x3d676617, 0x3cefa1e3, 0x3d756086, 0x3d94a45c, 
    0x3da8c8f3, 0x3c4ec76c, 0x3c95329a, 0x3d3e8db0, 0x3d5c4846, 0x3cc0a80b, 0x3d204904, 0x3c7f9cec, 
    0x3bbe9882, 0x3d1a4973, 0x3cf975c9, 0xbd1ae806, 0xbd781135, 0xbd9b6f30, 0xbdc07cc1, 0xbcb2ebd4, 
    0xbdcd8fde, 0xbc2aeda0, 0x3b9f744b, 0xbd73346f, 0x3bf86d58, 0xbb9878e7, 0x3bbd1a06, 0xbd629640, 
    0x3df30b9a, 0x3d497e8a, 0x3cfc90d1, 0xbcc241c6, 0x3d34a3bd, 0x3df5dbc0, 0x3c996388, 0x3bdc62d8, 
    0x3d3860b9, 0x3c45710d, 0xbd319c8d, 0x3c197205, 0x3d58fd6a, 0x3cffcdb3, 0x3d530857, 0x3d820e70, 
    0x3d89ad03, 0x3cdb35d6, 0xbc868c07, 0x3d189495, 0x3c785a3d, 0x3c66eafc, 0x3cd0e787, 0xbc38e96e, 
    0xbc31dc77, 0x3bfeab9c, 0x3b292074, 0xbd4e992a, 0xbd51af4e, 0xbdbdc99d, 0xbdd301e3, 0xbd12fce4, 
    0xbdda26b3, 0xbcc064d3, 0xbc426a0c, 0xbd7bfd7d, 0xbc2b0305, 0xbcf58024, 0x3c9b8f04, 0xbd565608, 
    0x3da7f7a4, 0x3d40a568, 0x3caba82b, 0xbd164295, 0x3d829419, 0x3dcace54, 0x3cf55295, 0x3d19e3e9, 
    0x3d8c5481, 0x3d16f0d9, 0xbda74858, 0x3ca60ede, 0x3d3326a3, 0xba8200eb, 0x3d3b4078, 0x3d6595ab, 
    0x3d283e8b, 0x3cad9f6c, 0x3a0ab430, 0x3c353f39, 0x3cffeedf, 0x3c742710, 0xbb28084b, 0xbbe85bdf, 
    0x3a42ba05, 0x3d29b6c4, 0x3cc005d4, 0xbd3338c8, 0xbd8b8c36, 0xbd6f8fd7, 0xbdd3d3b3, 0xbd22c42a, 
    0x3dbe0a48, 0x3d95d2d2, 0x3dd9a053, 0x3d600c49, 0x3d361e68, 0x3d2fec10, 0x3cba6648, 0x3d742b94, 
    0xbba6756b, 0x3bbc6f9e, 0x3c411cb2, 0x3c9ba774, 0x3c48d8f8, 0xbb96b5f2, 0xbc7eaaef, 0xbc0557ff, 
    0xbc1f7a5a, 0xbce847e9, 0xbce5bddb, 0xbc35f8f5, 0xbab0f9ce, 0x3c4a1a58, 0x3c6defaa, 0x3c804cbc, 
    0x3bb99ef1, 0x3c1217ef, 0x3d21cf76, 0x3d0ae9a8, 0x3d3c41bf, 0x3d36ef80, 0xb9a0b76b, 0x3bb7668c, 
    0xbcd1e161, 0xbd0c1b1a, 0xbcd98dbf, 0x3bc71f30, 0xbcd19883, 0xbc9950b4, 0xbb9e06aa, 0xbc95e504, 
    0x3dab3a64, 0x3d82410b, 0x3db426bf, 0x3d79d4cd, 0x3d069910, 0x3cf0dc3f, 0x3ced0ade, 0x3d1ddde6, 
    0xbac330ef, 0xbc2495f5, 0x3ba6c5bc, 0x3b86d613, 0x3b8be122, 0x3b44c2ce, 0xbcc83d12, 0xbce79d0a, 
    0xbcbcf494, 0xbd067e70, 0xbd31081d, 0xbca83368, 0xbbf2ddfb, 0xbc2546a0, 0x3bfef775, 0x3c0a61bc, 
    0xbc7e098d, 0x3c408832, 0x3ce1ac22, 0x3d133d98, 0x3d0fc578, 0x3d118a76, 0xbc2f4057, 0x3c01c901, 
    0xbc9dd827, 0xbd5eba38, 0xbd0bf8d2, 0x3c085f00, 0xbc20ffdb, 0xbca00458, 0xbc067896, 0xbc76b15a, 
    0x3db81152, 0x3d394e96, 0x3dc51759, 0x3d5b9724, 0x3d0f3b41, 0x3d15c4e6, 0x3cacf1f0, 0x3d2b3f47, 
    0xbc2cc62e, 0xbbd6f806, 0xbb0e7548, 0x3c2f1e23, 0xbbd49c66, 0xbc24fc42, 0xbc0803c1, 0xbcb0c0c1, 
    0xbca52cef, 0xbccfc2c0, 0xbd00d72b, 0xbcfbc81f, 0xbc06912c, 0xbc875fda, 0xbb3cd83f, 0xbc7ac668, 
    0xbca94166, 0xbbaf7fed, 0x3caf1ef9, 0x3cbab771, 0x3cee2828, 0x3ceee4e9, 0xbc40d104, 0xbbce895d, 
    0xbc855fcf, 0xbd1ef479, 0xbd09ff70, 0x3b96e939, 0xbc7334a3, 0xbd19374a, 0xbbdec9df, 0xbd280c8c, 
    0x3d84add7, 0x3d0b9f12, 0x3d768b38, 0x3d3bd0a1, 0x3d01a289, 0x3d06bbdd, 0x3c069972, 0x3cfae8d0, 
    0xbcceb46c, 0xbd27a371, 0xbd106aa5, 0xbbc2503b, 0xbc5ec51d, 0xbcd06ef1, 0xbccee45e, 0xbca2ab29, 
    0xbd0fe5be, 0xbd01b3f3, 0xbcbf1834, 0xbd1b8b4c, 0xbcd54a3c, 0xbc5350e6, 0xbc220ccc, 0xbc1d4766, 
    0xbcaea069, 0x3a1c7011, 0x3c9e3c9d, 0x3c3914be, 0x3c580188, 0x3c9be352, 0xbcacda6f, 0x3b361c65, 
    0xbcd4c481, 0xbd644f9a, 0xbd0a4180, 0xba271adb, 0xbca863de, 0xbcbd05f1, 0xbc94f6de, 0xbcdccd5f, 
    0x3d6eba54, 0x3ce183b4, 0x3d9ef378, 0x3d6f2fcf, 0x3c3d9b29, 0x3c5877c0, 0x3a4b7cc8, 0x3d2799d0, 
    0xbce91564, 0xbce714af, 0xbd0bcc6d, 0xbbac9017, 0xbc8276de, 0xbc917cab, 0xbc27691d, 0xbd009d6f, 
    0xbc4f7490, 0xbd1c8cc9, 0xbce94f80, 0xbcd3ddcc, 0xbbf1fcdf, 0xbc079c0c, 0xbcfad78b, 0xbcc24ecf, 
    0xbcce6465, 0xbbe0554e, 0x3caee3c3, 0x3c3d3f78, 0x3c30cdb5, 0x3c0acf93, 0xbbfe87ac, 0x3a574a38, 
    0xbc823727, 0xbd4c904f, 0xbd25eed3, 0xbbecb6bd, 0xbc7d6dbd, 0xbd10e177, 0xbc12063a, 0xbd049501, 
    0x3d689631, 0xbd67be35, 0xbdf8f640, 0x3c406589, 0x3cc8a5d3, 0x3c07eb5a, 0x3d910243, 0x3dec0de3, 
    0x3e0806c4, 0x3dae5f80, 0x3d62de94, 0x3d421c5b, 0x3c4a1d8b, 0x3d5a7c24, 0x3d69f0b7, 0x3d535d30, 
    0x3c200fe2, 0x3b94ef2e, 0xbaf3abbf, 0x3bf6745c, 0x3c31b850, 0xbcf29121, 0xbc96298a, 0xbd38b2f5, 
    0xbd2eb2dd, 0xbd156302, 0xbcff9fc3, 0x3c110186, 0xbd138b18, 0xbd315ead, 0x39e37235, 0xbbef83c8, 
    0x3c1ca12b, 0x3bef5d69, 0x3c552198, 0xbc9c45ae, 0x3cbffdc6, 0x3b860b17, 0xbbe32b4c, 0xbd8ca050, 
    0x3d7a39c8, 0xbda02e36, 0xbdf6dc96, 0xbd2618a5, 0x3cae9c13, 0x3bcab319, 0x3d913ddc, 0x3de99a35, 
    0x3dc07f47, 0x3dc1579e, 0x3d7de601, 0x3d111af0, 0x3c12a7a1, 0x3d2cce69, 0x3cd6cb2d, 0x3d490b32, 
    0x3bd8dc54, 0x3ce53145, 0x3ce57d44, 0x3c718413, 0x3c266321, 0xbd4a03dd, 0xbc0e1b92, 0xbd093763, 
    0xbd3e504d, 0xbd8fb6b7, 0xbcabd9cf, 0x3c231f9c, 0xbd8c95f8, 0xbd15cdde, 0x3cd70911, 0x3c712ecd, 
    0x3c05cdcd, 0x3b9393b7, 0x3c7e2820, 0xbc35bfe1, 0xbb98d8f3, 0x3cb15e69, 0xbbb89cb8, 0xbd8f77e8, 
    0x3d2540ae, 0xbdd95ed8, 0xbdf19389, 0xbbf6d615, 0x3b89657f, 0xbb8edd92, 0x3da71b43, 0x3dcf0549, 
    0x3e0ae913, 0x3d748382, 0x3d1e5da3, 0x3d220921, 0x3c1b41b1, 0x3d7625e6, 0x3d48e2a4, 0x3d0020b4, 
    0xbac8d4a5, 0x3cd2e8cc, 0x3cee41e8, 0xbb151e5e, 0xbb4326ef, 0xbcb0bc92, 0xbbe86f6a, 0xbd2b25ed, 
    0xbd3691f8, 0xbdaabe19, 0xbd3b1405, 0x3c3764e6, 0xbdb7416e, 0xbd80d90a, 0xbc851980, 0x3bd199da, 
    0xbacf86cb, 0xbbc82ebd, 0x3c625412, 0x3c03c61b, 0xbc12a35f, 0x3c0c90c5, 0xbce2fc80, 0xbddaa764, 
    0x3d200ebc, 0xbdca50c9, 0xbe2043f7, 0xbd215fbf, 0x3d0a3e33, 0x3ccd93c0, 0x3d9b0944, 0x3dd827e3, 
    0x3dedcc32, 0x3d8cf31f, 0x3d1a27c0, 0x3cfb46f4, 0x3cdc7010, 0x3d61f599, 0x3d0e5f2e, 0x3d13eba0, 
    0xbd3522c9, 0x3c283040, 0x3a7a5d51, 0xbb2287cf, 0xbca85483, 0xbd01012b, 0xbd381217, 0xbd9d8301, 
    0xbdb803b6, 0xbda7753a, 0xbced0fcd, 0xbce993bd, 0xbda1cff4, 0xbd0f2f62, 0xbc3a96e6, 0xbc1008f8, 
    0x3af09e02, 0xbb25f083, 0xba456b06, 0xbb49c174, 0xbb2fa390, 0x3c4d8c5f, 0xbd07b19d, 0xbde86e84, 
    0xbc0d47de, 0xbe023781, 0xbe17bc10, 0xbd04e430, 0xba0e05c8, 0x3cb628be, 0x3dae1ca1, 0x3dc3c951, 
    0x3df6c325, 0x3db8555c, 0x3c8cc8d1, 0x3ce03f16, 0x3cd0c4fc, 0x3d22b504, 0x3d10e272, 0x3c375af1, 
    0xbc2985d1, 0xba42be24, 0xbc84e549, 0x3cd587c3, 0xbc859f34, 0xbd0013bb, 0xbcdb4ce4, 0xbd95461f, 
    0xbd78fdfc, 0xbda1971f, 0xbd51d14e, 0xbc388445, 0xbdcc7e8a, 0xbd3384a3, 0xbbb5ba69, 0xbc04a307, 
    0xbb6fcae9, 0x3c8dbba6, 0x3c53f4be, 0xbc0d7114, 0x3be6e5ba, 0xbc841557, 0xbce660d8, 0xbddbb5d6, 
    0x3a2ad633, 0x3c2228a4, 0x3c1e6049, 0x3c84c777, 0x3beac13c, 0xbb1006ad, 0x3c0c0506, 0x3c0335c4, 
    0x3c2c1047, 0x3b51b891, 0x3bd66535, 0x3c29f750, 0xbab237a4, 0x3abd325f, 0xbb759118, 0x39d6cb4b, 
    0x3b4e7f87, 0xb9383d30, 0xbba2ac3a, 0xbc492768, 0x3a5cc23c, 0x3ab3bf25, 0xbb88b2ce, 0xba62764e, 
    0xbada26d7, 0x396dd60c, 0x3b1edd9f, 0x3b7ae259, 0x3c188180, 0x3bf1e96c, 0xba6ef27b, 0xbbb47659, 
    0xbc22717c, 0xbc0ea6e6, 0xbb19ee05, 0x3b199327, 0xbbf02dfc, 0xbb175e3d, 0xbad130f0, 0x3b109de2, 
    0x3c02e0bb, 0x3c640053, 0x3c115b1f, 0x3c94f96a, 0x3c1a6ff8, 0x3c17fe1d, 0x3bb79fc8, 0x3c80ca5b, 
    0x3c2f74f9, 0x3c31f425, 0x3c14f892, 0x3c4830be, 0x3bb72825, 0xbb95d4f9, 0xbb8912d3, 0xbaa0b71f, 
    0x3be266c3, 0x39980f50, 0xbbf3ab90, 0xbbfb4b70, 0x3b6f0db1, 0xba366b3d, 0xbb9409ef, 0xba0f5bb6, 
    0x3b1277c8, 0x3bd44ebc, 0x3b430a3e, 0xb9bd6dbe, 0x3c180621, 0x3bfa3e78, 0xbb5db3a1, 0xbbffa810, 
    0xbb4f5ed4, 0xbb9c8fab, 0xbb650eae, 0x3bac6abc, 0x3b11d372, 0xbaf0dd06, 0xbad9235b, 0x397f48bb, 
    0x3bc15f5a, 0x3c798627, 0x3c841094, 0x3c7d09e1, 0x3c66a2e3, 0x3babe255, 0x3c89b93d, 0x3caa160e, 
    0x3c0b358b, 0x3c0dcd12, 0x3c345dc7, 0x3c28fe38, 0x3b583e1a, 0xb98d5a71, 0x3a16a1bb, 0x3b37a61f, 
    0x3b71bf1e, 0x3b0f60fb, 0x3a922af8, 0xbb5890f4, 0x3bc89370, 0x3b98b038, 0x3bae7c01, 0x3bd50235, 
    0xb9f56f77, 0x3b97f49c, 0x3b65c47b, 0x3b1364ad, 0x3bdf0047, 0x3bc3ed25, 0x3b8de8a4, 0xbaf6880b, 
    0xbaec1811, 0xbba6b9bb, 0x3b02c843, 0x3b19f373, 0xbad3590c, 0x39e1387f, 0x3beee7c8, 0x3bdd4b58, 
    0x3c208030, 0x3ca1c605, 0x3ca21c3d, 0x3cbac2c2, 0x3c3688c5, 0x3c118784, 0x3c852289, 0x3ca35e23, 
    0x3c1dedf0, 0x3c826460, 0x3c8155b7, 0x3c8a698c, 0x3bc30ab8, 0x3ad1bc10, 0x3bb969f7, 0x3b23fd07, 
    0x3c0491e8, 0x3b94982a, 0xbb477d88, 0xbb89f19f, 0x3ba17956, 0x3b8ce33b, 0x3bcd6719, 0x3bdb16d8, 
    0x3c045749, 0x3bbf0c1c, 0x3c1ab03f, 0x3baa7d8c, 0x3c4ba74b, 0x3c3321ec, 0x3be9a2e0, 0xbb658250, 
    0xba4b090e, 0xbc16be9b, 0xba6b82aa, 0x3b20e5d8, 0xbae25730, 0xba0b5eeb, 0x3bdf461f, 0x3b13a37e, 
    0x3be7e324, 0x3c6ca003, 0x3c8af7d7, 0x3ccf9f11, 0x3c1930a6, 0x3b4b2c84, 0x3c33496d, 0x3c7e2188, 
    0x3c540ccd, 0x3c35cc32, 0x3c8e3702, 0x3c8c1265, 0x3b93af89, 0x3b5a4d68, 0x3ba0cb8f, 0x3b314c2d, 
    0x3b849c06, 0xb980479d, 0x3abd19aa, 0xba30f3e3, 0x3c268bca, 0x3bb7c582, 0x3be19742, 0x3bed2177, 
    0x3bb7113a, 0x3b9c9c34, 0x3c3403dc, 0x3bdccea9, 0x3c0ce811, 0x3bd13f65, 0xb97bc98a, 0xbb2f9f2d, 
    0xba43cd92, 0xbb2b5862, 0xba86a630, 0x3bb75d3f, 0xba06618c, 0xbb0729be, 0x3b8fe2f4, 0x3be3842e, 
    0xbdbfdd4a, 0x3dac03c0, 0x3dedc000, 0x3d0a753c, 0xbcc89f0c, 0xbcbed064, 0x3b7ec9be, 0xbd4b1831, 
    0xbe0c227c, 0xbdb3b32f, 0xbdbc6e7e, 0x3c8d4571, 0x3d693451, 0xbd9a9abc, 0xbcef01d2, 0xbdc4f192, 
    0x3cd164d6, 0x3ceadc04, 0x3c2dd299, 0xbd6ab34c, 0x3b4f6ffb, 0x3dbe2d50, 0xbc8d8309, 0xbc3b1ade, 
    0xbcdea08f, 0xbca2c986, 0xbcebe43f, 0xbe0c49b6, 0xbd767c15, 0xbd3d244c, 0xbd3c3a46, 0xbcf1951b, 
    0xbb647b4b, 0xbc8b2655, 0xbd7ac093, 0x3c3150d7, 0x3d7f7c37, 0xbd44020a, 0xbb62cfbd, 0x3e1f0c8a, 
    0xbd91c25c, 0x3d97450f, 0x3e11ea8e, 0x3caea0af, 0xbd74c5a4, 0xbd03a736, 0x3c53503d, 0xbdb02cb8, 
    0xbe1709c0, 0xbdb793db, 0xbd8ae5e2, 0x3c0e3387, 0x3da744d0, 0xbda1cc97, 0xbd6cdf24, 0xbdc3d079, 
    0x3cb7fa35, 0x3da10e4e, 0x3cb6ab36, 0xbd3960a3, 0xba318783, 0x3da7c310, 0xbc860436, 0xbb8dec56, 
    0xbcd52558, 0xbc8ad731, 0xbcbed8af, 0xbe1adaa1, 0xbd71ee10, 0xbd88294f, 0xbd0934d1, 0xbd35da8e, 
    0xbb1a3acf, 0xbcaed882, 0xbd2c47a2, 0x3bd41e1f, 0x3c3fa30f, 0xbd5c1e29, 0xbd5a734d, 0x3e0f633d, 
    0xbdaf9b41, 0x3db1ee15, 0x3e13d764, 0x3d84f079, 0xbd541901, 0xbcaae05b, 0xbca5e208, 0xbdce6b2c, 
    0xbe3c6df6, 0xbd8e6acc, 0xbda05dcd, 0xb9ca3b1a, 0x3da1c319, 0xbd739042, 0xbd88d72b, 0xbdf20d33, 
    0x3cd7c741, 0x3d785255, 0x3cb614fb, 0xbda34c25, 0x3b604cf2, 0x3da8a03f, 0xbcefbdc6, 0x3b51e5db, 
    0xbd0555f7, 0xbb902e53, 0x3b7160f8, 0xbe3c1380, 0xbd3da181, 0xbd481746, 0xbd3f4853, 0xbd122591, 
    0x3cc6f646, 0xbcc025dc, 0xbd98ffec, 0x3a561a2c, 0x3cf786e6, 0xbcc3407c, 0xbd66ed7c, 0x3e0226e4, 
    0xbd1d82c7, 0x3d6fc94d, 0x3dd132ef, 0x3d60979d, 0xbcda829f, 0xbc235433, 0xbc5e3508, 0xbd599b63, 
    0xbe2da068, 0xbd83ae39, 0xbdb61efe, 0x3c60beba, 0x3d77da6d, 0xbdd179ae, 0xbd082f96, 0xbd14d0d6, 
    0x3d93900f, 0x3d844d87, 0x3cfec29b, 0xbcd15dcc, 0x3d2588b3, 0x3d7c11e4, 0x3cae3686, 0x3cb69567, 
    0xbce01024, 0x3c5181b3, 0xbba1b13e, 0xbe1e05c9, 0xbd697776, 0xbd3e8514, 0xbce70d75, 0xbb960210, 
    0x3d639f2b, 0xbc33b59c, 0xbd1824d6, 0x3d3e2512, 0x3d734ea4, 0xbc46dcf1, 0xbc9bd892, 0x3e135460, 
    0xbd4e0985, 0x3db1d821, 0x3dfd28e0, 0x3d643e4a, 0xbd68d5c8, 0xbd70ba28, 0x3b08feb5, 0xbdb737be, 
    0xbe158713, 0xbd8285f4, 0xbd41bab3, 0x3d3d0e82, 0x3da87f71, 0xbd201d14, 0xbd35759f, 0xbd970544, 
    0x3d3fd590, 0x3d99ae16, 0x3d6ebe9b, 0xbcd93ec1, 0x3c8bce3c, 0x3d955ce3, 0x3ca24cfe, 0x3d24998d, 
    0x3c5f3ea2, 0x3d6796c9, 0x3cfbcbb0, 0xbe0a8082, 0xbd0157b3, 0xbc526fcb, 0x3b9e9e55, 0xbbdf77a2, 
    0x3d457871, 0x3cac0698, 0xbcf67c3a, 0x3ce7e0d8, 0x3dc45482, 0xbb1941a3, 0xbc9712e5, 0x3e042ae1
};

static const uint32_t _K23[] = {
    0xbf36edd0, 0xbeb77a83, 0x3ee148cb, 0xbf12e82e, 0xbee36076, 0xbe6104ab, 0x3f0b69c2, 0xbe707384, 
    0x3f895da0, 0x3f976129, 0xbe3ab658, 0x3ecf1f92, 0xbe31465e, 0x3fa3b0d6, 0xbec34708, 0x3f98b1b0
};

static const uint32_t _K27[] = {
    0x3d4e006e, 0xbd94df8d, 0xbdc2d5cb, 0xbe507ad7, 0xbe2f1915, 0x3e32ada4, 0xbe0f0368, 0xbe0bc94e, 
    0xbdfee8d2, 0x3e096d04, 0xbcad213b, 0xbe785b79, 0xbd14d352, 0xbdf7012d, 0xbdcfc5fb, 0x3d0d5b4b, 
    0xbd8cc541, 0x3cf1c483, 0xbe1b0159, 0xbe21eb7e, 0xbd44ed89, 0x3e1e6bca, 0xbd9ed4a9, 0xbd20a681, 
    0xbe1a58c4, 0x3e58d82b, 0x3d3e192a, 0xbe20b3e5, 0xbe358e6d, 0xbc901c58, 0xbda07d1a, 0x3e38f7f7, 
    0xbcc570c1, 0xbd274d03, 0xbe248651, 0xbdba910e, 0xbcdc42d1, 0x3e417b8d, 0xbcd85206, 0xbd195ae5, 
    0xbdd72d99, 0x3dea438c, 0x3d9ddd3c, 0xbe5b8f15, 0xbe2460fd, 0xbdbd55df, 0xbdf4a77b, 0x3e1ba274, 
    0x3d68275b, 0x3b9d83d6, 0xbe307fc6, 0xbe5118c5, 0xbdfabd1e, 0x3d6b49bd, 0x3bd2247b, 0xbccc94c5, 
    0xbc34fd5b, 0x3dadc06b, 0xbd07fe36, 0xbe46329e, 0xbe2ca3d4, 0xbdd5d001, 0xbdd67f61, 0x3e5e5767, 
    0x3ae00e05, 0xbd58dd41, 0xbe2b535a, 0xbc213b55, 0xbd982ab5, 0x3de018f0, 0xbdc85f23, 0xbdd427ef, 
    0x3cc67405, 0x3e29f1c1, 0xbb89bcdc, 0xbe5e91f4, 0xbdcd3462, 0xbc31b8bf, 0xbd25450e, 0x3e840f09, 
    0x3cef8793, 0xbdc6c9f6, 0x3ce05e2d, 0x3c9df63b, 0xbdc09ff3, 0xbd68fea0, 0x3c3cded9, 0xbd213242, 
    0x3ec185f0, 0x3d81a866, 0x3d162e1d, 0x3b3ddeee, 0x3d427f07, 0xbdf53409, 0xbdd83d3b, 0x3ccb7659, 
    0x3bd759ee, 0xbd4ea5e7, 0x3b2ec07b, 0xbdc1bb73, 0xbd3d4dbd, 0xbd771bef, 0x3e723268, 0xbcedf0da, 
    0x3f027a9d, 0x3e85bf64, 0x3c1345aa, 0xbe2a1bbc, 0x3db8dae0, 0xbd301d71, 0xbdf2d725, 0x3c15b258, 
    0x3d9dc000, 0xbe20945c, 0xbae07ebe, 0xbbcb82d3, 0xbdd22efa, 0xbd974e39, 0x3e8ec07d, 0xbd70346d, 
    0x3f058a8b, 0x3e689127, 0xbc0a888a, 0xbe25f25d, 0x3c9e588c, 0xbe1d83b4, 0xbda1b690, 0x3dabb0d7, 
    0x3d7f0b39, 0xbe12014f, 0xbd9aa38f, 0xbb021751, 0xbdbc8f7c, 0xbd86390b, 0x3e5c5c3b, 0xbd610d6e, 
    0x3ed3e1a9, 0x3e840c6a, 0x3d8500d6, 0xbdf2d4f6, 0xbd876e4c, 0xbdf1f3d2, 0xbd5a8b4a, 0xbc3a9eeb, 
    0x3d0fb7fe, 0xbe555e54, 0xbd89ba61, 0x3c85dee2, 0xbe027a80, 0x3c2ba9ee, 0x3e4ddebc, 0xbd212b6e, 
    0x3e9cd31b, 0x3e0a9e3f, 0xbc2f0152, 0xbd25a98a, 0x3d077296, 0xbe74ae21, 0x3cb0ffbf, 0xbe2c3e14, 
    0xbdfcfbba, 0x3cbffa31, 0xbe108bc5, 0xbe78dd42, 0x3cabcb64, 0xbd640aa6, 0x3e27a9a7, 0xbde722e7, 
    0xbdbe0d68, 0x3e13124c, 0x3d96c185, 0xbe24c631, 0xbdc5c58f, 0xbbf257b2, 0xbd34e0d3, 0x3d9a71a2, 
    0xbd8612a1, 0xbd2d42c6, 0xbd83f961, 0xbe6f94cb, 0xbd1dd955, 0xbdce112a, 0x3dbe26e9, 0xbd8a8b23, 
    0xbe052a88, 0x3d473dc1, 0x3a66fc38, 0xbe1761f3, 0xbdb5df3f, 0x3cf362a0, 0xbdb01a96, 0x3dc7ab10, 
    0xbd846a6d, 0xbcd79a88, 0xbd54efef, 0xbe64621c, 0xbcbcf48d, 0xbd89a04a, 0xbc8cfaf6, 0xbd905995, 
    0xbe495df4, 0xbdefed58, 0x3c079bd4, 0xbdf081c6, 0xbe1e31c3, 0xbde85772, 0x3aed1540, 0x3dcec617, 
    0xbd42d4ad, 0xbd01996d, 0x3d06650f, 0xbe2bc589, 0xbda8f667, 0x3d050f7f, 0x3bf74e2b, 0xbdd4378d, 
    0xbe7f9465, 0xbdb89a79, 0x3cb3ddd3, 0xbd1fa64f, 0xbdacdb3c, 0xbcc06af7, 0xbd51bf26, 0x3dd22e04, 
    0xbe01602a, 0xbd8e1a92, 0x3cd30065, 0xbe741510, 0xbdaafe4f, 0x3c9cc13d, 0xbcd14ed8, 0xbe28b31f, 
    0xbe812844, 0xbd73e8a3, 0x3d43f87b, 0xbdbbcdac, 0xbdb70525, 0xbd816ef9, 0xbca1f880, 0x3db9cb81, 
    0xbd3ed597, 0xbd1dc177, 0xbb087032, 0xbe39a68e, 0xbe1b58ab, 0xbce67305, 0x3a128b62, 0xbdb26caa, 
    0xbd7b3092, 0x3e681f74, 0xbcadb726, 0x3c8c9a67, 0xbd880251, 0xbbfc225c, 0xbe1806cb, 0xbc51add9, 
    0xbc04647e, 0xbd13f868, 0x3c1b9fa9, 0xbe193553, 0xbe1408f9, 0x3d34eae0, 0xbd587010, 0xbdd1165c, 
    0xbd8735bc, 0x3e716f5f, 0x3c2e6d54, 0xbc27093e, 0xbe01ca1f, 0xbd988af6, 0xbe15db39, 0x3cb3e009, 
    0x3c41cb42, 0xbd2eeb49, 0xbd8a5f67, 0xbe02ffef, 0xbe02db86, 0x3d40fc9a, 0xbcc291be, 0xbe12b1d3, 
    0xbdb41c60, 0x3ea2544e, 0xbc60ab17, 0x3bccd7ff, 0xbdafd73c, 0xbd97c573, 0xbdae0067, 0x3c0e2d6c, 
    0xbd862624, 0xbd5ffc2d, 0xbd4f09b0, 0xbe05b21b, 0xbdab2702, 0x3ab54723, 0x3d1ebc9b, 0xbd372e75, 
    0xbd895e16, 0x3e7e3dad, 0xbd0d2b39, 0x3cebf6fd, 0xbdcb23b8, 0xbc9b36fb, 0xbdec000e, 0xbc116648, 
    0xbd389b7c, 0xbe028782, 0xbd2fc514, 0xbdc3e641, 0xbe03fbca, 0xbd2525ec, 0xbd83df58, 0xbdfe9769, 
    0xbdb29668, 0x3d926203, 0x3c9be3a0, 0x3b311088, 0xbdc6b8a7, 0xbd8a9b5b, 0xbcce6f13, 0x3c98dea3, 
    0xbda2ba10, 0xbcbdf565, 0xbdabefe5, 0xbd14123c, 0xbd9072bb, 0xbddfcbd1, 0x3d407c14, 0xbd26c223, 
    0xbc6c4bba, 0xbda1761b, 0xbc451d01, 0xbd14b6a6, 0xbd1e9dc2, 0x3d9a5c5d, 0x3c107d6e, 0x3d46b25e, 
    0xbd13e434, 0xbc5b2832, 0xbd3115d5, 0xbd04c633, 0xbccb67d9, 0xbdf0b711, 0x3d539579, 0xbc9df267, 
    0x3d45967e, 0xbe121f41, 0x3ca639cb, 0xbd7a3e8c, 0x3d0b423f, 0x3dbcdcbe, 0xbd442ac5, 0x3da8c27f, 
    0xbd35cd75, 0x3c3f8f31, 0xbd9696f1, 0xbdad6184, 0xbcae6fd1, 0xbd3a8a36, 0x3d29a223, 0xbd9b96a5, 
    0x3caf92c8, 0xbdcdfc2b, 0x3cf9cbb6, 0xbd24590e, 0xbc10ac6a, 0x3e0805e9, 0xbbb1d478, 0x3d76c3ea, 
    0xbba0e6f6, 0xbd67a5d1, 0xbd9018c6, 0xbd8c1b8a, 0xbd5d542f, 0xbdc75944, 0x3daf9bca, 0xbccd84b7, 
    0x3d9f0f4c, 0xbd170d64, 0xbba82bd0, 0xbd5b52fd, 0x3be0c41d, 0x3e06002f, 0x3c2b1e5b, 0x3d08cc69, 
    0xbd9fb9bc, 0xbd436d6b, 0xbdc5dfb3, 0xbd8927fd, 0x39ad2888, 0xbdcd4329, 0x3de36a46, 0xbcadd5ab, 
    0x3d8dd187, 0xbcb2339f, 0x3c618385, 0xbd29d38b, 0x3cceca3f, 0x3e20997c, 0x3c64868c, 0x3d98d1aa, 
    0xbddb14ad, 0xbd24b53f, 0x3ddd3b0c, 0x3e75518e, 0x3c7fde10, 0x3d849125, 0xbe561fb7, 0x3dc8c64a, 
    0xbeaf2587, 0x3ed051fa, 0xbda015d9, 0x3e475ac1, 0x3e430b94, 0xbdc0e806, 0xbd6471df, 0xbebc5270, 
    0x3dddd870, 0xbdca3a13, 0x3daa8f15, 0xbe53ac80, 0x3c2c7a93, 0xbe0301fe, 0xbe2a024f, 0xbd4c09d5, 
    0xbe3aa428, 0x3f4fc75a, 0x3c228ebd, 0x3d0d1895, 0x3e7feaf6, 0xbe03b175, 0xbde09989, 0xbec7e3fb, 
    0x3d4f8bd4, 0xbdc9d1a5, 0xbd3303ab, 0xbe587ab0, 0xbdfff9a0, 0xbe1b98ec, 0xbdc9e3aa, 0xbd2afb80, 
    0xbde02597, 0x3f5f9734, 0xbe69f341, 0xbdff91ce, 0xbd58cc87, 0x3d14663b, 0xbe04a1ee, 0xbe8c400a, 
    0xbdc7993d, 0xbd5f5ba9, 0xbe016909, 0xbd956ef2, 0xbe7c42e0, 0xbdd45327, 0x3d691f1c, 0xbe4e1e1f, 
    0x3d9feda6, 0x3f255f1c, 0x3c205566, 0xbdab2041, 0xbe4bd960, 0xbe351bb3, 0xbd0d8bf3, 0xbe46fbe1, 
    0x3d839158, 0xbe249ec5, 0xbe7e19e7, 0x3da1e446, 0xbd654f8e, 0x3c398f7b, 0x3ccbb9a1, 0xbe147bd4, 
    0x3c4c1093, 0x3f129715, 0xbe19518d, 0xbd869ec4, 0xbe3f476d, 0xbe0c6465, 0x3e75e887, 0xbe00d9aa, 
    0xbc635c3c, 0x3ccaa77c, 0xbd716a72, 0x3d204557, 0x3cc99f47, 0x3c0ee762, 0x3bccfbd9, 0xbc43cae1, 
    0x3d0286d1, 0xbd1e6d09, 0x3b8835ca, 0xbd55724e, 0xbc11604f, 0x3e54b073, 0x3c5afefb, 0xbd5fcbea, 
    0xbcf33d98, 0xbc95c38b, 0xbd414c2a, 0x3d168fef, 0x3d1418db, 0xbb04f49c, 0x3d9ca3d9, 0xbb91e4fc, 
    0xbb7c1c14, 0xbc6b92f0, 0x3ca7b0ab, 0xbce1f80c, 0x3c2903f9, 0x3ea78629, 0x3d4057e5, 0xbd58ed39, 
    0xbba8b2c4, 0xbcbe0ea7, 0xbdad3433, 0x3d555ad3, 0xbc7275b8, 0xbcea365c, 0x3ca3da36, 0x3c02370e, 
    0x3d69469d, 0xbc64ec45, 0x3d202230, 0xbd80f27a, 0xbbf3957b, 0x3eaae3a3, 0x3d227c19, 0xbd71f0ed, 
    0xbba388dc, 0x3c1da183, 0xbccbf74e, 0x3c9252c1, 0x3d07433d, 0xbcebb36a, 0x3d154565, 0x3d1ef6b1, 
    0xbb8af85d, 0x3d5fd28e, 0x3c3ab3ee, 0xbd1563ad, 0xbcae1e51, 0x3ebae876, 0x3c6a054b, 0xbd04875c, 
    0xbd0f687e, 0xbce3e7c4, 0xbd2f3d63, 0x3d36533b, 0x3cacb9ee, 0xbd02ee04, 0x3dc76076, 0x3c6e93c8, 
    0x3d28eb94, 0x3d828fea, 0x3c8757af, 0xbd4730bb, 0xbc04e379, 0x3eb98870, 0x3d72002f, 0xbc4c0f23, 
    0xbc88d033, 0xbca7484f, 0xbd250277, 0xbdadf592, 0x3bf2fa28, 0xbda9c822, 0x3c26d7be, 0xbd24e5be, 
    0x3d49a12d, 0x3d7d53f7, 0x3cf7881e, 0x3cbb7c4d, 0xbd9a35e9, 0x3d0d695f, 0x3c448f4c, 0x3d22a264, 
    0xbcfb62f2, 0xbcd873c8, 0xbd662b93, 0xbd3cedd4, 0x3cc36aea, 0xbdd5f9f0, 0x3d423095, 0xbd392dec, 
    0x3cb1ad11, 0x3db247c3, 0xbb963f14, 0x3d2d3db4, 0xbd4d4294, 0x3d1a42db, 0x3bfc3c4e, 0x3cc28b54, 
    0xba880020, 0x3bc215a0, 0xbc9ae3dc, 0xbd94a397, 0x3c4a205a, 0xbdb92525, 0xbc885063, 0xbcb857be, 
    0x3a84e4ab, 0x3db6ad53, 0x3cb94987, 0x3c048a9f, 0xbd5f10f0, 0x3d754b6e, 0xbcb05b99, 0x3a57d8ce, 
    0xbd0b0bd7, 0xbd16a2bf, 0x3aa16475, 0xbd11d916, 0x3cc43d51, 0xbd9387fc, 0x3d020762, 0xbcaeece0, 
    0x3b4d6fe5, 0x3d71b339, 0x3d449f8f, 0x3d405303, 0xbda71568, 0x3d52e59e, 0x3c0c77bc, 0xbd180a9a, 
    0x3c1a0302, 0xbc80db1b, 0xbb37ac76, 0xbd9324df, 0x3c7389c1, 0xbdc1f808, 0xbc8a75c3, 0xbaf31bc3, 
    0x3c1de5a4, 0x3d299e23, 0x3c5a8831, 0x3d7cc4d8, 0xbcdcb97c, 0x3d3361d1, 0x3ac76b30, 0xbcacff6c, 
    0x3cd28088, 0xbcfef009, 0x3d20bb98, 0xbde805c6, 0xbcb0e841, 0x3d4576db, 0x3c6bbaa0, 0xbe055993, 
    0x3a5d79dd, 0x3e05f2f1, 0x3cf6d170, 0xbb965aaf, 0x3dfa218d, 0x3c85a050, 0xbdd79dc8, 0xbccdd5ce, 
    0x3d0d7451, 0xbcc04545, 0x3deb4b93, 0xbdb039bb, 0xbc9c6edb, 0x3dad0024, 0xbd22c3ed, 0xbdc78770, 
    0xbcba3b9e, 0x3dc94b33, 0xbcd96eb8, 0xbd389a18, 0x3e22d6a7, 0x3bd46280, 0xbd9d130a, 0xbd89a341, 
    0x3d779e34, 0xbd773a14, 0x3db02cd8, 0xbdeb6010, 0xbd5af6d9, 0x3d83f9b3, 0x3c2a0c1a, 0xbdb14ed8, 
    0x3cda102f, 0x3e0b5977, 0xbc11a444, 0x3c96f49d, 0x3e2816bb, 0x3c9dd938, 0xbc8854b9, 0xbd5eb56e, 
    0x3d0f0e39, 0xbd8fe36a, 0x3e1a66be, 0xbdc80aef, 0xbca6687c, 0x3dbff037, 0xbcf66b36, 0xbd9ecc54, 
    0xbd5f1eb1, 0x3d790857, 0xbbf01151, 0x3c4406e9, 0x3e01ed32, 0xbbeb3ccb, 0xbd59ad57, 0xbda95c2d, 
    0x3cf4a1b9, 0x3c0705d2, 0x3dbc7027, 0xbd8dc745, 0xbd81f40c, 0x3dec95d8, 0xbd1ed4a5, 0xbcd07715, 
    0xbda6c6b4, 0x3d642f0e, 0xbc09db8a, 0x3ce0be6f, 0x3e0a9bd9, 0xbcde6ef5, 0xbd71fad3, 0xbce3e0e4, 
    0xbca5ec69, 0xbb1e2152, 0x3c120e8c, 0xbd329f25, 0xbd30ced5, 0xbd783705, 0xbc509d93, 0xbd414624, 
    0x3d36e84c, 0x3d4d39c3, 0xbd020596, 0x3def1a92, 0xbcfa4884, 0xbb86c260, 0xbce8d699, 0xbd5c227f, 
    0x3c1be35b, 0xba8e6773, 0x3c30e0d6, 0xbc84f3f4, 0x3b13e78d, 0xbc5a0ae6, 0xbcacf0d3, 0x3bfc1942, 
    0xbc05414a, 0x3caea373, 0xbd942932, 0x3e4a3aa5, 0xbd209e12, 0xbd4812ba, 0x3ba84edc, 0xbde74905, 
    0x3b7add5f, 0x3d523d4c, 0xbc00a853, 0x3d3faebf, 0xbccb5113, 0x3b2726d4, 0xbd8bebc3, 0x3c05ae74, 
    0xbd19d68c, 0x3baae42d, 0xbcb20c68, 0x3e963af6, 0xbd2c3e15, 0xbd76e397, 0x3d36856e, 0xbe00f94a, 
    0x3c99da90, 0x3d4744bf, 0x3d0b0c62, 0x3c8dfe4e, 0xb9a56267, 0xbd1fba98, 0xbd9847c8, 0x3cbc5d00, 
    0xbdd80526, 0xbd32b880, 0xbd467043, 0x3eb20790, 0x3cfb4d3b, 0xbbecbb05, 0x3cefc075, 0xbe259919, 
    0x3cbf09f9, 0xbbf07336, 0x3c3f22ab, 0xbb401e12, 0x3cbe32aa, 0xbd097526, 0xbd661494, 0x3acafb3f, 
    0xbdc1d1d8, 0xbc98fae4, 0xbd324f22, 0x3ea4fd5d, 0x3bbf6d89, 0xbb353ffe, 0x3c24d5c5, 0xbe1702d1, 
    0xbda39c9a, 0xbda053d8, 0xbe6b158c, 0xbe4c684d, 0xbdfb5de7, 0xbe2e682f, 0xbbccadd4, 0xbe2639bf, 
    0x3e4d4d29, 0xbe9ca97a, 0x3ccb27cf, 0xbe260d59, 0xbe4fc93c, 0xbdcc9238, 0xbd8e2b0c, 0x3f0d7f17, 
    0xbd94a9a2, 0xbe2fb035, 0xbe5c0114, 0xbe9aeb17, 0xbd330db3, 0x3d790328, 0x3e79aa66, 0xbe428a8f, 
    0x3e9dd5c4, 0xbe93bf4c, 0xbe0e44d6, 0xbe3e0839, 0xbcdc860b, 0xbdf99c41, 0x3d18716e, 0x3f4d2e97, 
    0xbddc6562, 0xbe248db4, 0xbdffd007, 0xbe649a5f, 0xbd646457, 0x3e036f11, 0x3c97ae4c, 0xbe282c01, 
    0x3ec03a37, 0xbe4b44ed, 0x3c79acad, 0xbde35828, 0xbcc99e21, 0xbe626a31, 0x3d125e86, 0x3efd1b29, 
    0xbe19137f, 0xbe5ad7de, 0x3de7c684, 0xbe5ea656, 0xbe19a940, 0xbc5bf79e, 0xbdf2cfc9, 0xbdf44a12, 
    0x3e0c5dd3, 0xbea33ce8, 0xbc8ece42, 0x3da0465e, 0xbe186f1f, 0xbec695c5, 0xbd2503cd, 0x3e561207, 
    0xbe12250f, 0xbd0af1d2, 0x3da2f17c, 0xbe303ed5, 0xbe5d57e9, 0xbd2ab479, 0xbdbe5529, 0x3be6a312, 
    0x3dadfbeb, 0xbed811bc, 0xbbd5efa3, 0x3e800b8a, 0xbded6b8b, 0xbecf5c86, 0xbdb18b7d, 0x3d5aef8b, 
    0x3ca6d600, 0x3e806324, 0x3dbdbd12, 0x3d122763, 0x3e805a01, 0xbe35b8ca, 0x3d92d136, 0xbd1f9b4e, 
    0x3da694bc, 0xbe7b2384, 0xbd2cb97b, 0xbd3fa59d, 0xbc30a360, 0x3d1b8585, 0xbd65bfa8, 0xbd767978, 
    0x3d930900, 0x3e96997a, 0x3dc52109, 0x3ebad89a, 0x3e8deb66, 0xbe29d71c, 0x3d1d4dbf, 0x3e0a590b, 
    0x3d8add8e, 0xbe9e984c, 0x3c9e1b96, 0xbe2cf945, 0xbc6b5c25, 0x3e02eb17, 0x3d982503, 0xbd9e768b, 
    0x3de6db3e, 0x3e8f276f, 0x3e302346, 0x3e7debc3, 0x3e8e6ccd, 0xbd770889, 0x3d76bbda, 0x3e85f006, 
    0x3d4b4733, 0xbe8379e4, 0xbc0bed5d, 0xbdc6c5f4, 0x3e171893, 0x3c90b7b7, 0x3e27814f, 0xbd914711, 
    0x3d906096, 0x3ea51a77, 0x3df4207a, 0x3e9dec03, 0x3e742ab1, 0xbdc98789, 0x3ab42404, 0x3e956763, 
    0xbbdc3883, 0xbe92a297, 0xbdc9926b, 0xbe09f6b9, 0x3e034673, 0x3de711ca, 0x3e1171df, 0xbe06d52b, 
    0x3d9ca583, 0x3eb0f1db, 0x3e2cc561, 0x3e6e6601, 0x3e79f9a7, 0xbe29e3b9, 0x3d9a24fe, 0x3e8c5592, 
    0x3d8f8ca7, 0xbe76f7da, 0xbd67e26f, 0xbe059522, 0x3e44cc7a, 0x3df32736, 0x3e32f356, 0xbe18b732, 
    0xbc80ce23, 0xbccb61de, 0x3c02cff6, 0xbd1d856c, 0xbc327d82, 0x3d5149e2, 0xbd87e1a6, 0xbd9407f1, 
    0x3a8893ff, 0xbdf47997, 0xbda7208d, 0xbc397f24, 0x3ce8eee0, 0xbe9170b8, 0xbd24e600, 0x3c36913b, 
    0x3dabc5fc, 0xbc8b62c5, 0x3dc904c9, 0x3d1ba17f, 0xbbff2099, 0x3d7e6971, 0x3cd54f80, 0xbd0627cb, 
    0x3e277b47, 0xbcd1536c, 0xbd13c4f4, 0x3c584fb5, 0x3d4f3059, 0xbebe0e8a, 0x3d0eb991, 0x3c4d9342, 
    0x3c9e6020, 0xbd2c91bf, 0x3e2fdc00, 0x3bc93f4a, 0x3bce11d0, 0x3dc487e7, 0x3ce67746, 0x3c558eb7, 
    0xbc483f40, 0xbdbd20c0, 0x3c0e14f9, 0x3c35620a, 0x3e065816, 0xbead2caa, 0x3c5deea0, 0x3d6bee6a, 
    0x3d1e5b3b, 0xbcb34fb3, 0x3e2b54bf, 0xbc8e5141, 0x3d3b8aff, 0x3da96b14, 0xbd32f1f0, 0xbd78035d, 
    0x3dbfcbb7, 0xbdaa21df, 0xbd1d8db0, 0x3dad5244, 0x3e18cf1c, 0xbe863b1a, 0x3d872369, 0xbc80cff4, 
    0x3d86de09, 0xb9b89f39, 0x3e19b499, 0xbc603da9, 0x3d5f11d7, 0x3c19e098, 0x3c8320ac, 0xbba7d373, 
    0x3df301cd, 0xbdd0b44e, 0xbd6b85a6, 0xbc272143, 0x3dba2ca9, 0xbe7b948f, 0x3cf0af6f, 0x3dd1ca45, 
    0x3d2cf1e3, 0xbb8ef0b4, 0x3cb4a2ef, 0xbbd139c3, 0xbcfd574e, 0xbd29134a, 0x3d0ac5a2, 0xbcd6cfb8, 
    0x3d59c082, 0x3cc98939, 0xbc003f0a, 0x3d54c186, 0xbc8b2520, 0x3d223f5b, 0x3d233402, 0x3d3606cd, 
    0x3cbc7898, 0x3cd7040b, 0x3d7bf977, 0xbc75db5a, 0xbd3809f5, 0xbd5e1107, 0x3d996f34, 0xbc3ee817, 
    0x3dd1d120, 0x3ce6ec89, 0xbcc432e4, 0xbc0b651b, 0xbc187abe, 0xbc423076, 0x3d3dfa51, 0x3ddcb332, 
    0x3c847fff, 0x3d5217b1, 0x3ca74caf, 0x3c12db94, 0xbd11dbf9, 0xbd1732a8, 0x3d904b4f, 0xbba65cc5, 
    0x3e03688b, 0x3b475347, 0xbc24c732, 0x3d4f3409, 0xbc560149, 0xbc83fb58, 0x3d50099e, 0x3e06b48f, 
    0x3d219adf, 0x3bcdf43f, 0x3d5a50b8, 0x3d07410f, 0xbc1ffa50, 0x3c2bdbbc, 0x3db2adc8, 0x3c3b7517, 
    0x3dd45d35, 0xbbec878e, 0x3cfdaf79, 0x3d4090c4, 0xbd0e12ca, 0x3d2e4309, 0x3d49f13a, 0x3de25f55, 
    0x3a5657e4, 0x3bb3541c, 0x3d62f7a7, 0xbd00c083, 0xbc0d5635, 0x3c001cf9, 0x3da900a3, 0xbc0f6ceb, 
    0x3db57d0e, 0xbbddc696, 0xb9911db1, 0x3cbbb9f0, 0xbc040725, 0x3d016fb7, 0xbc2034be, 0x3da4f0c5, 
    0x3d5b3d21, 0xbdcfbae0, 0x3daa40e5, 0xbe47ccaa, 0xbdb7b160, 0xbd767c68, 0x3ad24cf7, 0xbe095e5a, 
    0x3d0a1aba, 0x3d58673f, 0x3c0ed324, 0x3cfa8eb9, 0xbccb3790, 0xbe3cd91e, 0xbdaee87f, 0xbc8972f3, 
    0x3da8e4d2, 0xbd8deee8, 0x3d1b6afe, 0xbde000f2, 0xbd8af4c4, 0x3d3b9622, 0xbcaf19f5, 0xbdb26dac, 
    0xbb8d7723, 0x3d1f61a6, 0xbd03d7cd, 0x3e333f69, 0xbd4d72bb, 0xbe696c90, 0x3c64102d, 0xbd9feefe, 
    0x3d52a542, 0xbd71568a, 0x3e0f2bba, 0xbe0bd475, 0xbd6e1b26, 0x3da19c05, 0xbca66047, 0xbdaac6cd, 
    0xbe4d6057, 0x3ddcae28, 0xbda2811f, 0x3dbf0825, 0x3d8e41c7, 0xbe323d70, 0xbd98f15b, 0xbdb0c344, 
    0x3d368567, 0xbe05588c, 0x3e2e5853, 0xbdd04bb6, 0xbdc1ef93, 0xbc74db3e, 0xbd429661, 0xbd94662f, 
    0xbe7d329c, 0x3d067fde, 0x3bc53e87, 0x3d27ff9e, 0x3d40c328, 0xbe8b03df, 0xbda1a5ba, 0xbe5ea7c2, 
    0x3dc35d8f, 0xbde0b758, 0x3d8142da, 0xbe0f8197, 0xbd9aaa7a, 0xbd2884dd, 0xbd6fa197, 0xbd8c7e5b, 
    0xbe773c69, 0xbd09cae0, 0xbd9ab2f0, 0x3d1e09b9, 0x3cfadd1e, 0xbe230318, 0xbcf047f2, 0xbdc4f095, 
    0x3dcab3bc, 0xbaf820fa, 0x3dae0a01, 0xbd586e0d, 0xbd4e11f2, 0x3d67ace4, 0x3d3cefbe, 0xbd2db316, 
    0xbb1252aa, 0xbd326491, 0x3d7ae6bf, 0x3d55eb72, 0x3dacddc3, 0x3dc112e0, 0x3d8b2db3, 0xbd2b4346, 
    0x3d1689c2, 0x3b6db299, 0x3da14905, 0xbdafae99, 0xbd2476aa, 0x3c0af5b5, 0xbc5beb7c, 0xbdc19523, 
    0x3c6f72b2, 0xbd9b8739, 0x3c8afcc2, 0x3ddeb708, 0x3db137ca, 0x3d687d60, 0x3d25d861, 0xbdc69cda, 
    0x3d9d5cc1, 0x3cc805d8, 0x3d407ae0, 0xbbe78524, 0xbcc89419, 0x3d8f7bd7, 0xb940d9e8, 0xbd84a57b, 
    0x3d8d3374, 0xbd1c715b, 0x3c3a7662, 0x3dc4f777, 0x3dac2126, 0x3da09926, 0x3d0e7992, 0xbdab08f6, 
    0x3d562197, 0x3c6d480c, 0x3d95956d, 0xbc33d784, 0xbc2bc09f, 0x3d34ca93, 0x3b53e81c, 0xbda0810a, 
    0x3d5a109e, 0xbdddabf8, 0x3c964d8a, 0x3dad1a4e, 0x3b83c87b, 0x3d9bf53f, 0x3dc39a0e, 0xbdec9763, 
    0x3d80756f, 0xbca7eea6, 0x3d93b5f0, 0xbd188d9b, 0xbd3c9805, 0x3d7bce72, 0xbc841d28, 0xbd0dc815, 
    0x3d11a6ca, 0xbdeacf16, 0x3c8e9a89, 0x3de00347, 0xbb00622d, 0x3d00813d, 0x3d759f7e, 0xbd9ab8cd
};

static const uint32_t _K30[] = {
    0x3f1c99d8, 0xbf5474e4, 0x3fc8d2ee, 0x3e0205ee, 0xbd88cd7c, 0x3e3ae9b5, 0xbfbd0b0f, 0xbf7bbbe4, 
    0xbf3e44d8, 0xbe668926, 0x3ebf231d, 0x3ee265b8, 0x3f75da11, 0xbfdd2177, 0x3f9de698, 0xbf646e5a
};

static const uint32_t _K34[] = {
    0x3c416f59, 0x3d110fa3, 0x3d89f164, 0x3c72c7ae, 0xbd65c0b5, 0x3cc7bafc, 0x3d72972a, 0xbd9c2701, 
    0xbd83ea01, 0xbd9fbc7a, 0xbe07e58a, 0xbd8c8c99, 0xbe307ce4, 0xbd1d9800, 0xbdc26474, 0xbd41fc25, 
    0xbc50aca3, 0x3ce8f731, 0xbceb30fb, 0x3e0fbeff, 0xbd569a56, 0x3d97942c, 0x3d8b88fd, 0x3c33c84b, 
    0xbc346675, 0xbcd3036b, 0xbe6ee3fe, 0xbd82936e, 0xbe12d9ab, 0x3c9b8438, 0xbd2469ca, 0xbb344bfc, 
    0xbcaa75a0, 0x3cac1f7c, 0x3ccf727d, 0x3d9abdff, 0xbd9e83f9, 0x3e4af760, 0x3c9177c1, 0x3a49dbb7, 
    0xbd8f5302, 0x3cf67202, 0xbe9af00c, 0xbd12e0c2, 0xbe333660, 0xbc988214, 0xbcb01d92, 0xbcf34d1e, 
    0xbccb68f1, 0x3cb095da, 0xbc23145a, 0x3d8e5786, 0xbceebb54, 0x3da4db99, 0x3d798e1b, 0x3cb143ce, 
    0xbc997ff3, 0x3d327c94, 0xbe8aff92, 0x3d0ad653, 0xbe2de1b0, 0xbd1b1c5d, 0xbd80ffd0, 0xbbe0a181, 
    0xbd5e84fd, 0xbceabec1, 0x3d1d6dd0, 0x3cc95ba9, 0xbd067bf4, 0x3d3221fd, 0x3de23206, 0x3b9a8113, 
    0xbd179e5c, 0x3d3d7b54, 0xbe3fa312, 0x3b969215, 0xbe33710f, 0xbc881cb7, 0xbd3adf3d, 0xbc97795f, 
    0x3cbea3c5, 0x3decf6c3, 0xbdbf9315, 0x3ce2a9b4, 0x3b84faf0, 0xbcbbc375, 0x3da1521d, 0xbd633ebd, 
    0x399cb506, 0xbdb652a4, 0x3dbded03, 0xbdf268ae, 0xbe525e82, 0xbcd14025, 0xbdaaf4e3, 0x3d3f8cc5, 
    0xbe08e70e, 0x3da494c4, 0x3c7e1850, 0xbe6473b5, 0x3ca03d3f, 0xbe8e8efa, 0x3d6be15f, 0xbdd79223, 
    0xbd6f4d12, 0xbda2f9bb, 0x3e9211c0, 0x3c2352cb, 0xbe8b928f, 0xbe170615, 0xbe651b81, 0x3ce12273, 
    0xbe2b3402, 0xbd72bc52, 0x3d9a7829, 0xbe42a338, 0x3e009460, 0xbeda4c59, 0x3dde2762, 0x3d00f8e4, 
    0x3ae9d775, 0x3defbde6, 0x3e9e5008, 0xb9fa1612, 0xbe6220f2, 0xbd4a27a2, 0xbe07cda0, 0x3d8ef395, 
    0xbdadc2cb, 0xbd516d36, 0x3d9f5c52, 0xbdde5310, 0x3d9d8cbb, 0xbe99929c, 0x3e34f9a7, 0xbc3513c2, 
    0x3d3661a8, 0x3d77ee01, 0x3e046c24, 0x3be022c1, 0xbdce0338, 0xbd58ec88, 0xbb49d54d, 0x3da3ef67, 
    0xbdfa6954, 0x3d987202, 0x3c2b4bee, 0x3d802462, 0xbb893efd, 0xbd8212ea, 0x3de9c804, 0x3dc95322, 
    0x3d3c3c5d, 0x3e690130, 0x3e50ef99, 0x3df4f0cd, 0xbd760fc2, 0x3d68503e, 0x3e0c880d, 0x3de2254e, 
    0xbe106b2c, 0x3e0099eb, 0xbe48b981, 0xbd78545a, 0x3c4b559c, 0xbd8e54b6, 0x3dd49961, 0x3db2bc0b, 
    0xbd9ef354, 0x3e01d8ef, 0xbce32d82, 0xbd16a6ee, 0x3c952d16, 0xbd43f1c9, 0xbc89b43a, 0xbd132b1c, 
    0xbdab1820, 0x3e0bbb2e, 0xbe4ad26d, 0xbd283efb, 0x3d6af692, 0xbd1db1d1, 0x3d76ccae, 0x3da4302a, 
    0xbbf6e2ae, 0x3df087a0, 0xbd6f1219, 0x3bc41495, 0x3c85e976, 0x3d14fb5e, 0x3b8d0131, 0x3da6cc0d, 
    0xbdcfa402, 0x3d8c0dc7, 0xbe545a4d, 0xbd4f7a69, 0x3d008078, 0xbd02fd8e, 0x3d83074a, 0x3d93affd, 
    0x3c94be26, 0x3e3f24a6, 0xbcf34425, 0xbbda3f71, 0x3c3ed902, 0x3d6d6120, 0x3d31d3b2, 0x3dab0c91, 
    0xbdca75cc, 0x3dd48c9c, 0xbe2b807a, 0xbdaa6af1, 0xbc4aabfa, 0xbd033ab2, 0x3dab66d9, 0x3d8c872b, 
    0x3ca8e3bb, 0x3e20eeff, 0xbd79f200, 0xbd9834b9, 0x3c62f59a, 0x3d19d473, 0x3df2c987, 0x3dc62972, 
    0xbdd7031f, 0x3d923300, 0xbe3a2eac, 0xbd70f558, 0x3cc25c50, 0xbd0203ba, 0x3d15d09f, 0x3d98b136, 
    0x3cefbeb7, 0x3e007004, 0xbd89e143, 0xbdef21fc, 0x3c7fa1c3, 0xbd16a5cd, 0x3ddd4a01, 0x3cfcd652, 
    0x3da645cf, 0xbc323518, 0xbc86e53e, 0xbe285de2, 0x3cf0e2ae, 0xbe43368b, 0xbd7b5e17, 0xba27bd23, 
    0xbd66f7fc, 0xbd6f3ac1, 0x3dd3f753, 0x3d1ed405, 0xba836873, 0x3d0bcafb, 0xbdd13cec, 0xbde7b86d, 
    0x3dbab294, 0xbc3541a1, 0xbc126a14, 0xbe569b41, 0x3c9867b5, 0xbe2496ea, 0x3c871b6b, 0xbca8ba34, 
    0xbc8b01c3, 0xbe029881, 0x3dedba24, 0x3d767926, 0xbcf88e7a, 0x3ca03d72, 0xbd710add, 0xbd92fea9, 
    0x3d87f042, 0xbd1a02c4, 0x3df10f67, 0xbdaad20d, 0xbd6bbfff, 0xbe5c9cf5, 0x3c15390a, 0xbcea0857, 
    0x3d2a2357, 0xbc1cfb25, 0x3e39cd3d, 0x3e22741b, 0x3dc916bf, 0xbc6eb753, 0x3d591226, 0xbd57c657, 
    0x3d266cd9, 0xbd851770, 0xbd5d02ce, 0xbe017cc2, 0xbd9b388b, 0xbe133f19, 0xbd434ebd, 0xbc08978f, 
    0xbd0704e9, 0xbd3f4f35, 0x3d3a1f4c, 0x3d96fbb7, 0x3df029c0, 0x3ca566b6, 0x3bdf5201, 0x3bce3d6f, 
    0x3d4ff5b7, 0xbdec535c, 0xbd901d1a, 0xbe11097a, 0xbd844fa3, 0xbe5c14fd, 0xbdafd0f2, 0xbceb684e, 
    0xbc82f755, 0xbd516643, 0x3d98c093, 0x3de1ccc3, 0x3dda387b, 0x3d81a860, 0xbc106004, 0xbc1f5821, 
    0x3e7ab9f8, 0x3f0b20ce, 0xbeeb30b0, 0x3d1a5681, 0x3e637833, 0x3ed795a5, 0x3e1bdfd8, 0xbddabd16, 
    0x3d2f1227, 0xbed34552, 0x3c3eb0a2, 0xbc28fe76, 0xbc9d264e, 0x3d9023ea, 0x3bd6fb1a, 0x3e28e900, 
    0xbe30ed84, 0x3f104c2e, 0xbe8566d2, 0x3da416ee, 0x3cd283b2, 0x3ec3b7f1, 0x3e08fa89, 0xbd3d5c06, 
    0x3d3d87ae, 0xbec686b5, 0x3e076f0e, 0xbeb0655b, 0xbe7e97fa, 0x3c3ed124, 0xbecaf5e1, 0xbde64d5c, 
    0xbf1fccfa, 0xbcbecf56, 0x3df4ede3, 0x3d382d10, 0xbe3b5d1f, 0xbe710711, 0x3db0d363, 0x3d74bd3d, 
    0x3d821e2a, 0x3d538817, 0x3e6c19c5, 0x3e022422, 0x3e655f5e, 0xbc5fab9d, 0x3c155fb0, 0x3dd78926, 
    0xbf09263a, 0xbf2ccb14, 0x3da8e26d, 0xbe4b9162, 0xbe9de698, 0xbe9d48d2, 0xbddea054, 0x3d73b173, 
    0x3e04ad81, 0x3d1077eb, 0x3e12448e, 0xbd6f69e3, 0x3dcafbb3, 0xbd62a033, 0x3e9b67ab, 0x3ddfd2cb, 
    0xbc71fe04, 0xbf19afe5, 0xbd5f0af9, 0x3d158893, 0xbebc9759, 0xbdea54b2, 0xbe1cf889, 0x3e631728, 
    0xbb177c90, 0x3e8a2ed0, 0xbe59dd4b, 0xbe761939, 0x3e0da1d5, 0xbdcb5163, 0x3e9d78d1, 0xbd9c3981, 
    0xbd8a94c6, 0xbd5fe1af, 0x3b92b208, 0xbc91709e, 0xbd32f6e2, 0xbce9e725, 0xbc66792d, 0x3c89c962, 
    0xbd5175d3, 0x3ea342cc, 0x3dc41a3d, 0x3d2ae168, 0x3c65ecfd, 0x3c8a9a11, 0xbcf85e07, 0xbc0ba119, 
    0xbddf4dad, 0xbc91bc9b, 0xbd42d177, 0xbd91e3ee, 0xbd545a60, 0xbd86547b, 0x3c456dbb, 0xbc34c2af, 
    0xbd0b891b, 0x3eaa5c23, 0xbcc862c8, 0x3d81fbf6, 0xbc890c95, 0xbd015c6c, 0xbc5c0842, 0x3d420bc8, 
    0xbd78ce6e, 0xbd3f2b2e, 0xbdb21219, 0xbdc085a1, 0xbdaade1e, 0xbcbb4ebc, 0x3cfa973b, 0xbc92f8e0, 
    0xbd185c0a, 0x3e563036, 0xbdfefd85, 0x3c2fbb5a, 0xbd294dbd, 0x3c8da332, 0xbd41d025, 0xbb204415, 
    0xbaf262f2, 0xbd4c6d13, 0xbd4c7f45, 0xbd3f31d0, 0xbbd8a016, 0xba882949, 0x3b999396, 0x3caa0049, 
    0xbd8924e8, 0x3e09138d, 0x3be772ac, 0xbd2e5330, 0xbd885788, 0xbd0eea1f, 0xbc04a59a, 0xbcff105e, 
    0x3d3e72a4, 0xbd1f4eef, 0xbd2197eb, 0x3c159ce9, 0xbd6e1db2, 0x3d600584, 0x39a8417a, 0xbd1f16fc, 
    0xbd460f6b, 0x3d3b9438, 0xbdc4b9f4, 0xbd871e07, 0xbda01d38, 0xbdd38eeb, 0xbc0ea7dd, 0xbd465163, 
    0xbbaec64c, 0x3e55914b, 0xbeb75b69, 0xbe567239, 0x3e1616df, 0xbe082f16, 0xbddf095f, 0x3b83d057, 
    0xbc84de65, 0xbd30a0df, 0x3e83dfe8, 0x3d8c80fc, 0x3dbfafb3, 0x3dfb9dda, 0xbd01f076, 0x3c55c182, 
    0xbdb88665, 0x3ee42365, 0xbebd36a0, 0xbdf6c10c, 0x3e0aa650, 0xbdd7e69b, 0xbd1b4357, 0x3e19adc8, 
    0xbceda8a9, 0xbda9dd34, 0x3e3bdc0f, 0x3d1457e2, 0x3dcb974a, 0x3e3429dd, 0xbdd71519, 0xbbf4b5bb, 
    0xbe0c6989, 0x3f0a85bb, 0xbeaa44db, 0xbd596cb6, 0x3c87da1b, 0x3cc54cdc, 0x3d84b6d4, 0x3e2054db, 
    0x3c8d9864, 0xbcd901f7, 0x3d3f7f95, 0x3d42b809, 0xbc3c3854, 0x3dc4fffb, 0x3d0abe18, 0x3da00ce1, 
    0xbdda3f40, 0x3e99b31c, 0xbe8ad743, 0x3d322675, 0x3de484ba, 0x3d4cfabd, 0x3d855cdd, 0x3d765409, 
    0xbbc012d6, 0xbda21cf5, 0xbc8b5b89, 0x3d7060dd, 0x3d763677, 0x3e2130e9, 0x3dab7aa9, 0x3d9cc4ba, 
    0xbdf53d28, 0x3e113786, 0xbdb75def, 0xbcbba409, 0x3d8d97bf, 0xbdc92636, 0x3d5cfcfb, 0x3e4eec03, 
    0xbccbe412, 0xbd8d41a5, 0xbd041b6e, 0xbe3588f2, 0xbd9912d5, 0xbc2f11f9, 0xbdbec52d, 0xbda87938, 
    0x3c276a3c, 0xbc36b88b, 0xba3a44ce, 0x3a06462c, 0x3d1f9a36, 0xbca3e0b4, 0x3c7aadf3, 0xbb4da251, 
    0xbd3daeca, 0xbd432117, 0x3c148915, 0xbd11dcc7, 0xbccfcf06, 0xbce874fb, 0xbd35b4b7, 0xbd458c41, 
    0x3c7f1e89, 0x3d086ef6, 0xbb9537dd, 0x3bbe00e3, 0x3cc8c933, 0x3bc1397e, 0x3d16a525, 0x3be4fbbb, 
    0xbd4a977f, 0xbce7423f, 0x3ae85f20, 0xbd5235dc, 0xbd1397a7, 0xbb9560e3, 0xbd1acae8, 0xbc8f24d5, 
    0x3cbe1187, 0x3d475c66, 0x3a6f1bee, 0x3cfe8cce, 0x3c0018c8, 0x3c6885f7, 0x3cda0bba, 0xbb061f65, 
    0xbd0d2d4a, 0xbd3abdba, 0xbc132c71, 0xbd49c810, 0xbca85c88, 0xbcd796eb, 0xbd37ec17, 0xbcddfb07, 
    0x3b4d9375, 0x3ce78973, 0xba0883a9, 0x3c73896a, 0xbbefaf0d, 0xbaa22f4b, 0x3cd83f35, 0xbc1b218e, 
    0xbd1d3ec7, 0xbceec285, 0x3b4d60db, 0xbd815060, 0xbd0467d2, 0xbc928a39, 0xbcb9b2a2, 0xbd1ab772, 
    0xbadedee6, 0xbbdf1b40, 0x3bf92952, 0x3c84b0e7, 0xbce1bb98, 0xbc60d834, 0xbbb3d862, 0xbc8bdcf5, 
    0xbd072ee1, 0xbbccdb64, 0x39d9bb74, 0xbd630436, 0xbb825e8f, 0xbc531dd6, 0xbc3f06db, 0xbd1455ff, 
    0x3d55ecc9, 0xbc2d2e52, 0xbda709ef, 0xbc0a78f8, 0xbd83a0ca, 0x39f72bac, 0xbccc758c, 0xbd492fb2, 
    0xbc5c07ed, 0xbe0dc62e, 0xbca27b87, 0xbdaf433c, 0xbd061664, 0xbc47183e, 0x3d75b9e1, 0xbd8e8789, 
    0x3ca74d24, 0xbd41eb4f, 0xbc9529d8, 0xbcc1d1a6, 0xbde2d65e, 0xbc826cf5, 0xbce4c381, 0xbdaf7aa8, 
    0xbd055def, 0xbe0a7ee1, 0x3c5cdff9, 0xbe141d1f, 0xbd873856, 0xbdc9c9bc, 0x3c45360b, 0xbd9419e9, 
    0x3d80fe7b, 0xbdb1b506, 0x3c46057f, 0xbd1604da, 0xbd1db053, 0xbdcc60f6, 0xbd6c13fa, 0xbcf525ee, 
    0xbd444686, 0xbdcc03a9, 0x3d5768ca, 0xbdfd3efc, 0xbd018ed7, 0xbd2ef61d, 0x3c37102b, 0xbdc1a2b3, 
    0x3d686b2c, 0xbded5438, 0x3caf2335, 0xbd5a0942, 0xbd15fea1, 0xbc980011, 0xbd37e3d2, 0xbd1919e9, 
    0xbcc2485b, 0xbdd8e62c, 0x3d979c47, 0xbda2b801, 0xbcdebab0, 0xbdae7cc3, 0x3d098e34, 0xbdd87ea6, 
    0x3debcb21, 0xbd743333, 0xbcce395d, 0x3d3e8ec7, 0x3ccc9b72, 0xbcb311c8, 0xbc08c191, 0xbd831812, 
    0xbc4c7fd2, 0xbdc722cc, 0x3d71d1ee, 0xbdf48f9e, 0xbceb8e12, 0xbd83bb25, 0x3d19ce92, 0xbda2dd88, 
    0x3dea99d3, 0x3cc2c334, 0xbcae508f, 0x3cbd2e28, 0xbdc16336, 0x3d739485, 0xbbf33fc4, 0xbd3d6d01, 
    0x3c31285d, 0xbd39488f, 0xbc8bee36, 0xbdf416dd, 0xb8bdb305, 0xbd0caae6, 0xbd9a147f, 0xbc6c277e, 
    0x3df44074, 0x3cd3f8f9, 0xbd6fb724, 0x3db3b033, 0xbd91740a, 0x3db27736, 0xbd2b0245, 0xbd8952c7, 
    0xbb61baa8, 0xbd87c994, 0x3bf550cb, 0xbe7308d6, 0xbcb5488e, 0xbd8c2718, 0xbdcff63c, 0xbdce468e, 
    0x3e133789, 0xbcb324c4, 0x3c8a39bc, 0x3dd3c3f4, 0xbdaff72e, 0x3d8d32c8, 0xbdad829a, 0xbd4d01ee, 
    0xbbd225ef, 0x3c6e6302, 0x3d4a4d75, 0xbe39abe6, 0xbd52cde9, 0xbd6ca841, 0xbd9c56f4, 0xbe0f7b2d, 
    0x3d4c21c2, 0xbd066733, 0x3d4c1c07, 0x3c7b7447, 0xbddca2ca, 0xbc22a78e, 0xbde5ffc5, 0xbd8de310, 
    0xbd1a1933, 0x3bf8adf4, 0x3d42bb0d, 0xbe13e4a4, 0xbcd9f72d, 0xbd451b18, 0xbd3e8f69, 0xbdf953a8, 
    0x3d7d38d0, 0xbda9b728, 0xbd05f165, 0x3c21659f, 0xbd990090, 0x3c5b4d78, 0xbd2596e9, 0xbd9f3be2, 
    0xbc74b12c, 0x3c559076, 0x3cac037b, 0xbdadc103, 0xbc195c0e, 0xbd43b646, 0xbdae6db7, 0xbdb8785c, 
    0x3d857dc7, 0xbd27d0cb, 0x3c31d5c7, 0xbd52616f, 0xbd952022, 0xbdeb2a3a, 0xbe1c1242, 0xbb9a3c09, 
    0xbd7d0c49, 0xbd83fd72, 0x3e1e7a73, 0xbdb502c9, 0x3d926659, 0xbd35f106, 0xbda7424e, 0xbe085af3, 
    0x3dd2c9e6, 0xbc7d96df, 0xbc0d697a, 0xbdb640f0, 0xbcc30e2c, 0xbe29483a, 0xbdcd2477, 0xbda3321d, 
    0xbd461f8f, 0xbd6934e6, 0x3e482599, 0xbda62668, 0x3b6796e8, 0xbd986a8d, 0xbd52e07d, 0xbe10eaaf, 
    0x3dbd5518, 0xbc8c21cf, 0x3d57d7bb, 0x3bf4daf1, 0xbd0fbd80, 0xbd801084, 0xbdc2a737, 0xbd5e4473, 
    0xbd79420b, 0xbd901d2e, 0x3e82d8f3, 0xbde04b8a, 0x3ce24cbc, 0xbd74b8d3, 0xbdb705b5, 0xbe2269ec, 
    0x3da44ba7, 0x3c48e327, 0x39df0905, 0x3d251ab4, 0xbc4510d0, 0x3c9d0b3f, 0xbde2a6c4, 0xbcab9855, 
    0xbd893379, 0xbc45eb71, 0x3e0e85f4, 0xbe01bb8e, 0x3bbb97d1, 0xbc56f974, 0xbd9e60de, 0xbe007a15, 
    0x3d8ec5ea, 0x3d6a9ece, 0x3cf3aa0c, 0x3dea3e6a, 0xbde37a08, 0x3cff11eb, 0xbe15b10f, 0xbcee7ba3, 
    0xbc9cbd29, 0xbd4583bc, 0x3df8bf23, 0xbd0ffe9a, 0x3cecc851, 0xbba2bbce, 0x3c889823, 0xbe0088ce, 
    0x3e33f828, 0xbd4e4e87, 0xbca428aa, 0xbdf1420d, 0x3d0ec982, 0xbd9c5876, 0xbe0ef353, 0x3d9f7922, 
    0xbdc0cc74, 0x3d72551d, 0x3dc392c8, 0x3e51d85a, 0x3e26ece5, 0x3e398607, 0xbd29f8f5, 0xbc6bf224, 
    0x3e0cb829, 0x3e534b01, 0xbe5172cf, 0x3c3ef5cb, 0x3df1189e, 0x3de84e82, 0xbdd2845b, 0xbcb36bcd, 
    0xbd72f594, 0x3dd30dbd, 0x3cf3c6c0, 0x3d9fe5dc, 0x3db10fa7, 0x3e17bbfe, 0x3ce110b4, 0x3dde06d2, 
    0x3d9dbd9f, 0x3f1356bb, 0xbec13429, 0x3d55e6d1, 0xbcae99be, 0x3e1b2450, 0xbd17c431, 0xbd0a735e, 
    0xbd634f18, 0xbe1aed2c, 0x3be10a02, 0xbcce3511, 0xbd8209e7, 0x3e081f99, 0xbdc26e28, 0xbc8dd606, 
    0xbd2085b5, 0x3ee348a5, 0xbe22ca31, 0x3e0297fa, 0xbdf53ae6, 0x3d5376a3, 0xbc60b7ca, 0xbc60e600, 
    0xbdb80df5, 0xbe049335, 0x3dcb300e, 0xbe154560, 0xbe2af731, 0xbce68e2c, 0xbdc43da5, 0xbe377892, 
    0xbd208da5, 0xbd2311fa, 0x3e236e54, 0x3a8dee23, 0xbd9d6c4b, 0xbda6da73, 0xbe0062fc, 0xbb586d0c, 
    0xbdfafd37, 0xbd14cca4, 0x3da17f5a, 0xbde79c0b, 0xbde4db5a, 0xbde4eaf9, 0xbcd6fcb1, 0xbdaebe27, 
    0xbd4a7cca, 0x3d05f440, 0xbe74231a, 0x3d198a82, 0xbd5fb119, 0xbd222ee5, 0x3dc9e8ec, 0x3dcdc919, 
    0xbe02e2a2, 0x3d9800f2, 0xbe5f7a3c, 0x3d54c1a8, 0xbdb941b8, 0x3d4f8456, 0xbd94b987, 0xbbb869e2, 
    0x3d2106bb, 0x3d97364d, 0xbea78f62, 0x3d144626, 0xbdb7661a, 0x3d1178c9, 0x3d4c1040, 0x3d1c4206, 
    0xbd6a5d16, 0xbb13e8f7, 0xbe18ee28, 0xbd22db08, 0xbe09456e, 0x3d2479c9, 0xbe01630e, 0xbcf53b9c, 
    0x3bb609b4, 0x3e681852, 0xbe4199b8, 0x3e551333, 0xbddec229, 0x3e7c8ed9, 0x3d603d6d, 0x3d45ea79, 
    0xbdd018a7, 0x3d7055b0, 0xbdf34642, 0xbd1b18e8, 0xbd48ee4b, 0x3c8044e0, 0xbe066c2e, 0xbd375a4e, 
    0x3cfa9db5, 0x3e9b1b90, 0xbe912acd, 0x3e689b75, 0xbdd4825d, 0x3e8a8480, 0x3cd9c244, 0x3ce02861, 
    0xbc1415b4, 0x3c7475d5, 0xbe1244c3, 0xbd0c4f2b, 0xbda12bc5, 0x3d861809, 0x3c5f2b2a, 0x3c1a69d7, 
    0xbce32133, 0x3e399d74, 0xbb006f06, 0x3e5afd15, 0xbe7d98fd, 0x3d9263ae, 0xbd5e37dd, 0xbd80f105, 
    0xbd632701, 0xbbd9dafb, 0x3d8049aa, 0xbe24b76e, 0xbd58bbd0, 0x3d3ae9a6, 0x3d0f5451, 0xbd882d5c, 
    0xbd7f9063, 0xbce4412b, 0xbd43479c, 0xbe1f224f, 0x3b1c80f3, 0xbe2a9efd, 0xbd8cf0cd, 0xbd899e52, 
    0xbe4f9985, 0xbe270c07, 0x3ddc3d92, 0xbe9f0d7d, 0xbe08dc73, 0xbccaedcf, 0xbde563c7, 0xbde9d357, 
    0xbde63a7c, 0xbdd6911b, 0xbc05264b, 0xbd233fef, 0xbe1a4513, 0xbe026ccd, 0xbdc2c68a, 0xbd6c0240, 
    0xbe033642, 0xbd95a435, 0x3e0e92b9, 0xbe99cb73, 0xbdcea541, 0xbcc1baa8, 0xbcccfd8e, 0xbdb9581c, 
    0xbc037c29, 0xbe19fc93, 0x3df02a64, 0x3c519fcf, 0xbe65035b, 0x3c91fa00, 0xbd40f3b0, 0x3ba87fad, 
    0xbc86f12a, 0x3d554d16, 0x3dabe898, 0xbdc6f13a, 0x3d3fc332, 0xbb709069, 0x3d78bdb3, 0xbd9d51ee, 
    0xbc7ba142, 0xbe268181, 0x3df289d2, 0x3e2def63, 0xbdfe7bcb, 0x3e34dc85, 0xbdbfbd14, 0xbdd8e56b, 
    0x3dcf23fe, 0x3d7086e9, 0xbe1fb289, 0xbdb41af2, 0xbbd67cf4, 0xbd0e1be3, 0x3e8ac5ce, 0xbd19d2cc, 
    0x3d7a5a88, 0xbe1b3e40, 0x3d4679f0, 0x3db463d3, 0xbd676268, 0x3e0dbef5, 0xbdc0ec76, 0xbdaa6579, 
    0x3b7da8c9, 0xbd02044e, 0xbe1cf801, 0xbdc04506, 0x3c01ff9c, 0xbdb19540, 0x3e25584a, 0xbdec873f, 
    0x3e184060, 0xbd3fd11c, 0xbde11603, 0x3e3852fa, 0xbe12ab56, 0x3dc637d7, 0xbd0c89d5, 0xbd7b3ae0, 
    0x3e07e3f7, 0xbc3f47e8, 0xbd7d2664, 0xbe5867dd, 0xbdad84f3, 0xbdbfad9e, 0xbcdd666a, 0x3cc8654e, 
    0x3e6e3f0a, 0xbd840485, 0xbdb5c613, 0x3e870043, 0xbe1486ad, 0x3e31c69e, 0xbe3fb869, 0xbd514e0e, 
    0x3dbe5f6a, 0xbc5368c7, 0x3d25fb40, 0xbed84f27, 0xbd50a6aa, 0xbda743e6, 0xbe1caa97, 0xbe109a58, 
    0x3eaa507c, 0xbe1b7453, 0x3e0aaefc, 0x3e57da61, 0xbe6437da, 0x3d980d75, 0xbe904f0c, 0x3c858168, 
    0x3e5518d1, 0xbca367ec, 0x3db5e8ff, 0xbecfc101, 0xbcd5fbc1, 0xbdd6d35b, 0x3d0a9ed2, 0xbd2a38be, 
    0x3e903d66, 0xbe8a1531, 0x3d577c7d, 0x3e064699, 0xbd7b476b, 0xbc6f9489, 0xbe39c324, 0x3a37aa94, 
    0x3dcce16a, 0xbb8b1d02, 0x3dac8701, 0xbe948d86, 0xbc9cef93, 0xbd7f0206, 0xbd51aede, 0xbd2f57e6, 
    0x3ea050b1, 0xbe695666, 0xbaf7a353, 0x3dd98cf0, 0x3ca6af1a, 0xbd48f55d, 0xbd71f8fb, 0xba211530, 
    0x3ddd88de, 0x3dcf4562, 0x3dd942a3, 0xbe14d216, 0xbcc8bfb6, 0x3b4f9130, 0xbdbf4136, 0xbd61eaef, 
    0x3b4545d4, 0x3d62b1d2, 0x3df955b8, 0xbc0d54e7, 0xbe1bcc93, 0x3aa1cea1, 0xbe333862, 0xbd150f63, 
    0x3d05c62d, 0xbd4c99b3, 0x39cf103f, 0xbdf5e3d8, 0x3bc699d9, 0xbc88683f, 0x3cef09f8, 0x3bb5212e, 
    0xbcbed512, 0x3b26d04c, 0x3d161dc3, 0x3befa15c, 0xbe4dcb47, 0x3d8f017f, 0xbe2c9cb7, 0xbd0c7191, 
    0x3e11e43b, 0xbd9411a0, 0x3d218abf, 0xbe0b93a5, 0x3ddb2f77, 0xbc4bd300, 0x3d86aede, 0x3ca7f935, 
    0xbd7ae25d, 0x3cb2535e, 0xbcf7369e, 0xbd2e1478, 0xbe3d2e9c, 0xbb1cde78, 0xbe392ddb, 0xbc0ec36a, 
    0x3e1a375b, 0x3a6c7c4a, 0x3d965b0a, 0xbd963f3d, 0x3e4b4511, 0x3cdac7af, 0x3e1a382c, 0x3dcb2f1e, 
    0xbd18e62b, 0x3d11853c, 0x3d3d77f3, 0xbbdc12a6, 0xbe1463a3, 0x3c904f70, 0xbe283594, 0xbd946e88, 
    0x3e221733, 0x3d2faa10, 0xbb4292e5, 0x3be47724, 0x3e566af5, 0x3deaa15f, 0x3e298f8d, 0x3e055dfc, 
    0xbc0c7db6, 0xbb0e9adf, 0xbd151f29, 0xbcda209a, 0xbe386bf4, 0x3cf4a2c0, 0xbe31083a, 0xbd542f0d, 
    0x3e269cc4, 0x3d7001a4, 0x3d370c44, 0xbd840f6b, 0x3e3f4772, 0x3d516ebe, 0x3e0d482f, 0x3dd8a3cc
};

static const uint32_t _K37[] = {
    0x3f42282f, 0x3f3a5e5f, 0x3d612dae, 0x3eb951ee, 0x3ffe8129, 0x3dad17f4, 0xbfa4158c, 0x3d9d7d68, 
    0x3f7f7eb7, 0x3f01e2b0, 0x3e873cce, 0xbf065a9f, 0xbf74ae08, 0x3f7fe418, 0x3f8f0870, 0x3efad088
};

static const uint32_t _K41[] = {
    0xbdcba3f5, 0xbe09c54e, 0x3cce947e, 0x3bdafef6, 0xbe84767c, 0xbde73b47, 0xbd77b66a, 0x3c2cb377, 
    0xbe2d240b, 0x3dc3fb0f, 0x3dbe1543, 0x3e61a3cc, 0x3dc01e39, 0xbe8fdbc9, 0x3d0c1518, 0x3dd4611e, 
    0x3c46e6a2, 0xbe40eeea, 0x3d960012, 0xbdf58ff0, 0x3d98d719, 0xbc31ef8e, 0xbd8e5f9b, 0x3d96ec70, 
    0xbd241b0f, 0x3e49a300, 0x3e347923, 0x3e5c569d, 0x3e39c502, 0xbe7ecc1f, 0x3db9100d, 0x3ceeff06, 
    0xbd93f712, 0xbd8f9c50, 0x390ce9d3, 0xbd263b93, 0x3d915c66, 0x3a5db9be, 0xbcf65aea, 0x3c0edb11, 
    0xbda620ad, 0x3e2fd787, 0x3da4e62a, 0x3e453da4, 0x3d35e140, 0xbeb7ef00, 0x3d38d796, 0x3dc5a14e, 
    0xbc01646a, 0x3e0986ab, 0xbe81bd6c, 0x3e22a619, 0x3d7971c8, 0x3e3708eb, 0xbeb57166, 0xbd498ef5, 
    0x3e420fd2, 0xbcdf70dd, 0xbc83c436, 0xbe5676be, 0xbe3f2929, 0x3d9dcb2a, 0x3e4c1a78, 0xbe7c6aed, 
    0x3c87a77e, 0x3e523ccd, 0x3d0ad56f, 0x3e1c6065, 0xbd40aa7f, 0x3e90b8e8, 0xbe97cd7e, 0xbe2d3a37, 
    0x3eae39df, 0x3dc09bca, 0xbdf5ae3e, 0xbeca8ce3, 0x3bb03e7d, 0x3e443d01, 0x3ee339a5, 0xbe7c3934, 
    0x3c150e8b, 0x3d1cf229, 0x3d877e50, 0xbc9c7c86, 0xbe628f8c, 0x3e936e20, 0xbece4ee3, 0xbd8cad38, 
    0x3deffc47, 0xbd4dc550, 0xbdd36fae, 0xbea2dc98, 0xbe201624, 0xbde2722e, 0x3e56f32b, 0xbe381e8f, 
    0xbeb82245, 0xbe0a1971, 0x3e2f23b2, 0x3e001fd8, 0xbe148422, 0x3e854360, 0x3ddfdd76, 0x3b8a42c5, 
    0xbe68d504, 0x3e564e18, 0x3eac04f0, 0x3ee592ce, 0xbd202767, 0xbedc47f9, 0xbd341467, 0xbda1bba2, 
    0xbe0954b6, 0x3cfa8bec, 0x3d123c74, 0x3d81aa73, 0x3deed6fd, 0x3e2287d4, 0xbc6ebd12, 0xbd0b8c15, 
    0x3dac0a3f, 0x3eb87361, 0x3ea89daf, 0x3d0fd6eb, 0xbe2c4880, 0xbdd841e0, 0x3e9b265a, 0xbd6f096f, 
    0xbc33f6b3, 0xbdb5a2ee, 0xbd639133, 0x3df2f6c0, 0xbded0acc, 0xbdce2436, 0xbd2e7e6e, 0xbde1ac35, 
    0x3dcf1127, 0x3eb41981, 0x3eeb4d9d, 0x3d7779fc, 0xbe02bddc, 0x3d945965, 0x3e6645a1, 0x3df7eec3, 
    0x3d9547a3, 0xbe282926, 0xbdf25a21, 0xbe76529f, 0xbed8e216, 0xbdc01a6d, 0xbd289b74, 0x3debdc84, 
    0xbe1fd0ae, 0x3db56290, 0x3e1a9e17, 0x3e28c770, 0x3ef07e51, 0xbe05fc80, 0xbde4783d, 0xbe0fff0c, 
    0x3ea0c3c1, 0xbeb8ceb9, 0xbcda5b40, 0xbe881a77, 0x3ddd4cf7, 0xbe157182, 0xbd6d6b1c, 0x3d6c9716, 
    0xbdaff34a, 0x3de1c309, 0xbde3a35d, 0x3de0da43, 0x3ec4c323, 0xbe4fd555, 0x3c70264c, 0xbc5fa3a3, 
    0x3cec6829, 0xbe9637a4, 0xbdac7106, 0xbeb52414, 0x3e9b1438, 0xbd656337, 0xbe0bcd0e, 0xbdb68a0a, 
    0xbe05a538, 0x3e2cdf68, 0xbe80d5f2, 0x3d4b6708, 0x3e40b91c, 0xbe8e0c19, 0x3c66e231, 0xbd5f58a5, 
    0x3e715184, 0x3dd281ad, 0xbc73b7ab, 0xbd09e903, 0x3cf55358, 0xbc8cb9f2, 0x3dde897b, 0x3dcf9b57, 
    0xbc8296a9, 0xbce83eba, 0xbe3a2ee3, 0x3d96a2bc, 0xbcfede4d, 0x3df50bdf, 0xbddebd31, 0xbea608aa, 
    0x3e6d694f, 0x3e0afc77, 0x3d5ff461, 0xbd8d7bd2, 0x3d3a7e52, 0x3cd48374, 0xbd44e3cf, 0x3d9ff646, 
    0x3d86e62c, 0xbcee84f6, 0xbdaa2640, 0x3dd6eb30, 0xbc542fd5, 0x3e1f8b29, 0xbd74c9b8, 0xbec71769, 
    0x3e7198cd, 0x3e21c1a1, 0x3d77c6fc, 0xbe01f00d, 0xbd9d7543, 0x3ddc9b75, 0xbddb15e5, 0x3d1daec0, 
    0x3d2b31bd, 0xbcdad3a6, 0xbd9c14f3, 0x3d2aac33, 0x3d35090a, 0xbc1e7385, 0xbc2dbc79, 0xbeb0bb0e, 
    0x3c25671c, 0xbd29e295, 0xbdc5425c, 0x3e09e700, 0xbd9a1d34, 0xbd12832e, 0xbcc38a8b, 0xbdc44076, 
    0x3dab61bc, 0x3dbcbdbb, 0x3db5548e, 0xbe0ec54d, 0xbe52ae5c, 0xbd823eec, 0x3e2941dd, 0xbe30ab97, 
    0xb8724204, 0x3d143e3c, 0x3d96e625, 0x3e577a96, 0x3de83644, 0xbd831a56, 0xbc7eb605, 0x3d8405ee, 
    0x3e8d2629, 0x3e34d142, 0x3e25c85c, 0xbda3f7da, 0xbe3d5c94, 0x3d2321d0, 0x3ec70784, 0xbd49f0dd, 
    0xbca1bb6a, 0x3dfc6eaf, 0x3e4f7f92, 0x3e5f44e6, 0x3e45704e, 0x3de18436, 0x3cf0eb4f, 0xbdc1bd86, 
    0x3e09aa76, 0x3e3101c9, 0x3dc4a2ac, 0xbe0c4e2a, 0x3dabbef0, 0xb9311847, 0x3eb5f8b9, 0x3df0c6f9, 
    0x3cbb85a3, 0x3d90306a, 0x3dbcd871, 0x3d83ed67, 0x3c98ee78, 0x3d363cde, 0x3d8c585e, 0x3b5712e7, 
    0xbcaaa842, 0xbe0f55ab, 0x3ab00856, 0x3d052161, 0x3c6d5e5c, 0xbd53e51e, 0xbe4c3808, 0xbd3dd06c, 
    0xbc93c5fc, 0x3a83c5d1, 0x3d9cc9b7, 0x3b0e5640, 0x3c8fa99d, 0x3def639a, 0x3db45173, 0x3cc00676, 
    0xbd25a4d3, 0xbdb7309d, 0x3b3dbb8c, 0x3dd4447d, 0x3d06ac16, 0xbc98e382, 0xbe0ec683, 0xbc667d8d, 
    0x3c8047f4, 0x3b964612, 0x3d871ef9, 0x3c6e5bbc, 0x3cf5f1e8, 0x3e021844, 0x3d7a6119, 0xbc69154f, 
    0xbdbb7d39, 0xbdbcf7f0, 0xbcb8c5de, 0x3d0efcf6, 0x3ce426af, 0x3c48002d, 0xbe5e53d2, 0xbda4930b, 
    0xbd3b2b1d, 0xbdc20030, 0xbc7cf412, 0x3e572b1b, 0x3dd215d3, 0xbc219eac, 0xbcda038a, 0xbe3b7a66, 
    0x3dbdc5be, 0xbd617456, 0x3cf66dac, 0xbdb23865, 0xbd98df6d, 0x3d59c00d, 0x3d2c5491, 0x3dfc223c, 
    0xbd7263b0, 0xbe0c15e7, 0xbd11df56, 0x3ec6d04a, 0x3e3993ed, 0xbcb506e9, 0x3d83a38d, 0xbe89b59e, 
    0x3d0edd57, 0x3c287c2e, 0x3de52b98, 0x3cd28124, 0x3bc9e7f4, 0x3e4a2416, 0xbc7236d0, 0x3e652aae, 
    0xbbd78ceb, 0xbe274967, 0x3df87d68, 0x3e2a1e6f, 0xbe163629, 0x3c52a239, 0x3d9ccccd, 0xbe60ad7f, 
    0x3d9b1be9, 0x3d33be66, 0x3e0c3589, 0x3d467655, 0x3d855f87, 0xbd2c658b, 0x3dd66a2a, 0x3dde22db, 
    0xbe477e1c, 0x3e7f43ae, 0x3c368a0a, 0xbd430ff5, 0x3cf48e2e, 0x3d452cbc, 0x3e796727, 0x3dc9cb10, 
    0x3e15ce96, 0x3d695588, 0x3dfbb632, 0xbd81b50f, 0x3d82bdcb, 0x3e190286, 0xbe04d52b, 0xbe3905ea, 
    0xbd924cc5, 0xbb50864b, 0x3cd9e881, 0xbe43f2d2, 0xbe60540e, 0x3d893e80, 0x3e829a5b, 0x3da998d5, 
    0x3cdd9a7f, 0xbb4248d9, 0xbdc676ba, 0x3de3c897, 0x3ddc4e8b, 0x3d91f8b7, 0xbe07b5f2, 0xbe90d8b6, 
    0xbd9ec589, 0x3ccbe64e, 0x3c2bf8e1, 0xbe45821f, 0x3e06977a, 0x3dbb73d7, 0x3e414aad, 0x3e2e924d, 
    0x3e03c82d, 0x3de30ac3, 0xbe0a817d, 0x3def7f02, 0x3d93487d, 0x3de5ae7a, 0x3d3122d2, 0xbebca121, 
    0x3e153c2a, 0x3df3f8ec, 0xbded4de0, 0x3d945c33, 0x3dd6b806, 0xbe49d1bc, 0xbdd43ec1, 0xbd83c223, 
    0xbc896866, 0xbe02d557, 0xbdcce91f, 0xbd989ea4, 0x3ce8d350, 0x3d35a570, 0xbd5baf6d, 0x3de13edd, 
    0x3dc0b594, 0x3e1ccd0a, 0xbc0d54fd, 0x3e5193ae, 0x3d6e0c46, 0xbdf36d10, 0xbacbdbc5, 0xbcdc0d43, 
    0xbc6a9d2c, 0xbe5f9f83, 0xbd961137, 0x3c440663, 0x3da5ccc0, 0x3d5766fa, 0xbe04b1b7, 0x3de0d5e3, 
    0x3d806a39, 0x3e36f55e, 0xbdd1ad6d, 0x3e064e91, 0x3e1d9639, 0xbde6ee55, 0xbd950d53, 0xbd6162e8, 
    0xbd9792ed, 0xbe68858b, 0xbe3d04db, 0xbdfbdec3, 0x3d8da50e, 0x3d80f345, 0xbe8812c6, 0xbc77517e, 
    0xbddf3f15, 0xbeae7400, 0xbd2150e4, 0xbe91a9aa, 0xbf1f8d3c, 0x3d0c4fe4, 0x3f1deac7, 0x3d05d96e, 
    0xbedecd1a, 0xbe89a1c3, 0x3d355ec7, 0x3e93bcd2, 0x3eb3e0e9, 0x3ca1056f, 0xbf34b086, 0xbe5b066d, 
    0x3d0a8725, 0xbe54980a, 0x3d414d4b, 0xbe4bf4a5, 0x3efd63e4, 0xbd9e1017, 0x3e728924, 0x3ea1c81e, 
    0xbaa777bf, 0x3e8ff6d8, 0xbe87e964, 0x3ea14fe4, 0x3ea6db8b, 0xbe8b30df, 0x3e3ef0f2, 0xbdcaa609, 
    0xbd9c3c10, 0x3ed241ec, 0xbc57706b, 0x3db798a3, 0x3da62707, 0xbdd73db2, 0xbda259cc, 0xbce4d743, 
    0x3ec0b921, 0xbe0a5e05, 0x3e3a440f, 0xbd836c3c, 0xbdaf5093, 0xbb75259b, 0xbd8dbe30, 0x3e2ea046, 
    0xbf53f051, 0x3e58a1a0, 0xbec17d57, 0xbd0c9d76, 0xbe4cd648, 0x3d958c1d, 0xbd295a60, 0x3e41dcec, 
    0x3d28fbb3, 0xbe7b6c63, 0x3ea883ed, 0x3eafb9a1, 0xbf84ac81, 0xbf0c4218, 0xbe94f5ba, 0xbe765452, 
    0xbf36f59b, 0x3e6dc549, 0xbea6ca4b, 0x3e8df771, 0x3e9907d8, 0xbec3bbc0, 0x3d155032, 0x3ddbebb1, 
    0x3e07f5d5, 0x3b8435f2, 0x3f0479c7, 0xbdac3a0c, 0xbe90662c, 0x3efbef41, 0x3d3dae16, 0xbcba1509, 
    0x3f05421f, 0xbf49b310, 0x3e804b45, 0x3dcd9715, 0xbee57166, 0xbe831e3a, 0x3ec3cd16, 0xbd5395b0, 
    0xbefb5334, 0x3e295e41, 0xbed8a0b1, 0xbd8065f1, 0xbed5af2b, 0x3eb4662e, 0x3e8b1b6d, 0x3d8f2e8f, 
    0xbe52e1e2, 0xbd3e7b6c, 0x3cc7a343, 0x3e681cae, 0x3ddfd3f2, 0xbddc8c70, 0x3df7a3a0, 0x3c940219, 
    0x3d4f1102, 0xbb60c340, 0x3db0ace7, 0x3e293719, 0xbe2f2fef, 0xbdf5ae9d, 0x3916854b, 0x3dc08089, 
    0xbddc489e, 0x3d888705, 0x3de60d31, 0x3ebb2aac, 0x3e7c3c63, 0x3d116644, 0x3dd90d0b, 0x3d151de9, 
    0x3dc94e31, 0x3d15e8c7, 0x3dc79c02, 0x3e52357f, 0x3c89980c, 0xbd7b6a01, 0x3dddd24e, 0x3e8e7738, 
    0x3ca415ed, 0x3cb9d18e, 0x3d2b4638, 0x3dd6eb39, 0xbd8d1ddd, 0x3989fa36, 0x3e58c321, 0xbc5d70a7, 
    0x3d5b28a0, 0x3c836ae9, 0x3dbf7dfe, 0x3e649c3c, 0xbe0514b4, 0x3d114f6c, 0x3da4d469, 0x3e2959e2, 
    0x3d99c75a, 0xbe8b8b0d, 0xbf0a8b44, 0x3e3b23e2, 0x3dbdb211, 0xbf4f314c, 0xbe6c734a, 0xbf1b7a85, 
    0x3e946c11, 0xbef3ef1a, 0xbcb442c1, 0xbee5422d, 0xbe80d16d, 0x3e5e41d8, 0xbe0d75cc, 0x3d7e08ed, 
    0x3dd74f6a, 0xbee3c656, 0xbd83c8e7, 0x3f39c371, 0x3f0833a3, 0xbf104996, 0x3e4b8227, 0xbee7f686, 
    0x3e95eaae, 0xbe6f93bf, 0x3dc112aa, 0x3c83c6cc, 0x3e6960d2, 0x3e89112a, 0x3e1f7543, 0x3f159278, 
    0x3e617cc8, 0x3c9bcccf, 0xbdb5dbcb, 0xba927a53, 0xbe85da9c, 0xbe74c418, 0x3ec437f0, 0xbe911bed, 
    0x3e6fca2b, 0xbdfa1a6a, 0x3f0c2535, 0xbccbe2d1, 0x3cd9fbdd, 0xbddbed81, 0x3e250d21, 0x3e4a745a, 
    0xbdb074fa, 0xbd712a65, 0x3c1becb1, 0xbe34d5ad, 0x3cf5d3ee, 0x3d5f259d, 0x3eacc1e1, 0x3de04ab1, 
    0xbeb49c9f, 0xbddbbd95, 0xbe0731f1, 0x3e86601d, 0x3e8acb11, 0xbe28b7d3, 0xbe99ab63, 0xbd184470, 
    0xbd5cb944, 0xbd4e3121, 0x3a82b2ef, 0xbe03312e, 0xbc4fa61e, 0x3c8311cd, 0x3e965331, 0x3de299ff, 
    0xbc4dc62f, 0x3e0b1855, 0x3cb2154f, 0x3e97201e, 0x3e6007c0, 0xbd92c561, 0xbd94b0ff, 0xbcda6676, 
    0xbcb609d9, 0xbd92b389, 0x3cc35396, 0xbeb2edb8, 0x3e03de47, 0x3ccb7015, 0x3e88eaac, 0x3e27df55, 
    0xbc614b87, 0x3b903cf9, 0xbd8d5e33, 0x3e5ec7f0, 0x3e4c3467, 0x3d9ae5cc, 0xbd3687d4, 0xbe5fbc12, 
    0x3d903b6c, 0x3ed98eb6, 0x3d9729ea, 0x3cc4f673, 0x3e415975, 0x3c2cd3f6, 0x3d4f8a13, 0xbd93bb58, 
    0x3e3616c1, 0xbe21d675, 0x3e0a20ef, 0x3d222d8e, 0xbe68c65a, 0x3e69b8f6, 0x3e12be63, 0x3d41cff6, 
    0x3d7ca122, 0x3ece3711, 0x3c3d9c08, 0x3e13cf53, 0x3e31bd61, 0x3ce05383, 0x3def45a7, 0xbdc3c8ea, 
    0x3db4fbfd, 0xbddc3fbb, 0x3d81484c, 0x3e14a621, 0xbe048bcf, 0x3e3599c0, 0xbd814835, 0x3db99be7, 
    0x3d850c27, 0x3da5af92, 0x3ddc8571, 0x3d78db07, 0xbd55e092, 0x3d20fc03, 0x3e88c8c8, 0xbd2b2589, 
    0x3d5f9cc2, 0xbe1c0f5b, 0x3d1567aa, 0x3e1e0b12, 0xbdc11d5b, 0x3e37317a, 0xbdb08862, 0x3d579d18, 
    0xbd22467f, 0xbd709b2d, 0xbdea8577, 0xba9f3065, 0xbd95895f, 0xbcd782b2, 0x3d12e24c, 0xbcd9895b, 
    0xbd02ca9b, 0x3c35273c, 0x3b32d053, 0xbc0793c8, 0x3d8a001e, 0xbd2a352c, 0xbbc4c69e, 0xbdc5b525, 
    0xbd70a79e, 0xbd8d608b, 0xbe79577d, 0xb95a83f2, 0xbd1e7b2c, 0xbe22b9ea, 0x3caa1478, 0xbc7ec53b, 
    0xbc1b01cd, 0x3d45afe9, 0xbc24d5bc, 0xbd9e95cb, 0x3d4b6b64, 0xbd0399b9, 0x3da6c89f, 0xbd5ef4e4, 
    0xbba6b58e, 0xbd7c6cca, 0xbe736ce4, 0x3ca9a6b0, 0xbd08ee13, 0xbe3747e6, 0x3cb4311a, 0xbc914d09, 
    0x3c4eded1, 0x3dbfb08b, 0x3d5d3503, 0xbd98d5d8, 0x3d177867, 0xbd067b02, 0x3e1c8cd7, 0xbdb2fe9f, 
    0xbca11a41, 0x3ccb56d3, 0x3d62bee1, 0x3e0c20ea, 0xbbde265c, 0xbc2dcd2c, 0x3ce43059, 0x3d2484a1, 
    0xbbc235c9, 0xbe66d151, 0x3d771c61, 0x3de918ca, 0xbd45ae04, 0xbd313dbb, 0xbea26e28, 0x3cac0584, 
    0xbd8642e1, 0x3d220e5d, 0x3d1802cc, 0x3d2c85d7, 0xbd9e78eb, 0x3c566156, 0x3ddd8058, 0x3d6aa4c2, 
    0xbd37bed2, 0xbe7957ba, 0x3bae9906, 0x3d4c3452, 0xbcbf34be, 0xbd92ea8b, 0xbe9c1442, 0x3cd4f3f4, 
    0xbd8cf47c, 0xbb7732b4, 0xbd709be7, 0x3d9c39b0, 0x3da6be28, 0xbc8b8e79, 0x3dd8a15f, 0x3df9de02, 
    0xbd7c6e64, 0xbe184d1e, 0x3d84bcd5, 0x3e3062e2, 0x3c0c6269, 0xbdcfe883, 0xbea8c5c4, 0xbce536e3, 
    0x3bcf175f, 0xbe75b026, 0x3bfa7731, 0xbd8a9618, 0xbcd1bfcd, 0x3e030446, 0xbd048cc7, 0xbd575915, 
    0xbdb788df, 0xbb5764ad, 0xbd00683c, 0xbd561ce8, 0x3e236b59, 0x3dd2a7a6, 0xbc54de79, 0x3da05f08, 
    0x3d059b3a, 0xbe89b729, 0x3be6080d, 0xbd86bb2b, 0xbd28fad1, 0x3dc452d4, 0xbcca2304, 0xbdf7eb05, 
    0xbb625d06, 0x3cc7e241, 0xbde91e20, 0xbe3e10b7, 0x3e845fb2, 0x3d7198c5, 0x3d8e3bbe, 0x3ce48789, 
    0xbc70a553, 0xbeb4d6a7, 0xbdb303db, 0xbe570a43, 0xbe796e7f, 0x3d9722db, 0xbc85ab1b, 0x3c14793d, 
    0xbdaa07b0, 0x3d332712, 0xbe11289c, 0x3d99b469, 0x3dca5808, 0xbcda1f7f, 0x3d146d1b, 0xbd85d7e9, 
    0xbe892092, 0x3e1dd1c0, 0x3e9466f7, 0x3eadb652, 0xbdd59319, 0x3e873682, 0xbe9a4cf1, 0xbeccbc57, 
    0x3eed9b3d, 0xbed34909, 0x3daaa121, 0xbef359f3, 0x3d92a756, 0x3edac461, 0xbdd41441, 0xbe40f958, 
    0x3cf8490d, 0xbe030567, 0x3e5fc531, 0x3e00d263, 0xbea3cbf4, 0x3ce8d7df, 0x3d3885f8, 0xbda04fad, 
    0xbda374e4, 0xbef7fe06, 0x3d7a67b3, 0xbc8d6047, 0x3eea2270, 0x3eab2621, 0xbec48528, 0xbe701271, 
    0x3e26a063, 0xbe88064e, 0x3d3bbf42, 0xbdf94a01, 0x3df9b2e5, 0xbcde562f, 0x3e3c4ec8, 0x3eb08d78, 
    0xbdc4a9b1, 0xbd1f4fe9, 0xbe819b91, 0x3ea7a8dc, 0x3e59a4b7, 0x3ed54598, 0xbd3545e0, 0xbeb3922b, 
    0x3ba490ed, 0xbd48cf0c, 0xbcd5a32f, 0xbe2910e0, 0xbd1f4182, 0xbdcf1832, 0x3e009229, 0x3e02f64b, 
    0xbdf0eedb, 0x3d1460e3, 0xbd233e21, 0x3e28c0c4, 0x3d9fe035, 0xbddeefc7, 0xbdfa4f18, 0xbd8e97fe, 
    0xbdb35811, 0xbd15976c, 0xbd9ad589, 0xbe5d65e8, 0x3c232631, 0xbe1f5fc8, 0x3e76f250, 0x3dcfeb7e, 
    0xbccb5c9d, 0xbda0f496, 0x3b62d30d, 0x3dc4c71d, 0x3d636d6e, 0xbd46123d, 0xbe2afb5d, 0xbd662b94, 
    0xbd805c13, 0x3d8eb8ee, 0xbdcd3f54, 0xbe2a0ae2, 0xbd4b38fb, 0xbdd21e01, 0x3de4d4a1, 0x3dcf2e52, 
    0xbd24e503, 0xbdef54f2, 0xbc6c4f65, 0x3e4fac66, 0xbd2d603a, 0xbd439ff5, 0xbe8b3b29, 0xbdbef40a, 
    0x3e07a747, 0x3c8ffbef, 0x3e54eefb, 0xbc92614b, 0x3d516489, 0x3c7e1a86, 0x3da832ed, 0xbc502735, 
    0xbe333a51, 0xbddb8ff7, 0xbe0f7a36, 0x3e1b3369, 0x3d903f20, 0x3cf48672, 0xbd8b0ac5, 0x3d45866c, 
    0x3d0acca0, 0xbaee84cd, 0x3ebbdca9, 0xbe09653e, 0x3d04e935, 0x3e08f866, 0x3d343cbd, 0xbc9ebfda, 
    0xbdcc7476, 0xbdb92b66, 0xbde07030, 0x3e1fb111, 0x3d75d7b5, 0x3d2e4c55, 0xbc808445, 0x3da7587c, 
    0x3cb83fb3, 0xbd255c26, 0x3e9175a4, 0xbdecebdd, 0x3d4fe061, 0x3e2efc86, 0x3df70c1c, 0x3cbcdebd, 
    0xbe487add, 0xbe141a06, 0xbe789d81, 0x3df1ab2b, 0x3d953c1d, 0x3dae2d5c, 0xbd5252cc, 0x3d4d4b4f, 
    0xbdebdb43, 0x3d03dc43, 0xbd448780, 0xbdc496ef, 0x3ca45dd6, 0xbc124460, 0x3eb0693c, 0x3d5ea6bc, 
    0xbe4ff6ee, 0x3da31272, 0xbd714e19, 0x3e6428da, 0x3e5775e5, 0xbcfb79cf, 0xbd8d165d, 0x3bf6ace6, 
    0xb8b3faea, 0xbe22845b, 0xbd6dae28, 0xbe8f4ce8, 0xbd28864e, 0x3df2ecbc, 0x3e9500ae, 0x3c602cac, 
    0xbe6f68d0, 0x3db9b4f1, 0xbe33efd6, 0x3dec61ac, 0x3dcfb847, 0xbcab2f35, 0xbdd2598c, 0x3b96d199, 
    0x3cc16a6e, 0xbda60c45, 0xbdfc993e, 0xbe92f582, 0xbc73ff20, 0x3c9590b5, 0x3e69cbc8, 0x3e017917, 
    0xbdadb515, 0x3d902b75, 0xbe4ba6c1, 0x3dc13842, 0x3e258755, 0x3db20644, 0xbd1d2621, 0xbdba546f, 
    0xbe5dce57, 0xbca22041, 0xbc40a78c, 0xbc8a6a9c, 0xbe45dafa, 0x3d1b5bbb, 0x3eb98f95, 0x3d78b20a, 
    0xbe313c50, 0xbe1ea64e, 0x3e6e9eb8, 0x3e6b3bad, 0x3e269488, 0xbdce4593, 0xbe73c43a, 0xbe0ee03f, 
    0xbe087ff1, 0x3c3b737f, 0xbe054efe, 0xbd3a5c95, 0x3c5385fe, 0xbe69fbcf, 0x3e9d0935, 0x3e0062eb, 
    0xbdb8b38b, 0xbb08ec34, 0x3d8cf652, 0x3e612b25, 0x3e7fc43e, 0xbe396e83, 0xbe3ee469, 0xbe290d7a, 
    0xbe000d86, 0x3a08eea7, 0x3a87cedf, 0xbd7381d6, 0x3dd16034, 0xbe6da0a3, 0x3e073439, 0x3d4d544a, 
    0x3db8b3b1, 0xbd330eac, 0xbcfedfa8, 0x3d69578d, 0x3e35273a, 0xbce917b3, 0xbe199729, 0xbd910a40, 
    0xbd4762e3, 0x3d90d32b, 0xbe344f03, 0x3caa5cc1, 0x3d9d6326, 0xbec71973, 0x3d6aeb82, 0x3ddfbc4f, 
    0x3d9c9d74, 0xbd82e9bd, 0x3c6b2262, 0x3c3a181f, 0xbe7e8f79, 0xbd696c9e, 0xbdbd593b, 0xbd045836, 
    0xbdb288f1, 0xbbb46834, 0xbd923fef, 0xbb88bf6c, 0xbd813bfd, 0xbeaa1af1, 0x3d3eb275, 0x3e02dd18, 
    0xbc6cd845, 0xbe4187b6, 0x3d35ed47, 0x3e07a4cc, 0xbe8d88ca, 0xbd49d2fa, 0xbe8b4372, 0x3c7b184e, 
    0x3ca8345c, 0x3c121079, 0xbe056a6e, 0xbd91328e, 0xbd856037, 0xbeab86d3, 0x3d951ac4, 0x3e402518, 
    0x3aa04fb9, 0xbdaee414, 0xbb8fe182, 0x3cdc4496, 0xbe652897, 0xbbd6c4aa, 0xbe8c8be6, 0xbcb9e2f7, 
    0xbd3cf762, 0x3d599739, 0xbdbdd91a, 0xbda7e37a, 0xbd10dc00, 0xbda81d0f, 0x3dd05632, 0x3d2224dd, 
    0xbd1de836, 0xbda369ea, 0xbd86c274, 0xbcde67d4, 0x3cc7eb58, 0xbba10993, 0xbe1f7214, 0xbdf5b2b9, 
    0x3d1d876f, 0x3c40dc85, 0xbdc75571, 0xbd2f0db4, 0x3dff91cc, 0xbddc6dd5, 0x3ddbd89e, 0x3dbf5d6c, 
    0x3d7161ea, 0xbc860233, 0xbad26c9e, 0x3e056e8d, 0x3cc82ac7, 0x3dc78198, 0xbdbd08a2, 0xbdefaee0, 
    0x3d87dc95, 0x3e1b926b, 0xbe2cba0f, 0xbda25c5e, 0x3e25ddc6, 0xbd957940, 0xbc87afad, 0x3d7c0aa4, 
    0xbbae5ae7, 0x3ce00850, 0x3b09378c, 0xbe108d82, 0xbc8dd918, 0xbd026a5b, 0xbb35c4cc, 0xbdf10ccb, 
    0xbe1e0d9b, 0xbd5237a4, 0xbd50485f, 0xbd2a57bf, 0xbd2ee124, 0x3d77318d, 0x3e064254, 0x3cdcc16d, 
    0xbe4ca65b, 0x3b91254c, 0x3e1b481f, 0x3e13f6a8, 0x3c9e4535, 0xbdc37b6d, 0xbcb2b60c, 0xbdf0bebe, 
    0xbde52e5f, 0xbcfd1b44, 0xbe6d8361, 0xbb8260cf, 0x3eb15cff, 0x3d03abf1, 0xbdf67f28, 0xbe0fa16b, 
    0x3d9e3d32, 0x3e55e20b, 0xbcf9e086, 0xbe4b8993, 0x3db1a059, 0xbccebe95, 0x3ef6744f, 0xbd9c7c5c, 
    0xbd97bcac, 0x3d533e81, 0xbdeafc6d, 0xbdd9d987, 0xbde3905c, 0x3db0e300, 0xbddf55ba, 0xbdc96ddd, 
    0x3d297885, 0x3d091d1b, 0x3d358fc5, 0xbde43cd8, 0xbc7e3012, 0xbd51bc62, 0x3e5e402d, 0xbe2c1f8a, 
    0xbe6630b9, 0x3e6e3d42, 0xbbdd92ce, 0xbbc65160, 0xbe69c851, 0x3e25cb14, 0xbe60f68a, 0xbe652e94, 
    0x3e833df3, 0x3e5f42c3, 0x3e867ddf, 0xbee037b4, 0x3e7a1f24, 0x3e2d7872, 0x3e7f3c6d, 0x3d14e255, 
    0xbe845e0f, 0xbdc9eae9, 0xbeb5f247, 0xbdb6c951, 0xbeba99ae, 0x3cf03683, 0x3e38ee13, 0x3e6531c6, 
    0xbe9b2995, 0x3cdc561d, 0x3dfbc548, 0x3e7e37d3, 0xbc939be4, 0xbf24fe55, 0xbe80c1ef, 0xbdb0db01, 
    0xbd933ac0, 0x3e86d128, 0xbee5fbac, 0x3e131a1c, 0x3ee931ef, 0xbee25ae1, 0xbe47dec7, 0x3e7510d0, 
    0x3c1f6ca9, 0x3ece9580, 0xbdda251a, 0xbc992d7d, 0xbd03cccc, 0x3e1ae96d, 0x3dc66295, 0x3d3afa14, 
    0x3dc879de, 0xbc0d695f, 0xbd43eb4f, 0xbdf14a0e, 0xbdcd4df2, 0xbd2f4008, 0x3d83a0c3, 0xbc26beed, 
    0xbc0e4293, 0xbd0abda9, 0xbe7f073b, 0xbd95ac95, 0x3e32bd29, 0x3e006ba2, 0xbdd1bb8a, 0xbe473b27, 
    0x3e947ced, 0x3cb88c73, 0x3c1fdcb8, 0xbe018926, 0xbd954fab, 0x3d2bb506, 0x3d43f134, 0x3d2b51b8, 
    0xbd86b930, 0xbd27ea2c, 0xbe5cb7f0, 0xbd221b7e, 0x3e1bf634, 0x3e267ef8, 0xbd49ce05, 0xbd617798, 
    0x3e866121, 0xbd7896bd, 0x3d0dc2e0, 0xbe04ab68, 0x3df89d3d, 0x3d9fbda4, 0x3cbaf20e, 0xbc507c1e, 
    0xbd32de99, 0x3d50146a, 0xbeac2d72, 0xbd6c5612, 0x3dd093d3, 0x3d9fcf3e, 0x3d36e2ad, 0xbd2b247a, 
    0x3dfd50a6, 0x3e051432, 0x3d5a6911, 0xbd953235, 0x3e91e14f, 0xbe2a125e, 0x3d9a3450, 0xbdc155dc, 
    0x3db5139f, 0x3d2cb2ca, 0xbd62b201, 0xbdfaf7a2, 0xbbf6d3df, 0x3e18508f, 0x3e1a84f0, 0x3e656005, 
    0x3dd441f6, 0x3c199dbd, 0x3e0ccffc, 0xbd97b35d, 0x3e9ab3c0, 0x3c5325e4, 0x3d4f5aa9, 0xbd8271ea, 
    0xbe04a40c, 0x3d91ecb0, 0xbd931a71, 0xbe2408f5, 0x3e2ba24e, 0x3df9d981, 0x3d8a5c6d, 0x3ec6d174, 
    0x3e41ee20, 0x3d8eb434, 0x3e800ee5, 0xbdd57317, 0xbe6bb52e, 0x3e16a749, 0x3c391b28, 0xbe0f94f1, 
    0xbdca1b64, 0x3da9ac48, 0xbdd921a1, 0xbd10628a, 0x3e3bde86, 0x3d8fe922, 0x3e5de2c4, 0x3ec256e1, 
    0xbd105fea, 0xbd25a619, 0x3d29421d, 0x3bed0466, 0xbe0d28e9, 0x3d9766a3, 0xbe3c766b, 0x3dcd855e, 
    0x3d8c05f9, 0xbd72b402, 0x3ce88605, 0x3d6270ee, 0xbd098771, 0x3df1ec0c, 0xbd7d4516, 0x3c32af52, 
    0x3e299add, 0x3e6ed3b6, 0xbdbcbb19, 0x3d85bea9, 0x3ea7722a, 0x3dd82cfe, 0xbe864057, 0xbdb3bbb3, 
    0x3db8f460, 0xbdcefa0a, 0xbe397f72, 0xbe0a2662, 0x3c46b487, 0x3e853b71, 0x3d951172, 0xbdd0d30f, 
    0x3e28a763, 0x3cf6361a, 0x3da28a6b, 0x3d9496dc, 0xbec44067, 0x3d834099, 0xbe278c56, 0xbe1679db, 
    0xbcefade1, 0xbe732a0e, 0xbbab444e, 0xbd3b515e, 0x3e00249c, 0x3e2aee91, 0xbe2d4a13, 0xbdd0eb30, 
    0xbd384b1a, 0xbd906ee0, 0x3e189940, 0xbd3d4fa3, 0xbe3a6737, 0x3e88e416, 0x3dbc4882, 0xbe36bcbd, 
    0xbd794e13, 0xbc0923bc, 0xbd6ba0a0, 0xbde74faf, 0xbcf37413, 0xbd98fe6a, 0x3d0a5845, 0x3e0b8dc5, 
    0xbeab4593, 0x3da09a8c, 0x3d547cde, 0xbc5dd2cf, 0xbe24e34f, 0x3e21730a, 0x3d6d6229, 0xbcc23f2c, 
    0xbbc617e7, 0x3d07df8c, 0x3e3ee969, 0x3e1a11cd, 0xbd476fd1, 0xbe2dc183, 0x3c96030d, 0xbde2066d, 
    0xbeaedf1c, 0x3e9854f6, 0xbe178b18, 0xbca403e8, 0x3e854159, 0xbd68495c, 0x3d0e9de3, 0xbc258498, 
    0x3dc97450, 0x3dc7ed04, 0x3e7b681c, 0x3e3f1702, 0x3d4bcfd5, 0x3e22e2e3, 0x3da44192, 0xbd837ebd
};

static const uint32_t _K44[] = {
    0xbf5f09aa, 0x3e4d1e1f, 0xbfa3fee9, 0x3f485c9f, 0xbe9cd288, 0xbfec5f88, 0xbe7eb2f8, 0xbf596f24, 
    0xbf1502da, 0xbecfcb9d, 0xbf53b375, 0x3fc96cc4, 0xc00fbc58, 0xbee76c0e, 0xbfa149ff, 0xc00423db, 
    0x3f1ca1cb, 0x3f5dd97e, 0x3f9489fa, 0x3f901cf1, 0x3ee6b54c, 0xbf0a476b, 0xbf17523e, 0xbe7228c6, 
    0x3f4c8cf4, 0xbe63e6e8, 0x3edbefec, 0x3f9710be, 0x3e891678, 0xbfe2105c, 0xbb331c80, 0xbf000d43
};

static const uint32_t _K48[] = {
    0x3c3c6bb0, 0xbcf35ec9, 0x3d2d58da, 0x3cd5cf50, 0x3d308ba1, 0xbe1c513b, 0xbccfc38e, 0xbbe2d242, 
    0x3c63a84b, 0xbe306bf9, 0xbd5fa8c6, 0x3c613599, 0xbd8b099d, 0xbe7b7a69, 0x3e2727d5, 0xbddadb37, 
    0xbd9e82d3, 0xbcfffd9e, 0xbd331d0f, 0x3c642229, 0xbd834229, 0x3c837f02, 0x3de5f22c, 0xbd25bacd, 
    0x3bd4fcd7, 0xbc9078b5, 0xbd0b28d7, 0xbcab8db5, 0x3c8ad329, 0xbd2d8986, 0xbd356e35, 0xbd5738c6, 
    0x3db6856d, 0xbcec67aa, 0xbd83c54d, 0x3dc47bd8, 0xbc81b2bf, 0xbe160bda, 0x3c3ae397, 0xbd2026f2, 
    0xbc532ff7, 0xbe1fa428, 0x3cd679cb, 0xbd721334, 0xbd586232, 0xbe83d6d3, 0x3ddb8664, 0xbd472ab7, 
    0xbd937e94, 0x3c7f74b8, 0xbd1f53d3, 0xbd433652, 0xbcae1e62, 0x3d1600dd, 0x3dc483f2, 0x3b0d59bb, 
    0xbd131f63, 0x3cb41e39, 0xbdea29ec, 0xbdb3f5ab, 0x3d924830, 0xbd76702d, 0xbce6020b, 0xbdf9ef7d, 
    0x3cec03f2, 0xbd2731ff, 0xbc46736e, 0x3ddf67e9, 0x3bc55c5d, 0xbe468ec8, 0x3dd50f8a, 0xbabe1632, 
    0xbd43421d, 0xbe70e7d9, 0xbbb15149, 0xbdd7cdcc, 0x3b9fe45c, 0xbe507258, 0x3dbc8a07, 0xbd6ed250, 
    0xbdc76682, 0x3d12876f, 0x3cf75a4a, 0x3d1efed7, 0xbd703ec3, 0x3d972b16, 0x3da4ca43, 0xbd633f9e, 
    0xbdd9fc2a, 0xbdb1102e, 0xbcf946b9, 0xbe5b7639, 0x3d867d4c, 0xbb1e02b6, 0xbabc4f83, 0xbe333036, 
    0xbdeacf99, 0x3adda1fa, 0xbd56e787, 0x3b3b4025, 0xbdabf21e, 0xbdc5cfa2, 0xbdb73715, 0xbe407587, 
    0xbdb005df, 0xbdf58721, 0xbdcb2b37, 0xbca791c2, 0xbe3bb81d, 0xbd87c8c0, 0x3b9062b7, 0xbe52fb3c, 
    0xbd4b0369, 0xbd855a1d, 0x39d03a16, 0xbcda7094, 0x3e259d6f, 0xbda4b8f9, 0x3d941e00, 0x3d658076, 
    0x3ccdcd2b, 0x3deb0553, 0xbcfdcd91, 0xbd81e396, 0xbc9c0f68, 0xbdc49b13, 0xbe352dc6, 0xbdacce96, 
    0xbdc8142c, 0xbd65396f, 0xbd915b34, 0x3c34d7db, 0xbdd35122, 0xbcad5deb, 0xbe51e463, 0xbe2e52f3, 
    0xbdbe39a3, 0xbe25b323, 0xbdfdaf70, 0x3cb74922, 0xbe92bfd4, 0xbe1aea00, 0xbdcccb7e, 0xbe6215bc, 
    0xbcd291af, 0xbde43fc6, 0xb91499d2, 0xbe014f67, 0x3dbc1721, 0xbe2f99d0, 0x3db686d0, 0xbc32dd10, 
    0x3d1f33dc, 0xbb316504, 0x3cdaf54a, 0x3ab027b5, 0xbda85f2b, 0xbce44f97, 0xbe578c54, 0xbdf3fd8c, 
    0xbe27287e, 0xbcedc1cb, 0xbe3962ea, 0xbd66bc19, 0xbe02e3ca, 0x3c8b5924, 0xbdee56d2, 0xbdfd50f9, 
    0xbcb2ac1f, 0xbe312727, 0xbdaaf12f, 0xbd23be68, 0xbde3a0a5, 0xbd8ac4e8, 0xbdd98623, 0xbe30f50f, 
    0xbd14f1bf, 0xbe262d63, 0x3d0b775c, 0xbe9d00d5, 0x3dfaba2b, 0xbdad0a1a, 0x3dd63c3f, 0xbc628794, 
    0x3d317463, 0xbd9b5998, 0x3c49d810, 0xbd00ff71, 0xbd093d9a, 0x3c9c85e4, 0xbcaf3800, 0xbdab957c, 
    0x3ea140c7, 0xbe394399, 0x3d09347e, 0x3eb62d18, 0xbd588b9c, 0xbe79dfa9, 0xbe08cbce, 0xbda17f68, 
    0x3dccf582, 0x3ca75757, 0x3d88b0ef, 0x3e086e08, 0xbd3892be, 0xbe221cf2, 0x3eb16b33, 0x3d9b182c, 
    0x3d10b86a, 0xbd901812, 0xba13a520, 0x3ea46ff8, 0xbd7b4cde, 0xbd1c47b2, 0x3e5df3fd, 0x3e12fcd6, 
    0xbe20a687, 0xbcc81e47, 0xbde66650, 0x3e384b99, 0x3e02f240, 0xbe7dbef8, 0x3d2df584, 0xbe036f96, 
    0x3e8dcb98, 0xbe7e9769, 0x3e00a973, 0x3ef7a685, 0xbbce6ea5, 0xbdd433e7, 0xbcca158c, 0xbc33acc6, 
    0xbd12a36f, 0x3ae43c71, 0x3e0ea6dd, 0xbe49ba72, 0xbb2a143a, 0xbe1f1cb5, 0x3e3adaee, 0xbd09a284, 
    0xbc55756e, 0xbc84b02c, 0xbe0bb411, 0xbdc052ba, 0x3c81bce3, 0x3d22b8b3, 0x3e4a450f, 0x3e1d06a0, 
    0xbe4f00ec, 0x3d86b936, 0xbd8ca286, 0x3d79acf2, 0xbbf562e7, 0xbe298fe7, 0xbd0da3c0, 0xbda10988, 
    0x3e4fcfad, 0xbdb1b224, 0x3e2d581c, 0x3e1d9069, 0xbd86a4b1, 0xbe2b69c3, 0xbdd91a80, 0xbe033c7c, 
    0x3d124db5, 0x3d04a8ec, 0x3e22fd67, 0xbe8d060c, 0xbbf27e5e, 0xbe10652d, 0x3e7d40a7, 0xbe63b847, 
    0x3da6ae10, 0xbdf006b9, 0x3e06d81b, 0xbd87a986, 0xbdff626f, 0xbafb3bdc, 0x3e59c812, 0x3dd00d5f, 
    0xbe7a5776, 0xbc4154bc, 0x3deeea62, 0xbe458fc2, 0xbda0e2d2, 0xbdcbd458, 0x3cbfa348, 0xbe2b3f5f, 
    0x3e02e93b, 0xbc514c1a, 0x3db67b3c, 0x3d45f05d, 0xbdf5c070, 0xbe12ac94, 0xbaabe314, 0xbe026b4c, 
    0x3d113323, 0xbd116e00, 0x3e13abe7, 0x3e0da3fe, 0xbe231577, 0xbe2ec7e1, 0x3f06e86a, 0xbd959a81, 
    0xbd5f1aac, 0x3ae1169a, 0x3d4b5f4b, 0x3d93f8c5, 0x3e166f0d, 0xbd642398, 0x3ea62f7c, 0x3e8fe7f0, 
    0x3cafe531, 0xbe87d8d4, 0xbd5ad246, 0x3cb37ef5, 0xbdae4ff7, 0xbd7456fa, 0xbd2a321d, 0xbe0d2b2e, 
    0x3dbfb838, 0xbe076bb6, 0x3d8f9a78, 0x3ce90e3f, 0x3d20d63a, 0xbde4ea0c, 0xbda89e98, 0xbcac3237, 
    0x3e452535, 0xbbeed307, 0x3e3aae1c, 0xbe0b30ce, 0xbe1b0188, 0xbd9d23e0, 0x3ebfbfb7, 0xbe1b177f, 
    0x3c062f64, 0xbd11e66b, 0xbe18c801, 0x3b668693, 0x3de9ef73, 0xbc0c1c32, 0x3ea5a199, 0x3e54389b, 
    0x3d676e75, 0x3da6e759, 0xbd565943, 0x3c7e13ba, 0xbdf1ec02, 0xbce10edb, 0xbe16cc06, 0xbd35405c, 
    0x3ceee3ce, 0xbe66c291, 0x3e1ec4e3, 0x3ccc87ee, 0x3cb0e744, 0xbc433a99, 0xbd0f830f, 0xbe14c2d1, 
    0x3dda5151, 0xbdb6b803, 0x3e71432e, 0xbdaf1e84, 0xbd923156, 0xbe8b3bce, 0x3ed60771, 0xbe0fb8bd, 
    0x3c0ad2eb, 0xbcb54d85, 0x3c0c7718, 0xbacbf34d, 0x3e35e6ba, 0x3d8bd404, 0x3e483c7b, 0x3e04f75c, 
    0xbd8c17a4, 0x3cff45a3, 0x3dc9a42c, 0xbe57b1f0, 0xbcb5e84c, 0xbe0e0115, 0xbd276b26, 0xbc79f033, 
    0xbd39b920, 0x3de206b4, 0xbdfa0a41, 0x3bedc127, 0x3c8fee03, 0x3b778f43, 0x3dcceaa2, 0x3cab49b2, 
    0x3d4bf7df, 0xbd105f4c, 0xbd445f1e, 0x3bca13dd, 0xbd0cebb7, 0xbdecf112, 0xbc6c3a16, 0xbd066bd7, 
    0xbdb1ba17, 0x3d5d95a0, 0x3cda9473, 0x3e2eb036, 0x3c577f07, 0x3d958824, 0x3c74efe5, 0xbd031fe5, 
    0xbd1df1ca, 0x3d0ccacc, 0xbdb04c1c, 0x3d5117d6, 0x3d498833, 0xbd8a50d3, 0x3d57b323, 0x3dba514e, 
    0xbc9ee37e, 0x3d7920e2, 0x3c317132, 0x3d2956fb, 0x3d974a4d, 0x3cda40cf, 0x3e1e7d4a, 0xbca790cd, 
    0xbcb2cabf, 0xbd9cb949, 0x3d76a090, 0x3d49b8b1, 0xbc0bc82f, 0xbd633b03, 0x3d2d7386, 0x3d07903e, 
    0xbdb5c75d, 0x3d0563dd, 0xbb48992a, 0x3e11df5f, 0x3ca458f6, 0x3d8fcb43, 0x3c7d00fa, 0xbd852628, 
    0xbd302666, 0xbce75216, 0x3c1f15ae, 0xbdc35ed3, 0x3ca4d942, 0xbd85e0eb, 0x3dda158c, 0x3d79561d, 
    0xbcaaef76, 0x3d8396b7, 0xbd82ec46, 0x3d472719, 0x3d364182, 0x3c8c69b1, 0x3e20ff87, 0xbc40d02b, 
    0x3cf3cec6, 0xbde44b2b, 0x3cef4d8f, 0x3d0e8a11, 0xbd233ce6, 0xbd8bb211, 0x3cad23cc, 0xbcfad890, 
    0xbd9749fc, 0x3cdf4143, 0xbc640f49, 0x3e6300a8, 0x3c96f1e0, 0x3db3d86f, 0xbc48dc56, 0xbda6b7dd, 
    0xbd85586a, 0x3c0fb91c, 0xbdcbb577, 0x3cced863, 0x3d887b69, 0xbd4de84b, 0x3d9f62c7, 0x3d038b4e, 
    0x3d8e4767, 0xbe4f7d74, 0xbd024781, 0x3d185d65, 0x3c3666ee, 0x3c473cda, 0xbc7e834f, 0xbd9a820d, 
    0x3df72a04, 0xbe3d2501, 0x3dfe88fa, 0xbc92f066, 0xbdd758c8, 0xbd910578, 0x3d907a4c, 0xbdb569df, 
    0xbdcb5358, 0x3da92a05, 0x3b963d74, 0xbd4221b6, 0x3e1da5c8, 0xbcea386e, 0x3e01fff3, 0x3e2c6b0e, 
    0x3da5d451, 0x3e073fb6, 0xbe0df812, 0xbd44e0fa, 0x3c8cc24d, 0xbdaf4054, 0xbe0167ae, 0xbd94203d, 
    0xbccf00e4, 0xbe2cef62, 0xbdcfd5d5, 0xbd0c2931, 0x3bbcc8a4, 0xbcd14fb3, 0x3a9c2605, 0xbd868f6f, 
    0x3dce6b7f, 0xbe132cf2, 0x3e0f3b10, 0xbde12aad, 0xbd15afec, 0xbe06936a, 0x3e1a84a1, 0xbd9b768d, 
    0xbe06c145, 0x3d815391, 0xbdc179c3, 0xbd78d829, 0x3e410b1c, 0x3d02c712, 0x3d68bc4c, 0x3e0d2c0c, 
    0x3db1b6ff, 0xbbc58f2e, 0xbe27c947, 0xbde64554, 0xbbd3511b, 0xbd29a7ee, 0xbde514c3, 0xbe135cd0, 
    0xbd0cf762, 0xbe72ae0b, 0xbe02a848, 0x3c303555, 0x3c8f9d8e, 0xbda185dd, 0xbd56a1be, 0xbd86b9a3, 
    0x3dd261d1, 0xbe25c69f, 0x3dfcd4d4, 0xbd23d17d, 0xbcf4b332, 0xbdfdaa70, 0x3e35f4ed, 0xbd7d4654, 
    0xbe30f0eb, 0xbb860258, 0xbe0f6a93, 0xbbc870ae, 0x3e2499c8, 0xbc1a4d19, 0x3ddb1e8d, 0x3e4ab213, 
    0x3d3d9eda, 0x3e740c86, 0xbe25b932, 0xbd1d4665, 0x3c68f262, 0xbd367c9a, 0xbdb7705c, 0xbe1a7bf4, 
    0x3db52c8a, 0xbe1e2e51, 0x3d947367, 0xbce43346, 0x3c95d57d, 0xbd1a4ce6, 0x3ce8a0a0, 0xbdb1bb7a, 
    0x3e77f50f, 0xbe070ce6, 0x3e8feb3a, 0xbc9ce0c2, 0xbd95fafc, 0xbd5b7885, 0x3ec4b10a, 0xbdab71fa, 
    0xbd53bd7c, 0xbdd6f625, 0x3c0013d9, 0xbdd9d3e8, 0x3de52210, 0x3cc4c7be, 0x3e5fbda6, 0x3e758e73, 
    0x3da25f5e, 0x3d571a2d, 0x3c9eb309, 0xbe466e95, 0x3d66e103, 0x3c7b6ec5, 0xbdce3804, 0xbddf9142, 
    0xbdcaadc0, 0xbe21c443, 0xbd7fc962, 0xbe12d1a0, 0xbd225a49, 0xbe42a01d, 0xbd998f3c, 0xbd81105d, 
    0x3e2ff5da, 0xbccba110, 0x3e5c59f1, 0xbdf46831, 0xbd88de99, 0xbdbb6239, 0x3ea33449, 0xbdcc8c8d, 
    0xbde8c111, 0x3a3cd110, 0xbc9c0cb8, 0xbd91d311, 0x3e564bcd, 0xbd39015b, 0x3e5ea71f, 0x3e2e7d68, 
    0x3e710d4d, 0xbcd19bc0, 0xbe1d9b2f, 0x3b98d978, 0x3d74b43e, 0xbd89c12c, 0xbe2d7fb5, 0xbcf756b5, 
    0xbd350d77, 0xbe13b714, 0xbc5ec63f, 0xbcd43a5f, 0x3d994ced, 0xbe385db7, 0x3c10911d, 0xbd300fa9, 
    0x3e1e9c18, 0xbc8f937c, 0x3e4ad00b, 0xbd46ae26, 0xbc8f054d, 0xbdc80a15, 0x3eae4a44, 0xbb9acf5d, 
    0xbd4257c3, 0xbdb1103d, 0xbd5807d4, 0xbd2e6d47, 0x3e1bf109, 0xbbaa06b7, 0x3e5406a5, 0x3e92641a, 
    0x3e48d4b2, 0x3e811436, 0xbe0df246, 0x3d54a319, 0x3d645293, 0xbd4f99ff, 0xbe25c400, 0xbb4689ed, 
    0xbc0cf300, 0x3a69e106, 0xbd2e26aa, 0x3cca6c59, 0x3dfb2229, 0xbe900839, 0xbdac091e, 0xbe5950ff, 
    0xbac4c4c6, 0xbc4575af, 0x3e18e617, 0x3c1fec78, 0xbe879afd, 0xbd6b8f84, 0xbc0d0613, 0x3a837b6a, 
    0xbd154ff4, 0xbe14e181, 0xbe5f2df6, 0xbd99037d, 0xbcfe8200, 0xbd96426b, 0xbb030558, 0xbdff3af2, 
    0x3d82cf94, 0x3c919f21, 0xbccb2907, 0x3de52528, 0x3d05d32d, 0xbe3f5653, 0xbd13ecac, 0x3d99fe16, 
    0xbd98c53f, 0x3d348483, 0xbe294e8c, 0xb900d861, 0x3e468768, 0xbe8f0ee7, 0xbd9d5801, 0xbe92a54f, 
    0x3d08b0f4, 0x3d88860d, 0xbd0b509a, 0xbe0eb3ca, 0xbe94f61d, 0xbea5c19d, 0xbdef9388, 0x3cbe0112, 
    0xbdebc10f, 0xbdc77c8f, 0xbe446dd5, 0xbcf7de3c, 0xbd126e17, 0xbd6a3da0, 0x3ad98a0a, 0xbe483a35, 
    0x3d3192ab, 0xbb5ebd29, 0xbd87f048, 0x3c15994e, 0x3d86805d, 0xbe5124bc, 0x3e3fdeb3, 0xbd1f0d7a, 
    0xbc6ccb21, 0x3d8e7482, 0xbe5107ab, 0xbd5ab3e6, 0x3e74aab5, 0xbe753051, 0x3c19d9a4, 0xbe70e9eb, 
    0x3dac7704, 0x3d897b6f, 0xbdccc918, 0xbd4a7e10, 0xbdcaebea, 0x3d2fcb00, 0xbde5ea47, 0x3c21001b, 
    0xbda52560, 0x3c463bde, 0xbe42abcb, 0x3df283ad, 0xbcfd11b5, 0xbcb23dfb, 0xbc911273, 0xbe569c1c, 
    0x3c02a791, 0xbd510a2f, 0xbe2283ad, 0xbe2a09a6, 0x3d92067b, 0xbe3afd74, 0x3df8d44d, 0xbe0249de, 
    0x3c3ecd8d, 0xbde8fc0a, 0x3d8a86ac, 0xbdcd6f90, 0x3d2771e2, 0x3d4faa45, 0x3c2bd62a, 0xbd60b777, 
    0x3dee54ab, 0x3cec3046, 0x3cb4125c, 0xbd541510, 0xbd49ead6, 0xbdf74414, 0xbc9c64a9, 0x3d4fdb42, 
    0xbd306de8, 0xbd0b8a55, 0xbe2795ce, 0xbe35a48a, 0x3cde23b7, 0xbdad81b5, 0x3d93ae8f, 0x3bc5e704, 
    0x3c776655, 0xbd7717c1, 0xbd9a0cb8, 0x3df72bde, 0xbe0c2c98, 0xbd4f2b08, 0xbd9599de, 0x3e1cb057, 
    0x3e04a9b7, 0xbdad89be, 0x3e9282b5, 0xbd9624fc, 0xbce8bf59, 0x3cd4e4cb, 0xbdb90a43, 0xbd0e0a4a, 
    0x3d708364, 0x3cff1b79, 0xbd5454e8, 0x3e18d24a, 0xbca43ef6, 0xbd892c88, 0x3e035c93, 0xbd51d9c1, 
    0xbceeaecb, 0xbdcde610, 0xbde8fb18, 0xbda9777b, 0x3d736243, 0xbddea82f, 0x3dc807fb, 0xbcde4f68, 
    0xbc58c83c, 0xbceea8e4, 0x3e330b45, 0x3d5188e6, 0xbdc69d09, 0xbe375f0d, 0xbd24132d, 0x3d9c9597, 
    0x3ce0d521, 0xbd9768a3, 0x3e19450b, 0xbdd4a390, 0xbd007ca1, 0x3d8d2253, 0xbe43055a, 0x3bd996ae, 
    0x3dba7cdd, 0xbbbe5676, 0x3b4ec2ca, 0x3cb2e957, 0xbd9ae28b, 0xbe291955, 0x3d8f803a, 0xbdb0692d, 
    0x3c8b41ca, 0xbdbce02c, 0xbdb5d3b8, 0xbb1433cf, 0x3da395c1, 0xbe2ca725, 0x3e041a8e, 0x3d0f7e92, 
    0x3c40adf2, 0xbcddb5ec, 0x3cb67b5e, 0xbc649c38, 0xbdcdaf83, 0xbe1ef6c3, 0xbd43b8b0, 0xbd72cf8d, 
    0xbb68e607, 0x3d96f199, 0x3cdfe112, 0xbd061f86, 0x3d89fac8, 0x3d9077cc, 0x3c4d5d56, 0xbcb533a7, 
    0x3d1eb2ad, 0x3d89824f, 0xbd14e00f, 0xbd52d0dc, 0xbc499d46, 0x3c0901aa, 0xbd40203c, 0x3d533f13, 
    0x3d12a1f1, 0x3d02c6f2, 0xbd7d19ea, 0x3d85e2cd, 0x3c2ae1a4, 0x3bc8638c, 0xbc8e90ed, 0xbc40ec81, 
    0xbb897c5f, 0x3ccadbb8, 0x3cac5f82, 0x3d306db6, 0x3dc5db4d, 0xbd29b51c, 0x3c8fa22a, 0x3da50297, 
    0x3c3ce013, 0x3dcb44bc, 0x3d7f28a3, 0xbca902a8, 0x3da37610, 0x3d42a39f, 0x3bd88491, 0xbcefe0da, 
    0x3d2cc81a, 0x3d27ffdd, 0xbd3a7e50, 0x3d43ff1d, 0xbd17d01e, 0x3d2df5b0, 0xbbb91db6, 0x3c3d7027, 
    0x3c9681d8, 0x3c4be658, 0xbd74c0d4, 0x3d44cf13, 0xbcea4986, 0xbd01eae1, 0xbd1abf3f, 0xbc5d6d72, 
    0xbcc960ba, 0x3be7e1f1, 0x3d0f34f7, 0x3d24ebb1, 0x3d42c612, 0xbca95fc2, 0x3d32dc2a, 0x3d437c25, 
    0xbbcca9de, 0x3d8ffeff, 0x3d81b782, 0xbd4580c9, 0x3d986fad, 0x3d8e7a7a, 0xbc166b2e, 0xbcd61b76, 
    0x3d13902d, 0x3ccf8d55, 0xbc5e9719, 0x3d10943c, 0xbcf8bd4a, 0xba13b661, 0xbd373b07, 0xba9ca98a, 
    0x3c90c35d, 0xbd1fa744, 0xbe009083, 0x3cc82aaf, 0xbab77dcb, 0xbd5cdd79, 0xbccb03e5, 0xbd0bbb2f, 
    0xbd140600, 0x3cd55723, 0x3b90fbdf, 0x3d2dd8c8, 0x3d87fafa, 0xbcfdb8a6, 0x3d383039, 0x3cd66868, 
    0x3d5fd1f2, 0xbb0e4ee9, 0xbcd5447e, 0xb9f9cf28, 0xbc738e81, 0xbd4b13e6, 0x3d5af650, 0x3c0ef5c9, 
    0x3d6c4090, 0x3d238bde, 0x3c5de57a, 0x3dcce8dd, 0xbcfaaee7, 0xbd8b609c, 0x3e9e63e7, 0x3e716a6b, 
    0xbde09773, 0xbc239a3d, 0xbd073370, 0x3e848560, 0xbe8a9005, 0x3d926352, 0x3e7c69d8, 0xbd03cb1b, 
    0xbd666eed, 0x3bd207e9, 0xbe3d849c, 0xbc00b884, 0x3dbbea37, 0xbe6402a5, 0x3cccfc8c, 0x3d02b9c7, 
    0x3e59de76, 0xbe34f05e, 0x3cd474e0, 0x3efc2254, 0xbda926a0, 0xbd9350aa, 0xbdf079b1, 0x3c4cb30f, 
    0x3e4471ac, 0xbced231a, 0xbbecc5e0, 0x3d957681, 0xbc8c7f68, 0x3bdd3af8, 0x3e2d795e, 0x3d1e9056, 
    0x3d4a5c99, 0x3ce1ac27, 0x3d12122f, 0x3e8e342b, 0xbe132fe2, 0x3ca984b4, 0x3e9561f3, 0x3df9bbb7, 
    0xbe1b8e1f, 0x3e2ae434, 0xbde1418e, 0x3e7f8d6c, 0x3e1172e0, 0xbd7eab99, 0xbdb56a51, 0xbdaf26e8, 
    0x3e3492df, 0xbc47bfd7, 0x3dbe1da8, 0x3ee1d364, 0xbd85695c, 0xbe328c8a, 0xbe092767, 0xbd77d814, 
    0xbd8404c8, 0xbd9454a9, 0x3e92d0a6, 0xbe93b434, 0x3cdbe39e, 0x3e03fe5c, 0x3e49478b, 0xbe66fb9a, 
    0x3dceb554, 0xbdba8a58, 0x3e0ca3d5, 0xbe15f020, 0xbd9eea12, 0xbe5087f4, 0x3e4ca847, 0x3cf08758, 
    0xbe4b0a0c, 0x3df9f57b, 0x3e6da33d, 0xbd68c0eb, 0x3c64901b, 0xbd3b08d3, 0x3bb94d22, 0xbe0e3a1e, 
    0x3eb4c977, 0xbccf68aa, 0x3df94a16, 0x3ed2af98, 0xbbb5bf8a, 0x3d37b4d4, 0xbd22b660, 0x3ca79c65, 
    0x3d460918, 0x3d2843b0, 0x3d9bea97, 0xbd6e3f0a, 0xbd85e710, 0xbe417739, 0x3e8e3edd, 0x3d182f95, 
    0x3d9da3d5, 0xbe03aae2, 0x3e415385, 0x3e1ae89a, 0xbdbc207f, 0x3c8e90fc, 0x3e6387e6, 0x3e07f421, 
    0xbdef12c1, 0x3d939331, 0x3c952847, 0x3d9816fe, 0x3e2ce3cd, 0xbd94d1f7, 0x3b2e1aac, 0xbd3a62a7, 
    0x3e8b53a7, 0xbdad5e95, 0x3ddce4ed, 0x3ef24441, 0x3d5503d8, 0x3d2072fd, 0x3caf5cdb, 0xbd2d7d89, 
    0x3da0a456, 0x3d5659c5, 0x3de07413, 0xbde880ac, 0x3c0efafc, 0xbd37dd20, 0x3e26b182, 0x3bdb1d5e, 
    0x3df315c6, 0xbddd2648, 0x3e0a12eb, 0xbdb72d7c, 0xbdf6d39c, 0xbb671f81, 0x3e82cf7b, 0x3d994059, 
    0xbdf004a4, 0xbd4ced88, 0x3de0ff14, 0x3d1815a5, 0x3e6a8f52, 0x3d364e7d, 0xbd9e1023, 0xbd346686, 
    0x3e44dbbf, 0x3cdf53a6, 0x3e49318a, 0x3e99de80, 0x3db5c597, 0x3cd914c2, 0x3aeccc7b, 0xbdecb96d, 
    0x3cc4b9b5, 0xbcd3e188, 0x3c50c7d0, 0xbe888ec1, 0xbd9c4a1e, 0xbddfa6b3, 0x3e7bddac, 0x3cafa580, 
    0x3df6e309, 0xbd4d7df5, 0x3e6daa27, 0xbd80b3da, 0xbd824f85, 0xbd3277df, 0x3e93dc07, 0xbd1552eb, 
    0xbe582834, 0x3cb04792, 0x3e33ec02, 0xbe1f2f87, 0x3dfb9105, 0x3b955687, 0xbcba608a, 0xbdaf813e, 
    0x3dd9107b, 0xbde564cf, 0x3d8d21e9, 0xbdf69b97, 0xbe2b89f5, 0x3d2915f6, 0x3e450f65, 0xbe49e8de, 
    0xbdd6aa11, 0xbe61968c, 0x3e01c4ee, 0xbe5d1af7, 0xbd8a30f5, 0xbe991bd9, 0x3db1af0b, 0xbdba58a5, 
    0x3d07f178, 0xbd739407, 0x3de1336c, 0x3e1c75c5, 0xbbc2c8bf, 0x3d0cda0c, 0x3d84662f, 0x3e85392e, 
    0xbe39f280, 0x3e0e57d2, 0x3c538a47, 0x3c9a5f39, 0xbe6295c0, 0xbe8f22e9, 0xbbe9e23e, 0x3e4bc86a, 
    0xbdcb813f, 0xbe911609, 0xbcd35747, 0xbdb0808e, 0xbd1abe5e, 0x3dc24392, 0xbe448100, 0xbdd0a7d7, 
    0x3d638eae, 0x3dd1a211, 0x3e86a4db, 0xbe02177d, 0xbe3370f5, 0xbe4d1311, 0x3cedfa30, 0xbe2950a1, 
    0xbdf72123, 0xbdca6ebd, 0xbdffb528, 0x3e5bc8cf, 0xbde6c338, 0xbe270e6c, 0x3e0f753a, 0x3e618f52, 
    0xbe070b43, 0x3e23edac, 0xbe082004, 0x3f1b1c4a, 0xbe3eacc4, 0xbd4bbc76, 0xbd53d241, 0x3e5d9a13, 
    0xbda2d539, 0x3e099c92, 0xbcba8eea, 0xbc9c61d7, 0x3d97b00b, 0x3be502b2, 0xbdecc774, 0x3dde4885, 
    0x3cb1854a, 0x3e4888d7, 0xbc94c499, 0x3efdac65, 0x3dcbaf5a, 0x3e2f30ab, 0x3de085b3, 0x3e15d530, 
    0x3c0ee5a4, 0xbe77f7f5, 0xbc645ef2, 0xbe88b15c, 0xbdd03c10, 0xbdedfa84, 0x3e1faddf, 0xba84a5cd, 
    0xbe947f3d, 0x3de55dc3, 0x3e211dd1, 0xbf20fbdc, 0x3e3a8f60, 0x3e6afab1, 0x3f083bfa, 0xbe3694fe, 
    0xbd64b581, 0x3d8d60b4, 0xbcafc72e, 0xbd8efabd, 0xbd91dac8, 0x3b0405f0, 0xbc82c602, 0xbd1a2e7c, 
    0xbc3d7ade, 0x3c84fc70, 0xbd9652b5, 0xbd823761, 0x3cfdedb9, 0x3df2c366, 0xbd202467, 0xbd530bb3, 
    0xbd1a4ae3, 0xbd5eba1c, 0xbd09e2e8, 0xbd8960df, 0xbdd77e46, 0xbd1968e0, 0xbcc799e5, 0xb9b2ad80, 
    0xbd2a673f, 0x3ab8be7e, 0xbc8faf6d, 0xbdb3f9ba, 0xbd60d7b5, 0x3d134306, 0xbc95dc67, 0xbd062db3, 
    0xbdb0d579, 0x3d0a65d2, 0xbd7e6bf7, 0xbd01bf08, 0xbe252ade, 0xbd1b7874, 0xbd8417e3, 0x3ba6f8e0, 
    0xbd603557, 0xbc69f209, 0xbbca5c85, 0x3ddc4925, 0xb9244d99, 0x3e6675eb, 0xbd849876, 0xbdaed5ae, 
    0x3d31ce5c, 0xbcb6f070, 0x3d33b605, 0xbc154af9, 0xbdeec8b0, 0xbd9d5ffc, 0xbbd61920, 0xbcfc64bc, 
    0xbc2ce200, 0xbd6ae720, 0x3d219785, 0xbd3f57be, 0xbd852975, 0xbce89ffc, 0x3d0582f7, 0xbcc1f5a7, 
    0xbd4b263b, 0x3c928059, 0xbd9e42e4, 0xbd9c41bb, 0xbe220018, 0xbc9ee965, 0xbd9fcd7b, 0x3cc367a0, 
    0xbda2ef61, 0x3b560a54, 0xbd5eb75e, 0x3d089ba4, 0x3d0d4eef, 0x3dacafe9, 0x3b860231, 0xbe0aee10, 
    0x3a2e3d52, 0xbc9fe556, 0xbcb8d214, 0xbd87218a, 0xbdc351c9, 0xbda283f6, 0xbcc92bc6, 0xbccba8b3, 
    0xbce6c21a, 0xbdcd5793, 0xbc8872ac, 0xbe18a79c, 0xbd77cdc4, 0xbc9c2343, 0xbc6afeb1, 0xbc88d6a3, 
    0xbd6d349e, 0xbe5f61be, 0xbe0436b9, 0x3da0f38a, 0x3bccd0ca, 0xbe3084ba, 0xbe6149d9, 0xbe014a15, 
    0xbdc95f7f, 0xbe102a9e, 0x3ce86d8a, 0x3ca4abfa, 0xbd99b182, 0xbccd50df, 0xbcdb474f, 0xbe74267c, 
    0xbe01549c, 0xbe117158, 0xbe0d1866, 0xbe2978a6, 0x3dcd62ef, 0xbd6c5a0b, 0x3e17738a, 0xbcacd1a7, 
    0x3d847cf0, 0xbd2d5666, 0xbdab35e2, 0xbd863aed, 0xbbaa8886, 0xbd58f477, 0xbe47d8fc, 0xbd363a8b, 
    0xbdacf521, 0xbe711ce8, 0xbe140944, 0x3e17534f, 0x3c5491fd, 0xbda02a14, 0xbe21b6cb, 0xbe1e2ea6, 
    0xbd93bd9f, 0xbdb5142b, 0x3d85a89d, 0xbd640f54, 0xbd931b1c, 0xbd56ad5c, 0xbc8359e8, 0xbe4ad3ba, 
    0x3cdd8ecd, 0xbe1088d2, 0xbd014566, 0xbd18dc0a, 0x3d8cf67b, 0x3c1184a3, 0x3bf9757d, 0x3c6be3e4, 
    0x3c506ba8, 0xbd2fbe3c, 0xbd1ef458, 0xbd9015e0, 0x3dad0f5f, 0xbd981681, 0xbccb86cd, 0xbe0e47d7, 
    0xbd6a303e, 0xbe55b76d, 0xbe760255, 0x3e6c02d8, 0xbd40cd6e, 0x3d1d83fd, 0xbd9b6b10, 0xbdd112a5, 
    0xbe07263d, 0xbe51e232, 0xbd05257f, 0xbad1a1b7, 0xbd460baf, 0x3d957381, 0xbd8e2cf4, 0xbe4097a5, 
    0xbbdb411c, 0xbdea76ff, 0xbcb1b6dc, 0xb8ddfa40, 0x3d7e24fa, 0x3d85a437, 0xbc759e36, 0xbd5e1fba, 
    0xbd20d5f8, 0xbd44889b, 0xbdadf9a4, 0xbd89ca51, 0x3dcb4fa6, 0xbd8d9cc4, 0x3d4013ea, 0xbdeb8eab, 
    0xbe220ca8, 0x3e6a2bfa, 0x3dccc280, 0xbd4cbd31, 0xbcf0745e, 0x3da9c36b, 0xbc3753db, 0xbc786c52, 
    0xbd6eff90, 0xbdb0ec1d, 0xbe1c4d67, 0x3e20a47c, 0xbdd35e91, 0xbd237438, 0x3d69e6a3, 0xbd2abe96, 
    0x3deb422a, 0xbe66e3c4, 0xbd9e2779, 0xbc1f9475, 0xbd7e0074, 0xbd13d9cb, 0x3d15aed7, 0xbcd30587, 
    0xbe4b7323, 0xbdd1ab37, 0x3d9be402, 0x3c472723, 0xbcf2bfa0, 0xbca68e18, 0xbdab1b4b, 0x3c7cb99e, 
    0xbe234cdb, 0x3e9699f2, 0x3de104d7, 0xbda95ee2, 0xbdde8ba7, 0x3e80256e, 0xbd4b247e, 0xbdb00853, 
    0x3aacaafb, 0xbdfa63c2, 0xbe27ab44, 0x3deaa814, 0xbd5210c4, 0xbd6a4b61, 0xbd2bee5e, 0xbd7c92aa, 
    0x3e1028a2, 0xbe8a4264, 0x3c118ac4, 0xbe0799ec, 0xbca23d02, 0xbc85ad38, 0x3e029fc1, 0x3bcb5ec2, 
    0xbeaa61ef, 0xbdf04773, 0x3e92c7d1, 0x3cbd1a5c, 0xbd0ed45b, 0xbdf98bd9, 0xbb68c3e9, 0x3c32052f, 
    0xbda30ae8, 0x3e2d772c, 0xbd8e6c86, 0xbd13ef15, 0x3d7e0a8a, 0x3e22459e, 0xbdd22c0d, 0xbcf7adbe, 
    0xbc31e885, 0xbe06c096, 0xbd8542f4, 0xbe6c1440, 0xbdd1c83b, 0xbda49d8d, 0xbd8759cf, 0xbe0c3276, 
    0x3dd31130, 0xbe8ec145, 0x3c0ce2cb, 0xbe55f52b, 0x3c65d060, 0x3b77ec6a, 0x3dc74850, 0x3b85c121, 
    0xbeac0a94, 0xbe28f9db, 0x3e4833a7, 0xbd00bbae, 0xbd82d095, 0x3d5682a3, 0x3dc622a3, 0xbc274e28, 
    0x3cbaeacd, 0xbbd65363, 0xbd9adc36, 0x3b857152, 0xbe32ba73, 0x3d4cfc96, 0xbd761517, 0xbddd593d, 
    0x3daba722, 0xbd6b9400, 0x3eaa9b81, 0x3e65035c, 0xbe216503, 0xbd73c80f, 0x3f17c452, 0xbc231e29, 
    0x3dc183d2, 0x3dd1e51f, 0x3da2651b, 0x3e337847, 0x3e47108b, 0x3b1162e0, 0x3e7d4195, 0x3e68848f, 
    0xbb93c0e1, 0xbe2050d6, 0x3a9fabd4, 0x3d79c665, 0xb9e641e5, 0xbe26c699, 0xbc960e95, 0x3c8fb5cc, 
    0x3d6ca818, 0xbd9880f8, 0xbdd28026, 0xbcbc7f90, 0xbdaa0bcc, 0xbdc4c956, 0xbc10cdc0, 0xbd4f13b7, 
    0x3e9035a3, 0xbca5fb50, 0x3e60d3ec, 0x3c1f2926, 0xbe0cd165, 0xbc993ebe, 0x3eed4698, 0xbd13f23f, 
    0xbde71562, 0x3d26e546, 0xbda3c052, 0xbdee4613, 0x3e8ec652, 0x3d8fa4b5, 0x3e456204, 0x3e7a3a2b, 
    0x3d7d7792, 0xbdac6754, 0xbdf66897, 0x3e21db5a, 0xbcec92fe, 0xbdb46a2d, 0xbdce98f6, 0x3d542ceb, 
    0xbcf06fcf, 0xbe25f2b2, 0x3d649068, 0xbdb7524f, 0x3d4b5fc0, 0xbbd603e4, 0x3d84fab2, 0xbd823044, 
    0x3dda2053, 0xbd3776ed, 0x3f204ab9, 0xbdff7380, 0xbd8b1a77, 0xbd9f9c8f, 0x3ecee8c4, 0xbd3aefb3, 
    0xbddf828f, 0x3de9ef77, 0xbe1451e5, 0xbe24cb6b, 0x3e11e960, 0x3e461334, 0x3e5a47fd, 0x3ee1ca44, 
    0xbe36c1db, 0x3de382f3, 0x3daec162, 0x3ce24327, 0xbd271f86, 0xbcf4fee1, 0xbe2cecf5, 0x3d033323, 
    0x3e9216e5, 0x3d846a04, 0x3d9acd11, 0x3e13e789, 0xbe208b9e, 0xbdb3b8b0, 0xbcf6efaf, 0xbc173170, 
    0x3d152cb6, 0xbde1ed1a, 0x3e8df7be, 0x3df9bb82, 0xbdd85dfa, 0x3bb45f73, 0x3ed57f25, 0x3d71796b, 
    0x3db3cfa4, 0x3d5ad452, 0x3e128826, 0x3eb9e6d7, 0xbd0e5e83, 0x3bcc0798, 0x3e7ed8e0, 0x3e0bfc75, 
    0xbd98de24, 0xbe05ad87, 0x3ca235a7, 0xbba3e220, 0xbda58c61, 0xbe8dba6f, 0x3e44c043, 0xbd753324, 
    0x3ebf23c8, 0xbe48ead7, 0xbde0e187, 0x3e81b737, 0xbdaadef2, 0x3cfc18df, 0xbd1d27d2, 0xbe35f160, 
    0x3e2425f4, 0x3cea4306, 0x3ea0c019, 0xbdbee9b4, 0xbdae8da3, 0xbdc9a6d3, 0x3ec2d4fe, 0x3d507f3f, 
    0x3d1e1972, 0xbb545281, 0xbe30b1a2, 0x3e14eb96, 0x3caffaf9, 0xbd8fc723, 0x3e8c545b, 0x3e73ac9b, 
    0x3cae9225, 0x3e3b5203, 0xbd253237, 0x3e465bdb, 0xbcb1855f, 0xbdb54bc5, 0xbc73d7eb, 0x3c14a08a, 
    0x3e1b5a4e, 0xbe5667f8, 0x3e536a09, 0x3d7b4534, 0xbd728028, 0x3dac257a, 0xb91f7f81, 0xbcbae9f0, 
    0xbcaf12bd, 0xbc563839, 0x3f05d3a2, 0xbd60d66b, 0x3e087057, 0xbc14e4b4, 0x3ecb4812, 0xbdac4d0a, 
    0x3d4ae7eb, 0xbc4c667f, 0xbd3944bb, 0xbd80ff92, 0x3c735275, 0xbdc5ce86, 0x3e7a5732, 0x3e019008, 
    0xbe3e2413, 0x3d60de7e, 0x3e8003a1, 0xbea067e8, 0xbc710f0a, 0xbc33f379, 0x3e24ce92, 0xbd11d421, 
    0x3dca2436, 0xbe3ad19c, 0x3de8c43b, 0xbdae2f55, 0x3a061c97, 0xbd7b1b6c, 0xbd12f271, 0x3c9a934b, 
    0x3de0f108, 0x3d34ae17, 0xbcfa6817, 0xbd5f1e7e, 0x3cbd01e6, 0xbd853f5c, 0x3e2ce97f, 0xbd17bba0, 
    0x3d98e7dd, 0x3cd1e309, 0xbdf14c42, 0x3d2a1ad0, 0x3ddd341b, 0xbdf8cdfd, 0x3d894cad, 0x3dae1c27, 
    0xbc100e75, 0xbd851ad2, 0xbd98dffe, 0x3e05ec5b, 0xbd874b12, 0xbe1c483a, 0xbdeb1d37, 0x3e085361, 
    0x3d281207, 0xbe313d0e, 0x3e116db5, 0xbe31b2f3, 0x3c3ad0f5, 0xbd749d2a, 0xbd27f0e7, 0xbbc57307, 
    0x3dd2bb35, 0x3d9f1d69, 0x3c9a12bd, 0xbd8b452a, 0x3cc756da, 0xbd4cf864, 0x3cd6638f, 0xbcc95d28, 
    0x3d3508b6, 0xbd928848, 0xbe663328, 0xbd8aa16f, 0x3cad68cd, 0xbe51c961, 0x3e04315f, 0x3d9b06e2, 
    0x3d80dfcd, 0x3bdc88a4, 0xbd326624, 0x3dbd968e, 0xbe3e9708, 0xbda71428, 0xbe425253, 0x3da845b0, 
    0x3bcf3077, 0xbda84ec4, 0x3e8a5e85, 0xbca907a3, 0xbd2bf86c, 0x3d1d197d, 0xbdef35a2, 0x3cceb6b9, 
    0x3de678be, 0x3d18bf30, 0xbc771aa9, 0x3e9429bc, 0x3c255115, 0xbcd6a533, 0x3e160ec9, 0xbd4c1df0, 
    0x3d33f302, 0xbd6c0066, 0x3c94f6b0, 0xbc78ad12, 0x3ddd9a91, 0xbe75419b, 0x3dac050f, 0x3dc252c0, 
    0x3d5435ec, 0xbd12ae38, 0x3d8ac12e, 0xbe3d1fe5, 0xbd9726f4, 0xbd8d3a54, 0xbcb72320, 0xbcc12464, 
    0x3ce6b4f5, 0x3ce8fbd4, 0x3e6f68a8, 0xbd61ae50, 0x3b4ef067, 0x3e2a455b, 0x3cbadb32, 0x3c937f93, 
    0x3d89a93e, 0xbda881a7, 0xbdae3a42, 0x3e092d80, 0xbd1b94c8, 0xbdc0905a, 0xbcd74332, 0xbca828ec, 
    0xbd17428b, 0xbc8c1e65, 0xbe48ae3a, 0xbcd385c5, 0x3d7826f9, 0xbdf3e5ca, 0x3dd44503, 0x3d8a7faa, 
    0xbd9ae1cf, 0xbd3e1592, 0xbcdbaa4c, 0xbdef193b, 0xbc1369c6, 0xbe598d99, 0x3c7a90d4, 0x3df7fda5, 
    0x3d31e47f, 0x3e7a9287, 0x3ea6d842, 0x3c92f097, 0xbcd344ce, 0x3db21aae, 0xbdb12df3, 0x3e0898a3, 
    0x3daced0b, 0xbd82ce71, 0xbe267b32, 0x3eafe8e1, 0xbda91642, 0x3e5df4c9, 0x3d85b4dd, 0xbe1617aa, 
    0xbca71a66, 0xbda9a962, 0xbd9b4a22, 0xbd420e16, 0xbd3aa08a, 0xbd658f83, 0x3e0baa9c, 0x3e543010, 
    0xbe34ce43, 0xbd132cad, 0x3e9b9b5b, 0xbd885c54, 0x3d9de11c, 0xbdcd17be, 0x3d422e39, 0x3d9a13e2, 
    0xbd4eedf5, 0x3e162da8, 0x3e16fbad, 0xbd1de24c, 0x3bbac3d8, 0x3d8aaaff, 0xbcbd7169, 0x3d3022bd, 
    0x3d85291f, 0xbcff3c21, 0x3cf9cb36, 0xbe12bcbf, 0x3da482a5, 0x3ccfb2bf, 0x3bd1a24d, 0xbde7b8fd, 
    0xbdab6cac, 0xbd98c06c, 0x3d518f92, 0xbde792ff, 0x3d7993b5, 0x3d840f9b, 0x3d8de3fe, 0x3d5bf1a9, 
    0xbe5b4ec4, 0xbe54d53d, 0x3ddb8ca9, 0xbcddf5c0, 0x3d2c8735, 0x3d435741, 0x3dc29cfa, 0x3d3697c3, 
    0xbcfa095b, 0x3b2711a2, 0x3d8707d7, 0xbd53dee6, 0xbd39224a, 0xbd74e548, 0x3d4212d8, 0x3d1b9a89, 
    0xbd833429, 0x3d28314f, 0x3dbc53e9, 0x3e1b0d82, 0x3bd2d656, 0x3deebc31, 0x3db17754, 0xbd1a4fe6, 
    0xbda80b1c, 0x3e3fb47d, 0xbda4d536, 0x3cafd3d3, 0xbd03fd04, 0xbcd23847, 0xbd2323db, 0x3cc6929f, 
    0xbc14b1b3, 0xbd5d6e50, 0x3d8ec631, 0xbe0297b4, 0xbda615f0, 0xbd9b7a54, 0x3cabee14, 0x3b2f9abd, 
    0xbaf75eb0, 0xbc21f604, 0xbd8fb84a, 0xbd9100a7, 0xbae0f6bb, 0xbd937073, 0x3d7eea56, 0x3b8302bb, 
    0xbc76727e, 0x3d3efb40, 0x3cb3f647, 0x3d684568, 0x3a058a13, 0x3cf1365b, 0x3db27cd1, 0xbc17a967, 
    0xbdc9583d, 0x3e34470d, 0xbda8485a, 0x3df25a71, 0xbd1ec60f, 0x3c311e88, 0xbd1e6e4c, 0xbba0a53d, 
    0x3bcd5288, 0xbcb08aa2, 0xbe65c79d, 0xbcc33d21, 0xbc7f693c, 0xbda41f39, 0xbd98e74b, 0x3b8f029a, 
    0x3d2fff1f, 0xbc061914, 0xbdd041c5, 0x3b25e0bc, 0x3c965389, 0xbe319ff5, 0x3df29ed4, 0x3b2078f4, 
    0xbc7e7c4f, 0xbca218a2, 0x3da7aeaf, 0x3db85e56, 0xbc74d75d, 0x3cc7bb14, 0x3d9ebfa6, 0x3d0ac40d, 
    0xbd75c8eb, 0x3e6c4826, 0x3c80e331, 0x3e2b7f37, 0x3bebc244, 0x3d3c740e, 0x3913d2b4, 0x3d48dde6, 
    0x3d3a38e4, 0x387871ef, 0xbdd0bf23, 0xbdc70aa6, 0xbc1652d1, 0xbdbfd3cf, 0x3d292dc1, 0xbd358282, 
    0x3d681fa9, 0xbd985008, 0x3d6ce879, 0x3cb4d177, 0x3e840678, 0xbe005d6b, 0x3d54ff9a, 0xbe5f9455, 
    0x3e652071, 0x3cdc5f54, 0x3df89297, 0xbd7c7d80, 0xbe56245f, 0xbe1a3db0, 0x3e04dddd, 0x3d7a11eb, 
    0xbe11f833, 0x3ce00c00, 0xbe63f79c, 0x3cfc6c7a, 0x3e330cb3, 0xbbdda56f, 0x3e5739d8, 0x3d704293, 
    0x3ea07314, 0x3e18475e, 0xbe58a525, 0xbdae6fc5, 0x3e523b4a, 0xbdf97411, 0x3d3b8f0f, 0xbdf06e3c, 
    0x3d2607c2, 0xbe0bb59f, 0xbd05bf8f, 0xbdc1d73e, 0x3e85aecc, 0xbe28b156, 0xbc1a2d9d, 0xbe4d975e, 
    0x3e3643a6, 0x3c8851bf, 0x3d7d2ced, 0xbd574b0f, 0xbe653b37, 0xbe13c777, 0x3daeccfa, 0x3dca7981, 
    0xbe183f12, 0x3bcacad2, 0xbeb4ccc1, 0x3d1b5c9b, 0x3e4f2d57, 0x3cd8e2f5, 0x3d261f75, 0xbc011f89, 
    0x3e382558, 0x3dc4f5ea, 0xbe85caad, 0xbd8e1491, 0x3dbd6a7d, 0xbe539359, 0xbda2a2b0, 0x3c21e3f9, 
    0x3d9ea2b0, 0xbd975286, 0x3d8b6387, 0xbd26f23c, 0x3eb9c927, 0xbdfa434f, 0xbcc61330, 0xbe8e407f, 
    0x3e887465, 0xbdee93eb, 0x3de833d9, 0xbdf3fe64, 0xbe590ef4, 0xbe07b446, 0x3df60381, 0x3d6253b8, 
    0xbe178c25, 0xbc27ad8c, 0xbebfc1ca, 0x3d3d0bd7, 0x3df4be33, 0x3b86639b, 0x3e0ce307, 0x3c951cb8, 
    0x3e2d6aaa, 0x3e5e9c9f, 0xbe641e94, 0xbc54d197, 0x3e012a0a, 0xbe6e9491, 0x3d9ad845, 0xbe11b5bd, 
    0x3d8a2ca3, 0x3dbe0bb4, 0x3e0d2334, 0xbd3b7e70, 0x3e737afe, 0xbdf17c41, 0x3afd040e, 0xbe5d9c95, 
    0x3dfb6222, 0x3d4aa81b, 0xbb9a70fb, 0x3df0a032, 0xbe77e7a5, 0xbe07e3c6, 0xbda41235, 0xbd784477, 
    0xbd9edf18, 0xbce9f39b, 0xbe96eeac, 0xbc6b43f4, 0x3e1b872d, 0xbde16caf, 0x3d4a0709, 0xbd991d0c, 
    0x3e253ad5, 0x3dfef429, 0x3d8b9216, 0xbb97396f, 0x3d724246, 0xbe980594, 0x3d6c07b6, 0x3d816749, 
    0x3d2ede2c, 0x3da41936, 0x3d34b883, 0xbcf54d37, 0x3e54aeb9, 0xbe24ad12, 0xbadcdc6b, 0xbe6553c6, 
    0x3ddfca7d, 0xbced531b, 0xbd9613bd, 0x3d8f7687, 0xbe8a0e2f, 0xbe7d6b7a, 0xbd813328, 0xbcc35868, 
    0xbdd1d762, 0xbd8f69e5, 0xbea9ba1b, 0xbd1792cd, 0x3cc3cbfc, 0xbd86b3ff, 0x3b7d1bd2, 0xbc49cedd, 
    0x3d8d35d8, 0xbd7037e2, 0xbbbd75d5, 0xbd2e84de, 0xbd041abe, 0xbe9678cd, 0x3ccb3167, 0xbdb58cad, 
    0x3c996545, 0x3db6921e, 0xbd50dd72, 0x3ca80d08, 0x3e3cea25, 0xbe418e59, 0x3bde1770, 0xbe856026, 
    0x3d9b5758, 0xbe799e60, 0xbdfa8a72, 0xbac666e1, 0xbe9b01b9, 0xbe261fab, 0xbd9c9f93, 0x3c866ac1, 
    0xbd2a166e, 0xbd9273a7, 0xbe6b253f, 0x3d398ecb, 0x3d2e60f3, 0xbd1b04ba, 0x3b582527, 0xbe0ed2ff, 
    0x3d4d6a7e, 0xbd9de605, 0xbdf53e52, 0xbde63aa3, 0x3d8647b7, 0xbe6087fc, 0x3b6186ab, 0xbde2e669, 
    0xbd87a9c7, 0x3cb818c2, 0x3b907e7c, 0x3d722961, 0x3e209a86, 0x3e04a38c, 0x3d99e293, 0x3e0ffcfe, 
    0x3dc92e9b, 0xbc8c7f6a, 0x3d578240, 0x3d5ef96e, 0x3e72231c, 0x3eb7d6da, 0x3b5704fd, 0x3de74596, 
    0xbe019497, 0xbd624ee2, 0xbe3fd327, 0xbe15c136, 0x3da7bb37, 0x3ef095ee, 0xbe06fcb5, 0xbd522e50, 
    0xbd495b85, 0xbe34fa75, 0x3d7d1d7f, 0xbe0edca2, 0x3c8d4e5e, 0x3e9ea9e3, 0x3d971bef, 0x3ddcb092, 
    0xbda7be4c, 0xbd3fd2c6, 0xbd64f7b8, 0x3d90c582, 0x3e385509, 0x3c958c14, 0x3d54c1aa, 0x3d4dbbbd, 
    0x3e2ca767, 0xbe0fee65, 0xbd83a6cb, 0x3da63e32, 0x3d4c1eb6, 0xbb64d798, 0xbdb1798d, 0x3dc50f35, 
    0xbd3bdeac, 0x3d855f3a, 0xbdf96641, 0xbbd6319f, 0x3e20841e, 0x3ee48cfc, 0xbd527237, 0xbd97b721, 
    0xbdaf5297, 0xbe57c41a, 0x3cd56ebf, 0xbcb9d164, 0x3d4f40db, 0x3e92191f, 0x3d20bd53, 0x3e16f181, 
    0xbd57bc22, 0xbe2dfe24, 0xbce52021, 0x3df729fc, 0x3e45fb85, 0x3d85e524, 0x3d22e16d, 0x3bdee0bb, 
    0x3da37cf9, 0xbe153a3d, 0xbc2143f0, 0xbc5f373b, 0xbd871ba4, 0xbdbd4f69, 0xbdc0ef86, 0x3de65f2a, 
    0xbbffdc25, 0xbc964725, 0xbca0d56f, 0xbe4dc2bf, 0x3d7e6f18, 0x3ebe0026, 0xbe22b7f8, 0xbcf5ee45, 
    0xbe293c5f, 0xbd2b1240, 0x3de35a18, 0xbdf1288e, 0x3e0e44e5, 0x3dca4c74, 0x3da78985, 0x3d39f9a2, 
    0x3dae9d65, 0xbdf4488d, 0x3d8a56f4, 0x3d83b258, 0xbd50598c, 0x3cc92475, 0xbcc9ca65, 0xbd5a6977, 
    0x3e193281, 0xbd86497e, 0x3e8b8806, 0x3d73e850, 0xbdf37dfd, 0xbdb771a2, 0x3ee24d79, 0x3c376c55, 
    0xbe523c1a, 0x3d94f41c, 0x3bbab65e, 0x3d748be0, 0x3e1bec67, 0x3d256549, 0x3e967af0, 0x3e985551, 
    0x3cac33c6, 0xbc9b9a61, 0xbdc0e819, 0xbdb27610, 0xbde94c6b, 0xbccda0ad, 0xbd8ce5ee, 0x3d3edee1, 
    0xbd865ef2, 0xbe4de63d, 0xbcbe35ae, 0xbd8d977d, 0x3db826be, 0xbd84857a, 0xbd736104, 0xbc3ff1b7, 
    0x3e2fa2b5, 0x3ddf1fba, 0x3e2f0352, 0xbe03a446, 0xbd64d5b7, 0xbc874a58, 0x3eb1cb91, 0xbd149655, 
    0xbe24c62c, 0x3da31de1, 0xbdb1eb57, 0xbbab15e9, 0x3e460469, 0xbd921f54, 0x3eb32d39, 0x3e931dac, 
    0x3cec9606, 0x3e24986b, 0xbd58e965, 0x3e5ccfa2, 0xbdb7bd41, 0xbd279856, 0xbe0704a2, 0x3e5abe9a, 
    0xbdfd96fe, 0xbc2564c7, 0x3e345a9e, 0xbd20a1db, 0x3e06f81d, 0x3d305e32, 0xbd7858c3, 0xbd60f3c8, 
    0x3de275cd, 0xb8f4c25e, 0x3e8151f5, 0x3e4553c9, 0x3dbd880c, 0xbe20be69, 0x3eb779b5, 0x3df11ecf, 
    0xbda1f069, 0xba08496f, 0x3d4e42f0, 0xbe2d799d, 0x3df5bcb3, 0xbbf45d9b, 0x3e4baa34, 0x3e6245cb, 
    0x3c9cc454, 0x3d4c5703, 0x3e0e1009, 0xbea2a12d, 0x3cc7d353, 0xbde06060, 0x3de99cad, 0x3d8bb090, 
    0xbd056bf4, 0x3e42d3b8, 0x3e15b0c5, 0xbda0a0f8, 0x3df00cfa, 0x3ce0eedb, 0x3cf706ff, 0xbc41dca4, 
    0x3d3915b5, 0x3dfa2a76, 0xbd9e02a0, 0xbd9a83b1, 0x3d28911f, 0xbd776a70, 0x3b4298c1, 0x3d488cae, 
    0xbca1bc18, 0x3c8ed850, 0xbd6e373c, 0x3cbf4d5b, 0xbc46c9b8, 0xb9e02293, 0xbcdb67ee, 0xbd5090aa, 
    0x3d502dd0, 0x3ce23931, 0x3d5ceb74, 0x3d3a44ae, 0x3d1df567, 0xbd390129, 0x3db5eaa1, 0x3da9ed73, 
    0xbc1db99c, 0x3e2638d5, 0x3e0ce3cd, 0xbdd11fb6, 0x3dee25bd, 0x3c783971, 0x3d8afe5d, 0xbd9a7b10, 
    0x3d55c224, 0x3d51e993, 0xbdb0ad6f, 0x3c3dfda6, 0xbb3326a0, 0xbd6db6b7, 0x3d5bf648, 0x3d976dbd, 
    0xbd299793, 0x3c2e1d53, 0xbce96015, 0x3dbd28e2, 0xbc977fef, 0xbc6dfe00, 0xbca960e9, 0xbd04f6f5, 
    0x3c672250, 0xbd02e439, 0x3d2fc6df, 0x3ced9911, 0x3bd1a6de, 0xbdf3aef8, 0x3e008020, 0x3dea9d45, 
    0xbbdf4e98, 0x3dc1f6ce, 0x3df138ab, 0xbd84d22c, 0x3dda91c6, 0x3d1d5bc0, 0x3d376687, 0xbd357593, 
    0x3dc511d9, 0xbb6c02c8, 0xbcb07016, 0xbd45c7b5, 0xbbd62043, 0xbd8a813f, 0x3c2fcc3a, 0x3d7a757a, 
    0xbc5caa6e, 0xbc6a18ee, 0xbd3ff598, 0x3d4e243b, 0x3c55c0e0, 0xbc66316c, 0x3cfe15b2, 0xbd5bd822, 
    0x3cb588aa, 0x3d4519c9, 0xbb355841, 0x3d35b12f, 0x3d7146f0, 0xbcf59f16, 0x3d5a8439, 0x3dbaf3a6, 
    0xbaa6553a, 0x3da42069, 0xbe01589e, 0x3da25f56, 0x3dd2a2b7, 0xbe132a4c, 0x3cf9bd8e, 0xbd86fa51, 
    0x3daddc57, 0xbdbebca5, 0x3de53848, 0xbddb0188, 0x3e05fd83, 0x3d3a1b11, 0x3e8d6e7b, 0x3e0b96a8, 
    0xbba01e56, 0xbe730aa0, 0xbe022e5f, 0x3ddd4b85, 0xbe2ea4f9, 0xbdb58984, 0x3e88edc7, 0x3d3938f9, 
    0xbe15b1ca, 0x3d984e8a, 0xbd70ef81, 0xbdb8f25d, 0x3e9f1bc0, 0xbd8f2b09, 0xbd4c3b43, 0xbc32153b, 
    0x3e0c7938, 0x3d4331bb, 0xbe2b23a2, 0x3e571038, 0x3e09c57f, 0x3d4ae422, 0x3cedd795, 0xbe05ad87, 
    0x3d812650, 0xbe158f30, 0x3c2ff57b, 0xbe20c325, 0x3da3e3f9, 0xbda24a14, 0x3db0f075, 0xbbe9f956, 
    0x3ce9f431, 0xbe6577a5, 0xbe1d9bc0, 0x3de02dcd, 0xbdbf547e, 0x3cb54eca, 0x3e73c450, 0xbcc3bde2, 
    0xbe1f863d, 0x3c4a93f1, 0xbd9dfc5d, 0xbc02f496, 0x3f1416e6, 0xbd930526, 0x3da4905d, 0x3d371bc2, 
    0x3b607557, 0x3e5cf12f, 0xbd4754f8, 0x3e80ca83, 0x3e3ad5d5, 0xbdd34f0c, 0xbc33e98d, 0xbe17b047, 
    0x3e26daab, 0x3b49d47b, 0x3e76fe56, 0xbecb1407, 0x3cacee23, 0x3e57fcb7, 0x3e17d60a, 0xbcd244da, 
    0x3d2e945b, 0xbe59ffc1, 0x3b6b75a3, 0xbc47ff4b, 0xbe014dfc, 0xbd78e5b2, 0x3ea73387, 0x3d1fb134, 
    0xbe49de01, 0xbc71e2a4, 0x3ddd479d, 0xbe408dbc, 0x3ed82641, 0xbcbd5ffb, 0x3e17d6da, 0xbe00e982, 
    0x3da7308e, 0xbd77c0a5, 0xbe04a106, 0x3cf48403, 0xbd076ac0, 0xbdd1c1a7, 0xbc70011e, 0xbca26fa7, 
    0x3d434db0, 0xbe1a5f5e, 0x3e2ba052, 0x3ceb5452, 0xbda81bc7, 0x3d4400a9, 0x3cdbaedf, 0xbd9abeb5, 
    0xbe01fc0f, 0x3c974e62, 0x3d0a006f, 0x3cee1609, 0x3d8c66d9, 0x3d346930, 0xb9f210ef, 0x3da4afc7, 
    0xbd6fed3c, 0xbb8a5162, 0xbd6fcf9d, 0xbd6080d6, 0xbcd2c74a, 0xbd2bb6a3, 0xbca2e0eb, 0xbd3534b0, 
    0x3d39078e, 0xbda09183, 0xbdf9f55d, 0xbcc5274d, 0xbb2f7b8a, 0xbd504a89, 0x3d516f94, 0xbd35596a, 
    0x3c13cb11, 0xbdc35e37, 0x3da638ad, 0xbd9ecb02, 0xbb4bc107, 0xbdd0188d, 0xbb89ff94, 0xbd255789, 
    0xbe5e08da, 0x3df2fcec, 0xbc674a8d, 0x3c9bfd56, 0x3a1e2473, 0x3d20fc3e, 0xbc1ab887, 0x3d2b60f8, 
    0xbdb2ea1f, 0x3c8e2e2a, 0xbe39e6e3, 0xbe18b2c6, 0xbc6d10ea, 0xbd036c9d, 0xbd434746, 0xbdb62b68, 
    0x3d0d1157, 0xbda35c15, 0xbdcb84d0, 0xbd953334, 0xbcf14bd3, 0xbe23a329, 0x3c666a19, 0xbdade773, 
    0xb99d97a7, 0xbe31f6cc, 0x3d93a967, 0x3b32d7e9, 0xbd3b72f0, 0xbe2e337f, 0x3d107777, 0xbc9f33fa, 
    0xbe681727, 0x3dc65390, 0xbd147058, 0x3d2bdd48, 0x3b668e04, 0x3d89e64b, 0x3aa97b1f, 0x3d23f594, 
    0xbde74916, 0x3d3ee44d, 0xbe5c17c1, 0xbda8979c, 0xbcfb621d, 0xbda33594, 0x3d7cb305, 0xbd833fbb, 
    0x3df5a0b2, 0xbd3d2792, 0x3d2ec3e7, 0xbdd40cb7, 0xbc23afae, 0xbda3b512, 0xbc9ba91d, 0x3d530784, 
    0x3dcb672c, 0x3c7c875b, 0xbce47c14, 0xbd87e3e4, 0xbcdca2b7, 0xbc0ba722, 0x3dafa426, 0xbc9c7fcb, 
    0x3d315da8, 0x3dc0d8ae, 0x3e0139a9, 0x3dea56a4, 0x3ce45e08, 0xbce8b7a3, 0x3d7a0471, 0x3dad3c37, 
    0xbd30a0cf, 0xbd9cef66, 0x3c788138, 0xbe432195, 0xbd26afcc, 0xbc9e3922, 0x3be14ce6, 0x3d59b522, 
    0x3d863926, 0xbe3691db, 0xbd37d028, 0xbda06856, 0xbd84f6ec, 0xbd8727cf, 0xbe2863b3, 0x3bac83a8, 
    0x3df6477b, 0xbc75886b, 0xba67356e, 0xbe4c41cf, 0x3d0c7fd3, 0x3d13d1c6, 0x3dd6a9eb, 0xbc8be253, 
    0xbd19de3b, 0x3ce04e27, 0xbdfbb08f, 0x3c21e681, 0x3d5f79a0, 0xbdae20c2, 0x3dd6ba00, 0x3dd43a27, 
    0xbcd8475f, 0xbd61099e, 0xbe0133b5, 0x3e711b3c, 0xbd55c1e4, 0xbd9a1a9b, 0xbe163de6, 0x3e81d44d, 
    0x3d31a9ed, 0xbe056e7b, 0x3e3237e2, 0xbdc223de, 0x3caf862d, 0x3dd416fe, 0xbe44726b, 0xbb6a7be4, 
    0x3d13d6e8, 0x3de9b37b, 0x3e0d8b77, 0x3e1cef3b, 0x3d73bd0c, 0x3d544f1d, 0x3dd99fbc, 0xbdcf6b5b, 
    0x3d89078d, 0xbd6af5e0, 0xbe49af25, 0xbe2ebcef, 0xbd0b3e7f, 0xbe30b274, 0x3dd9f123, 0x3dd8aee0, 
    0xbcff58b9, 0x3de3fb94, 0x3d785dd6, 0x3de47d59, 0xbd805f9b, 0xbd99dec7, 0xbd9b47d0, 0x3e9597c4, 
    0x3deb042f, 0xbd3ed068, 0x3ca00186, 0xbe253c8a, 0xbe30800e, 0x3d8e1619, 0x3e3563bb, 0xbde1039d, 
    0xbd40ca20, 0xbe818523, 0x3e2d963a, 0xbe446fc8, 0xbe2cf0a5, 0xbe9e84ef, 0x3cd633f9, 0xbcbbbb91, 
    0x3b86038e, 0xbdad0bb1, 0x3e37d8e0, 0x3e7a5e7e, 0xbdbab5e5, 0x3e06d03f, 0x3dbcd13a, 0x3def9bf0, 
    0xbe9cc086, 0x3ddc9cad, 0xbcfb1f0e, 0xbddac70c, 0xbe1b0be4, 0xbe4ebefb, 0x3df2d534, 0x3e8e37f0, 
    0xbc3fee3c, 0xbe91d0a9, 0xbdf35d44, 0xbdfd7a2c, 0xbdfbfb8a, 0x3d938e40, 0xbe94e1c9, 0xbdef7ebe, 
    0x3a779285, 0x3e284735, 0x3ea8046b, 0xbe2cd0bc, 0xbe31cd06, 0xbe88acbf, 0x3cc2fd90, 0xbe6356a2, 
    0xbdf3b928, 0xbe1feb6b, 0xbdc5301e, 0x3e424fa3, 0xbe2eda47, 0xbe3daef6, 0x3e0e4a9b, 0x3e6c1312, 
    0xbe4f56e4, 0x3dcae607, 0xbe07474d, 0x3f479ef0, 0xbe0ae80b, 0xbd81c520, 0xbe02ec6e, 0x3dfbdc8a, 
    0xbceec6f3, 0x3d5b4d23, 0xbd473a30, 0xbd392e2d, 0x3d677942, 0xbb18118c, 0xbdde8998, 0x3d7ca069, 
    0xbc067abf, 0x3de8cf39, 0x3c67522c, 0x3ee7f955, 0x3dec2bf0, 0x3ddfe799, 0x3da39b25, 0x3e23a1b4, 
    0x3d26acf0, 0xbe7359c9, 0x3c9f3d51, 0xbea28ff5, 0x3d87323a, 0xbdcafdc7, 0x3e090a52, 0xbc0bc875, 
    0xbe2145cb, 0x3d88ae24, 0x3e99305d, 0xbf1c30a1, 0x3ce39187, 0x3e6fd827, 0x3ee249d2, 0xbe1a76da, 
    0xbdc941f2, 0xbd18d76d, 0x3cf5426a, 0xbd37c2e3, 0x3de15ddb, 0x3d7e8241, 0x3d79c740, 0x3e7a4375, 
    0x3d5399cf, 0x3d92bf2d, 0x3d2dafe0, 0x3cc296b2, 0x3e0e968b, 0x3ea3af1e, 0xbd155983, 0x3d3f7b0f, 
    0xbc2b488d, 0x3d3705c7, 0xbd360a8f, 0x3e0d3c49, 0xbdeccfd3, 0x3925ca79, 0xbe015bc6, 0xbcb33511, 
    0xbd03d1c4, 0xbcce2574, 0x3a695b3b, 0xb994ebee, 0x3bce8d00, 0x3ced4f8b, 0xbbb4b70c, 0x3d00adf8, 
    0xbe03984a, 0xbc537222, 0x3cbe2ceb, 0xbd8f473d, 0x3d70a038, 0x3d3b7367, 0x3d89b6b8, 0x3e9472b3, 
    0x3cbba497, 0x3d9bb0ec, 0xbc148cd7, 0x3e2ab313, 0x3e0f80dd, 0x3ed43b8a, 0x3cd18072, 0x3cf15068, 
    0x3c390ff7, 0x3e099558, 0x383de39b, 0x3e0c9558, 0xbdba6862, 0xbd1b4bca, 0xbdb54622, 0xbd41d7e7, 
    0x3d637b4d, 0x3be2db46, 0x3d518444, 0xbd8105fc, 0x3d9a5a33, 0x3d4221de, 0xbc0fccf6, 0x3d74077d, 
    0xbd019710, 0xbd427d19, 0x3c7cbc1b, 0xbca928f9, 0x3d0c772f, 0xbc845be4, 0x3c3ad0b7, 0x3e4fb0aa, 
    0x3d0904eb, 0x3da9bfec, 0x3cab3f29, 0xbcc753b6, 0x3e240469, 0x3d5033c0, 0x3d5e3e29, 0x3caaf5a8, 
    0x3bb34518, 0x3de326e1, 0xbd471dbc, 0x3bfa1902, 0xbc6350b2, 0xbd2703ea, 0xbbf6bc27, 0x3db4ac71, 
    0x3d8ec313, 0x3d95c9f5, 0xbe02805b, 0x3d92467d, 0xbc0031d3, 0xbc977fe1, 0xbddb519c, 0x3d81873e, 
    0x3d0b8ae5, 0xbd9b390d, 0x3d7f961c, 0xbca3e901, 0xbc7380fe, 0xbcb1af07, 0xbe158dc8, 0xbdb2b291, 
    0x3d0cb421, 0xbc05d818, 0xbdbcd510, 0xbd180d72, 0x3cdf2686, 0x3c2720aa, 0xbc6d4d93, 0xbe32102b, 
    0x3c09c5c5, 0xbd7a41cd, 0xbe211839, 0xbdd3351c, 0x3df3eac1, 0xbe45385e, 0x3df28dac, 0x3d49aeee, 
    0x3da7a1c4, 0x3d89e533, 0xbd10a3c8, 0x3bbb1807, 0xbd4dba75, 0xbde42c32, 0xbe00a469, 0xbd6e8893, 
    0x3ab93c62, 0xbdffbec2, 0x3d79d55c, 0x3d6c8f59, 0xbd596853, 0xbcda2362, 0xbe16afda, 0xbd0ad739, 
    0xbc218f0d, 0xbd5e4a8d, 0xbdfcffbf, 0x3e0cc58e, 0xbc864665, 0xbdca1b61, 0xbcac2e75, 0xbe76f812, 
    0x3de52d0a, 0xbd4875a7, 0xbd8f4313, 0xbe14fcd5, 0x3d73b93a, 0xbe63f9d0, 0x3d57e716, 0xb9fcfe52, 
    0x3da87118, 0xbccdcbed, 0x3c0d6931, 0xbd0ea1e7, 0xbd9ecfd6, 0xbdb2374a, 0xbe60704c, 0xbd8f598a, 
    0x3bc1f492, 0x3be48d91, 0xbd502a41, 0x3d0b7073, 0xbd8a5bf2, 0xbcf21ff4, 0xbe65ba70, 0xbcb48b2e, 
    0xbd8f776b, 0xbd4ecbe6, 0xbd48f0b9, 0xbb1ddc74, 0xbcb56cfa, 0xbd3ad18c, 0xbd6b2985, 0xbe93b7b5, 
    0x3d91df23, 0xbe1fa3ec, 0x3cf93cf2, 0xbe73085d, 0x3df71db3, 0xbe714676, 0x3df4e3fb, 0x3d86bbda, 
    0xbc4787f6, 0xbd93e503, 0x3db6cbee, 0xbd7507d2, 0x3bfaf054, 0xbd7cf538, 0xbd2caffb, 0xbe7089a5
};

static const uint32_t _K51[] = {
    0x3fc9c06f, 0x3fbeb6e3, 0x3eafa8b9, 0x3f1ae7ee, 0xbed6d50c, 0x3f815508, 0x3f6c7140, 0x3f88ee5c, 
    0x3f0de994, 0xbf22161d, 0xbf154df4, 0xbf82fe78, 0x3dc529ec, 0x3f34ff45, 0x3fa6e524, 0x3f0902ef, 
    0xbf3cc6b2, 0xbf232629, 0x3f4140f0, 0xbf61bfca, 0x3f14c381, 0x3fa992cc, 0x3f88b00b, 0xbf516962, 
    0xbe2ac741, 0xbeb0b914, 0x3f158918, 0x3fc7f3c2, 0x3eb7e23a, 0x3e5ecbe8, 0xbf73a6d0, 0x3fc90a3a
};

static const uint32_t _K57[] = {
    0x3d1cbe64, 0xbea641a4, 0x3ee3241a, 0x3f206268, 0xbe0549ff, 0x3c4ace84, 0x3e80f86e, 0xbe5704e7, 
    0x3e740c68, 0xbd76bc90, 0x3ecfd82f, 0x3f235afd, 0x3e44f2df, 0xbdb8d93b, 0xbef9079b, 0xbef954dc, 
    0x3e50932b, 0x3ee6dc24, 0x3e8146da, 0xbe330014, 0xbdab1dd3, 0x3dc4c940, 0xbdc48ce2, 0x3e299b8c, 
    0x3f2e8a46, 0xbe7df146, 0x3e154327, 0xbe8e882f, 0x3e8c5b44, 0x3e995096, 0x3e17a57e, 0x3c41af09, 
    0x3e71e993, 0x3f04801c, 0x3f064103, 0xbf4c503d, 0x3da05117, 0xbfb79656, 0xbfc82401, 0x3ed81968, 
    0xbea4503d, 0xbedd6e55, 0x3f1571f2, 0x3f0f0851, 0xbf11c172, 0x3e32069e, 0x3f2602d1, 0x3f3a2dab, 
    0xbf6cdf2b, 0x3e3a14c2, 0xbf747617, 0xbed0d2b2, 0xbf40e3d0, 0xbf6aaa66, 0x3d02bac8, 0xbf0ec187, 
    0xbf4e271e, 0xbe79e0d0, 0x3f195c0d, 0xbf6e7543, 0xbf71d61a, 0xbeee3090, 0xbf2cbfa8, 0x3f168d14, 
    0x3e939c8f, 0xbe802830, 0xbed4d9c4, 0xbe9caed6, 0x3dc791c8, 0xbe482b8d, 0x3e65126f, 0x3f1104c6, 
    0x3efc35c4, 0x3eaef266, 0xbeae36a2, 0xbf8dfef9, 0xbfa76892, 0xbf6864ec, 0x3ea2be20, 0xbf070421, 
    0xbf3cbda0, 0xbeec83eb, 0xbd9f49ac, 0xbf6b20b2, 0xbdbfb626, 0x3f532fa0, 0x3f2bc8cd, 0xbf212266, 
    0xbf6cbc3c, 0x3f060d03, 0x3f055169, 0xbec3169f, 0xbf21d96a, 0xbfa32474, 0xbf9a002d, 0xbe5e533a, 
    0xbf2419f2, 0x3ec19784, 0xbf876cde, 0xbeecaad6, 0xbf638011, 0x3edde01e, 0x3d8d7927, 0xbdc2aae4, 
    0x3ec65d29, 0x3c327296, 0xbed4e2df, 0xbee1d188, 0x3e71733c, 0xbe1dcd1a, 0xbe68d110, 0x3ece46a5, 
    0xbf44a167, 0xbf7d3bfa, 0x3ec63d24, 0x3f1e2897, 0xbf89652d, 0x3e4f27e1, 0x3d4a17fd, 0xbf2713cf, 
    0xbe322f64, 0xbd1428ae, 0xbf037a16, 0xbe8d1754, 0x3ea1d708, 0x3ea51fa9, 0xbeb68bba, 0x3f269bae, 
    0xbf2c9032, 0xbf8ef4a8, 0xbd35847b, 0x3ea48f37, 0xbf4cfe6a, 0xbdb03013, 0x3e81f2a3, 0xbff0ca33, 
    0xbfbc7b63, 0xbe159c0b, 0xbea0d08a, 0x3d49cbdf, 0xbf548ef0, 0x3eccf741, 0xbe3123e7, 0xbf176937, 
    0x3eada401, 0x3dee7186, 0x3d939f66, 0xbea976a1, 0x3e80cf4b, 0xbed2c60a, 0xbfe08785, 0xbf2e2c99, 
    0x3eb15264, 0xbf734c4c, 0xbfbb3594, 0xbd502ae2, 0x3e7cce52, 0xbf8630ec, 0x3f20ca62, 0x3e71b8a9, 
    0x3eacd081, 0xbe96f626, 0xbf07d346, 0xbe019ca6, 0x3e8e5d03, 0x3e9864e9, 0xbf1340a4, 0xbf741093, 
    0xbf8c543c, 0xbf227a9f, 0xbf7ef721, 0xbe4e678c, 0xc006ca33, 0x3ea5043e, 0xbdce93bf, 0xbc16ae8c, 
    0xbe09dcf4, 0xbe96d9b7, 0xbf5a9250, 0x3ec3c520, 0x3efc760b, 0xbfc5e399, 0xbe2f656c, 0x3de993d0, 
    0xbf8d5403, 0xbe87cd39, 0xbfc34c96, 0x3ed553b9, 0xbd0019ba, 0xbffc336d, 0x3c8f7cdf, 0xbf1a3645, 
    0xbf701521, 0xbea6d734, 0x3e1697e5, 0xbe0e070c, 0xbe244eff, 0xbe858b5f, 0xbe2f6b78, 0xbf96d666, 
    0xbf74d613, 0xbe2c517e, 0x3e845779, 0xbe84b6ad, 0x3ef36087, 0xbf1d2f67, 0xbfb65ad1, 0xbf2f4651, 
    0x3ec33d4a, 0x3f514dfe, 0xbe7b2d7c, 0xbf428f25, 0xbf1a1d16, 0xbf354f9d, 0xc011fa5a, 0xbe2af038, 
    0x3ec3233a, 0xbe838233, 0xbe9a89c2, 0xbf1bdd8c, 0x3e2da2ba, 0x3f593a64, 0xbea552ae, 0xbf8a5820, 
    0x3edd4303, 0x3e530220, 0xbe85250b, 0xbd4a0ef2, 0x3dad579c, 0x3edf6dd0, 0xbe83fb95, 0xbf7b754e, 
    0xbf4daf10, 0xbf5ae88a, 0xbf42f6e7, 0x3d5a0d96, 0xbfb19e31, 0x3e8646d5, 0xbdaee3d8, 0xbe208e68, 
    0xbec3f21f, 0xbe9bbeb9, 0xbf8ba57a, 0x3f2a059d, 0x3e93f96e, 0xbf9cd03e, 0xbf635a7c, 0x3f1a5a68, 
    0xbf68e4d7, 0xbf377c61, 0xbf92ed05, 0x3f127e93, 0xbf8af2d3, 0xbfbbbef6, 0x3d3c2e4c, 0xbf5c5b98, 
    0xbf683d07, 0xbf75192d, 0x3eae9780, 0xbc789682, 0xbf1417c4, 0xbf0ecfec, 0xbe9a0830, 0xbe0f5626, 
    0xbfcba482, 0xbf317ce5, 0x3e784bf6, 0x3ed844a2, 0x3f35bb82, 0xbee4146f, 0xbeb50478, 0xbfc53aec, 
    0x3f034f58, 0x3ee6f583, 0xbd9ebaf1, 0xbf9247d2, 0xbef10888, 0xbf37cb78, 0xbfbf5d4e, 0xbecdaf25, 
    0x3dfa0f57, 0xbf9963fb, 0xbe76d2f9, 0xbf00cacc, 0x3e8925fa, 0x3f3c18bc, 0xbe3f0add, 0xbf5a8c9c
};

static const uint32_t _K59[] = {
    0xbe826247, 0x3e386dd9, 0xbde33223, 0x3d506008, 0x3e2f9c6f, 0x3e5ac195, 0xbf557878, 0x3e5a46ae, 
    0xbf334aa8
};

// Memory mapped buffers
#define _K12             ((int *)_K12)                       // s32[42] (168 bytes) 
#define _K20             ((float *)_K20)                     // f32[16,5,40] (12800 bytes) 
#define _K23             ((float *)_K23)                     // f32[16] (64 bytes) 
#define _K27             ((float *)_K27)                     // f32[16,5,16] (5120 bytes) 
#define _K30             ((float *)_K30)                     // f32[16] (64 bytes) 
#define _K34             ((float *)_K34)                     // f32[16,5,16] (5120 bytes) 
#define _K37             ((float *)_K37)                     // f32[16] (64 bytes) 
#define _K41             ((float *)_K41)                     // f32[32,3,16] (6144 bytes) 
#define _K44             ((float *)_K44)                     // f32[32] (128 bytes) 
#define _K48             ((float *)_K48)                     // f32[32,3,32] (12288 bytes) 
#define _K5              ((float *)_K5)                      // f32[512] (2048 bytes) 
#define _K51             ((float *)_K51)                     // f32[32] (128 bytes) 
#define _K57             ((float *)_K57)                     // f32[9,32] (1152 bytes) 
#define _K59             ((float *)_K59)                     // f32[9] (36 bytes) 
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
#define _K26             ((float *)(_buffer + 0x00000000))   // f32[25,16] (1600 bytes) 
#define _K28             ((float *)(_buffer + 0x00000640))   // f32[25,16] (1600 bytes) 
#define _K3              ((float *)(_buffer + 0x00000000))   // f32[512] (2048 bytes) 
#define _K32             ((float *)(_buffer + 0x00000000))   // f32[25,16] (1600 bytes) 
#define _K33             ((float *)(_buffer + 0x00000640))   // f32[13,16] (832 bytes) 
#define _K35             ((float *)(_buffer + 0x00000000))   // f32[13,16] (832 bytes) 
#define _K39             ((float *)(_buffer + 0x00000340))   // f32[13,16] (832 bytes) 
#define _K40             ((float *)(_buffer + 0x00000680))   // f32[13,32] (1664 bytes) 
#define _K42             ((float *)(_buffer + 0x00000000))   // f32[13,32] (1664 bytes) 
#define _K46             ((float *)(_buffer + 0x00000680))   // f32[13,32] (1664 bytes) 
#define _K47             ((float *)(_buffer + 0x00000000))   // f32[13,32] (1664 bytes) 
#define _K49             ((float *)(_buffer + 0x00000680))   // f32[13,32] (1664 bytes) 
#define _K53             ((float *)(_buffer + 0x00000000))   // f32[13,32] (1664 bytes) 
#define _K55             ((float *)(_buffer + 0x00000680))   // f32[6,32] (768 bytes) 
#define _K56             ((float *)(_buffer + 0x00000000))   // f32[32] (128 bytes) 
#define _K58             ((float *)(_buffer + 0x00000080))   // f32[9] (36 bytes) 
#define _K6              ((float *)(_buffer + 0x00000800))   // f32[512] (2048 bytes) 
#define _K60             ((float *)(_buffer + 0x00000000))   // f32[9] (36 bytes) 
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
    conv1d_flat_f32(_K17, _K20, _K19, 40, 4040, 50, 16, 80, 200);
    add_f32(_K19, _K23, 1, 1, 1, 50, 16, _K21);
    relu_f32(_K21, 800, _K25);
    conv1d_flat_f32(_K25, _K27, _K26, 16, 816, 25, 16, 32, 80);
    add_f32(_K26, _K30, 1, 1, 1, 25, 16, _K28);
    relu_f32(_K28, 400, _K32);
    conv1d_flat_f32(_K32, _K34, _K33, 32, 432, 13, 16, 32, 80);
    add_f32(_K33, _K37, 1, 1, 1, 13, 16, _K35);
    relu_f32(_K35, 208, _K39);
    conv1d_flat_f32(_K39, _K41, _K40, 16, 224, 13, 32, 16, 48);
    add_f32(_K40, _K44, 1, 1, 1, 13, 32, _K42);
    relu_f32(_K42, 416, _K46);
    conv1d_flat_f32(_K46, _K48, _K47, 32, 448, 13, 32, 32, 96);
    add_f32(_K47, _K51, 1, 1, 1, 13, 32, _K49);
    relu_f32(_K49, 416, _K53);
    maxpool1d_valid_f32(_K53, 2, 2, 32, 6, _K55);
    globav1d_f32(_K55, 6, 32, _K56);
    dott_f32(_K57, _K56, _K58, 32, 9, 1);
    add_f32(_K58, _K59, 1, 1, 1, 1, 9, _K60);
    softmax_f32(_K60, 9, data_out);
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

