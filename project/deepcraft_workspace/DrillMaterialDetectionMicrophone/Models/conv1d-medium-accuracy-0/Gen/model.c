/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 14:50:10 UTC. Any changes will be lost.
* 
* Model ID  ffdd2e01-2b11-4b81-9123-8056eba6a87d
* 
* Memory    Size                      Efficiency
* Buffers   18400 bytes (RAM)         100 %
* State     19592 bytes (RAM)         100 %
* Readonly  41136 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-medium-accuracy-0
* 
* Class Index | Symbol Label
* 0           | unlabelled
* 1           | air
* 2           | plastic
* 3           | plastic_out
* 4           | wood
* 5           | wood_out
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
* Convolution 1D                 [50,12]         float      dequeue
*    filters = 12
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,40,12]
* Batch Normalization            [50,12]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[12]
*    beta = float[12]
*    mean = float[12]
*    variance = float[12]
* Activation                     [50,12]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [50,24]         float      dequeue
*    filters = 24
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,12,24]
* Batch Normalization            [50,24]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[24]
*    beta = float[24]
*    mean = float[24]
*    variance = float[24]
* Activation                     [50,24]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [50,24]         float      dequeue
*    filters = 24
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,24,24]
* Batch Normalization            [50,24]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[24]
*    beta = float[24]
*    mean = float[24]
*    variance = float[24]
* Activation                     [50,24]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [25,24]         float      dequeue
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
*    weight = float[3,24,32]
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
* Dense                          [6]             float      dequeue
*    units = 6
*    use_bias = True
*    activation = linear
*    trainable = True
*    weight = float[32,6]
*    bias = float[6]
* Activation                     [6]             float      dequeue
*    activation = softmax
*    trainable = True
* 
* Exported functions:
* 
* int IMAI_dequeue(float *restrict data_out)
*    Description: Dequeue features. RET_SUCCESS (0) on success, RET_NODATA (-1) if no data is available, RET_NOMEM (-2) on internal memory error
*    Parameter data_out is Output of size float[6].
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
* (ACC) Accuracy 89.730 %
* (F1S) F1 Score 89.572 %
* 
* Name of class                                               unlabeled              air          plastic      plastic_out             wood         wood_out
* (TP) True Positive or Correct Positive Prediction                2396              342              366                0              487                0
* (FN) False Negative or Incorrect Negative Prediction               82               35               74               13              192               15
* (FP) False Positive or Incorrect Positive Prediction               56               63              204                0               88                0
* (TN) True Negative or Correct Negative Prediction                1468             3562             3358             3989             3235             3987
* (TPR) True Positive Rate or Sensitivity, Recall               96.69 %          90.72 %          83.18 %           0.00 %          71.72 %           0.00 %
* (TNR) True Negative Rate or Specificity, Selectivity          96.33 %          98.26 %          94.27 %         100.00 %          97.35 %         100.00 %
* (PPV) Positive Predictive Value or Precision                  97.72 %          84.44 %          64.21 %         100.00 %          84.70 %         100.00 %
* (NPV) Negative Predictive Value                               94.71 %          99.03 %          97.84 %          99.68 %          94.40 %          99.63 %
* (FNR) False Negative Rate or Miss Rate                         3.31 %           9.28 %          16.82 %         100.00 %          28.28 %         100.00 %
* (FPR) False Positive Rate or Fall-Out                          3.67 %           1.74 %           5.73 %           0.00 %           2.65 %           0.00 %
* (FDR) False Discovery Rate                                     2.28 %          15.56 %          35.79 %         100.00 %          15.30 %         100.00 %
* (FOR) False Omission Rate                                      5.29 %           0.97 %           2.16 %           0.32 %           5.60 %           0.37 %
* (F1S) F1 Score                                                97.20 %          87.47 %          72.48 %           0.00 %          77.67 %           0.00 %
*/

#include <float.h>
#include <math.h>
#include <stdint.h>
#include <string.h>

#include "model.h"

// Working memory
static int8_t _buffer[18400];
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
    0xbc2dc1e7, 0x3c1ccd67, 0x3c05d84d, 0xbc032cf5, 0x3c4191e3, 0x3cebb079, 0x3c974c16, 0xbc2124f6, 
    0xba908947, 0x3b01a18e, 0xba1cf4da, 0x3b5548ec, 0x3bda4669, 0x3cb397b1, 0xbb1ee788, 0xbbbe86f6, 
    0xbc78b495, 0xbcb768b0, 0xbc8e4845, 0xbbc2f4fe, 0xbb0e2b5a, 0xbc16dde8, 0xbb74667d, 0x3bcab386, 
    0xbc8f9048, 0xbc87c8ae, 0xbbcdfa9c, 0x3c0ecd4e, 0x3c8c3c2e, 0x3c7f3596, 0x3c6a86dc, 0xbace257b, 
    0xbaa539ff, 0x3be09869, 0xbb99126f, 0x3bfaf66e, 0x3bf8206c, 0x3bdedc47, 0x3c7fa10b, 0x3d061903, 
    0x3b99de7a, 0x3c3b6a04, 0x3c32685b, 0x3b212f93, 0x3c1b6a30, 0x3c9b2212, 0x3c3945b3, 0xbb9d500f, 
    0xbc471391, 0x3c19697d, 0x3b915cc9, 0x3c905453, 0x3c0f4a8d, 0x3c2cf76b, 0xbab5d9c5, 0xbc7727ef, 
    0xbba1a2bb, 0xbc6d9b5a, 0xbd02bc5e, 0xbc18ec3e, 0x3a5121b6, 0xbc2794e8, 0x3b1759b0, 0x3c850bb9, 
    0xbb1e85ea, 0x3be95bf1, 0x3bcf97b6, 0x3c95721b, 0x3c6ad183, 0x3bfdafcd, 0x3b64fc2a, 0xbb0a623f, 
    0xbba56fb2, 0xbb83cbbb, 0xbc86afa7, 0x3b8193f6, 0xbc38106e, 0x3c4a1e8e, 0x3c5f2989, 0x3c91bbcc, 
    0x3b996319, 0x3c9e632c, 0xbbfb81fd, 0x398e5817, 0xbc2722d9, 0x3c9ff15c, 0x3b6d0eec, 0xb8895ce0, 
    0xbc0a413e, 0xbc3b5466, 0x3c4f2fbd, 0x3c8b9663, 0x3c3315a8, 0x3c7c775c, 0xbbee7831, 0x3a800768, 
    0xbc595ebf, 0xbd05fc06, 0xbcea2480, 0xbc242b67, 0xbc2dd40d, 0xbbc9c505, 0xbbb41602, 0x3bdee37d, 
    0xbb10220e, 0x3bb0a713, 0x3c4d668f, 0x3bbd10cf, 0x3c170024, 0x3c6511b8, 0xb912aba1, 0x3b56b53e, 
    0xbb8c1123, 0xbbd76615, 0xbc28f1ba, 0xb9e63646, 0xbc84488a, 0x3c8b7a09, 0x3cdc8db3, 0x3cf62c1b, 
    0x399eba02, 0xbac1e720, 0xbc8ee72f, 0xbd034cf5, 0xbb69c331, 0xbc878e1c, 0x3d02c01d, 0x3d35b620, 
    0x3ca0e816, 0x3d5ac3fe, 0x3d3e6778, 0x3d0d2a26, 0x3cf884d4, 0x3cd538fe, 0x3ce82df6, 0x3d24b292, 
    0x3d39a16d, 0x3d2f268a, 0x3b20b4b6, 0x3c47f315, 0x3caf31c2, 0x3cf3d4bc, 0x3c091883, 0x3be7d682, 
    0x3c90de0a, 0x3c244a7e, 0x3c34bfde, 0x3ccbf746, 0xbc556cba, 0xbcfa7c63, 0xbcf22225, 0xbc6df8fc, 
    0xbbf5807f, 0xbc4afab4, 0x3c34e0a6, 0xbc14de41, 0xbc5a7583, 0xbc6466a2, 0xbb3f3246, 0xbd31e3da, 
    0xbd13a659, 0xbc999993, 0xbc568c9c, 0xbd25c401, 0xbc815b43, 0xbd0fd878, 0x3cf788c1, 0x3d125058, 
    0x3c51737c, 0x3d14ff51, 0x3d89d94a, 0x3d4a61ae, 0x3add0938, 0xbacc21d2, 0x3c8146ff, 0x3ca8be5e, 
    0x3981de36, 0x3d72ba66, 0x3cb392a6, 0x3a458be2, 0x3bd7b3a2, 0x3cc5cf62, 0x3c3757f2, 0xbae46184, 
    0xbb044b1b, 0xbbd66ccb, 0xbb72feb6, 0xbc94f0f2, 0xbd67cc69, 0xbd50fffe, 0xbcb550df, 0xbd12116d, 
    0xbc055adb, 0xbb92ef7a, 0xbccbf0fe, 0xbd1d9a26, 0xbcba18f3, 0xbc83a750, 0xbcbde2b5, 0xbd4c43cc, 
    0xbc0c468f, 0x3c91d66e, 0xbcfba873, 0xbcd38af2, 0xbd1c3089, 0xbc1fb146, 0x3cb06ba4, 0x3c70828a, 
    0x3c927f0b, 0x3d3a3bfa, 0x3d68dde9, 0x3c85f343, 0xbc523206, 0xbc9fc5a3, 0x3a64a49d, 0x3b809769, 
    0x3cbf45e7, 0x3cadef8c, 0xba8d8cd2, 0xb9e46501, 0xbc12c5dc, 0x3c78a5ac, 0xbc691154, 0x3b9c5142, 
    0x3bf8048f, 0xbca4ada8, 0xbba783af, 0xbba54975, 0xbd2645ae, 0xbd5aac33, 0xbc998e02, 0xbcc89126, 
    0xbcb95019, 0xbcc4414a, 0xbcfa2cce, 0xbd10f435, 0xbc41d92b, 0xbce3a0a7, 0xbd6ec9a7, 0xbd8a24a0, 
    0xbe9d7ed9, 0xbcdf8107, 0x3c03fef1, 0xbc22a8c5, 0x3de35a2b, 0x3b404d07, 0x3decea2b, 0xbd167608, 
    0xbd470146, 0x3dec01c5, 0xbbd7caf0, 0x3c711c95, 0xbdbb4ca3, 0x3c47b164, 0xbdc250c4, 0xbc2bba55, 
    0x3d21e4b1, 0xbdc152ba, 0xbc9a1d5c, 0x3e0b2381, 0x3da1f69a, 0x3c96d639, 0x3dd85750, 0x3de54c8c, 
    0xbd4659a7, 0xbca1a5f6, 0xbca603b9, 0x3e22d746, 0x3d79a3fd, 0xbd869334, 0xbcf51c6d, 0xbe343902, 
    0xbe602117, 0xbc99bc9b, 0xbd7eee16, 0xbc7a4da1, 0xbcc3fe0d, 0x3c3eba00, 0xbe014a3e, 0xbd0222a1, 
    0xbe2ebb32, 0xbce4787e, 0x3d8c18e3, 0xbd50e554, 0xbcb7a21e, 0x3d1b4800, 0x3d805e30, 0x3de5f6a0, 
    0x3b470d7c, 0x3e47a8ac, 0x3cd2af3a, 0x3ccacd89, 0xbdce3465, 0xbdd676ff, 0xbdee7475, 0xbda8e1a5, 
    0xbbb37d80, 0xbcfb37db, 0xbcffff77, 0x3dbea023, 0x3e37c4a4, 0x3d1b67fa, 0x3d1cb3d4, 0x3c90558e, 
    0xbd1e6898, 0xbdb8ae98, 0x3cdff7d5, 0x3d824080, 0xbca8c454, 0xbe107403, 0xbe11ca8d, 0xbdc83b1c, 
    0xbe1aaf6c, 0x3c5f7d42, 0x3c62d96a, 0xbd3cbeeb, 0xbdb71118, 0x3d971b92, 0xbd3a9ebd, 0xbd822680, 
    0x3dd8751f, 0x3d0ca6c8, 0xbd88b209, 0xbd0e86fd, 0x3b62e639, 0x3d9422bb, 0xbd4f0d43, 0x3d733205, 
    0x3e08966e, 0x3dd3fa53, 0x3dc20c15, 0xbc9fc4a1, 0xbc9b5d60, 0xbddd2dc4, 0xbc39c358, 0x3c948cfb, 
    0x3d48d3bf, 0xbda5c548, 0xbcaac802, 0x3dc5e329, 0x3d96bbdc, 0x3d6c4288, 0x3bd47ecc, 0x3cc8ff2e, 
    0x3d5592ec, 0x3cfe918b, 0x3d8a8157, 0x3e30eaca, 0x3beeee30, 0xbb5c368e, 0xbdb6f570, 0xbd43763c, 
    0x3c21ab70, 0x3e28a040, 0x3d0675e5, 0xbd87422a, 0xbcb4274f, 0x3d007802, 0x3ce7e96d, 0x3ca082ac, 
    0xb90ffd04, 0xbbb43d6d, 0xbc4bcc02, 0xbc8bbc25, 0xbb550ded, 0x3b366c68, 0xbb04e419, 0xb8381f94, 
    0x3bfe5492, 0x3bfa01eb, 0xbbde51ac, 0xbb1de4c0, 0x3c3df2ca, 0x3c7515a8, 0x3c0ebe4b, 0x3c438a66, 
    0x3ad9979a, 0x3c66ccb7, 0xbb3c7cb1, 0x3c270a31, 0x3bd81799, 0x3c8c0540, 0x3c66089d, 0x3b6b7b6b, 
    0x3c0a17c8, 0xba9b9c75, 0x3c276d7e, 0x3bd55df1, 0x3c376fd8, 0x3c4eaa7d, 0x3a955bd0, 0xbb8518c4, 
    0xbc4b8001, 0xbb90878a, 0x38f3a14f, 0xbc1c4f4e, 0xbbb6e521, 0x3ae7efa1, 0x3c7ae26a, 0x3a405c71, 
    0xbc7d7153, 0xbc96707c, 0xbc305970, 0xbc77030b, 0xbc8a7916, 0xbc8b078e, 0xbc2c9ef1, 0xbba474ec, 
    0x3aa00a99, 0x3ac8dd2f, 0xb9300804, 0x3b8aa5d3, 0x3b8782ee, 0x3acf0b86, 0x3c2381fc, 0xbc03142a, 
    0x3b993588, 0x3bced946, 0xb8eda101, 0x3af767c9, 0xbad3f7f7, 0x3bbae7f7, 0x3c15a255, 0x3bf59905, 
    0xbb205faf, 0x3b35219a, 0xbbb1dd08, 0xbacdc2f7, 0xba007fb8, 0xbb5f4118, 0xbc8385bf, 0xbc4385cb, 
    0xbc14c7b0, 0xbb6286aa, 0x3b8e4887, 0xbc327044, 0xbc728f71, 0x3c3ab583, 0x3a5b42de, 0xbb988c2b, 
    0xbc848de8, 0xbcbcf43f, 0xbcb5364b, 0xbd04df55, 0xbcb94287, 0xbcd1d12e, 0xbc363f18, 0xbcb2196d, 
    0xbca6bf94, 0xbc876e44, 0xbce79712, 0xbccd3775, 0xbbd8dc6a, 0xbcd1857b, 0xbc3be289, 0xbc43940c, 
    0xbc750186, 0xbc884620, 0xbcae275a, 0xbc96ed2e, 0xbc117c96, 0xbc2a5a50, 0xbc3ed4a6, 0xbc326659, 
    0xbcd65612, 0xbcd22037, 0xbcab379a, 0xbc8b7680, 0xbc4a9835, 0xbaf1ec29, 0xbcb1a9e8, 0xbd0ee2b2, 
    0xbd0bcd9b, 0xbcb3eb4c, 0xbc516ae5, 0xbc9b4938, 0xbcb5847f, 0xbc868811, 0xbc76c83a, 0xbc0c08bd, 
    0xbd123695, 0x3cf37330, 0xbd29d24c, 0xbd95fd69, 0xbd336b32, 0xbcadb0d1, 0x3b3e8ccd, 0x38d4b078, 
    0x3cc1f0ac, 0x3cd1dde6, 0x3cb2cca7, 0xbca33c89, 0xbbea165e, 0xb95da1ec, 0x3ca90c53, 0x3c47cf27, 
    0x3a368db5, 0xbb32c9d3, 0xbcdd15e3, 0x3bfd584c, 0x3d06b4f7, 0x3c9f9b59, 0x3c94f34a, 0x3c8d9417, 
    0x3c76e003, 0x3ca3bb45, 0x3c934537, 0x3ca95bb8, 0xbcfdcaaf, 0xbd394c98, 0xbcdae7cf, 0xbd27936b, 
    0xbcf42f34, 0x3b9d71e3, 0xbc151a9a, 0xbd5ca387, 0xbbd8547a, 0x3b6bb8fd, 0xbd089a59, 0xbd8ead1f, 
    0xbd7409cb, 0xbc3be860, 0xbd8d1bed, 0xbde370bc, 0xbd94d650, 0xbca9c82e, 0x3c1e9599, 0x3c0e8e99, 
    0x3ce1bee7, 0x3c4d0380, 0x3cf6f232, 0x3bb089b6, 0xbd621aed, 0xba4fda21, 0x3d117105, 0xbc386711, 
    0xbbd3b257, 0x3c2c0bf8, 0xbd154d2a, 0xbb476cae, 0x3cb6572b, 0x3d27fb84, 0x3c4ce2ec, 0x3b69b692, 
    0xbcab17ec, 0xbc52fdbe, 0xbc6f1a40, 0xbbd8fd80, 0xbd2369be, 0xbd81a21c, 0xbd093ced, 0xbd13f959, 
    0x3bbca220, 0x3c8da173, 0xbcbc0d95, 0xbd8b3819, 0xbce5df8f, 0xbcd4f4db, 0xbca2c065, 0xbd75ea21, 
    0xbd67ae8f, 0x3d0f0006, 0xbc9c3059, 0xbd55326d, 0xbd1e253b, 0xbb01aa39, 0x3cad975e, 0xbb6a0599, 
    0x3d4601dd, 0xbb1533d5, 0x3c44adfd, 0xbb542475, 0xbd005985, 0xbcb50037, 0x3c8d6065, 0x3cec2aa7, 
    0x3d35e02a, 0x3d1cfe5b, 0xbc4fe463, 0xbc5a649a, 0x3c0a6765, 0x3cb8a961, 0x3cfa83a3, 0x3d02f5b8, 
    0x3ce654eb, 0xbc61067f, 0x3cdaa02e, 0x3ca0d7f4, 0xbb90fad6, 0xbd33cf4f, 0xbb737d0c, 0xbd15f11a, 
    0x3ab8064a, 0x3c1bf457, 0xbc4ddda7, 0xbd3dabca, 0x3b7af979, 0xbcf30120, 0xbd085886, 0xbd5a559c, 
    0x3de6e322, 0xbe58c8aa, 0x3e382242, 0xbda4a7f7, 0xbdd83b3b, 0xbdb5a699, 0xbda7e046, 0xbdc1f3ad, 
    0x3e52b9f9, 0xbe29961e, 0xbe21d097, 0xbe030fc1, 0xbd991655, 0x3c70df38, 0x3ecf1f27, 0x3e244df2, 
    0x3e217b3f, 0x3e825afa, 0xbd95d44c, 0xbe17de0b, 0x3d1c367f, 0xbd77097c, 0xbea44e71, 0xbe87d45c, 
    0x3e637f54, 0x3e3ab2d8, 0x3e16cd0b, 0x3dc570df, 0x3dc3e04e, 0x3d437fb8, 0xbd05364a, 0xbdfd8937, 
    0xbe0466f9, 0xbe614292, 0x3e28ab3e, 0x3e5ac30d, 0xbda6276d, 0xbd9f0ca6, 0x3e01b05f, 0xbda99d49, 
    0x3d71e004, 0xbe876f5c, 0x3e26527c, 0xbe2de7dc, 0xbe5103ce, 0x3db00a12, 0xbd405c66, 0x3b8ab026, 
    0x3ea6a89d, 0xbd5c334b, 0x3d96abc9, 0xbe13c3e8, 0xbe29a03a, 0xbd3f6e5a, 0x3ec4da51, 0x3d9a15d9, 
    0x3c796194, 0x3e9aa5f7, 0x3e1570e6, 0xbc2be262, 0x3e308725, 0xbdaf3253, 0xbeb64a00, 0xbe7bbf94, 
    0x3e79be86, 0x3d9b414f, 0x3dbe16ce, 0x3dd2b1a2, 0x3dbe13a5, 0xbbd4529f, 0xbc8a6c2f, 0xbeafb542, 
    0xbd32d13a, 0xbd583df8, 0x3eb0db62, 0x3ea05fba, 0xbdfc761c, 0xbdc6e31e, 0x3ccc44dc, 0xbe28db3f, 
    0x3dc353cd, 0xbe8cba15, 0x3e6e2cd6, 0xbdc71f47, 0xbdc5ed6d, 0xbbe1d609, 0x3e2468eb, 0xbd6673df, 
    0x3ec5f52d, 0x3e1a8d22, 0x3e2cc879, 0x3c616091, 0xbe5adeed, 0xbe4d28da, 0x3e1ea19d, 0x3d73cb19, 
    0x3deba24a, 0x3e33e510, 0xbceda44d, 0x3dd89bcc, 0x3e04ee17, 0x3c22b498, 0xbe40aae5, 0xbe855ad9, 
    0x3e9042f6, 0x3d0442af, 0x3e3e921c, 0x3d7bedc2, 0x3cbcbbfd, 0xbd9d13e5, 0xbdf011d8, 0xbeb6953c, 
    0xbe0f6265, 0x3cd64d36, 0x3e5f5446, 0x3e0cf845, 0xbd871279, 0x3ca8e4d6, 0x3bc7ea2a, 0xbe8a35da, 
    0xbc37ec8f, 0xbc67adcd, 0x3b12a3e5, 0x3b4859b0, 0xbb44330c, 0xbc1346c0, 0x3bae3482, 0xbbbb21a9, 
    0x3b8b8cbe, 0xbb692e6b, 0x3bdce6e4, 0xbba8c941, 0xbc4f3aeb, 0xbbf62a1b, 0x3b98e094, 0xbad5dcf2, 
    0xbc7d371e, 0x3ba73005, 0xbb2c4c23, 0xbc146195, 0xbc812830, 0xbc5eb44b, 0xbc4162fb, 0xbc85b7b9, 
    0xbc5e4195, 0xbbc0d2ff, 0x3c171f78, 0xb9ab2319, 0xbc2d2730, 0xbb11ed5e, 0xbaf565c9, 0xbb8e344d, 
    0xbc05328f, 0xbc758f15, 0x3884d2ee, 0x3c73fd0d, 0x3be94ce6, 0x3c8fc257, 0x3cb568e1, 0x3b6e79bc, 
    0x3b70a632, 0xbc20e868, 0xbba5c0a7, 0xbc1ffe12, 0x3c18d1e4, 0xbc5fcd5e, 0x3b171cc8, 0xba323a29, 
    0xbbadf9e2, 0xbc3fb69a, 0x3b891152, 0xbb297a2d, 0xbbbea7dc, 0xbc892100, 0x3baff1ce, 0xbc141856, 
    0xbc1145fc, 0xbbbebc0f, 0xbb94687c, 0xbc799b21, 0xbbe36e72, 0xbcae7a58, 0xbcb7d683, 0xbc5c1f0b, 
    0xbc977982, 0xbc1528b9, 0xbc47c9ce, 0xbb9826c3, 0xbc3f3966, 0xbc6f709a, 0xbc13b448, 0xbc8e6e58, 
    0xbc2070d0, 0xbc78ae85, 0xbc1a81f8, 0x3c38560e, 0x3b5d2760, 0x3c017ba2, 0x3bf119b2, 0x3be63489, 
    0xbc131e17, 0xbb45ba21, 0xbbcb3070, 0x3b0a5d0d, 0xbb84b75b, 0xbb9d1daa, 0xb8fa10ff, 0x3c2f721f, 
    0x3ba412a7, 0xbc17f2fc, 0xbc05067b, 0xbb960c1d, 0xbccf23f1, 0xbca3cc2c, 0xbc5729bc, 0xbc34140c, 
    0xbc310c98, 0xbbd77f58, 0xbba66dbf, 0xbca419cf, 0xbc689411, 0xbbee1528, 0xbca8d4c7, 0xbc667e4e, 
    0xbbf523e1, 0xb939434c, 0xbaddfe82, 0xbc9a2f9d, 0xbc2dd1f4, 0xbcbb5cbe, 0xbc4d34f7, 0xbc006893, 
    0xbcce906f, 0xbca241cd, 0xbb814381, 0xb7eebfc9, 0x3b30575d, 0xbc09dc33, 0x398e1b63, 0x3b4a826d, 
    0xbedfcd28, 0xbe07426e, 0xbcb2cd00, 0xbd269aac, 0x3e8e065f, 0x3e2ec5d9, 0x3e6ae8e1, 0xbd2f7930, 
    0x3b47fc2d, 0x3e04c831, 0x3df93544, 0xbd469032, 0xbd61cd3a, 0x3dde6cb2, 0xbd78035f, 0x3dcefff5, 
    0x3e39e9fb, 0x3ad28fa5, 0xbd960472, 0x3e3b14b7, 0x3bc0a037, 0x3d814591, 0x3dde4dea, 0x3da597a1, 
    0xbe3e939f, 0xbe06c82f, 0xbdb891c9, 0xbc18cd46, 0x3d8b6f83, 0x3c55e130, 0x3d02a6e6, 0xbdcdf12d, 
    0xbdd277c3, 0x3e393ca4, 0xbd8fe125, 0x3d968b14, 0x3df024ad, 0x3e0629cf, 0xbd96c193, 0xbdd1b5fb, 
    0xbe75a849, 0xbd8a223c, 0x3e749638, 0xbdc64039, 0x3e2c7584, 0x3de12d31, 0x3d0f3a93, 0x3d546cba, 
    0x3d9fb880, 0x3eb358d3, 0x3e96708f, 0xbcf9298e, 0xbc731300, 0xbdc7b1cc, 0xbe13beea, 0xbe0069d4, 
    0xbc9a4c5e, 0x3da1e782, 0xbdfa7def, 0x3d2bf673, 0x3d659827, 0x3e299181, 0x3c86e021, 0xbb300f51, 
    0xbd855cbe, 0xbdce2913, 0xbba87cde, 0xbd5fdae7, 0xbc2e2276, 0xbda2c632, 0xbdc56b51, 0xbe2362aa, 
    0xbe2798ef, 0x3e19e110, 0x3d61ccd1, 0xbe080bc9, 0xbe069fe6, 0x3e636820, 0x3d026281, 0xbd1dce96, 
    0x3e069821, 0xbd1e4e46, 0xbe4df495, 0xbda4f442, 0x3db0d145, 0x3dd511b2, 0xbe79a5b6, 0xbb1534fc, 
    0x3e340b9c, 0xbd7c79f3, 0x3e9a7fb1, 0x3c973703, 0x3dbe03fb, 0xbde43265, 0x3d867be7, 0xbc6f670b, 
    0x3dd362e7, 0x3d36afb0, 0xbe0b4372, 0xbcbeeac0, 0x3da8e30b, 0x3e1e7483, 0x3d46ee64, 0xbd29532f, 
    0xbd7a789b, 0x3dd2366b, 0x3d8e9f2e, 0x3b44768c, 0xbcafdc89, 0x3d8e6e67, 0xbda2d1c3, 0xbdbc7caf, 
    0x3da155b3, 0x3e6b0282, 0x3daf388b, 0xbdd660c0, 0xbd13bc5e, 0x3e092feb, 0x3e4ef968, 0x3ca4f833, 
    0xbc0c6fb9, 0x3b87fea6, 0x3b0f0fb4, 0xbc8acd8d, 0xbcc99fd0, 0xbbc6ebe0, 0x3c210ee2, 0xbcc835ee, 
    0xbc1e960f, 0x3b082dfa, 0xbb807f99, 0xbb318be9, 0xbcda9c4f, 0xbcf2dd9d, 0xbb721ae0, 0xbc4ce4fb, 
    0x3ad9f466, 0x3b2ab975, 0xbc3a23da, 0x3b1d9643, 0x3b96853d, 0x3a65148f, 0x3b7bc6de, 0x3c8079f5, 
    0xb92f1f67, 0x3b64cc9d, 0xbbfcc2ef, 0xbb9c2f47, 0xbcce9ad1, 0xbc249d9b, 0xbd091319, 0xbc643a7b, 
    0xbc18bb6f, 0x3bb10cc2, 0xbc3404a5, 0xbc68014f, 0xbcc8259f, 0xbcd062ff, 0xbce8c3b9, 0xbcdc152b, 
    0xbc2ba5e3, 0x3b8dc5a9, 0xbcb90443, 0xbc76178f, 0xbc9938fb, 0xbc423b9a, 0xb9a7b0dd, 0xbbc2c7fe, 
    0xbbb1a136, 0xbc695259, 0xbb39a028, 0xbc582097, 0xbccc3f21, 0xbbfc0220, 0xbc90dbf2, 0xbc2f592f, 
    0x3c8f2c30, 0x3b45bbd5, 0x3be891c1, 0xbb2b3730, 0x3c4879f4, 0x3c68231e, 0x3c51664b, 0x3c33f3b7, 
    0x3c46bec6, 0xbc2768e1, 0xbcfda333, 0xbc232673, 0xbc8fa4f4, 0xbcb0efe7, 0xbc9e8224, 0xbcac1a16, 
    0xbc6868ed, 0x3c8e5916, 0xbb80fe52, 0xbcb8257e, 0xbb2c3fa5, 0xbce6041c, 0xbcf0ba24, 0xbce802b0, 
    0xbbd0055b, 0x3c4ed978, 0x3c37577f, 0xbc4d55df, 0xbc184df1, 0xbce4105e, 0xbc0a666f, 0xbcee6ad7, 
    0xbc80ec0d, 0xbcb4b54f, 0xbba3ca33, 0xbc30dc0e, 0xbc91ca00, 0xbc2f6cc9, 0xbc7db97a, 0x3c69b381, 
    0x3cc6b99a, 0x3c7d7b5a, 0xbb0fcd35, 0x3c62d294, 0x3ccd7301, 0x3ca07b3c, 0x3ce4ed56, 0x3c959e3b, 
    0x3ca323a0, 0x3bc617f5, 0x3c1229e4, 0x3c49ebd7, 0xbc0bb392, 0x3b801265, 0x3bee27fb, 0x3a4f1fb1, 
    0xbbe7542e, 0xbb7a7833, 0x3bbe46c7, 0xbc870c0e, 0xbbcaa2e1, 0xbcbf4f19, 0xbcf99717, 0xbbb6e69d, 
    0x3da5ae44, 0x3cf2fb41, 0xbd430492, 0xbe22a6fc, 0xbca3ef6a, 0x3ccaeb67, 0xbd3efc91, 0xbd104bc4, 
    0x3d618861, 0x3d9ace1a, 0xbd3420e7, 0xbbd1bbbc, 0x3dceba07, 0xbc426bc2, 0xbe579c1d, 0x3c99738c, 
    0xbda7b0a2, 0xbd19fdba, 0xbdcb139b, 0xbcaabec4, 0x3e77c923, 0xbd54e1ea, 0x3d0a3890, 0x3e472a3a, 
    0x3de5c8f5, 0x3c4661f0, 0xbd49a903, 0x3deca464, 0x3e22830d, 0xbce6bbba, 0xbd090bfb, 0xbd5603e2, 
    0x3d3981c2, 0x3e16dd0b, 0x3dad380b, 0xbe381542, 0xbe3e34ec, 0xbdaaa096, 0xbe5a25ec, 0xbd16252a, 
    0x3d9c8fdf, 0xbb1e0031, 0xbe16ceba, 0xbd91fb25, 0x3d055bb2, 0x3d74ce62, 0x3d24386d, 0xbdfd4c6b, 
    0xbc8ad5db, 0x3ddcc2b1, 0xbe074e4c, 0xbb286235, 0x3dc974fa, 0x3e61d445, 0xbde59b3a, 0x3e726a23, 
    0x3e832480, 0xbca81288, 0xbe419274, 0x3d054d32, 0x3e2c41e9, 0xbda51fda, 0x3dee890f, 0x3e8ad4ab, 
    0x3df7ece7, 0x3dd8b099, 0xbcb65097, 0x3e2b1013, 0x3e24b07e, 0x3c6d1e05, 0x3df1d15d, 0x3e4ae453, 
    0x3c8da21d, 0x3d922461, 0x3cca9ebf, 0xbe33c644, 0xbd965851, 0xbdcff260, 0xbe79a64e, 0x3da81eb7, 
    0xbdc0f994, 0xbc694cb5, 0xbba9f268, 0xbe155f76, 0xbca414eb, 0xbd644f2e, 0xbd8ec014, 0xbe212624, 
    0xbd7e9d4d, 0xbc20d924, 0xbe2b9e04, 0xbde852d8, 0x3e0b919a, 0x3e6af524, 0xbe23c20f, 0x3e1d0612, 
    0x3e12366d, 0x3d59fba0, 0xbd2535f2, 0x3cb435a4, 0x3cd39293, 0xbdf6a16d, 0x3d2b02a7, 0x3e46eb01, 
    0x3d32cd1b, 0xbce1d0fb, 0xbe173b3c, 0x3d5c8593, 0x3e3521ca, 0x3c080a20, 0x3e283ca4, 0x3e42b0e2, 
    0xbd06e891, 0xbd944166, 0x3b149bfa, 0xbd2313e4, 0xbe1e9b7a, 0xbe19dc20, 0xbe8b2772, 0xba9eb5e7, 
    0xbb0edbe8, 0x3d3902cd, 0xbbc06ee1, 0x3c28ffd2, 0x3ca820bd, 0x3d2ca5be, 0x3b92dd5a, 0xbc3c73bb, 
    0xbc4927ea, 0x3c9f2ad9, 0x3d93a52f, 0x3be6a77b, 0x3a5b7cc4, 0x3d016cb4, 0xbcc41db5, 0xbd8e7d1b, 
    0xbd3986d6, 0xbd2fb3da, 0x3d157624, 0x3d88ea0d, 0xbd5ef61c, 0x3c99f048, 0x3d2bfcf8, 0x3d672e6d, 
    0xbce33a14, 0x3c81e433, 0xbd1b773c, 0xbd10d960, 0xbd4cf881, 0x3b0b30db, 0x3d90a4b3, 0x3cc3d5c6, 
    0x3d7bb4af, 0x3dc44f44, 0xbccb93e1, 0x3cc0d039, 0x3d6912f8, 0x3ce3531e, 0x3d27e01a, 0x3ccd6220, 
    0xbb7a2ea4, 0x3d88af52, 0x3cefc9a8, 0x3cacc3f6, 0x3d080f8b, 0xbceaa46e, 0xbc9664be, 0xbd460f3f, 
    0xbcaff748, 0xbcbdb324, 0x3d3322ab, 0x3c9b1f5e, 0x3d0b232b, 0xbb64c67d, 0xbc8dc4c9, 0xbdbb7f1c, 
    0xbd7f238f, 0xbd1913cb, 0x3b7ee2ac, 0xbc18b08a, 0xbd766616, 0x3d5a6ef8, 0x3dca3fd5, 0x3d40ff0f, 
    0xbc529cfb, 0x3d78237b, 0x3cfa1d30, 0xbc96689e, 0xbd96d103, 0x3ca7b18c, 0x3d244eeb, 0x3d917d5e, 
    0x3d2c17d3, 0x3cd5624a, 0xbcf16cd3, 0xbd3050ca, 0x3c3bc916, 0x3d0087de, 0x3d890dcc, 0x3d919753, 
    0xbc77d253, 0x3d7c4373, 0xbcf8d4c2, 0x3d1ae415, 0xbc0c8528, 0x3cb2d99e, 0xbd1e9260, 0xbd1cdd31, 
    0xbd14b9e9, 0xbd10e6f7, 0x3d435fb8, 0x3cdf1dd7, 0x3d231fb4, 0x3cdfbffb, 0xbbdc7a16, 0xbdb1b4b7, 
    0xbda8c9aa, 0xbd3b3edd, 0x3d0c130b, 0xbc709a34, 0xbd88a2c8, 0x3c8ef464, 0x3cb6069a, 0x3c1695df, 
    0xbcae50b0, 0x3d51b12e, 0xbd4773fd, 0xbdb45b53, 0xbdb1cee2, 0x3d20196c, 0xbb94abfe, 0x3d3934ea, 
    0x3d807fea, 0x3d0b9b76, 0xbd28886f, 0xbccb9c3a, 0x393b1bd6, 0x3c224907, 0x3d7cf688, 0x3d12cd83, 
    0xbe6c9916, 0x3bb0dfb7, 0xbc599223, 0x3c171a0e, 0x3c2604ed, 0xbd28e975, 0xbd282f48, 0xbe4fbf4b, 
    0xbe7b9984, 0xbda80c1b, 0xbd5a8e64, 0xbd099876, 0x3d5a4351, 0x3c518a5b, 0x3d04a06f, 0x3c8f7b83, 
    0x3d7b73ba, 0xbca5986c, 0xbd888964, 0xbc1253aa, 0x3cfa29dd, 0x3cc98a3b, 0xb9c26674, 0xbbac7d3c, 
    0xbccbb02d, 0xbca7c5a9, 0xb981f827, 0xbd44a899, 0x3d32c660, 0x3d8c3195, 0xbc6719e7, 0xbd696456, 
    0xbdee6fd1, 0xbd82e2e1, 0x3c895808, 0xbde1a948, 0xbd90ec73, 0xbd11c1ea, 0xbd81e4e2, 0xbd0fd95c, 
    0xbe400c5f, 0xbdfaae6d, 0x3b663f88, 0xbd9b4101, 0xbcd31e91, 0x3b415af4, 0xbd11e77a, 0xbe341a85, 
    0xbe2ad3c9, 0xbcbe85db, 0xbb3965fc, 0xbcc6d779, 0x3d690d76, 0xbbb6c5e6, 0x3d9fd575, 0x3d4bef3f, 
    0x3dae2c8c, 0x3d0bd76f, 0xbd390790, 0xbd73772f, 0xbab31b73, 0x3d2d4743, 0x3be22c7f, 0xbcb645fc, 
    0x3c29aaee, 0x3c80d102, 0xbce06527, 0xbcf933da, 0x3d218ec1, 0x3d954796, 0xbcf907c4, 0xbd7a203a, 
    0xbdac157c, 0xbd496699, 0x38be5cc1, 0xbda5d493, 0xbdc0cbe2, 0xbc0e236e, 0xbd265167, 0x3ab2df16, 
    0xbde5a12d, 0xbd46c3da, 0xbc76127f, 0xbd3d341a, 0x3d646214, 0x3db3f545, 0xbc4e6360, 0xbda951fa, 
    0xbde8ad1c, 0xbcff1b99, 0x3d37f662, 0x3cb60949, 0x3d88c417, 0x3d573769, 0x3dcc7133, 0x3d90378e, 
    0x3e03b50f, 0x3d5fbd32, 0xb93a9775, 0xbd07280a, 0xbd01f757, 0x3d18f030, 0x3c68685d, 0xbc1337ee, 
    0x3ccc6bf1, 0x3ce0da3d, 0xbca4d8e0, 0xbd0074e9, 0x3d36c057, 0x3dca2b8b, 0xbc0b401e, 0xbce52195, 
    0xbc46e28f, 0xbd651cd7, 0x3b204e63, 0xbd756917, 0xbd3c0080, 0xbbe6da0d, 0xbb00ead1, 0xbb3006eb
};

static const uint32_t _K23[] = {
    0xbf3d5a2d, 0x3f624462, 0x3f98d6b2, 0x3e7f8da2, 0x3fca873c, 0xbec28192, 0x3d503460, 0xbf9efc79, 
    0x3e731d74, 0xbf10df21, 0xbfcb82e2, 0x3ffdbda4
};

static const uint32_t _K27[] = {
    0xbc94ce02, 0x3ca4486f, 0xbc876c1b, 0x3cbc9bd2, 0x3ccfb7d6, 0xbc020b70, 0x3cc85721, 0xbbc5b5d3, 
    0xbc9f6f9f, 0xbe469c09, 0xbc4ea0ab, 0xbd473351, 0xbcf1659e, 0xbcaf9cdf, 0x3cd7dded, 0x3d272bba, 
    0xbc2b19ec, 0xbdefc174, 0x3d458925, 0xbdfe0163, 0x3c0ba835, 0xbe3c70ed, 0x3c420867, 0xbd16c47f, 
    0x3c8a301e, 0x3cee5fde, 0x3db0a885, 0x3cca3880, 0x3d890e9f, 0x3c068c46, 0x3dbc884e, 0x3d011d59, 
    0x3d2a693d, 0xbe45f1b2, 0x3cf27843, 0xbd5dd030, 0xbe35af3c, 0xbd97c57d, 0xbdf66afe, 0xbe2fce41, 
    0xbe1df7d7, 0x3d023373, 0x3dd6e61d, 0xbdcc2d75, 0x3e3066bc, 0x3ef15999, 0xbdc8e528, 0xbe0d3aa4, 
    0xbdf6fc96, 0x3e65df2b, 0xbcef5ee4, 0x3e0bbe0d, 0x3e9e1ab9, 0xbd180821, 0xbbdce212, 0x3d147fbf, 
    0x3e9764ac, 0xbe34eb06, 0xbb07b907, 0x3de12f3f, 0xbe17629c, 0x3ea4241b, 0x3e434ae5, 0x3d5ac36d, 
    0x3ebba50e, 0x3d555c92, 0x3e265f24, 0x3db7ecba, 0x3edcbeb6, 0xbeaa3228, 0xbe21045a, 0x3d12446c, 
    0xbe129fd5, 0xbeca34b2, 0xbf50b5a0, 0xbeb2969a, 0xbf54514f, 0x3eefe8f6, 0x3dac741f, 0xbf931017, 
    0x3f30837e, 0x3f0dfad7, 0x3d41400f, 0xbf9c7164, 0x3c379bb3, 0x3e388593, 0x3eb585b3, 0x3e73fdfe, 
    0xb9a37a0b, 0xbd0d4857, 0x3e398f22, 0xbbf53f01, 0x3ee6cae0, 0xbe53b520, 0xbef3ffc0, 0x3c79761b, 
    0xbd3800a1, 0x3ed9b328, 0x3f83f7fa, 0xbdab4261, 0x3e90c2dc, 0x3d8fae1f, 0x3e50903a, 0x3f39cd6a, 
    0x3df4e313, 0x3e0f111c, 0xbea58c43, 0x3e532a31, 0x3e630ac9, 0xbea589ed, 0xbda55396, 0xbe51a99c, 
    0xbeeae578, 0xbe8a168a, 0x3e26c034, 0xbe407333, 0xbd21599d, 0x3e2d64ea, 0x3f05fdf8, 0xbefc235d, 
    0xbdc69d27, 0xbea0c947, 0xbdd96888, 0x3dd491a9, 0xbee77ed5, 0xbeb9c44b, 0xbe106458, 0xbf12662a, 
    0x3cf1bb15, 0x3e9db55e, 0x3e51b675, 0xbf17e01e, 0x3d28bf16, 0xbd95ac0a, 0x3e286299, 0xbe13a17a, 
    0xbd8e9832, 0xbea8d09e, 0xbd360ccc, 0xbf0bcdd3, 0x3e0ab502, 0x3b03cd59, 0xbe38bb68, 0xbe9eddcb, 
    0xbe31dbe3, 0xbd8e8110, 0xbd15139f, 0x3cdb444c, 0xbe082fea, 0x3d68ac00, 0x3ccc4261, 0x3d4f4f75, 
    0x3b9cbcd3, 0xbde6c37b, 0xbe990caf, 0xbe3bc1b0, 0xbe615404, 0x3e0ca3b6, 0xbd00032d, 0xbd62c2d4, 
    0x3e375654, 0xbdbcdda7, 0x3d70f557, 0x3de8adaf, 0x3e0f91cd, 0xbede6534, 0xbdc42037, 0xbe10a570, 
    0xbdedc19a, 0x3e27c7e4, 0x3e87b73f, 0x3ddce788, 0x3e52d932, 0xbe10c192, 0x3dfd7e3e, 0x3da14bfb, 
    0x3e5a21fa, 0xbec97308, 0xbe80a275, 0x3dfe1c8a, 0xbec2c31b, 0x3daeae73, 0xbcd35215, 0x3e0442d4, 
    0xbdcc16b5, 0xbcb75fc1, 0x3da8dc0c, 0xbefdeb8a, 0x3e1c6d07, 0xbbd006f8, 0x3d4c5504, 0x3c21147d, 
    0xbee16a9d, 0x3d376209, 0xbebd4435, 0x3e113c5d, 0xbd0e0311, 0xbea7629d, 0x3ea726f7, 0xbf106b62, 
    0x3e62769b, 0x3ebbf037, 0xbd67457b, 0xbebed290, 0xbea36854, 0x3e48cdc6, 0x3e1d47fe, 0x3dde75f5, 
    0x3dfdd478, 0x3e4d5064, 0x3e18d954, 0xbb8b973b, 0x3ebd0bac, 0x3e9e79d4, 0x3d4e25ea, 0xbd420811, 
    0xbdf32073, 0xbe2ca7ab, 0xbe1448cb, 0xbe14fc31, 0xbe3922a1, 0xbc848a9d, 0xbe4ab3c4, 0xbe89c940, 
    0xbe40adcb, 0xbb60ac82, 0xbe4613ec, 0xbe2b7b2f, 0x3d26a82e, 0xbd0fde7c, 0xba4b743e, 0xbc57428b, 
    0x3d56c1e5, 0xbdcc6d9e, 0xbe3a206a, 0xbd9f6f42, 0xbe7b6794, 0xbdc59eb8, 0xbd8b6b55, 0x3d3a8ef0, 
    0xbcd7222e, 0xbda0f221, 0x3d99b001, 0xbdf94f79, 0xbc741a3b, 0xbdfff1bd, 0xbe530d83, 0xbd0dcf2a, 
    0xbe690abf, 0xbd2b3338, 0xbd34f1d4, 0x3b2da7af, 0xbd3f2d1c, 0xbea1a192, 0xbe5166ea, 0xbee604f8, 
    0xbf1de96a, 0x3e504b37, 0xbea14155, 0xbebfb8f3, 0xbebfb015, 0x3dbc45db, 0x3da17e8d, 0xbf427ed3, 
    0xbdd2ab7d, 0xbd02e84e, 0x3c88e40f, 0xbde278a7, 0xbe7dc8cd, 0x3d8bf234, 0xbea14b48, 0xbd58e1ce, 
    0xbe9e1bf6, 0xbe4340ff, 0x3b674d5c, 0xbd84dd06, 0xbe487dca, 0x3d478ea1, 0x3eb48bd6, 0xbe14d7f8, 
    0xbdd29764, 0x3c4b2819, 0xbe457690, 0x3e18c7d4, 0xbebe4f3f, 0xbd802c48, 0xbdc3322a, 0x3dff9d79, 
    0xbd102af9, 0xba6217ca, 0xbe1dba4f, 0x3ded3e4e, 0x3be28ed0, 0x3ed64f91, 0x3e86c8dc, 0xbebe77c7, 
    0x3e46330d, 0x3b6239df, 0xbe9b2755, 0xbdb73e7f, 0xbddd29e5, 0x3df9f402, 0xbd69d81e, 0x3c9e659f, 
    0xbe1a9af2, 0xbc3099d7, 0x3e6d14ba, 0xbeb5971a, 0x3dcc4111, 0x3eae400d, 0xbe0d749a, 0xbdcf4f52, 
    0xbcf712d6, 0xbdc8d762, 0xbe15cd49, 0x3dcddafe, 0xbdb09702, 0x3e3ffeb4, 0x3e3c2522, 0xbe926b51, 
    0x3e921549, 0x3eaad35f, 0xbe605a6b, 0xbd8929a0, 0xbd28e76a, 0x3dd7de29, 0x3cfe5de2, 0x3da6594f, 
    0x3d95eef4, 0x3d2f4d87, 0x3bbeb62a, 0x3ce9ac4c, 0x3d2aa6ec, 0xbdedd591, 0x3da04881, 0x3dbfaea9, 
    0x3bfb0abc, 0x3d9a4037, 0x3dce05e6, 0x3e0937f3, 0x3d8cb48a, 0xbd177e7b, 0x3d69c880, 0x3d3807ee, 
    0x3dd8e6ae, 0xbe1d294f, 0x3dc4b34c, 0x3dce0d2d, 0xbd506ed2, 0xbcbdf6bb, 0xbd308303, 0xbc7dcefe, 
    0x3ba75364, 0xbadb9f93, 0xbc81ee18, 0xbd933449, 0xbc3de51e, 0xbd8b608c, 0x3d603112, 0xbc87c695, 
    0x3b4c3b05, 0x3d18bb3e, 0x3d6edfc7, 0x3b13e4a4, 0x3b884f12, 0x3c660398, 0x3d48a5c4, 0xbc8dba4a, 
    0x3dbcae00, 0xbda02a3a, 0xbd46159a, 0x3d82854a, 0xbd850a29, 0x3c858486, 0xbcdc52bb, 0x3c95a18b, 
    0xbc80d7bc, 0xbd24dd59, 0x3cfba3bb, 0x3bff2f1f, 0x3d97e65a, 0xbbb12df2, 0xbd928ae2, 0xbd21f849, 
    0xbcd2368a, 0x3d8bc41a, 0x3dff1f80, 0x3c835982, 0x3daa8728, 0xbd195ff0, 0x3e0136a9, 0xbc31febb, 
    0x3d6c979a, 0xbd2adae7, 0xbc8afba6, 0x3da0c9e7, 0xbcab6954, 0xbdc76060, 0xbe1a3324, 0xbd6e3afc, 
    0xbddc4bce, 0x3e411218, 0xbe2f254a, 0xbe271fb3, 0xbd8d7153, 0x3cfd431a, 0xbe144958, 0xbd9616e0, 
    0xbd0410f9, 0xbd036aaa, 0xbc50a526, 0xbe2a5ca6, 0xbd97324b, 0x3e91f277, 0xbdbb8c4c, 0xbb1b0a69, 
    0xbdd6586b, 0x3c6ac34c, 0xbdb76a0c, 0xbd99261f, 0x3d29a487, 0xbcd61c62, 0xbd3de7c1, 0xbe0517ad, 
    0xbd2775c3, 0x3ea4c87e, 0xbdde3543, 0x3dd90ef9, 0xbe48b736, 0x3bd19cea, 0xbd625e26, 0xbd608e76, 
    0x3d393178, 0x3c59d8f8, 0x3dced2e7, 0xbd63dfd0, 0x3daa3f64, 0xbc276f0d, 0xbd90423e, 0x3d9bfc2f, 
    0xbd155d2e, 0x3e31688e, 0xbd6d9809, 0xbd087532, 0x3c9610e8, 0x3d8d1115, 0xbc9f6586, 0x3a3f51e3, 
    0x3dcc7280, 0x3dd5709f, 0xbd96d0ff, 0xbdc4788b, 0xbd34f5bd, 0x3d991d97, 0xbd485c8e, 0x3d2a0d10, 
    0x3c48e71f, 0x3dc4fd0a, 0xbc9ce623, 0x3dbba2de, 0x3df95dd7, 0xbbbcc2ab, 0x3c25c922, 0xbe7cb2a5, 
    0xbd1e4c72, 0x3cec187e, 0xbe1a7232, 0x3d94dc94, 0xbc0d64d3, 0x3d891d31, 0x3cfb671d, 0x3e0ec051, 
    0x3ba0b207, 0x3cd565f0, 0x3d736f61, 0x3dbeaafd, 0x3e17e8d5, 0x3bef2c5a, 0xbdaa76b1, 0xbc148043, 
    0xbcf99c7e, 0x3e3179fe, 0x3de9cdab, 0x3d40c251, 0x3d4c5902, 0xbd42d6da, 0x3dacce71, 0xbcfeb1ee, 
    0x3d959c29, 0xbd9dcdc4, 0xbe0bab8b, 0x3d4d1fe0, 0xbd0e9aba, 0x3e49a84c, 0x3e14eab9, 0x3e1c845b, 
    0x3e793b50, 0xbd446bd9, 0x3d4ccb58, 0x3dc7b95f, 0x3d9c7041, 0xbe445e71, 0xbe1abc4b, 0x3dfb64e3, 
    0x3cc00719, 0x3da8aba7, 0x3e4801fc, 0x3e0266c3, 0xbd253cb4, 0x3dd0bcb7, 0x3e036e70, 0x3e4b5b04, 
    0x3d96c4bd, 0x3e89ba09, 0xbe5282ff, 0x3c4ff566, 0xbd8dcab7, 0x3d9c4c9f, 0xbdc46760, 0x3c821386, 
    0xbd428ade, 0xbd234644, 0x3d3803aa, 0xbe2af186, 0xbb7af17f, 0x3eba61fb, 0xbea9c1b5, 0xbda1ab51, 
    0xbea72e53, 0x3bdb3547, 0xbe16f08f, 0xbd6482c7, 0xbc96b771, 0xbdafed0f, 0x3c052141, 0xbeb20704, 
    0x3ddd822c, 0x3e9fed59, 0xbf1f9647, 0xbe1d5f51, 0xbe1d13e0, 0x3c332c1b, 0x3dca1da7, 0xbe0b6718, 
    0xbc9f027e, 0x3cac085b, 0xbe19a192, 0xbdc0d5dd, 0x3d5f07ae, 0xbc8d2484, 0xbe23e617, 0xbd9acb92, 
    0xbe2e0281, 0x3de83f45, 0x3c82c24d, 0xbd278e7d, 0x3de228b2, 0xbd294d43, 0xbd2d937f, 0xbc5f683d, 
    0x3dd5e6ed, 0xbe0180c5, 0xbde832a8, 0xbd0d344c, 0x3d08b466, 0x3e8e0340, 0x3e257c7d, 0x3de7c72e, 
    0x3e8e339c, 0xbcedcc8e, 0x3c283f08, 0x3be4f788, 0x3ddbbdec, 0xbd948700, 0xbc4ae073, 0x3de587ab, 
    0x3da8d4ea, 0xbcc6cf26, 0x3ce573a2, 0xbd91bf9c, 0xbc1e0c58, 0x3dc2e2e9, 0xbcf01bb0, 0x3d887c0b, 
    0xbc2a81cd, 0x3e5bfaff, 0xbd8907f4, 0xbb107945, 0x3d3b11ed, 0xbd71e8e0, 0xbd602d61, 0xbce6ac5a, 
    0xbd1657ef, 0x3d3b9068, 0xbb5ac2e0, 0xbdc16a4e, 0xbda6ad75, 0x3e948279, 0xbdfbec92, 0xbdae44e6, 
    0xbd7b79a5, 0xbc8e15e6, 0xbd5609bd, 0xbd880e6f, 0xbc804da9, 0x3db07d2f, 0xbd8786e4, 0xbdd63d71, 
    0xbd97a14a, 0x3e95f99c, 0xbe236b4f, 0xbde80dee, 0x3ac8f9e4, 0x3ccc977c, 0x3c801597, 0xbd202c22, 
    0xb9e6d83c, 0xbd59d99c, 0x3c84d7f0, 0xbca19b62, 0xbccdfad0, 0xbd4892ca, 0xbd114439, 0xbd238857, 
    0xbd1e14e7, 0x3d203438, 0x3d012081, 0xbc3ffbb1, 0x3d47c8a1, 0xbd541418, 0x3c1fa612, 0xbcdb8926, 
    0xbc6ed6ee, 0xbd94ccad, 0xbdb8cd6b, 0x3d37a36a, 0xbd578871, 0x3d51d50b, 0x3db55560, 0x3d1fba16, 
    0x3d63c63c, 0xbdaa5432, 0x3ca7de3a, 0x3c8a10a4, 0x3d7b7f51, 0xbdd3d6f1, 0xbda1b30d, 0x3d586ab1, 
    0xbc90a64d, 0x3bf8498f, 0x3eb2e2ab, 0xbdaa286f, 0x3dc7f959, 0xbd6a19e3, 0xbea3b1d6, 0x3ebc50ac, 
    0xbdf95609, 0x3ed1ed4a, 0xbce74937, 0x3e6177a6, 0xbd480927, 0xbe311771, 0xbe154ffc, 0xbdafc008, 
    0x3b7e1833, 0xbe3a6352, 0xbe9308ba, 0xbe41548d, 0xbe8d76ae, 0x3f368f09, 0xbdebf872, 0xbe55e276, 
    0xbe52a2fb, 0xbe2183e4, 0xbea7f3ab, 0xbe84d62f, 0xbddd5415, 0x3d8a9107, 0xbe51a259, 0xbee3b724, 
    0xbdcb9af4, 0x3ecf568c, 0xbebd5d1a, 0xbebd5f88, 0xbcdf73e9, 0x3d833827, 0xbde411b7, 0xbdba53cd, 
    0x3d6fa584, 0x3ee8ed71, 0xbeb63b67, 0xbeeeadb8, 0xbd430925, 0xbf2302e5, 0xbee06e09, 0xbd901050, 
    0xbae60a86, 0x3e2021f8, 0x3e53a998, 0xbdac0773, 0xbe40a39e, 0x3f7f0b4b, 0xbd91d185, 0xbe6e08d4, 
    0xbe00e09f, 0x3d35bcdb, 0xbe6bb9b2, 0xbe495c9c, 0xbdebf340, 0x3e78b8e8, 0x3ea1de2e, 0x3e653242, 
    0x3e92125f, 0x3e834a95, 0xbda6cea0, 0xbcae52ce, 0xbe8b0043, 0x3f200772, 0xbeafdd5e, 0xbe26c207, 
    0xbd0331e8, 0x3d6b9dc9, 0x3c89e0fd, 0x3c615f1b, 0x3d378751, 0xbcef17e2, 0xbcb67ed0, 0xbd682855, 
    0x3c095c0e, 0xbe08c9ec, 0xbc454abc, 0x3c8d25c0, 0xbd9aee86, 0xbc44fd17, 0xbd8d4c08, 0x3c79e571, 
    0xbce47e0d, 0xbd5953bf, 0xbd413deb, 0xbd91dac4, 0x3d880a5a, 0xbda803e7, 0xbcfac2e6, 0xbd882744, 
    0xbce06431, 0x3da9a350, 0x3c631929, 0x3dce6041, 0x3e0c2165, 0xbd250ef1, 0x3d9c4f82, 0xbdac8414, 
    0x3dd835f0, 0xbda69e5d, 0xbdb2b8bf, 0xbd01e7a9, 0xbdb7598a, 0x3ccef495, 0x3d94cb1e, 0x3d5ea5df, 
    0x3d885d05, 0x3bad5f79, 0x3ba81de3, 0x3cd3433f, 0x3d8ab80f, 0xbcc2fe7f, 0xbd3161bf, 0x3d8f1154, 
    0xbda9e9e5, 0x3d9fb4fb, 0x3d637a50, 0x3ce1ddf8, 0xbbdb74a9, 0xbdd9bfc6, 0xbc6207c5, 0xbc0de823, 
    0x3d198be3, 0xbdbbc451, 0xbd574d92, 0x3b94cd00, 0x3d277085, 0x3e06d2a7, 0x3dc2fff9, 0x3d630a43, 
    0x3db5a8db, 0xbd8b68bb, 0x3d002f68, 0x3d87023e, 0x3dd9fb87, 0xbde66154, 0xbdaeb62f, 0x3d8cb27a, 
    0xbe05ba2a, 0xbe2717c1, 0xbd8bd7b7, 0xbbdb4a52, 0xbd73b46b, 0xbe1c19b3, 0x3d7ba072, 0x3c20fad5, 
    0x3cbc1226, 0xbc35c23d, 0x3ef3b7b7, 0xbdebb1e3, 0xbdafbf9f, 0xbe22baf6, 0xbe233299, 0xbd108384, 
    0xbd5db798, 0xbe6809a1, 0xbd578c12, 0x3d05d9e0, 0xbca48d2c, 0x3d4521a3, 0x3ed3dfcc, 0xbe54a59c, 
    0x3ce83e70, 0xbe32f12e, 0xbdd89288, 0xbdb68c1d, 0x3d0d519a, 0xbdca7417, 0x3d91f04b, 0x3db05f31, 
    0x3cd20518, 0x3cae9ae4, 0x3ead92c4, 0xbd9906e2, 0xbdfb5bcc, 0x3dc04c89, 0xbd249f03, 0xbd03dbe8, 
    0x3d7faf62, 0x3db70231, 0x3bb1c9c7, 0xbd14d583, 0x3d7b324d, 0xbe26d4fc, 0xbccb43e1, 0xbd43f280, 
    0xbe469335, 0x3d00f7af, 0xbcae84c0, 0x3c6d1532, 0xbc62342d, 0xbdee2d69, 0xbac95b5a, 0xbdded55e, 
    0x3e10d49e, 0xbe8bbc1a, 0xbc66ea47, 0xbe3616b3, 0x3ccd4013, 0x3e30eb6e, 0x3c7872ef, 0x3e2de626, 
    0x3e0e8e23, 0xbdea55d0, 0x3e0e46f6, 0xbdd60249, 0x3e2c4c79, 0xbde22cdb, 0xba75a538, 0x3c825a35
};

static const uint32_t _K30[] = {
    0x3e3eb742, 0xbf81151f, 0x3f31383c, 0x404dd7bf, 0x3f09ff53, 0x3de2b8a0, 0x3f1894e8, 0x400aa807, 
    0x3e0d9fd0, 0xbf4c8d64, 0xbf3cac2a, 0x3f0825ad, 0xbf8b500c, 0xbf338405, 0xbef9ef78, 0xbf0c4872, 
    0xbe93e070, 0xbf035e8c, 0x3e77ecb2, 0xbf05290e, 0xbd8b4010, 0xbf19e520, 0x3f7d9600, 0x3e6ad0be
};

static const uint32_t _K34[] = {
    0xbb0d1c38, 0x3bc04800, 0x3d416657, 0xbc9bd89c, 0xbcab76b2, 0xbaad4716, 0x3c8a5591, 0x3c6222e0, 
    0x3d0e48bd, 0x3c54420c, 0xbd2ebae0, 0x3d314f8f, 0x3b0f1d72, 0xbdc661f4, 0x3b908927, 0xbdc671f0, 
    0xbd3701eb, 0xbced5ec7, 0xbd0b1bfa, 0x3d747644, 0x3c3729af, 0xbc4b5144, 0xbe763723, 0xbd0325ce, 
    0xbca706c7, 0xbd8813d4, 0xbe0001cc, 0x3d410da2, 0x3d4c9289, 0x3cd7dfa2, 0xbe056619, 0xbe1552a3, 
    0xbc9580de, 0x3d5a63d0, 0x3d17efe3, 0xbd36afe0, 0xbb1e2f69, 0xbd00fd3d, 0xbc90dba7, 0x3d1936cc, 
    0xbda4aba3, 0xbd078ed3, 0xbda17107, 0x3cbf6cd7, 0x3de7363b, 0xbca21afe, 0xbe32e9e7, 0x3df9deca, 
    0x3dce1c2f, 0x3d91da60, 0x3da50ddd, 0xbb1dfb7c, 0x3d8ed968, 0x3d10cfd1, 0x3d9d440c, 0xbd47d3a1, 
    0xbd1c955f, 0x3d23d00e, 0x3d8b23b0, 0xbdc749c6, 0xbd061f19, 0x3ac4295b, 0xbd9d1f71, 0x3d8144ab, 
    0xbcc7cd6d, 0x3d6d6cc3, 0xbce453e0, 0xbd12390f, 0x3d818e4f, 0xbca76eb2, 0xbe6c7dc4, 0x3decd2a6, 
    0x3b3a5c06, 0x3d577cbf, 0xbd8d8e59, 0x3d3375f0, 0xbcc73b3f, 0xbc75c49c, 0x3cf18cf6, 0xbd240154, 
    0xbbb93586, 0xbd28783a, 0x3d23ec6b, 0xbccd5ea2, 0x3d80f626, 0x3ce3d7b4, 0x3de2a8a5, 0x3b7c6fb1, 
    0x3e10a94b, 0xbc473be6, 0x3db789bf, 0x3ae059d3, 0x3cdebe12, 0x3c36bb04, 0xbc45fb90, 0x3c949162, 
    0x3bba4af1, 0x3d818dd4, 0xbcb19715, 0x3db45a9b, 0xbc2c148e, 0x3d78efe4, 0x3cb967c5, 0xbb190402, 
    0x3d7ef225, 0xbcf81744, 0x3d0b59f3, 0x3c33ca21, 0x3d8526d8, 0x3c57ca5e, 0x3dcf37b4, 0xbab22d0f, 
    0x3e2f3f80, 0xbcc41655, 0x3e034311, 0xbce7fb19, 0x3d1afc43, 0x3cf77d5d, 0xbc23bd9a, 0x3c6c386d, 
    0x3c8ff5d2, 0x3d524c88, 0x3d5d63c5, 0x3d9ce6ec, 0x3bcda0a2, 0x3d5bcfe3, 0x3cfad704, 0x3d474c43, 
    0x3d418368, 0xbd2a1d3f, 0x3cb90596, 0x3d15e3cf, 0x3cf1249e, 0x3d470561, 0x3cfadee6, 0xbaadc797, 
    0x3dcbb4d5, 0x3a9a4ec5, 0x3ba59c51, 0x3d0f225e, 0x370f7370, 0x3b9d9c7d, 0x3c1ade13, 0xbcbe033f, 
    0x3cb6dea7, 0xbdb0fc4e, 0x3d366fab, 0x3c8bb056, 0xbd61aeb2, 0x3ddf590d, 0x3d27ea45, 0x3dc7561f, 
    0x3e1afb5b, 0xbd012d9d, 0xbda637ba, 0x3c9a6789, 0x3e3611b5, 0xbde36001, 0x3e92c1d4, 0xbde9254c, 
    0x3ddb25b6, 0x3d0861a4, 0x3c045033, 0x3dfa9c58, 0x3d4a6f96, 0xbd4b62cf, 0xbdaa61d3, 0x3d3c5b89, 
    0x3d536218, 0x3d847bdf, 0x3dc86586, 0x3e2a4342, 0x3e0377be, 0x3d43fe49, 0x3dddd123, 0x3e35d5cc, 
    0x3db166f1, 0xbd853d1d, 0xbd301417, 0xbdc7c113, 0x3e8f5366, 0x3b6af6d1, 0x3e20b876, 0x392314ce, 
    0xbdd6b35b, 0x3d6b1cc8, 0xbe1ef56a, 0xbe446a28, 0x3d92522c, 0xbc58976d, 0xbd496edc, 0x3d99ccd3, 
    0x3e1da956, 0x3e34be7a, 0xbc065641, 0x3d820a8c, 0x3e82392b, 0x3e22625c, 0xbb0d9b94, 0xbdb51747, 
    0xbe017ebb, 0x3c70bd29, 0x3e000824, 0xbe38e165, 0x3e410810, 0x3e322dc7, 0xbd99460b, 0x3e389460, 
    0xbe67d61a, 0x3dfaaf22, 0xbe93a89e, 0xbe8cc56d, 0x3e4e8a0d, 0x3dae064a, 0xbe29f66f, 0x3e832f1e, 
    0x3d3cca24, 0xbc8518da, 0xbd3c95c5, 0xbd82d521, 0x3d720242, 0xbce0f4a7, 0xbca4d7a6, 0xbd9cb4b1, 
    0xbb8c3f80, 0x3cbd271c, 0x3c4d6897, 0xbce1104b, 0xbbfba6f5, 0x3cf8cf44, 0xbc373ae4, 0x3d3abc78, 
    0xbc5ba66b, 0x3cde2a3a, 0xbc8dc08d, 0xbceabfd8, 0x3d8e57d9, 0x3d0d4191, 0xbcf6fcc2, 0x3d7c5821, 
    0x3c2a2258, 0x3d0caa4c, 0xbbaf3902, 0xbd943f95, 0x3d8bb833, 0xbd056307, 0x3c9bfcb9, 0xbd4b2b54, 
    0xbc184d68, 0x3d1e7c2a, 0x3d1a3477, 0xbc0e35b0, 0xbc72a565, 0xbc31c757, 0xbcfa87a8, 0x3d21f7f8, 
    0xbca85db3, 0x3ca56ccd, 0xbbcd04fa, 0xbd428465, 0x3cdccd3a, 0x3c3f574a, 0xbd46bcc3, 0x3cd927f7, 
    0xbc88ae47, 0xbc2ad71a, 0x39dab58f, 0xbd3f28b3, 0xbb0a2934, 0xbc91810c, 0x3b0d9677, 0xbd2d2b6c, 
    0x39f9ee89, 0x3d710c3e, 0x3c1578f4, 0x3cd7971e, 0xbce78de9, 0xbd371dcf, 0xbc6d3b85, 0xbd22e772, 
    0xbccce9fb, 0x3d09a18b, 0xbd0807f5, 0xbc105061, 0xbc115214, 0xbd0f8ac7, 0xbd33cbd8, 0x3c8572cb, 
    0x3d0cd0b5, 0x3d1a8156, 0x3c8339ad, 0xbbc6b782, 0x3d24cf75, 0xbc556d5f, 0xbcfaa30f, 0xbcda83b0, 
    0xbcd0f812, 0xbba0ef90, 0xbbbb7d05, 0xbc22366b, 0xbc0dcf35, 0x3c5762a2, 0xbccf2611, 0x3d298f1d, 
    0xbd6d4584, 0x3d199063, 0xbd008b16, 0xbb824d69, 0x3d077a87, 0x3ccb6140, 0xbd9cd234, 0x3d32880a, 
    0x3c550fac, 0xbb2629bc, 0xbce6c692, 0xbd1bc1a7, 0x3da59526, 0x3c60a2da, 0x394ecfc7, 0xbdb1d9ed, 
    0xbceaa6e6, 0x3c87c77a, 0xbc8753ca, 0xbccc8233, 0x3c8ddc31, 0x398a8ad9, 0xbc543dc1, 0x3d2c1321, 
    0xbd16b26e, 0x3c928322, 0xbd0ab687, 0x3bab991a, 0x3d41be62, 0x3bdf1e23, 0xbda46d09, 0x3d54d709, 
    0xbb3b7e12, 0xbb896e9d, 0x397bdb5b, 0xbd657b1c, 0x3bada143, 0x3c9320f0, 0xbceb6e31, 0xbdcc3c8c, 
    0xbd0fdfc1, 0x3d200057, 0xbc3369f5, 0xbd5860c6, 0xbcd76185, 0xbd24a4c8, 0xbbe8073f, 0xbc221512, 
    0xbcab4338, 0x3ce25658, 0x3a76b62a, 0x3d201814, 0x3ce1dec7, 0xba381cdf, 0xbdd873ec, 0x3cff8afc, 
    0x3d4d6834, 0x3d409299, 0xbe5ef10c, 0xbe854ead, 0xbce8d6bf, 0xbde9439c, 0xbdc554eb, 0xbd9187da, 
    0xbe5ef696, 0x3c55952e, 0x3d476e7c, 0xbe44bba8, 0x3c5b7d75, 0xbde19dc4, 0xbe17967a, 0xbd267ab7, 
    0xbe0bb2c2, 0x3dbcf604, 0xbc73a403, 0xbd974efd, 0x3bab9be4, 0xbd834b66, 0x3ca537b0, 0x3ce0bb08, 
    0xbbb9262d, 0xbda6d6de, 0xbe183da1, 0x3db50032, 0xbd42556f, 0xbe1b7a84, 0xbd903323, 0xbcc3a264, 
    0xbd78dece, 0x3dce68ce, 0xbc2af277, 0xbe7358db, 0x3b95dac0, 0xbe2c5a63, 0xbc074e21, 0xbdf36d0c, 
    0xbcf78027, 0x3e0a88f5, 0x3cf1cb56, 0xbdd11937, 0x3cc39427, 0xbdbafe84, 0x3e31449b, 0x3c886576, 
    0x3d0dee7f, 0x3ce11112, 0xbd4548a1, 0x3e9d4a19, 0xbd7fcdfa, 0x3d577b12, 0xbd59565a, 0x3d98b8e2, 
    0x3c198395, 0x3da78064, 0x3cc9efba, 0xbe22ee53, 0xbcfef4f0, 0xbd64fa25, 0x3d5773c4, 0xbdf2bdf6, 
    0x3d9f0b0f, 0x3e004840, 0x3df8a3c8, 0xbd8ab214, 0x3d89c6d1, 0xbd60ceb5, 0x3e8fedbb, 0xbd133852, 
    0x3ca3b26c, 0xbc21329d, 0xbc87ea86, 0x3b8f1c87, 0x3d0a6807, 0x3a90fd9c, 0xbd30931d, 0xbd13ed8e, 
    0xbc14bd6a, 0xbc0069f6, 0xbccb15df, 0xbd08b872, 0xbcb4536f, 0xbce152e6, 0xbd36aff6, 0xbca0c9f6, 
    0xbd521afa, 0x3bb73609, 0xbd0c7b5d, 0xbc125cc9, 0x3d2fc3bb, 0xbbf2d668, 0xbcd288a4, 0x3d1c796b, 
    0x3b9d651f, 0x3bd77873, 0xbc94aec8, 0xbced882e, 0x3d320eed, 0xbcda9fa7, 0xbc62c54a, 0xbd3a8543, 
    0xbc8a218d, 0xbbd026d3, 0x3bd5be1b, 0xbcaf9140, 0x3c5a2b7c, 0xbafac5fa, 0xbc3de174, 0x3c4f5a7b, 
    0xbd6285d7, 0xbb80f66b, 0xbd5537a6, 0xbbb7b42a, 0x3d4edcab, 0xbc0b3bcb, 0xbcca6218, 0x3ce2c5eb, 
    0x3c987a0a, 0x3d18794a, 0xbcc02f28, 0xbb937d91, 0x3d8091c0, 0xbc906cbf, 0x3c2f1c2c, 0xbd28bb65, 
    0xbb9eaeba, 0x3cfe2c80, 0x3b603f13, 0xbc07e468, 0x3cb314f0, 0xbc2d964f, 0xbd2168f7, 0x3d1e05d9, 
    0xbd246c69, 0x3cca0c16, 0xbcec266c, 0xbc775e0b, 0x3d968cad, 0xbcb9b9c2, 0xbd2b47bd, 0x3d9c6c10, 
    0xbc9f0fba, 0x3c298e4b, 0xbdc86c5b, 0xbcb2f457, 0xb948cbc1, 0x3b69436d, 0xbd4b6688, 0xbe1b0fe8, 
    0xbcb13578, 0xbd1e4ee4, 0xbcc74d7b, 0xbd0a32f9, 0x3d9acb65, 0xbc034b23, 0x3d2462c3, 0x3b415b0b, 
    0x3d913b89, 0xbdb66296, 0x3dff53d1, 0xbd0629c2, 0xbce091f2, 0xbc787a87, 0xbd1958b6, 0xbd235c28, 
    0xbcc336dd, 0xbc56306a, 0xbd411cdd, 0x3d987a53, 0x3cbb3921, 0xbc387ecf, 0x3cdbc70a, 0xbdff79bf, 
    0x3cf0ce30, 0xbd620f74, 0xbc726341, 0xbc25852f, 0x3db0b381, 0xbbe4ca7f, 0x3de4d204, 0xbc336429, 
    0x3de41326, 0xbda08144, 0x3e08ad77, 0xbc8dfdae, 0xbd62ff24, 0xbc97804b, 0xbd9198a6, 0x3c30b1de, 
    0xbca3e091, 0x3bc4e601, 0x3b33a80a, 0x3d550b4c, 0x3d1b6a14, 0x3d27eb69, 0x3c95ffa8, 0xbcf7ec58, 
    0x3da4350a, 0xbd863772, 0xbc8be148, 0x3d4e76c6, 0x3d789b78, 0x3c9e3c3e, 0x3dc07252, 0xbc9271d0, 
    0x3e0a5284, 0xbdb27807, 0x3d342134, 0x3d7549c1, 0xbab6d7be, 0xbcd11734, 0xbd8adc17, 0xb9b0f7da, 
    0x3c5b4ad5, 0xbc9410a1, 0xbe5cf8c5, 0xbdc09ecf, 0xbc966909, 0xbd45fda0, 0xbc447c12, 0xbe8f7d38, 
    0xbdee582e, 0x3c831792, 0x3d557aa1, 0xbda274d3, 0x3df6a82c, 0x3cf4b7d2, 0xbc139bf5, 0x3d3eac7e, 
    0x3d921ca1, 0xbd493b14, 0x3eac589a, 0xbde11f77, 0x3d591b2d, 0x3de840ff, 0xbc4b4ac7, 0xbcf018dc, 
    0x3cf43fb0, 0x3dd119c5, 0xbe0d37bc, 0x3da014a8, 0xbcfc03df, 0xbe540dd6, 0x3df519d3, 0xbe60ccbf, 
    0x3d48d438, 0xbdb67325, 0x3d2699c1, 0xbcf7f7f2, 0x3e70a600, 0x3dc34470, 0x3e6f086d, 0x3c135a86, 
    0x3dc496ac, 0x3b2497fe, 0x3ec2da92, 0x3d09c72c, 0xbd682c8e, 0x3dc93b72, 0xbde3317c, 0xbda7b744, 
    0x3c8b3e91, 0x3d76547e, 0x3c41be69, 0x3e2c2566, 0xbd1f8bc2, 0xbb81f330, 0x3dc8eeee, 0x3d63da2b, 
    0x3dff3a1a, 0xbdc1e467, 0xbca7ac4b, 0xbc264fdb, 0x3e01ddbb, 0x3d7276b0, 0x3e5b8742, 0x3db25ad4, 
    0x3dbff26e, 0xbda2f9cf, 0x3de6ba80, 0x3d9bad7e, 0xbd8cfae2, 0x3d202bd3, 0xbda7bf71, 0xbd5624eb, 
    0x3a1b4e0b, 0x3d5a2bb7, 0xbda89e6b, 0xbd224142, 0x3d19bd32, 0x3d2813fa, 0xbc6d8bd0, 0xbd7a1455, 
    0xbc0622b5, 0xbc2192db, 0x3d0f615c, 0x3d05955f, 0x3bc7023f, 0x3c24b92f, 0x3ce3448a, 0x3c9951ba, 
    0x3c808989, 0x3cfa9b21, 0x3d96d2a0, 0xbb0aa3cd, 0x3d56e38b, 0x3d1e028d, 0x3c1b1cc4, 0x3d305bf1, 
    0xbc676f7a, 0x3c0a4c10, 0x3b62c4fd, 0xbd3c4769, 0x3cdbb408, 0x3da21ec5, 0xbcc8cfc4, 0xbc2fa565, 
    0x3a6fc597, 0x3d20b6f7, 0x3c7f54a7, 0x3d019039, 0x3c20148f, 0xbce6e3a1, 0x3ccbcbc4, 0xbcadc6bd, 
    0x3ca7c461, 0x3c40e6fd, 0x3d318308, 0x3c366b61, 0x3c5b3972, 0xbc9f79fa, 0xbcf70e4d, 0x3c70ab79, 
    0xbd0374e8, 0x3bb354d5, 0xbbc04ee5, 0xbda68500, 0xbd3cd2fb, 0x3d185fb1, 0xbda9b2c3, 0xbc7e171b, 
    0xbb51186d, 0x3d79aebc, 0xbceca2f0, 0x3cdd102e, 0xbc44b986, 0xbd72c400, 0x3be94da0, 0xbb2fdff7, 
    0x3bc2dbf0, 0xbc258cee, 0x3ceaa54b, 0x3ca07a1c, 0x3cf3f57b, 0xbd3cae1d, 0xbd2f8b36, 0xba41aea6, 
    0x3c2256de, 0x3c4b5642, 0x3d7e930b, 0x3d8f393d, 0x3d383315, 0xbc1f5ce5, 0x3d923193, 0x3d95f815, 
    0xbdbfcc48, 0x39c1c623, 0xbc2eb661, 0xbd8c07b0, 0x3d43ad1b, 0x39e54ac3, 0xbd7d9358, 0x3cbc8b2b, 
    0xbe3ab451, 0x3c86c9c6, 0xbe4973f5, 0xbd8039ec, 0x3c9c3417, 0xbc99bb62, 0x3d3744a0, 0x3b617929, 
    0x3d172468, 0xbd58a0da, 0xbd2b615b, 0x3d30d004, 0x3d0a55c9, 0xbcc03652, 0x3b31da9b, 0xba3bcc83, 
    0xbdc44194, 0x3cbba500, 0xbbf7ebb7, 0xbdac11d6, 0x3c2cdcdd, 0x3ca5c20b, 0x3d206325, 0x3cfc3922, 
    0xbe1c3713, 0x3d22f40c, 0xbe26f452, 0xbd79d70f, 0x3c075d42, 0x3c3a6363, 0x3ce45476, 0x3d39487c, 
    0x3d14cec1, 0xbc8851f4, 0x3c2926f3, 0x3d41bad1, 0x3d964ea3, 0x3d14ce06, 0x3ce4a857, 0x3d59f8f9, 
    0xbda18129, 0x3cbe91c7, 0x3be83c63, 0xbd636cad, 0x3bb37020, 0x3d402c8c, 0xbd0eabf7, 0x3a99b219, 
    0xbe240631, 0x3bf9825f, 0xbe22cbd1, 0xbd9c47c5, 0x3cae4d3f, 0x3cee920c, 0x3d258898, 0x3d91d70b, 
    0xbdbd4588, 0xbcabf007, 0xbe442814, 0xbd5e3db3, 0xbdc7a7ec, 0xbdab1ace, 0xbdcb1c24, 0xbe1081cd, 
    0xbe1ad233, 0xbdb0bcbf, 0xbd6a69f2, 0xbe346953, 0xbb205d16, 0xbdccee90, 0xbd79cb0d, 0xbdb55785, 
    0xbd9a3b9d, 0xbd7416d3, 0xbd2211c9, 0xbdeafb5c, 0xbd825f90, 0xbd7fa83b, 0x3d7fcc48, 0xbd3d02a7, 
    0xbd2a03ea, 0x3d35661b, 0x3bac9b82, 0x3d441fcb, 0xbd4cbdaf, 0xbda4f330, 0x3d984fda, 0xbbba2253, 
    0xbd4b1143, 0xbd9ac31c, 0xbd38604a, 0xbd8900e8, 0xbc4820c8, 0xbc938f8d, 0x3cd33ebb, 0xbd1ae8b4, 
    0xbc60fd80, 0x3c1fba9b, 0x3c28c63f, 0xbdacda88, 0xbd45afc3, 0xbda5b414, 0x3deea477, 0xbd12f0ca, 
    0xbd493fbf, 0x3d5afc87, 0xbdbfa57b, 0xbd3de1fc, 0xbd2baba5, 0xbca37b43, 0xbd2dbb29, 0x3c7d96db, 
    0xbd9037c4, 0xbb773801, 0xbd1b2fbd, 0xbd936c63, 0xb9eac83d, 0x3b201ab3, 0x3b9f03c7, 0x3ba359bf, 
    0xbdaf4db5, 0xbd1307f1, 0xbc8b3b92, 0xbdb5d51e, 0xbd959716, 0x3af3f561, 0x3d9732ce, 0xbc0c3aed, 
    0x3d09e5b6, 0x3d5f4da1, 0x3def7a5d, 0x3d89cd18, 0x3d65afc6, 0xbce2c56d, 0x3dbb578a, 0x3dc493dc, 
    0x3c4edc2a, 0x3c6ba686, 0xbd61485a, 0x3ce40793, 0x3ccb7c87, 0xbcdcf32c, 0xbd8bdc13, 0xbb214f74, 
    0xbc3b6fa9, 0x3c49ac94, 0xbcade8ac, 0x3cb6583b, 0xbcf62707, 0xbd526ebd, 0xbcb952dc, 0xbcdfe0c6, 
    0x3d6e5737, 0xbd1bb36e, 0xbd25cbde, 0x3b0cfce4, 0x3ca433d9, 0x3d3fc4db, 0xbb997f4b, 0xbd8a635b, 
    0xbc9bcf9e, 0x3b6286bc, 0x3c95c361, 0xbd2f0bc4, 0xbcd13c2f, 0xbcf41812, 0xbd08057d, 0xbb912e48, 
    0xbd4470c7, 0x3ca9bb33, 0xbd3323c3, 0xbd68eed9, 0x3dc84421, 0x3d242ed1, 0xbd831023, 0x3d69fc66, 
    0x3d26cc50, 0x3dc9b9c5, 0x3cf17d45, 0xbcdce695, 0x3dd40e5a, 0x3d210097, 0x3d053522, 0xbd6cfee4, 
    0xbda5c03c, 0x3c5c0b44, 0x3d90192b, 0xbd31eb04, 0x3d3867ab, 0x3d530a73, 0xbd3188ea, 0x3d9f30c5, 
    0xbde6e5a1, 0x3d9168c5, 0xbd849f3f, 0xbcd7ba06, 0x3d894925, 0x3d93f088, 0xbd99c9e0, 0x3dcc0cdc, 
    0xbbffe6fc, 0x3d31fe1e, 0x3d916f1c, 0x3de06292, 0x3d061501, 0xbc8eb93c, 0x3d6a3131, 0x3dafd768, 
    0x3da1150b, 0xbc05e748, 0xbd0912c7, 0x3b0945b3, 0x3cea3079, 0xbd139b1b, 0xbd04fd33, 0xbbbc80a6, 
    0xbdab853a, 0x3d19e5b7, 0xbd86f92b, 0x3c951d4e, 0xbcf25790, 0xbd09e505, 0xbcc8958f, 0xbce973f4, 
    0x3d3587ad, 0xbcf1fcd7, 0xbd8ec74e, 0x3d2b3c7a, 0x3d88bbc3, 0x3d5afab9, 0xbbe544ac, 0xbc92d660, 
    0xbd78bc0f, 0xbbeb837a, 0x3d649780, 0xbd751992, 0xbcb4c2c9, 0xbb7259d2, 0xbb25bd31, 0x3c7e05ab, 
    0xbe036c42, 0x3d3a4e9b, 0xbdb9ba38, 0xbd3ebcb0, 0x3da7aa0a, 0x3d6af938, 0xbd30c121, 0x3d849b18, 
    0x3d9b21ba, 0x3d8f5f7b, 0x3c978813, 0x3ce7fe9a, 0x3e157ef2, 0x3d902a8d, 0xbc0c931f, 0xbbe209e6, 
    0xbd7cdcaa, 0xbbd3a550, 0x3cef44b4, 0xbdc6c569, 0x3cfcac73, 0x3d9e0f22, 0xbdda1596, 0x3d99f210, 
    0xbe201e5b, 0x3d71c8dd, 0xbe10d2b9, 0xbd5465ba, 0x3de035d7, 0x3d6dbff4, 0xbd41beb3, 0x3e160002, 
    0xbd881172, 0xbdaff112, 0xbd88166b, 0x3c7fd37e, 0xbe1f4ce7, 0xbd42572d, 0xbda51cc8, 0x3bc9d676, 
    0xbc6997a8, 0xbc7458a3, 0xbd55e675, 0xbc0011b5, 0xbd442450, 0xbe2d3b7e, 0x3d689580, 0xbe0207ef, 
    0xbc31ab26, 0xbb334784, 0x3b792e85, 0xbc7262b9, 0xbd2a090e, 0xbd9f0508, 0xbc0c7e05, 0xbdc4cee8, 
    0x3c801e51, 0xbde83f17, 0x3d83ed8f, 0x3d503585, 0xbdbd1b2a, 0x3ac4151c, 0xbd803e52, 0x3dfc68e6, 
    0xbc0a8a8a, 0xbd201527, 0xbd469976, 0xbca9991f, 0xbd1a18c0, 0xbe09fe7a, 0xbb70a01d, 0xbd9a3425, 
    0x3a8fa7ee, 0x3b6f8a4f, 0xbd2e81c6, 0x3c9e7443, 0xbd809b92, 0xbd82ec69, 0x3d868335, 0xbc8896af, 
    0xbca4dc35, 0xbd99146d, 0x3da60a36, 0xbd417ca7, 0xbdddc1b4, 0x3bb31e57, 0xbd8d204d, 0x3e3f020b, 
    0x3d0be891, 0xbc1e6b20, 0xbd159c98, 0x3c9b96cf, 0xbc556e97, 0xbe0a1f01, 0x3bdbbc6c, 0xbde8c040, 
    0xbbe85e09, 0xbd072a4d, 0x3c5a82be, 0x3b9b2731, 0xbd043599, 0xbd841d38, 0xbc365ff1, 0xbd89900e, 
    0x3bda0cfd, 0xbd7caaf4, 0xbb83d890, 0xbeb3a362, 0xbc305a59, 0xbc04b4e7, 0x3ce93909, 0x3d9d7eeb, 
    0xbd28d5e3, 0x3e4138f9, 0xbda6f5b2, 0xbdffd987, 0x3cbaaaa5, 0xbe315b6d, 0xbdbfd082, 0xbd9927c9, 
    0xbe03cec6, 0x3dc93a77, 0xbe063c98, 0xbe038f42, 0xbbece812, 0xbe0a154e, 0x3dfcd325, 0x3cbfc49a, 
    0x3cc76d71, 0xbd7663ee, 0xbe6f4c0f, 0xbddcf9e9, 0xbe37e476, 0xbcee9c0e, 0xbd684252, 0xbdd29ac5, 
    0xbe0a14dc, 0x3e57e64a, 0xbdd42823, 0xbe711f36, 0x3d606601, 0xbe922fe6, 0xbd8e4f35, 0xbea103fa, 
    0x3d1a82d1, 0x3e1172e5, 0x3c2aaaa4, 0xbe0775ce, 0xbdbb0c17, 0xbe6577bb, 0x3e020df4, 0xbe4b5c0a, 
    0xbe14f6b2, 0xbe02558c, 0xbe257c36, 0x3e705eca, 0xbe99c02a, 0x3db98ee0, 0x3d470ded, 0xbc9184a4, 
    0x3d4cec00, 0x3d28e316, 0xbd872388, 0xbe804adf, 0x3e0ce894, 0xbea0cdaa, 0x3e28677a, 0xbeaaaa82, 
    0x3d3c927a, 0x3cfd1eb4, 0x3e27ca8b, 0xbe016305, 0xbd6fc508, 0xbe3e5c3b, 0x3e2b69ea, 0xbde4ef11, 
    0xbdd86c88, 0x3e41671d, 0x3f10759b, 0x3ee62f20, 0x3d887912, 0x3e2607d3, 0x3e90adb7, 0x3f0f1fa2, 
    0x3d6d072c, 0xbeda9be2, 0xbdd7cb8f, 0x3cc2b55c, 0xbbc4ccdb, 0x3d2f379f, 0xbe0c373a, 0x3db306a1, 
    0x3c234a63, 0xbdf5efd0, 0xbdf541e3, 0x3db41b63, 0xbe7059d4, 0xbe061e52, 0xbba0d4be, 0xbdf2776d, 
    0xbcce1d49, 0xbe8dba84, 0x3f00f1b8, 0x3d8b22aa, 0xbd8f2316, 0xbd3ec5d4, 0xbe0d9e37, 0x3e8d7c04, 
    0xbe05f11f, 0xbe4ebebe, 0x3d5600da, 0x3e7d5641, 0xbe712c81, 0x3d0c72c6, 0xbecbaf46, 0xbe272186, 
    0xbdf02597, 0xbdeadfdf, 0xbeb3052d, 0x3eb42f4d, 0x3cdc7470, 0xbdbe64cf, 0xbe6c9427, 0xbd948c9d, 
    0x3b32a75d, 0xbd98951b, 0xbdea6a82, 0xbecb997b, 0x3dbcb639, 0xbf18d9b8, 0xbd172023, 0xbbe4dc63, 
    0xbdab3828, 0xbdb672e8, 0xbd9004a1, 0xbdab8008, 0xbe3dbed1, 0x3c23315c, 0xbe226455, 0xbc3ff79a, 
    0xbe5d63fe, 0xbe49cfdd, 0xbea9c5f1, 0x3e6f0a58, 0x3d011647, 0x3c8ac047, 0xbf1b446b, 0x3b76201a, 
    0xbe027ecf, 0xbe4a071b, 0xbe63f6ac, 0xbe8c3137, 0xbdc0ebbb, 0xbe8ae851, 0x3e18122a, 0xbeb0ac23, 
    0xbdfdfcf8, 0x3e09bda3, 0xbd6bbeb6, 0xbdb97bdb, 0x3da4093a, 0xbc6ddefb, 0xbdb1508c, 0xbd9d9aa3, 
    0xbe27e7a9, 0xbe11017d, 0xbe806816, 0xbe757f25, 0xbe6696c4, 0xbc81776f, 0xbd6a26ac, 0xbe87e39b, 
    0xbec980c3, 0xbe3d1baf, 0xbf035315, 0x3ddc0347, 0xbe8f0f27, 0xbe28dd17, 0x3d0d8dfc, 0xbf15ecdc, 
    0xbd5eba1a, 0x3d6b49b5, 0xbd40e906, 0xbe463829, 0x3e539e25, 0x3b44de8c, 0x3d77f2f0, 0xbd8ac19b, 
    0x3e18d46c, 0xbe0803bc, 0x3ec3c347, 0xbccab8aa, 0xbdcb4625, 0xbdcafbbc, 0xbdb22e22, 0xbe9eecb7, 
    0xbe9dbdef, 0x3c8fb33f, 0xbddb5d5a, 0x3e96f00c, 0xbeb18b82, 0x3e4e5dea, 0xbc9284d0, 0xbeb5fac0, 
    0x3edec503, 0xbe2e2117, 0xbc35296a, 0x3d8a4683, 0x3cdb5d31, 0xbdad96bb, 0x3e86701b, 0xbdf2a2d5, 
    0x3eb13b55, 0x3ab3d41e, 0x3f4de4af, 0x3e063d61, 0xbe0550ad, 0xbe1b74ed, 0x3d3544f8, 0xbea9b758, 
    0xbda9d2ea, 0xbd9dd9a2, 0xbe1c9b3b, 0x3e51e036, 0xbd85267b, 0xbdd875e9, 0xbe496d83, 0xbe0186f3, 
    0xbd370096, 0xbd6fae1e, 0xbdf1ca25, 0xbe652fb3, 0xbd7ec4e4, 0xbdf81136, 0x3ca68cc9, 0xbd018848, 
    0xbca0b774, 0x3ccf407f, 0x3d1a4354, 0xbbdd44dc, 0xbd1611f3, 0xbdaf9a84, 0xbd43e040, 0xbdd4c419, 
    0xbc4c287a, 0x393fe50b, 0x3e0da824, 0x3f16158a, 0xbcbf94ba, 0x3e046283, 0xbd5de2a8, 0x3dcb93ef, 
    0x3de97b6d, 0xbdaa605b, 0xbd4247d3, 0xbe047e15, 0xbd5979cc, 0xbcc9ee0c, 0x3d499cba, 0xbd027702, 
    0x3b9a914a, 0x3c7bad96, 0x3c6f4180, 0x3b82e437, 0xbddf055b, 0xb8d25aa6, 0x3d38a6be, 0x3ba50187, 
    0xbd2a71ed, 0xbdb97637, 0x3e7d6c50, 0x3cfc1a77, 0xbd0345de, 0x3c9a2542, 0xbdcabf50, 0x3dd89cde, 
    0x3a050678, 0xbce48484, 0xbd51ae92, 0xbd59674d, 0xbd2a88d3, 0xbd3b6297, 0xbd675561, 0x3c9b9a69, 
    0xbd4a36d8, 0xbc62373e, 0xbc7c5f1d, 0x39ec971a, 0xbdc133be, 0xbc9cfce5, 0xbdab93b3, 0xbd6a514a, 
    0x3dbc2daa, 0x3d24fe9e, 0xbe0044ba, 0xbd1bce8d, 0x3e359dff, 0x3e22d831, 0x3ee18e79, 0xbec1028c, 
    0xbe28a91f, 0xbdbebfde, 0x3daf3b13, 0xbe170fea, 0x3cea9618, 0x3e0a158f, 0xbe777829, 0xbc433890, 
    0xbde7a538, 0x3e7b1696, 0xbdba2093, 0xbebb1fe1, 0x3c7ea8ff, 0x3d5fe3cf, 0xbdbf5fbc, 0x3d8c1cda, 
    0xbd8be968, 0xbf0586f0, 0xbdc9fafc, 0xbe217787, 0xbe8494e9, 0x3e0d5d6e, 0x3e883ba6, 0xbe4adf12, 
    0xbe25fd02, 0x3e657fe3, 0xbe92e03e, 0x3de1c4c5, 0xbe2a5f46, 0xbe910808, 0xbeaf3a26, 0xbecc26d8, 
    0xbdb91c1c, 0xbc3a5c1b, 0xbe692a2e, 0x3dafb543, 0xbe6a8e99, 0xbe89ce9e, 0xbd5127ea, 0xbe756242, 
    0xbe62caa8, 0xbeffe81b, 0xbc3f8109, 0xbe0d7dfe, 0xbee2eef6, 0x3eb15151, 0x3c25b54e, 0xbe0908df, 
    0x3e721ab2, 0xbdacae11, 0xbe32bc83, 0x3e8bef19, 0xbdfe0f41, 0xbeef2403, 0xbe60f973, 0xbeb43c66, 
    0x3d3c2d8b, 0x3c77e777, 0x3d8095e7, 0x3ec781ac, 0xbe536f96, 0xbeb7f604, 0xbd0d9ac8, 0xbec6afbe, 
    0x3c09759b, 0xbc066ece, 0xbbbf3934, 0x3b735610, 0x3d02e4b5, 0xbccfa753, 0xbd49eeb2, 0xbd08c043, 
    0xbd166f89, 0x3d677d1b, 0x3d1dd96d, 0xbd14aa6b, 0xbbbc2c48, 0xbb10d03f, 0xbd37500b, 0x3cc2619a, 
    0xbcf50a22, 0x3c8cc160, 0xbd825696, 0xbc033b53, 0x3d682926, 0x3ce456ab, 0xbd00b43b, 0x3d2efabc, 
    0x3d0e0da6, 0x3cfd8841, 0xbcbddb95, 0x3c3fa4cb, 0x3d13c1bb, 0xbcd5f3fb, 0xbd57e5d0, 0xbd2ec245, 
    0xbbd8e171, 0x3d472cee, 0x3c92b617, 0xbd58062a, 0x3c3de39b, 0x3bd32cf8, 0xbd0a6aca, 0x3cc400ed, 
    0xbd5ea751, 0x3cca6e98, 0xbd8101d3, 0x3b70bc26, 0x3d88672c, 0xbc0747dd, 0xbd0e2ae7, 0x3d0dc966, 
    0x3d200c38, 0x3d050c52, 0x3c1b7e07, 0x3be0d427, 0x3d1f7e7a, 0xbcf6fdd5, 0xbd2e464e, 0xbcc2350d, 
    0xbd14a81e, 0x3d4c098e, 0x3d1d3028, 0xbca58a64, 0xbd1cb0a6, 0x3c6c6f40, 0xbcfa78e6, 0x3c54486d, 
    0xbd29a53d, 0x3d0ae806, 0xbd02f38c, 0xba3dc956, 0x3d07757f, 0x3c945fca, 0xbd0bf9d9, 0x3d522c18, 
    0xbd96cc0c, 0xbddededf, 0xbb241056, 0x3c39a150, 0xbd947e71, 0x3cb58cf4, 0xbbee6f7c, 0x3b0220a6, 
    0xbbc410bb, 0xbd848707, 0xbd14ee21, 0x3e077eb1, 0xbcc3d1df, 0xbd0d05bc, 0xbd3fb6e6, 0xbd32f372, 
    0x3d44789b, 0xbdd4a40f, 0xbd1cc2bd, 0x3e8e545d, 0xbd38c775, 0xbd3cd913, 0xbd0cb092, 0xbd81f920, 
    0xbd8dfc81, 0xbd8637d3, 0xbb9aa588, 0xbc71f5e7, 0xbd10d921, 0x3c6b65c5, 0xbc04d8e0, 0xbc19a2c8, 
    0x3daa72e8, 0xbdad8dcd, 0xbd7e37bb, 0x3e250695, 0x3bbe8d7a, 0xbc6ec824, 0x3d52c5f2, 0xbd9f3cb7, 
    0x3da9c8e2, 0xbdf55b1d, 0x3cc964f3, 0x3e4b6a3d, 0xbd392958, 0xbd246079, 0xbd093832, 0xbdd04440, 
    0xbd7cfa76, 0xbd20c01d, 0x3c054064, 0x3adb79cf, 0xbd6dee07, 0x3c61ad2e, 0x3d663cb7, 0xbaf7a21a, 
    0x3d2f2912, 0xbda0930e, 0xbd6d2412, 0x3d764fab, 0x3d54efed, 0xbb6919b7, 0x3d695e5e, 0xbd3e501b, 
    0x3dc65485, 0xbdcef409, 0x3d4364ec, 0x3bb2ecbb, 0xbd7cdee4, 0xbd998d22, 0xbd6d0ad1, 0xbd963c13, 
    0xba38664f, 0x3d7a218d, 0x3db89581, 0x3d052be7, 0x3d26471f, 0x3d202561, 0x3da8d7ff, 0x3dee8994, 
    0xbb02c86b, 0x3d214f3e, 0xbd9abbfa, 0x3c91457f, 0xbcb8d552, 0xbc8c80de, 0xbd265a1c, 0xbce76c66, 
    0xbdf155b1, 0xbca2103f, 0xbdf534d7, 0xbbc8d79a, 0x3b82446e, 0xbdacc968, 0xbd8685ec, 0xbd65eac3, 
    0x3d2742a5, 0xbdb62ec6, 0xbd6b5339, 0xbc7c0517, 0x3d9581ba, 0x3d893c0b, 0xbb6239a9, 0xbd76bce7, 
    0xbd0b5184, 0x3c98703e, 0x3d3c1974, 0xbd7cc0f8, 0xbcbb1198, 0xbd1590ca, 0xbd48442d, 0x3b85ef16, 
    0xbdead981, 0x3cdb6d28, 0xbdcefcc0, 0xbc4a646c, 0x3db2f352, 0x3d785016, 0xbd766e06, 0x3dada57e, 
    0x3df0871f, 0x3d813468, 0xbb83f3ef, 0xbbfa922f, 0x3da89a8f, 0x3d3b6f82, 0x3d4f876a, 0x3a3b7af8, 
    0xbb0be169, 0xbb974155, 0x3d34f8bf, 0x3c579b3e, 0xbd82a2c2, 0x3d81c3d2, 0xbd98cf68, 0x3d68b636, 
    0xbdeefbe0, 0x3dbf58a7, 0xbd91fa3e, 0x3c560e45, 0x3d7bbb37, 0x3d3f5c95, 0xbda970dd, 0x3e0ce828, 
    0xbd5bace2, 0x3b97c5c8, 0xbe124786, 0xbd754cc0, 0xbde29c06, 0xbd3f351c, 0x3cbcbe95, 0xbe186e6f, 
    0xbdae2f55, 0xbc8c98d7, 0xbd4946b7, 0xbdc64537, 0x3d9b6ea8, 0xbc4b6489, 0xbd132a7e, 0xbd9d0d11, 
    0xbc707dbf, 0xbd9c8f43, 0x3d8c953a, 0xbe004195, 0xbd94ec61, 0xbbc2b79f, 0xbcefbb1b, 0xbdac3e71, 
    0xbdc3a3c5, 0xbd4d02a5, 0xbd5e38e0, 0x3da53bce, 0xbe059083, 0xbd973dc3, 0x3d5bbb05, 0xbdba62d9, 
    0xbceb1dd0, 0xbb092da8, 0xbc83a8c5, 0xbd72a2c3, 0x3d1aee2d, 0xbc190671, 0x3d9ac5af, 0xbda9aeb3, 
    0x3d964a4c, 0xbc46b2a0, 0x3deae610, 0x3d1fcb0e, 0xbd07660a, 0xbbd0b974, 0x3bcd6e3e, 0xbdd15392, 
    0xbda909c6, 0x3d4fc8f6, 0x3c9a9ff8, 0x3e079887, 0xbdfd82c8, 0xbb8e5fd7, 0xb9cfa614, 0x3add4b46, 
    0x3dcff507, 0xbba52374, 0xbc5230ed, 0xb9e19122, 0x3c08cfe3, 0xbbc797d8, 0x3de3098b, 0xbd7da4a4, 
    0x3da9a458, 0xbd4e04a3, 0x3e3345db, 0x3d437892, 0xbd92890a, 0xbcc992d2, 0x3d9f9d0c, 0xbdc64263
};

static const uint32_t _K37[] = {
    0x3ec58c6a, 0xbf770272, 0xbec5cf75, 0xbe4db4c0, 0x3e8f9392, 0x3eaa9dd4, 0xbe34613c, 0xbf3af1a9, 
    0xbf36e5ac, 0xbf163abe, 0x3f69a290, 0x3ebd37bc, 0xbedfed67, 0xbed0b728, 0x3e950de8, 0x3f886d9a, 
    0xbe2be38c, 0x3fc0865e, 0xbe9697a5, 0x400831bc, 0xbe959c3e, 0xbe2cae38, 0xbeae830d, 0x3d95ea32
};

static const uint32_t _K43[] = {
    0xbd4b1120, 0x3c60665b, 0xbd714a8e, 0xbd303efa, 0xbd558f87, 0x3d1d8784, 0xbc78a580, 0x3d2fe77a, 
    0x3cd9317a, 0xbd14f5db, 0x3bf9099c, 0x3d600cb0, 0xbd153766, 0xbd8652c3, 0xbbf1ccbc, 0x3d3995c0, 
    0x3b417f08, 0x3d29c93c, 0xbcfd2e55, 0xbca99b3c, 0xbd415071, 0x3c578c0d, 0xbc5a73de, 0x3c80d63c, 
    0xbd3daf85, 0x3ca2adf1, 0xbdd92ce2, 0xbc6ae8ca, 0xbd8196d3, 0x3d31cdd7, 0xbd2d9f11, 0x3c938b2b, 
    0x3d0e48e9, 0xbd21423e, 0xbd697292, 0x3d0003d1, 0xbd3ff325, 0xbdbd1d99, 0xbca7d677, 0x3da2ab8c, 
    0xbdb78240, 0x3d376165, 0x3b356c9b, 0x3bc536ca, 0xbd4a82ab, 0xbbbcbadf, 0xbd82c7f1, 0x3d8ba889, 
    0xbda18b4b, 0x3cdb55ec, 0xbd2f6e92, 0xbd510a73, 0xbd9b48e4, 0x3d04b394, 0xbcb4da8f, 0x3c2e46ee, 
    0x3c49ad0e, 0xbd391cf1, 0x39b8babc, 0x3d51cdc5, 0xbd024792, 0xbda9694f, 0x3c805c99, 0x3d907239, 
    0x3d4b2617, 0xbca64385, 0x3cb2bb5e, 0x3b82f8fd, 0xbd594419, 0xbbaadcb9, 0xbd636c31, 0x3ba72b5f, 
    0x3c0d487b, 0x3d0b951c, 0xbc9e2a7e, 0xbd1073fc, 0x3bf66803, 0x3d580559, 0xbd006e8a, 0x3d9cdb7c, 
    0x3d82bbad, 0xbd0e546c, 0xbcc2ee1d, 0xbc6bfe5e, 0xbb50322b, 0xbc947c20, 0x39f4e683, 0x3d26885a, 
    0x3c4d5e01, 0x3d7ca6a0, 0x3d553c7a, 0x3c38c8ae, 0xbd0d4f05, 0xbb94960d, 0x3c3e9ba2, 0x3db18845, 
    0x3c64f0c9, 0x3d240a10, 0xbcdfbee8, 0xbc2e627c, 0x3c13a6d1, 0x3cc70a04, 0xbc1db113, 0x3d516a55, 
    0x3d5be333, 0x3ae6ea8d, 0xbd0348ee, 0xbc65430b, 0x39ed903f, 0xbd011ba2, 0xbcd0d8fd, 0x3d9d1f87, 
    0xbb80b5b6, 0x3cdbf56d, 0x3d2154fd, 0xbc5fe7a1, 0xbcf72acc, 0xbc9083de, 0xbccdd7c2, 0x3d9784da, 
    0xbaea93a8, 0x3a933462, 0x3ca110b3, 0xbc39833f, 0x3c1a0175, 0xbc75bce9, 0xbbd88ee5, 0x3cd17036, 
    0x3c916df1, 0xbd1ac155, 0xbc8278dd, 0x3c509f77, 0x3cb0c4d1, 0xbc84df35, 0xbd58d697, 0x3ca84603, 
    0xbc4032c8, 0x3c87d0fa, 0xbc5210ac, 0xbcaa4fc6, 0xbcc00f4a, 0xbce6e730, 0x3c887122, 0x3ce2b954, 
    0x3cf68717, 0xbd44408e, 0xbd9fa873, 0x3d8bf792, 0x3ac78141, 0xbdc3cef5, 0xbc5cd768, 0xbccb7ab0, 
    0xbd1685f7, 0xbd123299, 0xbd8c8508, 0xbe2a0c00, 0xbd5f4967, 0xbdb97d75, 0xbb6d94c6, 0xbe13548b, 
    0x3d1a04bd, 0xbc420d13, 0xbdac0f27, 0x3d5f33e6, 0x3d458085, 0x3cef9e3b, 0xbd96c3b4, 0xbd28dd44, 
    0x3dc34fec, 0xbd4ad876, 0x3d4c37be, 0x3cae804d, 0x3cdae931, 0xbd343a54, 0xbc8c1908, 0xbd86a608, 
    0xbd9237ad, 0xbd0739d3, 0xbc89832f, 0xbd33a7a5, 0xbca6e1cb, 0x3c237eb5, 0xbd19c28c, 0xbdaf398c, 
    0x3d512b63, 0xbd9ae88b, 0xbe06e306, 0x3d40001c, 0x3cf884ff, 0x3d06a015, 0x3dad2765, 0xbd217718, 
    0x3e01e420, 0xbd73360b, 0x3dd35699, 0x3da2676b, 0x3ce1c48e, 0x3ca52483, 0x3da3c123, 0xbd9aa3ae, 
    0xbd7c7477, 0xbc59eb9b, 0x3d64ceb7, 0xbd93516b, 0x3d0bb509, 0x3d7c27a8, 0xbbf63403, 0xbda4e204, 
    0x3d417378, 0xbd2f0d1b, 0xbcbca304, 0xbe0046a7, 0x3d7017e0, 0xbc2ad7ad, 0x3d947680, 0xbd0853f3, 
    0xbe1dcf32, 0x3e0c07c7, 0xbce1dc82, 0x3da613a5, 0x3c6642eb, 0xbde05e44, 0xbd9ec7f9, 0x3e8e64cc, 
    0x3e6ccc0a, 0x3ea46d27, 0x3d66057d, 0xbd83cd6b, 0xbecdb329, 0xbdf2d5d6, 0xbec9e10f, 0x3dbbe4a9, 
    0xbdd5c684, 0x3dcb9e17, 0xbeadfa3e, 0x3ee5d3c6, 0xbd4ba83d, 0xbd9b2c96, 0xbecddf79, 0x3b8474e1, 
    0xbdd929c7, 0x3c27934d, 0xbec0824a, 0xbe08d2b2, 0xbe30eafa, 0x3e5dd84d, 0xbe15cf2d, 0xbd1cb364, 
    0xbe05a844, 0x3d1a6864, 0x3ef7f0a4, 0x3eed7f67, 0xbf00b519, 0xbeb9916c, 0xbced3e3b, 0x3ebcc1fb, 
    0x3e485e3c, 0x3d8dc6c6, 0xbbb4e487, 0x3f3055f9, 0xbd19db8c, 0xbe3db255, 0xbe8df2bb, 0xbe3101cc, 
    0xbe49dfbc, 0x3d0adb92, 0xbe5e3427, 0x3c8ed344, 0xbe99373d, 0xbd894a88, 0xbdc4b92c, 0x3dab50e5, 
    0xbd140174, 0xbde565eb, 0x3e8f013a, 0x3de1721c, 0xbe90ee39, 0xbe7967ef, 0x3d7c32d2, 0x3e27d1c1, 
    0xbe1ead57, 0x3d260dd7, 0xbdb99cd8, 0x3e1dae79, 0xbd32943e, 0x3ccb1a43, 0xbe824a34, 0xbde9c3b5, 
    0xbd28e716, 0xbca9ac50, 0x3d287859, 0xbd26e966, 0xbd7359d9, 0xbd0ed268, 0xbca5c9df, 0xbcfbffc2, 
    0xbd8d7ef0, 0xbc2562af, 0x3de191ed, 0x3c0ed4fe, 0xbc0c809a, 0x3d46623c, 0x3dab2bc5, 0x3c2b02b3, 
    0x3d47a0ac, 0xbe1e87fe, 0x3dabee73, 0xbc262d72, 0x3ce1ac40, 0xbd2f472d, 0x3d08abd3, 0xbdfbe748, 
    0xbd255515, 0xbd84f8f7, 0x3d9c5f11, 0xbbbd3f0e, 0xbd277cab, 0xbcaebf31, 0xbc2fd296, 0xbd7a1f8d, 
    0xbdc38cbb, 0xbd10b9c3, 0x3dfee4ad, 0xbce5c6fe, 0x3cbd2760, 0x3d87cf0e, 0x3d6ccbe2, 0x3d7a31d0, 
    0xbcb42620, 0xbdb8a413, 0x3da77758, 0xbd1c3280, 0x3c818e37, 0xbd6547a2, 0x3d061324, 0xbde1209d, 
    0xbc769a03, 0xbdefd673, 0x3d950da8, 0xbb48aa73, 0x3cafa734, 0xbc904c66, 0x3ca00350, 0xbd9e30d5, 
    0xbdeb7e91, 0x3d040e97, 0x3d90fb78, 0xbd7c5242, 0x3bd0f01e, 0x3d97a2c5, 0x3ce3f790, 0xbcdbb360, 
    0xbc1c5205, 0xbe2bf517, 0x3c6a1fae, 0x3d0b5d70, 0x3c724bed, 0xbd917e59, 0x3d034e5f, 0xbdf6746e, 
    0x3e06ca69, 0xbdcbf74f, 0x3d7324db, 0x3ccc46ad, 0x3d569bfa, 0xbe69e757, 0x3cbdb43c, 0xbe3d6655, 
    0xbe4064b7, 0xbce3dd2f, 0x3d221b94, 0xbe37c1a0, 0x3c56facb, 0x3d1beead, 0xbcca3591, 0xbe321d77, 
    0x3c8d4275, 0xbdddef45, 0xbe002ef3, 0xbc366633, 0x3daf5bba, 0xbc309fec, 0x3d51e2eb, 0xbdcfe359, 
    0x3d9a0ef8, 0x3d784571, 0x3e14795d, 0x3d36d10c, 0x3d56f1ee, 0x39153642, 0x3cd42606, 0x3d7368df, 
    0x3d0ee601, 0xbcac8683, 0x3d7e2527, 0xbdf4d0fa, 0x3d425cc7, 0x3d43d4e6, 0xbd8f877d, 0x3d93e303, 
    0xbe1260d1, 0x3e408def, 0xbd120ee0, 0x3cc1b401, 0x3d479b62, 0xbd7573c1, 0x3d24eab9, 0x3dd1f1f7, 
    0x3d8d4423, 0x3d19293d, 0x3db043d8, 0x3dccf7ae, 0x3d8e6d38, 0xbc97e821, 0x3cb75b94, 0xbcb771f2, 
    0x3d0a2ed1, 0xbd49bf6a, 0xbc395114, 0xbdf1f041, 0x3cdae823, 0x3d9709f9, 0x3c09ad17, 0x3cc1308d, 
    0xbdd2c778, 0xbd0dc545, 0x3d848078, 0x3ce9f13a, 0x3d036895, 0xbd877bee, 0x3de7ea9c, 0xbb2226d5, 
    0xbca6562e, 0xbdceec97, 0x3cd674fb, 0x3a9b3443, 0xbb57b6cb, 0x3c2a1125, 0xbc0b9117, 0xbda9cbdf, 
    0xbdeb1c6c, 0x3c0fb990, 0x3e07dcbb, 0x3cc24d2f, 0x3ca1b3b6, 0x3d002cb1, 0x3c8156ba, 0x3c3f825e, 
    0x3a941311, 0xbe1ea0a4, 0x3ca69dcf, 0x3b60d11e, 0x3ca9e60f, 0xbd805c17, 0x3d30c6d8, 0xbe036c4d, 
    0xbc48abbb, 0xbdab2505, 0xbbbcefb4, 0x3be420f5, 0xbbafdfeb, 0x3c1a8062, 0x3caf04c0, 0xbd5b7f49, 
    0xbda4e009, 0x3cf54b92, 0x3df7db25, 0xbc0d275c, 0x3d1c7d59, 0x3c8d7e5a, 0x3c130520, 0x3ca4cf7d, 
    0x3be13854, 0xbdf4dc22, 0x3d15c6d0, 0x3c1f1d0f, 0x3cca3d2f, 0xbd99dd81, 0x3cea06bd, 0xbe238557, 
    0x3c74a0c9, 0xbd653bc0, 0x3d3976c4, 0x3d0d83e2, 0x3cd9d5ea, 0xbd698463, 0x3cbc4d5d, 0xbd534310, 
    0xbdabf66d, 0x3d14e1aa, 0x3dbaa0e8, 0xbd15ebd7, 0x3afb10cb, 0x3d4165c1, 0x3c99a5c8, 0xbd38937a, 
    0x3ca5e635, 0xbe33163c, 0x3cec1f92, 0x3d18586a, 0x3cff8273, 0xbd805e38, 0x3c4d5ba7, 0xbe11b945, 
    0x3e16fabb, 0xbd98b6be, 0x3cae886f, 0x3b7e7ee0, 0xbc17b0b8, 0xbdd1ca7a, 0xbc5106eb, 0xbb4feced, 
    0xbd8895cd, 0xbd4b75c5, 0x3d3cd2f3, 0xbd1fccfd, 0x3b772cf4, 0x3d38cc9c, 0xbddc935a, 0xbd24d32a, 
    0x3b79ddc3, 0x3cef9112, 0xbdf5fa57, 0x3ceb6363, 0x3d080adb, 0x3c555176, 0x3d79a6f7, 0xbc8e9a38, 
    0x3de58760, 0xbd88a8fb, 0x3e07565b, 0x3baa42fb, 0x3d955521, 0xbc382c1c, 0x3d37c9b1, 0xbc8d7672, 
    0xbcfdcfee, 0x3c7b2c22, 0x3d4528ff, 0xbd758138, 0xbc8f9517, 0x3d5dfe06, 0xbde1a04e, 0xbd4d200d, 
    0xbcef078d, 0x3b32954a, 0xbc943acb, 0x3d03970f, 0x3d844068, 0xbdca1e13, 0x3bb10ef6, 0x3c12731e, 
    0x3d54336f, 0xbd86ad03, 0x3d61bd59, 0x3d0185dc, 0x3ccc156f, 0x3bf3f205, 0x3d6c2be2, 0xbd25f765, 
    0xbcdc9478, 0x3c908026, 0xbcca5cc1, 0xbe3f727e, 0xbca95b00, 0x3d8806ef, 0xbd93a6d5, 0x3d550f3e, 
    0xbd12d20f, 0x3d9d7d0c, 0xbcf92f46, 0xbc893562, 0x3d4cb539, 0xbd0c1067, 0x3da0cbbe, 0x3d386983, 
    0x3bf5a4ce, 0xbd2aeacd, 0x3ca1159d, 0x3cf760e2, 0x3c5b381e, 0xbc0fc841, 0x3aaff0a3, 0xbdb59c59, 
    0xbdb5a0d9, 0x3caa1e01, 0x3df89783, 0x3d39ee29, 0x3d491d98, 0x3d461f6d, 0x3b9cf496, 0x3bf3e187, 
    0x3ce56bff, 0xbe005ead, 0x3d142adc, 0xbca35aee, 0x3d269de0, 0xbc506d72, 0x3d267a5e, 0xbde3f2da, 
    0x3c97c93a, 0xbda00aa8, 0x3cbb2e3d, 0x3d35eaeb, 0x3cd1b8a4, 0x3ade026a, 0x3ca61cb1, 0xbd17c858, 
    0xbdc296e0, 0x3c6d755a, 0x3dfc23be, 0x3d132da0, 0x3cd0d955, 0x3d5f5f45, 0xbc0a5ae6, 0x3ccb5a6e, 
    0x3abebb1f, 0xbdeccdc9, 0x3d4d4aa2, 0xbd18e1c1, 0x3d1c6d74, 0xbd963400, 0x3ccdee6c, 0xbda7075f, 
    0x3c627122, 0xbd6f5fed, 0x3c639985, 0x3d6b8576, 0x3cda50e9, 0xbc78746d, 0x3cc34d6f, 0xbd672f79, 
    0xbd7d22ea, 0x3d111f14, 0x3daea150, 0xbc5b2465, 0x3c04341c, 0x3ce494ba, 0xbcd54383, 0xbd20f1cf, 
    0x3bf63251, 0xbe33d9ec, 0x3c134550, 0xbcb3aa7b, 0x3ca737e9, 0xbd6b0f56, 0x3bbabf58, 0xbdc3a73f, 
    0x3d086c9b, 0xbdf3c41d, 0x3db84f42, 0xb8afd21c, 0xbc560dce, 0xbe0cbf54, 0xbd011751, 0xbd29c025, 
    0xbde08cb2, 0x3be355c1, 0x3d1e01ee, 0xbd41d603, 0x3dcc0ab9, 0x3da3fa39, 0x3d3caf2b, 0xbde66d36, 
    0x3dc540b9, 0xbc1d0166, 0xbdf73e68, 0x3defc09d, 0xbd7a9486, 0x3dafaf2c, 0x3dadbb92, 0xbc0b5834, 
    0xbd34f60d, 0xbdd23a0e, 0xbda48782, 0xbd4a8326, 0xbb8d6e48, 0xbe2cd901, 0xbd93cc03, 0xbda59d57, 
    0xbda17020, 0xbcef7f6d, 0x3c28b2ae, 0xbe4bc546, 0xbd98c2e1, 0xbd860bb9, 0xbd721574, 0xbd6a50ad, 
    0xbdb6e3d9, 0x399f72e3, 0xbe5b12b6, 0x3dfabc96, 0xbe0421af, 0xbd0f4fc1, 0xbcfb42dd, 0xbc19c536, 
    0xbdd6439b, 0xbe084b5f, 0xbe90c43c, 0xbddddb10, 0xbdf2314d, 0x3d920161, 0xbe1c6707, 0xbcdc8a06, 
    0xbc761263, 0xbe19142c, 0xbe4a0a8b, 0xbd82d2e4, 0xbe64cec2, 0xbe556e5f, 0x3b9e6599, 0x3e06294b, 
    0x3c9b11f1, 0x3bd87b5d, 0xbe236f0d, 0x3ded3a5f, 0xbdf30773, 0xbc1983c9, 0xbdcc268a, 0xbcda4d2f, 
    0x3dfeaaf1, 0xbdfabef6, 0x3dd118d5, 0x3dd7f1ce, 0x3d56cd59, 0xbd86a3a6, 0x3dd6b032, 0xbdaa4edc, 
    0xbe024c5f, 0x3cbf03bc, 0x3e41717e, 0xbb3348ab, 0x3d7ef0c6, 0x3e1f2552, 0xbb8df8f6, 0xbdb8a19d, 
    0x3ca02275, 0xbe0d34aa, 0x3cd3448e, 0xbdfaf75b, 0x3d58c7b2, 0xbd8af168, 0x3d663baa, 0xbe37a2ea, 
    0x3da55bbb, 0xbd4720a7, 0xba6e8277, 0x3da28141, 0x3ddcea8a, 0xbcc40b1f, 0x3db25c1a, 0xbd9ff808, 
    0xbda28a53, 0x3d74e2cc, 0x3ccc8f3d, 0xbda23cc2, 0xbd6dfdc4, 0xbcd3a849, 0xbc53985c, 0xbd7b6135, 
    0xbdb003bf, 0xbc8df07b, 0x3c656ae5, 0x3b744543, 0x3d0a12d7, 0xbc7e4b56, 0xbda259cb, 0xbdd06c02, 
    0xbcd1d7e8, 0xbd964e82, 0xbdee1e80, 0x3c284d08, 0xbc105e1a, 0x3e04cc05, 0xbc47927b, 0xbd372f8c, 
    0xbd5ba782, 0x3cc4df7e, 0xbd02d603, 0xbe0819a6, 0xbdbeeec6, 0xbd38a3a8, 0x3d2c4aa5, 0x3e03a42b, 
    0x3d269a4a, 0x3d99e758, 0x3d736227, 0x3d60e68f, 0x3cd7c221, 0xbc167f1d, 0xbcfe9934, 0x3c12a914, 
    0x3e164edc, 0xbe5dffb8, 0x3dd6e50d, 0xbd353730, 0x3db889b9, 0xbd8c06e3, 0xbc7ecc1c, 0xbd03122b, 
    0xbe8c74da, 0xbd32c7a8, 0x3e9d271d, 0x3e4f4165, 0x3d89e2f9, 0xbd98f200, 0xbc56cd7d, 0xbd5c924a, 
    0x3eee1f59, 0xbe641264, 0x3bb4604e, 0x3d2839a4, 0xbd796cfb, 0xbe1d17ae, 0x3e139b3a, 0xbe90b067, 
    0x3cff50cc, 0xbe16bc77, 0x3ce541d7, 0xbc1238aa, 0x3c294426, 0x3d56054a, 0xbd59051e, 0xbd9fe5b7, 
    0x3ce68faa, 0xbda4102c, 0x3e5fd4e2, 0x3d562488, 0xbd19fbf0, 0xbd9894a0, 0xbdfa61fe, 0x3e76b98c, 
    0x3dfd0461, 0x3e32ee79, 0xbe76b225, 0x3e5e98c0, 0xbdd56f92, 0xbe24b163, 0xbcc44c19, 0x39fe8a81, 
    0xbce0f3f5, 0x3e5dee58, 0xbe05b710, 0xbdfb9570, 0x3d9b7bef, 0x3d978846, 0x3d159b73, 0x3e5a4ae4, 
    0x3ea06539, 0xbcc824c8, 0xbe3af38f, 0x3cbfb7c6, 0xbc038cb1, 0xbe2f1642, 0xbdc4e299, 0xbdb74bf2, 
    0xbe760489, 0x3ee80993, 0x3e16b31b, 0xbccfd73a, 0xbd9ffc11, 0xbda99ed7, 0xbbb0d21a, 0x3e9f2b9a, 
    0x3dfd1b10, 0x3ca935c9, 0x3aae98b8, 0xbe1269ba, 0xbc415ee1, 0x3e89447e, 0xbd6bf988, 0x3de20950, 
    0x3e9c4cf1, 0x3d7656e8, 0xbb768eb8, 0x3daf8062, 0x3d59c25b, 0x3c9a7b2b, 0xbe7f1fd3, 0x3eb98448, 
    0xbed07339, 0x3e645967, 0xbe2cb0b8, 0xbeb1f863, 0xbe0c62bf, 0xbe992782, 0x3cd532f1, 0xbc8b83d0, 
    0x3881058c, 0x3e61a6f7, 0xbc566cec, 0xbd8e32a2, 0xbcb46d9e, 0x3ecc93f5, 0xbdec73a6, 0x3e482f36, 
    0x3e4fd1e9, 0x3acc4a52, 0x3d9ec95f, 0x3e0eae05, 0x3d3edec8, 0x3c0f184c, 0x3df07c67, 0x3e5843a3, 
    0x3b41e6eb, 0xbb467519, 0x3ed4bacd, 0xbe179f46, 0xbb544b6f, 0xbddfdc33, 0x3d05afe0, 0x3e36d0d1, 
    0xbd8f4b6c, 0xbc05c942, 0xbdd7b166, 0xbdcac736, 0x3ceacd52, 0xbcd8b180, 0xbdcc14ce, 0xbed60714, 
    0xbec88131, 0xbc371c8b, 0x3dc6e352, 0x3d76466b, 0x3d3e76d8, 0x3d14e22e, 0x3e81d5c1, 0xbd5021f7, 
    0x3f02f193, 0xbef4ce84, 0x3da1ed3a, 0x3e3d1d89, 0xbda6e731, 0x3dbaf0e1, 0xbd6acd7b, 0xbecb5539, 
    0x3d990296, 0xbc799e45, 0x3c8223f6, 0xbb7575c1, 0xbab48d6d, 0xbd6383b0, 0xbd16684e, 0x3cc4def4, 
    0x3b5c5a9b, 0xbd2924a9, 0xbc929839, 0x3a610d2e, 0xba43cf39, 0x3d0934f5, 0xbd14b2be, 0xbd4f38e1, 
    0x3db670a8, 0xbd884e89, 0xbb25c16e, 0x3c106616, 0xbd011aa5, 0x3bca6195, 0x3dc4ffbb, 0xbd3bc436, 
    0x3e0959ab, 0xbd9922ee, 0x3dcecf32, 0x3cd7f28b, 0x3d85b5b6, 0xbce08290, 0x3cc10b78, 0xbd111ad5, 
    0xbd9a030a, 0x3bfbf3ff, 0x3d8a0070, 0x3c8f132a, 0x3d9023e5, 0x3e076485, 0xbd3492f4, 0xbd22d7c3, 
    0xbbe9af1e, 0xbd860b03, 0xbd7882a1, 0xbd8c72ff, 0xba34c226, 0xbdbc6e77, 0x3d38ab05, 0xbd6c8a60, 
    0x3d841267, 0xbdc28e46, 0xbcc6f6b5, 0x3cb3d0af, 0x3d9d46bc, 0x3ceada90, 0x3d82951a, 0xbd9351b4, 
    0xbd97dc36, 0x3d0b3624, 0x3c205ac7, 0xbdc681d6, 0xbd342bbd, 0xbd00f0b0, 0xbd037a3d, 0x3cb16698, 
    0xbd30d992, 0x3d2ab6c9, 0xbd9fc5fe, 0x3d7cfc6e, 0x3d067bd4, 0xbc72d812, 0xbbcf87c7, 0x3ad13d3d, 
    0x3d679912, 0x3e0aaff1, 0xbd3fd5d9, 0xbe089b91, 0x3dcce226, 0xbd694e93, 0xbd7d1915, 0x3e6b975a, 
    0x3dc236ca, 0x3d60ddde, 0x3e3af3e9, 0xbde13e94, 0xbd6c809b, 0xbd4a532c, 0xbe5e30cc, 0x3d74f340, 
    0x3dbb469f, 0x3e6407e2, 0xbe00a0b6, 0x3d49a38d, 0xbe1513b9, 0x3d238bec, 0xbdd0829d, 0x3d8354ee, 
    0x3db3b99e, 0x3e58ae42, 0x3e024eb6, 0xbdaa1fb9, 0x3dfedcee, 0xbd92205d, 0xbd021625, 0x3e99c435, 
    0x3e488f90, 0x3d62a102, 0x3e0d07f1, 0xbdd098b9, 0xbde69aab, 0xbd3e37af, 0xbdeff27b, 0x3d0aa3af, 
    0x3d1bb32d, 0x3e8041ce, 0x3a369ae1, 0x3da19502, 0xbe118a3e, 0x3d84a8ec, 0xbda879c8, 0x3e3f6e43, 
    0x3dc51323, 0x3de68182, 0x3de8c438, 0xbdd0824e, 0x3d437b2b, 0xbcc5a408, 0xbb6a7f8c, 0x3d64e515, 
    0xbd26a208, 0xbbc92ebd, 0x3e2ca187, 0xbdf37ff8, 0x3cdc9a29, 0x3d71a393, 0xbe5030e3, 0x3c9aa253, 
    0x3e3b1cfc, 0x3bcf9139, 0xbdd1b79d, 0x3d35f0c9, 0xbe493667, 0x3dd525b3, 0xbc644748, 0x3c441f2c, 
    0xbcc8b6cf, 0xbe1588b5, 0x3cf52403, 0x3cd9e44a, 0x3c8bebb5, 0x3be0ab76, 0x3c5c5793, 0xbd014df8, 
    0xbdc5adf8, 0x3c8e14e0, 0x3de0849a, 0xbd31b83e, 0x3cb370d4, 0x3c876dbc, 0x3c654f6b, 0x3c54ca89, 
    0xbca05ef9, 0xbe0c227b, 0x3c1a2745, 0x3d6d01d8, 0x3d326e7c, 0xbdecd03e, 0x3c31ecea, 0xbdecb47e, 
    0xbc93f226, 0xbe0dbda8, 0x3d089288, 0x3ca6f1ff, 0xbd286276, 0x3d11b44f, 0x3cdd2e3f, 0xbd120eef, 
    0xbd94fc6f, 0xbb30d705, 0x3e2cafe2, 0x3c19897c, 0x3c41aa4c, 0x3d08ef49, 0x3c8268ce, 0x3d312809, 
    0xbb9ce60c, 0xbdc223f2, 0x3d3a9e14, 0x3d7cd6b3, 0x3cf9098f, 0xbda32d8e, 0x3b1d0bfb, 0xbd817640, 
    0xbd127878, 0xbddb30f1, 0x3d2ab661, 0xbaf02e1a, 0xbc8c54d4, 0x3d0a723c, 0x3cbaae99, 0xbcc559cd, 
    0xbd97221c, 0xbbe3857e, 0x3df6a077, 0xbcfba040, 0x3cdabc29, 0x3cff70ca, 0x3d473a45, 0x3d48eb8c, 
    0xbb75b3d9, 0xbd9a501e, 0x3d69cdfc, 0xbaac5b46, 0x3d1d6b09, 0xbd812f77, 0x3c300c4b, 0xbd4716ab, 
    0x3c486f37, 0xbd905583, 0xbd0f0c4c, 0xbc0ac882, 0xbc71d09f, 0x3ccaa677, 0xba99d2f0, 0x3c9a817d, 
    0xbde5679a, 0xbb39d43e, 0x3d2a0da3, 0x3ccb479c, 0xbda6b805, 0xbcf51f04, 0xbc7f8cd5, 0x3cb7ad3e, 
    0xbd36b2fc, 0xbcbe0c65, 0x3d494b5c, 0xbbc1a493, 0xbd3e4bc6, 0xbe00427e, 0xbdad7f48, 0xbd18247d, 
    0x3c692b07, 0xbd51439e, 0x3d9fab4a, 0xbc91ad7e, 0x3d8e7580, 0x3d34958f, 0xbca4dffa, 0x3b878f5e, 
    0xbd668948, 0x3d1aa35f, 0x3dc4078f, 0x3deb03ce, 0x3c9d0809, 0xbb675121, 0xbd7e5218, 0x3dc78cc7, 
    0x3d85d2fa, 0x3d14258e, 0xbcbb87a7, 0x3ddc01e1, 0xbd073219, 0xbdd62a9f, 0x3bd07042, 0xbd62ca13, 
    0xbd030e79, 0xbd8e6322, 0xbe252aff, 0xbc85bdec, 0xbc7eef19, 0x3d97e0cb, 0xbd87aa03, 0xbcb98da4, 
    0xbd314816, 0x3c109bc1, 0xbc91c5f4, 0x3db934f1, 0xbd90e907, 0xbdb778bb, 0xbcbf6fa4, 0x3e44dd89, 
    0xbdc97fc1, 0x3d3611b0, 0xbd034899, 0x3e3a2eb8, 0xbdab0673, 0xbd192cd4, 0xbd10a4cf, 0x3ca5fc60, 
    0x3d06256b, 0x3d8caa18, 0xbdc10604, 0xbe3f1eb0, 0x3cc27fdd, 0x3df411ee, 0xbdbe79ca, 0x3e0f8378, 
    0x3e23b07b, 0xbc8343ad, 0x3e263ef1, 0x3d9a2942, 0xbd970fd4, 0xbddc423a, 0xbe8548e1, 0x3e04c909, 
    0xbdcc2762, 0x3e7d6cb8, 0xbdea6772, 0xbcab293d, 0xbe5c3fde, 0xbaee0763, 0xbdbff35e, 0x3908bbd1, 
    0x3ceea7a0, 0x3e48e21c, 0xbd9a0130, 0xbe093e6f, 0x3d87cd12, 0x3dd17cc5, 0xbdcb27b0, 0x3e1372f3, 
    0x3decdcc7, 0xbc62e5cb, 0x3d94134c, 0x3e2d5e32, 0xbe308908, 0xbe397c23, 0x3c2fabcf, 0x3e1955e0, 
    0xbe999647, 0x3e4d2905, 0x3e20c5ae, 0xbd91c650, 0xbe2ee123, 0x3d0e4d4a, 0xbe79a00a, 0x3e818eb0, 
    0x3c9d19b1, 0x3b034131, 0x3d6e103e, 0xbe0e87c7, 0x3dadf27c, 0xbe05061e, 0xbdc0a71f, 0xbe3291c8, 
    0xbe841639, 0x3c093ecb, 0x3e68ab00, 0x3e014430, 0x3c8efe9d, 0xbcc14ba7, 0xbc58aa44, 0x3dc6a832, 
    0x3e9da520, 0xbedcc21b, 0x3c9b7a54, 0x3e0b7035, 0xbe055206, 0x3d183d96, 0xbd51a989, 0xbe9c44e5, 
    0x3e3cf686, 0x3c11cd46, 0x3dc2d8e1, 0x3d6c2a11, 0x3d9a5a94, 0xbd5b5e75, 0x3d72dea9, 0x3ca07ae4, 
    0xbd9142dd, 0xbd3f3d61, 0x3c678be5, 0xbd13a784, 0xbbdc95c7, 0x3db444b4, 0xbcf59fc6, 0xbd9c0a55, 
    0x3d6cca5e, 0x3d3800ff, 0x3d774b28, 0xbbc8c7d0, 0x3a985f26, 0x3d358d6d, 0x3e117955, 0xbcb45147, 
    0x3e52804a, 0xbdcb6d59, 0x3de7f750, 0x3d6252ee, 0x3e153928, 0x3cdc3de1, 0x3da1e296, 0xbda3e325, 
    0xbde0c664, 0x3d7b97fb, 0x3d84e40e, 0xbe03609a, 0x3ccf1667, 0x3dda4134, 0xbe11d7ad, 0xbd01b9cb, 
    0xbd2b8b15, 0x3cb508d9, 0xbd9a0993, 0xbd309cf1, 0x3dbc8cde, 0xbe3bd3d0, 0x3d9296bb, 0xbc108036, 
    0x3dc5cc7c, 0xbdc42564, 0x3c36357a, 0x3dbdab63, 0x3dd85480, 0x3dd67945, 0x3d75b432, 0xbd7bd3f1, 
    0xbdbea3c1, 0x3d1fe7be, 0x3c7a35af, 0xbe0fc53b, 0x3bc6dfe7, 0xbba573e3, 0xbd9a9201, 0x3dd2c93c, 
    0xbde476f7, 0x3d3b70a0, 0x3c4aa45b, 0x3d434e43, 0x3d03d2d5, 0xbe0e034b, 0x3d5d271e, 0x3c053570, 
    0xbdef343b, 0x3d6d687a, 0xbdc21a19, 0xbcf2cb7d, 0xbc7f7f19, 0xbb9e503d, 0xbcd9543b, 0x3da2684d, 
    0x3c9283e1, 0x3d958a34, 0xbe0325ef, 0xbeb3c6be, 0xbde0a3e6, 0xbc9212eb, 0x3e4d8e29, 0x3cc8da51, 
    0xbdfd566b, 0xbe843e2e, 0x3d86a734, 0xbe39820e, 0x3d94bbe2, 0xbd96d574, 0x3c59cafd, 0xbcba9b73, 
    0xbe4221fb, 0xbd0d845d, 0x3e2a2e15, 0xbba12d32, 0xbdec87ae, 0x3dbe0d32, 0xbc7199f8, 0x3da6779c, 
    0xbd849389, 0xbb94085f, 0xbc6d79fc, 0x3de4da7b, 0xbd2bb93b, 0x3d8c4060, 0x3e90bccf, 0x3adec9d9, 
    0x3e9f7ef1, 0xbdb222da, 0x3e7dff23, 0xbdc4219b, 0x3d2456e1, 0x3e057cf1, 0xbd4ec37b, 0xbcc4e0e7, 
    0xbd5822c4, 0xbd2c9d0a, 0x3e321c56, 0xbda72c00, 0xbdd78445, 0xbdae3bde, 0x3d95c5ea, 0x3dde99dd, 
    0xbc51e11f, 0x3d322b7f, 0x3c7522ea, 0xbd8d3a5d, 0x3d8e34c0, 0x3e04b313, 0x3e42d484, 0xbd579b31, 
    0x3eb15899, 0xbdc30be1, 0x3dfe54e4, 0xbeaaecd4, 0x3d66783c, 0xbb35d558, 0x3e29b5b0, 0x3c118764, 
    0xbcfeb19b, 0xbd854a12, 0xbd18225d, 0xbbd1860d, 0x3c5ea8f7, 0x3d23a032, 0xbc95903e, 0x3ab0e067, 
    0xbc94adcc, 0xbd047621, 0xbc0befcd, 0x3caed42a, 0xbd2c4f7d, 0xbd6e84dd, 0xbd162550, 0x3d426247, 
    0x3c548918, 0x3cbbb0e3, 0xbd312a1b, 0x3e0bac1e, 0xbd22e2a7, 0xbc159248, 0xbcf0de72, 0x3cdb00eb, 
    0xbc60ea15, 0xbcf8495e, 0xbcc88328, 0xbd015388, 0xbc1b54ee, 0x3b8032fc, 0xbd2494c6, 0xbbe0afb4, 
    0xbc3275f5, 0xbd2da4e3, 0xbd268a0c, 0xbab14ad8, 0xbcb0620f, 0xbd68d41f, 0xbad69ce6, 0x3c8ff7bf, 
    0x3d432edf, 0x3ce5980a, 0xbd1627e0, 0x3db5c271, 0xbd572f32, 0x3d87a6e3, 0xbc02c00d, 0x3cd95234, 
    0xbc94d89f, 0xbc2315fb, 0xbd71ff4a, 0xbcee4a94, 0xbc885c8f, 0x3ada5604, 0xbd2374bf, 0x3ce75595, 
    0x3c820372, 0xbc643574, 0x3c04a0bd, 0x3d409f93, 0xbd1bf7ca, 0xbd39d0e6, 0xbcba90a7, 0xbb690f3a, 
    0x3d500ce6, 0xbbc86fc9, 0xbd5a24ed, 0x3d8cc383, 0xbcc72845, 0x3d88c442, 0xbc94cbb4, 0xbb3a2a97, 
    0xbded208d, 0x3e035c88, 0x3da3b0eb, 0xbea82a5c, 0xbe9d2d65, 0x3e0ebd2f, 0xbeb0e31a, 0x3d8658b7, 
    0x3e042d5e, 0xbe8e39a0, 0xbc99d2ec, 0x3e89d3ba, 0xbd30797c, 0xbd020287, 0x3e246314, 0x3e811c9d, 
    0x3ed343ba, 0x3e29968b, 0x3df5a0e7, 0xbe1c0b31, 0xbee25021, 0x3e815c30, 0x3e352257, 0x3d4edc48, 
    0x3dac224a, 0xbb9378c2, 0x3f31d079, 0xbdec485d, 0x3dabb2c3, 0x3d88b144, 0x3ca205b1, 0x3ca06f6f, 
    0x3c68785c, 0xbe32e800, 0x3e970ede, 0x3e7c7fb8, 0x3e9a4fe2, 0x3eb1275c, 0xbe327b0e, 0x3dc9e1cb, 
    0x3dc2249b, 0xbd1602b7, 0x3dfbd4fe, 0xbebdd1b2, 0xbdad5732, 0xbdf6be58, 0x3ea7d141, 0xbd926ff5, 
    0x3e4d0b73, 0xbe86f0a4, 0x3e7b704d, 0xbb89ea7c, 0x3eb75ad7, 0xbe51f772, 0x3de2eef4, 0xbe31e30e, 
    0xbe265c9d, 0x3dcbd1ff, 0x3ea6fdd4, 0xbe867bdb, 0xbc13d5ae, 0x3c98d176, 0xbec16a06, 0xbe211026, 
    0xbe215bb7, 0xbd8c226a, 0xbd81db70, 0x3f07471c, 0xbd906cae, 0xbed533df, 0xbe0f9a37, 0xbd718c9e, 
    0xbd91c440, 0x3c21dcb5, 0xbd091f5f, 0xbcd06cd7, 0xbd667d51, 0x3ae67389, 0xbd199c42, 0x3c1bc6ab, 
    0x3c2c4ff8, 0xbc7029c3, 0xbb28e761, 0x3b85c03e, 0xbd2b7c10, 0xbd3c04c2, 0x3c496b71, 0x3c59f7ef, 
    0xbb299c3f, 0xbb34270a, 0x3be3d8df, 0x3cd7dd91, 0xbce0dc73, 0x3c615e03, 0xbd0054c7, 0x3bbcf958, 
    0xbd6ae813, 0xbb0e1be8, 0xbd02ec49, 0xbd07d503, 0xbd7d0762, 0x3c8db602, 0xbcff1526, 0x3b5a0443, 
    0xba33283d, 0xbcb46f87, 0xbc7647cf, 0x3c8c1691, 0xbd2cf2c3, 0xbd6145d2, 0x3c883c60, 0x3c95e8c7, 
    0xbafe5133, 0xbb40a5f8, 0x3bee4c23, 0x3c2c9c8d, 0xbcaa8109, 0x3c7ebebe, 0xbce3a840, 0x3be5f9ca, 
    0xbd9415ac, 0x3b95aaed, 0xbcdb9145, 0xbcecb966, 0xbd74666b, 0x3c658a7c, 0xbd188335, 0x3c289826, 
    0x3b2ef490, 0xbbb2586f, 0xbbe3d739, 0x3d031508, 0xbd54dfba, 0xbd4f85c9, 0x3bd991de, 0x3c8449f9, 
    0x3c526973, 0xbb28896f, 0xba9207a6, 0x3c86dc55, 0xbd1a4c54, 0x3c7fa09a, 0xbd1ddd2d, 0x3c0b3ae2, 
    0x3e1daa72, 0x3d702666, 0x3dc8e198, 0xbd870703, 0xbba72f89, 0xbd860e19, 0x3c4db90a, 0x3d2848d2, 
    0x3c93e42d, 0xbd3e58f1, 0xbad75177, 0x3b8d72ae, 0x3ddf2097, 0x3ddb28db, 0x3d1cdd1c, 0xbd3ec6a9, 
    0x3de7b774, 0xbc7e733e, 0x3d4a24c6, 0x3a901f06, 0xbd38ac09, 0x3d6b97f3, 0x3e4d3738, 0x3bb14eb8, 
    0x3e8fc082, 0xbd616af7, 0x3e2c3ec1, 0x3d60a080, 0x3e264449, 0xbdccd04e, 0x3dd55c2e, 0xbd13ac19, 
    0xbdd10539, 0x3c4e31c2, 0x3de0fb7e, 0xbc60046a, 0x3d91f431, 0x3e4503eb, 0xbe00f847, 0xbd2dfa1b, 
    0x3c977cb0, 0xbdd4c6e2, 0xbd417982, 0xbde5ea9e, 0x3ce877ed, 0xbe1fb98c, 0x3de6a894, 0xbd39deb6, 
    0x3da75d5f, 0xbe180475, 0xbd26e6ab, 0x3d9f06ab, 0x3e182d88, 0xbb54be22, 0x3d59b502, 0xbd82aab2, 
    0xbd182987, 0x3dad87da, 0x3bd7e6e7, 0xbe47ebb1, 0xbdd5d9f9, 0xbd737ba4, 0xbd900b5c, 0x3d8d9bf8, 
    0xbe1c0e17, 0x3d8e9ae1, 0xbda4b51c, 0x3dfd8034, 0x3db8684b, 0xbddde69c, 0xbd8b58a9, 0x3c279876, 
    0xbd97bf5a, 0x3c7d16ac, 0x3b169c6b, 0xbd0f9cc6, 0xbcd925e1, 0xbde2b329, 0xbd14eca9, 0x3d151bf0, 
    0x3ce74191, 0xbc84dc20, 0xbdb03d2c, 0xbe098f5f, 0x3b1fae63, 0xbdd0e538, 0xbd22bada, 0xbd683670, 
    0xbe0324bd, 0x3cbe85f9, 0xbe4db5a2, 0x3e1e8537, 0xbd2d8d9c, 0x3dc36588, 0xbc261147, 0x3d2e122d, 
    0xbd8b9a3d, 0xbbb6802e, 0xbdc3fffe, 0xbd119997, 0xbd336d96, 0xbd9ccc6d, 0xbd57ea18, 0x3d3bb54e, 
    0xbd278bbd, 0xbc721d11, 0xbda9984d, 0xbdabee9a, 0xbdbea0ab, 0xbd99e854, 0xbd3aaf92, 0xbb28de1b, 
    0xbd3382df, 0x3a4cad01, 0xbe60e24f, 0x3e334618, 0xbd9e4223, 0x3db0d472, 0xbda1077b, 0xba877010, 
    0xbe0b9a8c, 0xbce5a315, 0xbe1d95a5, 0xbd76af14, 0xbdf9041e, 0xbde8bf0a, 0xbd5ac8ba, 0x3cebe6a8, 
    0xbd7bada0, 0x3cb83ba3, 0xbd59a030, 0x3d4af145, 0xbdbc3eb7, 0xbdf4c461, 0xbd277e7d, 0xbc9e5872, 
    0xbbed65f8, 0xbd2fd069, 0xbe672bbf, 0x3da0c02c, 0xbdfaf921, 0x3e1e53af, 0xbdbe822a, 0xbc7ebf20, 
    0x3d125c5b, 0x3de6fb20, 0xbca3ec4b, 0x3ccaf2c6, 0xbc84da0f, 0x3cae9af0, 0x3b903ced, 0x3dffc964, 
    0x3da98fc7, 0xbdf10da0, 0x3b8ed13a, 0xbbee4354, 0x3c80e65b, 0x3bd7d258, 0x3b3a86d7, 0x3b39a9dc, 
    0x3d348eb4, 0x3e1da5ca, 0x3cb4ad20, 0x3d8c025c, 0x3d5eccc3, 0x3d6fd9e5, 0x3d1b2567, 0x3dc85c99, 
    0xbc35fba7, 0x3d57b93e, 0xbdf228be, 0x3cf09b0c, 0xbd7753b3, 0xbd9aa9e1, 0x3d4cc943, 0xbcca4710, 
    0xbc43d152, 0xbdb49b16, 0xbe0f2294, 0xbd9e051b, 0xbcbe167e, 0xbd9b0ba1, 0x3cda1fc4, 0xbc842398, 
    0xbd9fed44, 0xbdee4681, 0xbc2258d9, 0xbcf9ac85, 0x3c86b831, 0x3c514475, 0xbd5dc5bd, 0x3c4e4466, 
    0xbd4c8584, 0xbc87e4e1, 0x3d32c1ea, 0xbca9f478, 0xbd62c9f0, 0x3dbd37d5, 0x3cd77cd1, 0xbbedd185, 
    0x3d41d3dc, 0xbe0c1d85, 0xbdb55219, 0x3cd4819e, 0xbb026c4a, 0xbdb454b4, 0xbdb17fd7, 0x3e3aea51, 
    0x3d080c78, 0x3dc96e3c, 0xbd958f90, 0xbd62534b, 0xbd041e7d, 0xbdd1e4b9, 0xbc483de7, 0x3c854a1b, 
    0xbdda02b5, 0xbe2c8833, 0xbe04cae0, 0x3b94fea4, 0xbdf2603b, 0x3e300ba9, 0xbc51a4d9, 0xbc65946f, 
    0x3d722c10, 0xbdf3b72c, 0xbdb5a909, 0x3da93073, 0xbceeebe4, 0xbd647e80, 0xbd45d2f5, 0x3eb344cf, 
    0xbd2414c7, 0x3dc08a8d, 0xbe3bb781, 0x3cbbd903, 0x3e251571, 0xbe8e9d82, 0x3d060d1a, 0x3d467fed, 
    0xbdadafb6, 0xbc28b872, 0x3c47486a, 0xbc94d6b8, 0xbe2df398, 0x3ed794df, 0x3d493890, 0x3d2894c6, 
    0x3db602df, 0xbe30d79c, 0x3d92e8d6, 0x3e9708d6, 0xbbbe8e0a, 0x3d9cd85e, 0x3de38b3f, 0x3ea44c20, 
    0x3d4f3406, 0x3df535d4, 0x3e4f1b75, 0x3ce65cf2, 0x3db110e7, 0xbe9fca82, 0x3ddbda8f, 0x3d3477e8, 
    0xbd5b97c2, 0xbe0b3c99, 0x3d908b0a, 0x3d0236f4, 0xbdcf9629, 0x3b61033d, 0x3d9c235c, 0xbe158de7, 
    0xbdfa32cc, 0xbe36c81f, 0x3d4469df, 0x3e2b63b7, 0x3cca2217, 0x3d34b25a, 0x3de9808e, 0x3de8956b, 
    0x3c8c5831, 0xbc51fa93, 0x3d2fad35, 0xbdb01b92, 0x3df0b1b9, 0xbe3a72ff, 0x3dc3cf4b, 0xbcffe164, 
    0xbd860546, 0xbb9a0c57, 0xbd6d3443, 0xbcbd217f, 0xbd57d09c, 0xba84383f, 0xbd00e5a9, 0x3c94b99d, 
    0xbc300966, 0xbc63c469, 0x3d1ad6a9, 0x3b553895, 0xbdc5cee2, 0xbdd92573, 0xbb5324ad, 0xbc0d23f7, 
    0x3ca1c06e, 0xbbf49452, 0x3ca01b30, 0x3d40b12b, 0xbd1b9928, 0x3d2749f1, 0xbd83a526, 0x3c132889, 
    0xbd1eb36d, 0xbbc808e8, 0xbce42cda, 0xbd40ac89, 0xbd7b3eaf, 0x3cf81945, 0xbcab7655, 0x3ba5fd41, 
    0xbc6835b5, 0xbc3f5f9d, 0x3c05a381, 0x3d1f84fd, 0xbd2ab558, 0xbd935be3, 0x3b8047b2, 0x3d91d7d2, 
    0x3c854fba, 0xbc743ebc, 0xbc0af5a2, 0x3c82fcf4, 0xbce3bffa, 0x3c8bcf2f, 0xbc45e319, 0x3c0ccd32, 
    0xbd67087a, 0x3c7602f6, 0xbc31bd34, 0xbcb9120b, 0xbd81dc8c, 0x3dac5c6b, 0xbcfa054c, 0x3c97a5e6, 
    0x3d1e4699, 0xbcde02ea, 0xbca29ef0, 0x3d8b6740, 0xbcf7b23b, 0xbd59bfbb, 0xbd07fb0d, 0x3d6047c5, 
    0x3c1c54bc, 0x3ce84dc6, 0x3cb539d0, 0x3d18bc6b, 0xbd309908, 0xbb9fe9c6, 0xbd22b1ae, 0x3d381465, 
    0x3df68f6b, 0x3adc1b0a, 0x3d041d8e, 0xbd995abf, 0x3e172f8f, 0xbe5ac5dc, 0xbdbd0f62, 0xbcc99bce, 
    0xbe5c508a, 0x3b7f97f5, 0x3e78c542, 0x3cd655fb, 0x3dddc936, 0x3da4a8e5, 0x3da4a8a8, 0xbe865969, 
    0x3f169080, 0xbda247d4, 0x3e27c45a, 0x3e8e4486, 0xbcd473e5, 0x3d7709a9, 0x3da479c9, 0xbe757d59, 
    0xbccf0bca, 0xbd042445, 0xbd78b08c, 0xbdab6d76, 0xbc496de0, 0x3cd30dc4, 0xbded33e7, 0xbdab8466, 
    0xbdc9c8a8, 0xbd548f8e, 0x3c4ec0a1, 0xbd86d149, 0xbe6b8a54, 0xbe2a19bd, 0xbe7eae1d, 0x3e5864a4, 
    0xbc01f76c, 0x3e43e68e, 0xbe91cd53, 0xbe481c34, 0xbe1b644e, 0x3d5fdc0f, 0xbe5f785f, 0xbda32c8b, 
    0xbbe6f55a, 0x3d8e37dc, 0xbc726437, 0xbe396b11, 0x3d2fdeb5, 0x3e2686cf, 0xbe581e72, 0x3e0be698, 
    0x3e708f15, 0xbd9ec468, 0x3d9f09c2, 0xbd93b4af, 0xbd566459, 0xbdda08c2, 0xbe0b5278, 0x3e4bef91, 
    0xbc754316, 0x3e929888, 0x3e5b9b87, 0xbe67dea2, 0xbdbd7568, 0xbe1be20c, 0xbcfd7c9d, 0x3e1e597c, 
    0x3c8fa2ad, 0xbbf3e32f, 0x3d5a1078, 0x3d230c72, 0x3b2d4dbc, 0x3cc3fe2b, 0xbcbd7691, 0x3c430fcf, 
    0x3bda58b2, 0xbcb49268, 0x3aecf534, 0xbc45dc32, 0x3cc74331, 0x3d18bb08, 0x3d401a8f, 0x3d1e89bb, 
    0x3e4414c7, 0xbbed15d8, 0xbc7fd2b8, 0xbbc46c46, 0x3d301db5, 0x3b8c75da, 0x3d3ee2f9, 0xbd07ab9f, 
    0xbbc421a0, 0x3d74bdb2, 0xbcb57b8a, 0xbb49596a, 0xbcf36b22, 0x3d104ce7, 0x3cdec340, 0xbcd8c117, 
    0x3d3826f7, 0xbd60be84, 0xbc4fb582, 0xbd23eb84, 0x3bb1a16b, 0x3c327807, 0x3c21de96, 0x3dd10257, 
    0x3c738a43, 0x3cee0868, 0x3cb3da25, 0xbdaf47e1, 0x3ccea083, 0x3c02edc8, 0x3cae7a01, 0x3b3615c2, 
    0x3b84c773, 0x3d6416df, 0x3bfa40f7, 0x3cda5b6e, 0xbd088a66, 0x3cb78d15, 0xbbb696bc, 0xbd0323c9, 
    0x3da312e4, 0xbd7e4d24, 0xbd2cf529, 0xbdaa4197, 0xbd399866, 0xbbbb9cff, 0x3c9b51d3, 0xbcc33518, 
    0x3d27536f, 0x3b1e1668, 0x3d810d89, 0xbd9131de, 0x3ce5f0cc, 0xbb3c7b2a, 0xbc7c64fe, 0x3d0a0eb5, 
    0x3e2056c9, 0xbe66f9f3, 0x3df36cb8, 0x3deb3b55, 0x3d6700d5, 0x3d72b730, 0x3dfeddb7, 0x3d803f8b, 
    0xbe3ac4a3, 0x3cb3324d, 0x3e5bfc24, 0xbd786eab, 0x3c88f5ca, 0x3e129367, 0xbd0c3adb, 0xbc89ffaf, 
    0xbd570ae7, 0xbe084600, 0x3d6d1905, 0xbdd70ab7, 0x3dc14d14, 0xbdabee6f, 0x3e220da4, 0xbde2d8ab, 
    0x3e02fdaf, 0xbda3c4f2, 0xbd4d63cf, 0x3e16acb3, 0x3da7058b, 0x3e016ada, 0x3db218ba, 0x3b18cb33, 
    0xbe04201c, 0x3db55878, 0x3d9c4e98, 0xbd804f8a, 0x3b9a92e3, 0x3d2ca548, 0x3cca3ab2, 0x3cd14d8a, 
    0xbe29e7fa, 0xbdcfaf2e, 0x3cd50853, 0x3b214760, 0x3e0c97f6, 0xbe082d67, 0x3cd341cd, 0xbdd2562c, 
    0x3d6ba452, 0xbda34205, 0xbd9ebf1b, 0x3d34c118, 0x3da629f7, 0x3e56d13c, 0x3d2e4fab, 0xbd258090, 
    0xbdc197fa, 0x3d00b337, 0x3d0de62e, 0xbd6f1a37, 0xbc7d8a07, 0xbd11898f, 0x3db827e2, 0x3e33f5eb, 
    0xbda02fe0, 0xbb640c7e, 0x3df77e11, 0x3d969f70, 0x3d603187, 0xbcae5cdd, 0x3df700dc, 0xbd1a196e, 
    0xbd7e5986, 0xbd52681c, 0xbe046e98, 0xbd786c32, 0xbda434f6, 0xbdfdf9f7, 0xbd7a69f8, 0x3d083f6d, 
    0xbd9272b5, 0xbd9349d1, 0xbd9601b6, 0xbe2e50a2, 0xbe07aaa5, 0xbe3b88eb, 0xbdc97d51, 0xbe2209a4, 
    0x3acb64fd, 0xbd3ff5dc, 0xbe3fa834, 0xbd037bfd, 0x3c4cd612, 0x3de08a86, 0xbe19dfb0, 0xbd06b31f, 
    0x3deeee83, 0xbcc95b60, 0x3e0c2b88, 0xbd68fb11, 0x3d254935, 0xbc97e709, 0x3ca9b913, 0x3da9be6a, 
    0xbd52657b, 0xbcda6472, 0x3d06aae3, 0x3aa55959, 0x3d1d806d, 0x3d931b10, 0xbdb8ba67, 0x3c81d511, 
    0x3c61c5c2, 0x3b8c54d8, 0xbdb972a3, 0x3ca45449, 0x3c874562, 0xbd9f3307, 0x3dd7e2c7, 0xbb0bfae2, 
    0x3dd19730, 0xbcd7f6f7, 0x3e39d91f, 0x3cbdf0c8, 0x3b0e0946, 0x3d43143f, 0x3dad66b9, 0xbceaf8de, 
    0xbd25bab9, 0x3ca5a68c, 0x3ced2ba2, 0xbe054fa3, 0x3cdf2c56, 0x3d9581cf, 0xbd6e6d70, 0x3d99e429, 
    0xbd8bf0c6, 0x3c469506, 0xbd88b5be, 0x3c15565e, 0x3db96cdc, 0xbdc05340, 0x3d9bc467, 0x3b423a8d
};

static const uint32_t _K46[] = {
    0xbe65249c, 0xbfaa7780, 0xbe5bb3fc, 0xbf9c5b2a, 0xbdfc2fcc, 0x3e77a356, 0xbe7bfea2, 0xbdbcab57, 
    0xbee7743b, 0x3ecc49ce, 0xbf01ff2c, 0xbf85f728, 0xbf121c6a, 0xbe713940, 0xc00df63e, 0xbd2f8d70, 
    0xbf06e4fd, 0xbf7aac20, 0x3c94f178, 0xbe4e2a19, 0xbf068068, 0xbfd7dd5e, 0x3e873f7b, 0xbf0b22a4, 
    0x3eddcab4, 0xbef840eb, 0xbe733e50, 0xbe8128a4, 0xbfb14478, 0xbf53b988, 0x3e024ac2, 0x3b74bc80
};

static const uint32_t _K50[] = {
    0x3bdebc12, 0xbd61bba5, 0x3c27aa13, 0x3e56bbe4, 0x3e08e281, 0xbe5d5a42, 0x3e0aeb5c, 0xbe250560, 
    0x3e0a5208, 0x3e0b42b9, 0xbca8f7ea, 0x3c2c95e7, 0xbe33f570, 0xbddee4ce, 0xbd808d8d, 0x3c3f3d49, 
    0x3de1b197, 0xbbc9e875, 0xbe6854bd, 0x3e0973ee, 0x3e021c34, 0x3d2100f8, 0x3e3ab956, 0xbdc04915, 
    0x3e49a503, 0xbd26ca8f, 0x3cea504c, 0x3d9f7801, 0xbe2684bb, 0x3b2f7b79, 0xbe1baa3b, 0xbdf11223, 
    0x3cd2756a, 0xbd373630, 0x3b9cf911, 0x3de2db23, 0x3dccf93d, 0xbe8b59df, 0x3e06442f, 0xbe15004a, 
    0x3e2a526c, 0x3d603263, 0x3dbca61b, 0xbe450da4, 0xbe66536e, 0xbdafe7c6, 0xbd37c597, 0x3d4e7644, 
    0x3e272ec5, 0x3cdb5765, 0xbe749dbd, 0x3d7a78cc, 0x3cbdd116, 0x3e16b112, 0x3dfdee11, 0xbe03f534, 
    0x3e30431a, 0x3deba61c, 0x3daef9a1, 0x3ddf178e, 0xbd9b6277, 0xbd0b8deb, 0xbe168b7d, 0xbd8bc1b2, 
    0x3d4e21b5, 0x3d318cd4, 0xbdc17149, 0x3da8e626, 0x3dbf72f0, 0xbe82b2ff, 0x3e2a294a, 0xbe4421b9, 
    0x3de62e86, 0x3d97780b, 0xbc8b53a0, 0xbdc78ef9, 0xbdc2a0a9, 0xbe1156ad, 0xbdd613f8, 0x3d28e86a, 
    0x3d813e39, 0x3aef2da7, 0xbe88eb10, 0x3d34b50e, 0x3ceecc46, 0xbd4d5639, 0x3d93df66, 0xbe2fca9e, 
    0x3e003a03, 0xbbba3bdc, 0x3d7988a0, 0x3d8ed72d, 0xbdf73d2d, 0xbd4860a5, 0xbe321b36, 0xbe17cf33, 
    0x3c6c0707, 0xbe184f92, 0xbc21775e, 0x3e6f5fac, 0xbe2a4188, 0x3d8a5538, 0xbdcfbbcf, 0xbde51092, 
    0xbc33eb3b, 0x3dbe124a, 0x3dfe1091, 0x3d390ebb, 0xbdc80bf8, 0xbdc68caa, 0xbe47a773, 0x3d239c0d, 
    0x3e462070, 0xba0d561f, 0xba792004, 0xbedd837d, 0xbe8cd091, 0x3dad3786, 0xbd8ce698, 0xbdc08955, 
    0xbe80687f, 0x3dc08cd0, 0x3d9703f5, 0x3d2f1244, 0x3e2d9b77, 0x3dc8d592, 0x3d99f4d8, 0xbd5aac68, 
    0x3d9fed5b, 0xbe7d9ba6, 0x3dca7350, 0x3dc3e364, 0xbdcd79e0, 0xbdabe187, 0xbd8a3926, 0xbdfefa68, 
    0x3cfb0872, 0xbe866359, 0x3d28b06c, 0xbd20f3df, 0x3e47aa3b, 0xbd2fdc80, 0xbe55db92, 0x3d819ac7, 
    0x3e136902, 0xbd108947, 0xbdcab280, 0xbd44384c, 0xbe571c54, 0x3ce34537, 0xbc7a3bb1, 0xbc308efb, 
    0xbe8378e6, 0xbdae6833, 0x3f65f5e1, 0xbd8a82c8, 0xbdf591d0, 0x3cf6a1be, 0x3ca1679b, 0xbe0cfe99, 
    0xbd5de5d7, 0xbe6bd3d2, 0xbe2f7264, 0xbe279b5f, 0x3c0e42a3, 0xbe2c8893, 0x3d400f3f, 0xbe101ed0, 
    0x3d6e8ac1, 0x3dbdf145, 0x3ca60ede, 0xbd4753ed, 0x3e757ed5, 0xbc4e7501, 0xbe6f8a6e, 0x3de18930, 
    0x3d87a9d3, 0xbd5adfb6, 0xbdfa1f49, 0x3caa02b0, 0xbe3d63d4, 0xbdee9f37, 0x3d75da2b, 0xbca9c2a3, 
    0xbdfe4c07, 0x3d51e1d9, 0x3efee9e9, 0xbe1557c4, 0x3d86bc53, 0xbdd22668, 0xbd37d3ed, 0xbd2778f5, 
    0xbd449c22, 0x3e1c98e9, 0xbe531b23, 0xbbc8a16c, 0x3da300a9, 0xbd90adbe, 0x3d0c45ab, 0xbd99308b, 
    0xbccbf7df, 0x3e05438b, 0xbdb319cf, 0xbc4d9046, 0x3e0e80d3, 0x3b8599d6, 0x3dba56ac, 0x3c5f28fb, 
    0x3c4483f7, 0x3e1a08b8, 0x3bb11c13, 0x3d04ff11, 0xbd33d57b, 0x3daec295, 0xbd7f4c91, 0xbd3aa87e, 
    0xbd5a7e5a, 0x3d22cbc0, 0x3e40aa12, 0xbd2a21f1, 0xbd90173e, 0x3d838c29, 0xbcbb61c0, 0xbd4d4adc, 
    0xbd362509, 0x3dfd7fae, 0xbd2c2d4a, 0x3dd6ac28, 0x3de36d69, 0x3da95477, 0x3e06ace9, 0x3bb9287c, 
    0xbb457cbf, 0x3df34f0d, 0xbd0f9726, 0x3d85ef72, 0x3e0c17b1, 0x3cb86143, 0x3dd82752, 0x3d8f9834, 
    0x3da163eb, 0x3d8bcdd6, 0x3d240b1c, 0xbbccdf4a, 0xbda321b5, 0x3e8d8b9b, 0xbe016ef5, 0x3d9d8735, 
    0xbdcd91d3, 0xbdeb3521, 0x3da46a89, 0xbe03882f, 0x3c4aee3d, 0xbb2e0fae, 0x3d676d60, 0xbca00c99, 
    0xbd0fc1b1, 0xbd2f1a05, 0x3def2a69, 0x3e31f997, 0x3e3bbdcc, 0x3cf9a959, 0x3e0e4153, 0x3b2e3b02, 
    0x3db6bf6f, 0x3d392ffe, 0x3dc99f78, 0xbd6d0470, 0x3df1c663, 0x3e0dc729, 0x3d3fa0e2, 0x3dd8d0bb, 
    0x3de59a9b, 0x3d301400, 0x3de73911, 0x3ce59e01, 0xbde2291a, 0x3e6040cd, 0xbe0198d3, 0x3db046e3, 
    0xbd92cb5a, 0xbd5358bd, 0xbd44bed3, 0xbe40295e, 0xbd25fda3, 0xbcf7b244, 0x3d2167a1, 0xbc97b155, 
    0x3d85c4e4, 0x3e72c5b0, 0x3dae5e7a, 0xbdd55369, 0x3cebb163, 0xbd1732fd, 0xbe4f7f4b, 0xbc6cb081, 
    0xbe3b82c3, 0x3e0049c6, 0x3d790780, 0x3d24c0e8, 0x3e83b538, 0x3d00b956, 0x3e499c07, 0x3d937cda, 
    0x3c890cec, 0x3eb35d5a, 0x3da9eef9, 0x3cac4234, 0x3d9951c1, 0xbd27938a, 0x3b247d29, 0x3db069af, 
    0xbae9aed0, 0x3dda806e, 0xbc93e132, 0x3da03fa9, 0x3ee40980, 0x3de5b70a, 0x3e201100, 0xbbbfa975, 
    0xbc670d7b, 0x3e659bf5, 0xbb03f896, 0xbcb11324, 0xbcc76879, 0x3d510b6e, 0xbe45b02a, 0xbd169b42, 
    0xbe963164, 0xbe33caf9, 0xbd0bef0e, 0x3c4a5d52, 0x3cd2d1ac, 0x3ce60e43, 0x3d9a2d17, 0xbc8bbe46, 
    0xbd1abf30, 0xbe0bebeb, 0x3c9b5066, 0x3e23f665, 0x3dcb39a6, 0x3cb21568, 0x3cafcc64, 0x3c49235d, 
    0x3bdbd998, 0x3d0df457, 0x3da879d4, 0x3d8177c0, 0xbd8ab3c3, 0x3d32025c, 0x3dfcb2e8, 0x3d0c9a66, 
    0xbd057862, 0x3def572a, 0x3d32f856, 0xbd788e8f, 0xbc9ad8fd, 0x3d9e287a, 0xbde1f6d5, 0x3cf1fbf1, 
    0xbe556602, 0xbc3e8c70, 0xbc4fd272, 0xbb717612, 0x3e881a1b, 0x3bb06500, 0x3db37fc6, 0xbd7ca918, 
    0x3d32819b, 0x3e6bb8bd, 0x3d9c328a, 0x3e4499a8, 0x3d0beb10, 0x3e0adac2, 0xbc42a4e6, 0x3d520c38, 
    0x3dbd5341, 0xbe374594, 0x3e1dd589, 0xbd387781, 0x3e8b86d2, 0x3d3164cb, 0x3dbe3bb7, 0xbd426048, 
    0x3debf338, 0x3dc6b88f, 0xbd51227f, 0xbdebb250, 0xbcc3edac, 0xbe7b0e68, 0xbc180901, 0xbe026d1a, 
    0x3d0bd730, 0x3d8a4f28, 0xbe5cec8d, 0xbddee576, 0xbe1d640a, 0xbcc0e050, 0xbd009afe, 0xbdadb302, 
    0xbd2a3671, 0x3dc4b680, 0xbe5aece1, 0xbe059901, 0xbd52dfca, 0x3e697913, 0xbd09f1fa, 0xbdfea6cd, 
    0xbde683bf, 0x3e30dad7, 0xbd1d14ba, 0x3d7de009, 0x3d769c1c, 0x3d8c72ff, 0xbebb33ff, 0xbda73008, 
    0x3dff2885, 0xbd25c6e8, 0xbd9bf397, 0xbbe54245, 0xbdc19e09, 0xbe1395ad, 0xbd332aec, 0xbe24bcde, 
    0x3d74dd2e, 0xbc8b0d53, 0xbd404e97, 0xbcfecce1, 0xbd4faa5c, 0xbe16d486, 0xbe071966, 0xbe001a35, 
    0xba4b1b3c, 0x3d0d119c, 0xbe80aa80, 0xbcbdbe95, 0x3cb39220, 0x3c4bf423, 0x3d33f18f, 0xbe189ca1, 
    0xba8c8933, 0xbc1fec7c, 0x3d9fc3e1, 0x3d505f68, 0xbde2f03e, 0x3cac84b0, 0xbe811bd0, 0xbe70406d, 
    0x3e0b6763, 0x3c71f7c2, 0x3be566a4, 0x3dfa85ee, 0xbdc3be11, 0xbe386b04, 0xbd03e0dd, 0xbe097b91, 
    0x3c370859, 0x3b73624a, 0xbe4f60a1, 0x3e0584c4, 0xbcabc058, 0xbe34895a, 0xbd571456, 0xbe4275c0, 
    0x3d4002e5, 0xbda234c6, 0xbe87f4be, 0xbc951505, 0x3d9a40b7, 0xbb2f23fb, 0x3d244d04, 0xbe27565c, 
    0x3d1ea053, 0x3d0536b8, 0x3dc07244, 0x3db73307, 0x3d915214, 0x3d93bbb3, 0xbed6837e, 0xbd2d1eb5, 
    0xbe4484e9, 0xbe01d435, 0x3ce912ce, 0xbb1f3adc, 0x3e150d5e, 0x3c3cfe15, 0x3e393a11, 0x3d39f093, 
    0x3e92d2a3, 0x3e26ac1b, 0x3dff8f50, 0x3dcf8ce6, 0xbdb3cd1e, 0x3e92c09f, 0xbc322b40, 0xb8102627, 
    0xbda43eca, 0xbd02fdd4, 0x3e802500, 0xbe2bc8c8, 0x3d0fb828, 0x3ecd27b8, 0xbe1e2206, 0x3eb0a810, 
    0xbdd611b3, 0xbe06fc31, 0x3dc30e25, 0xbc1c7f61, 0x3ed3cb1f, 0x3db31a8d, 0x3bf3ecb8, 0x3da3b9c1, 
    0xbe12a9a8, 0xbe3a0bd7, 0xbc305a44, 0xbe8c9f84, 0x3d6c944b, 0xbcfdc168, 0x3db581f9, 0x3e2ab0ad, 
    0x3e6182cc, 0x3e0cb0a9, 0x3dc7eee9, 0x3ba1d74e, 0x3e60eba2, 0x3e1043e0, 0xbda005b0, 0xbd4f37a7, 
    0xbe2f3a85, 0x3dfff0b0, 0x3e01708a, 0x3d7f294d, 0x3cc5c213, 0x3e409b8c, 0xbdeed39b, 0x3e434d0f, 
    0x3ddab870, 0xbe2e556b, 0xbda3d962, 0xbe1e1485, 0x3e123a81, 0xbe49a1d0, 0x3e002e9f, 0xbcbfe55e, 
    0xbe015b14, 0xbceefd65, 0x3de60a89, 0xbdb55549, 0xbdc2beca, 0x3e46a992, 0xbc56a4db, 0x3e351ff5, 
    0x3d8de2a1, 0x3e2de975, 0x3e9340c6, 0x3e697f05, 0xbe355410, 0x3de8afdd, 0xbe18f051, 0xbd4c0e22, 
    0x3d65edc4, 0xbe07cf2a, 0x3e57db84, 0x3cbf56b9, 0xbca3bf23, 0x3e339738, 0xbe5a440f, 0x3e3d12af, 
    0x3da338bb, 0xbe2f4ade, 0xbda5e86b, 0xbde477a4, 0x3e4b2fea, 0xbe1008c1, 0x3e5a3b0e, 0x3dee946a, 
    0x3d6e6584, 0x3dd25fea, 0xbd4894f2, 0x3c978db2, 0x3ca140a8, 0x3d1fb82e, 0xbd729e5d, 0x3cd64836, 
    0xbdabbc3f, 0xbd2b79da, 0x3ba7a336, 0xbc64e9ea, 0xbbb8e7bc, 0xbd090526, 0x3d89898a, 0x3c80602b, 
    0x3d56e3e0, 0x3dae79df, 0x3cfc6b19, 0xbc0cd7b0, 0x3c2e3e2e, 0xbc6558a7, 0x3b0457bb, 0xbca4067a, 
    0x3ba918b1, 0x3d7d3986, 0x3ce78c4d, 0x3cdb0065, 0xbda9711f, 0x3ca92cdb, 0x3cd95f56, 0x3bd27803, 
    0x3c51f719, 0x3da45ad0, 0xbd316b28, 0x3cf65c85, 0x3b53c7c8, 0xbc9add40, 0xbd0df4de, 0x3aec0641, 
    0xbdd8dc94, 0xbd9ff778, 0xbd8b85a8, 0xbd6adce3, 0x3db2efcf, 0xbcd2aa7e, 0x3d10f609, 0xbcd3f645, 
    0x3cbba5a5, 0x3dc41ca2, 0xbc004788, 0x39ef1b88, 0x3c5d51bc, 0x3c899e97, 0xbb91906c, 0xbd11098d, 
    0x3b4299af, 0xbcc60172, 0x3d71b4f3, 0xbd19ab84, 0xbd3dd9ff, 0x3c8f093d, 0x3ba1da96, 0xbbce8c2e, 
    0xbdbcc689, 0x3d5ae523, 0xbd24cbfc, 0x3c3ed82a, 0xbc6dddfe, 0xbb178670, 0xbd979db8, 0x3bcaa2dd, 
    0xbde3577e, 0xbc8f234b, 0xbd4d4a88, 0xbdcb9e2c, 0xbd1f3cca, 0xbd12193e, 0xbc75bcb0, 0xbb468ceb, 
    0x3dd4b945, 0xbd2d7fb8, 0x3caef06d, 0x3d713655, 0xbd22f0fd, 0xbd7bd5d8, 0xbcbad9e9, 0xbbedc3bd, 
    0x3d20fcfe, 0xbd9b3d5b, 0x3d06db6c, 0xbc3f9976, 0xbe016b67, 0xbce3bd4d, 0x3cc9196c, 0xbb5ea81d, 
    0xbdd342c0, 0xbe9339c8, 0x3e882706, 0xbe677be5, 0x3e4e2910, 0xbd917916, 0x3e04c08c, 0x3de7449d, 
    0x3e660d5f, 0x3df018de, 0x3d5cf719, 0x3e38a571, 0xbe640606, 0x3eebbded, 0x3b279576, 0xbb842b29, 
    0xbe2eceac, 0x3d376bed, 0x3e0a8869, 0xbdd0ac52, 0xbd587623, 0x3eca9a2d, 0xbe3921a1, 0x3f11357f, 
    0xbd9bda58, 0xbdc70a07, 0x3da7be62, 0xbd43ae4b, 0x3e5bb759, 0xbdaf9ac3, 0xbcdab8c9, 0x3e165ee6, 
    0xbe15fdab, 0xbda5b3ce, 0x3cb32671, 0xbe8a14d8, 0xbc1279b8, 0x3dc5f030, 0x3b26ec3c, 0x3e79af02, 
    0x3dd12e6a, 0xbd0afa26, 0x3e769c65, 0xbc88185e, 0x3d9af542, 0x3e905b38, 0x3d0c261e, 0xbd620a8c, 
    0xbd976a67, 0xbd3bd796, 0x3ea905f7, 0xbdbcfc4a, 0x3c88b0a6, 0x3ea04048, 0xbe917ed4, 0x3f0e6077, 
    0xbc6f7f57, 0xbd76025e, 0xbd6a4b2e, 0xbe7e1fce, 0xbc82b9e3, 0xbe79f6dc, 0x3e6dc472, 0xbe179fc9, 
    0x3d25abd0, 0xbd41ba8a, 0xbd44eb06, 0xbd203c52, 0xbe5e45af, 0x3e5f9e2f, 0xbdd3ccd3, 0x3e38448e, 
    0xbba77605, 0x3e741b4b, 0x3ef5480e, 0x3e7704b8, 0xbe4c551f, 0x3e613e3d, 0xbd43c074, 0xbe89b0ed, 
    0x3e5351e9, 0x3c13d26b, 0x3e6ccc92, 0xbe5d177c, 0xbdfbfeaf, 0x3e2ac6b8, 0xbe4841f4, 0x3e7e6d70, 
    0x3bec7da5, 0x3cf97ea6, 0xbe048d68, 0xbdd50f06, 0x3e2400c3, 0x3c9a63ab, 0x3e62f24d, 0x3c3642b5, 
    0x3d38732f, 0x3dcdf36d, 0x3d3b91b3, 0x3c4b0ab4, 0x3d380797, 0xbdb49ee7, 0xbcad444b, 0xbde2827f, 
    0xbda548fa, 0x3d35e360, 0xbe11c0f5, 0xbb0ec85d, 0xbe074883, 0xbdbee5e8, 0xbcb9d90b, 0xbdca08bb, 
    0xbc9d6472, 0x3d9f0262, 0xbdc49c89, 0xbd4e09de, 0x3d6ae9fc, 0x3dbd144e, 0x3d7dc953, 0xbd91aa06, 
    0x3d0b89eb, 0x3dbd89dc, 0x3d402845, 0x3dde60ba, 0x3c41931a, 0x3d94352c, 0xbe0d27e5, 0xbd9fd28c, 
    0x3da9e3f0, 0x3d478115, 0x3de55f21, 0x3cf034ac, 0x3c9d8b8a, 0xbcadad27, 0xbd8d2477, 0xbd99cdbe, 
    0xbe07b789, 0x3c8d104d, 0xbdc7b54e, 0x3d314662, 0xbdd24f3c, 0xbd96fe28, 0xbd7b3958, 0xbde70092, 
    0xbc94deb5, 0x3cd63505, 0xbdb48369, 0x3cc28481, 0x3df47ca3, 0x3c31b7cb, 0x3d0dc6ba, 0xbd931b73, 
    0x3e0e68d4, 0x3ccf12c5, 0xbba5bbbd, 0x3d573b96, 0xbd2b9a62, 0x3c199a48, 0xbdce3453, 0xbd0c7efd, 
    0x3d862533, 0x3dcc1a51, 0x3da62a27, 0x3d9cb3b3, 0xbc9631d3, 0xbd9b4884, 0xbd948dee, 0xbd716e7d, 
    0xbddaabc3, 0xbc02adfd, 0xbe05a4ea, 0x3d4f933f, 0xbd293558, 0xbda47b56, 0xbc365e92, 0xbdc12cfc, 
    0xbd343d4c, 0xbcaf9539, 0xbdd11669, 0x3d5e4074, 0x3dea2e3d, 0xbb1c22e1, 0x3cc8a381, 0xbd86da44, 
    0x3debc54a, 0x3da760c4, 0xbc93ddb9, 0x3d92ee0e, 0x3da57b65, 0x3d4343ff, 0xbe1a9b8a, 0xbd4a994c, 
    0xbdc0a1f8, 0x3da34028, 0x3d10294e, 0x3ef69c86, 0xbed220ab, 0x3d4540dc, 0xbeab0696, 0xbe359c96, 
    0xbe1c6b35, 0x3df5c742, 0xbdbb386a, 0xbbd93e29, 0xbe886454, 0xbe7217fa, 0x3e0e85e1, 0xbe07598b, 
    0x3ea15f47, 0xbdab09e4, 0xbc74e76e, 0xbf283725, 0xbe90d458, 0x3e270d8a, 0xbe899431, 0xbd7a2c43, 
    0xbdcc7867, 0xbe81dc59, 0xbc47254d, 0xbe85397e, 0xbdf6cb0e, 0x3ddc4075, 0x3e31869a, 0xbd0c24f8, 
    0xbe35e64f, 0x3daf1209, 0xbdeb2ec0, 0x3eedfb8e, 0xbf1a8476, 0xbe0fb1dc, 0xbecec430, 0xbe22b4c5, 
    0xbe034a7a, 0xbc9594fa, 0xbe5788f5, 0xbe145dc0, 0x3e1d062f, 0xbe1e9925, 0xbd782a03, 0x3d7f2415, 
    0xbdb8e576, 0xbeecad39, 0xbce4d88d, 0x3e88565d, 0xbe99ace4, 0xbd59ac74, 0xbdc4d0e7, 0xbc6db092, 
    0x3b3ad586, 0xbdff4e7e, 0x3d841a52, 0xbe01d256, 0x3e0c1198, 0xbd965363, 0x3cee1e5e, 0xbdb54619, 
    0xbe1a6b96, 0x3c798524, 0xbe4dd2ba, 0xbed4c762, 0xbede1209, 0xbcb21d63, 0xbecc6972, 0xbe3910eb, 
    0xbe9575ae, 0xbe29b443, 0x3e2d4279, 0xbd8e00fa, 0xbdb56754, 0x3b88ca2e, 0xbe8da21b, 0xbbaf7462, 
    0x3e0e0556, 0xbe4c38a2, 0xbd7096e6, 0x3c416c84, 0xbe9e3c55, 0xbe7bddb1, 0xbe00317e, 0x3d2ff4a4, 
    0xbe9de07a, 0xbebf82cc, 0x3e2afdb5, 0xbda289c5, 0x3e1bfddf, 0xbe26820c, 0xbb08edad, 0xbc2a513c, 
    0xbdc4b32d, 0xbd934cf7, 0x3ea51389, 0xbefce64b, 0xbd159309, 0x3cd16205, 0x3d27a9f8, 0x3e91814c, 
    0x3dcdaa8d, 0x3e6be96f, 0x3e9b67ad, 0x3d3bbe2f, 0x3c9ff1bb, 0x3ea2d880, 0x3d40d9ee, 0xbdc93c84, 
    0xbd943da5, 0x3b511344, 0x3db41407, 0xbd5a6787, 0xbdc3040a, 0x3e940127, 0xbdd073ce, 0x3eb2ab7a, 
    0xbdf40407, 0xbd77ee6a, 0xbb687ba4, 0x3c929c91, 0x3da7e9c2, 0xbe64adb2, 0x3df519da, 0x3e2a8b7c, 
    0xbdabfaf8, 0xbe7e3807, 0x3ecdcac7, 0xbeaa0605, 0x3cf19e9d, 0x3da12192, 0x394e18fc, 0x3e445d81, 
    0x3e2a66d1, 0xbe1ef1b8, 0x3de67e68, 0xbca5b19d, 0x3c27df41, 0x3e72926e, 0xbd61a6e1, 0xbe060207, 
    0xbe862012, 0x3d78910c, 0x3e82f65d, 0xbe180eda, 0x3d28cc40, 0x3e4bc214, 0xbe2b6aee, 0x3ec82542, 
    0x3df34135, 0xbe62c3a7, 0x3d0eb587, 0xbe89861a, 0xbd06cbf6, 0xbe352770, 0x3de4e247, 0x3e152b4b, 
    0xbe211a87, 0xbe0e6c04, 0x3e66d557, 0xbec88be6, 0x3d7c449e, 0x3e886f82, 0x3da48c95, 0x3e89fd55, 
    0x3e06cdbb, 0x3e25ea15, 0x3e93406e, 0xbbe5d1fb, 0xbd4124a6, 0x3e8913ff, 0xbd6d96dd, 0x3de14a6e, 
    0x3cd637df, 0xbd3160ef, 0x3efe85af, 0xbe30f643, 0xbdc4c4e7, 0x3e34473e, 0xbe221233, 0x3e8f1c90, 
    0xb9c6c77a, 0xbc27ade7, 0x3d85c1bc, 0xbdfbb2dd, 0x3e0cad0f, 0xbe35a57b, 0x3efa3b36, 0x3ebf7e0e, 
    0x3d0507bb, 0xbddd8d10, 0x3cff3407, 0x3de45ab0, 0x3dcbc836, 0xbe24eda6, 0x3dd22359, 0xbe2db780, 
    0x3df83af1, 0x3e459ae0, 0xbcccb011, 0xbc602b0b, 0xbe43b0b6, 0xbdec9088, 0xbd33a8b4, 0xbd991547, 
    0x3d16ca73, 0xbcd59d08, 0xbe64c8a3, 0x3e047c75, 0x3e072d03, 0x3d45a9ae, 0x3e3281d5, 0xbdd8a4f5, 
    0x3e2903d2, 0x3d1371ca, 0x3d9cda7b, 0x3d518743, 0xbd50832a, 0xbc73ade2, 0xbde53957, 0xbdcc8b03, 
    0x3d220525, 0xbe1b795e, 0x3b884473, 0x3deec336, 0x3dba7d13, 0xbe85e094, 0x3dba658d, 0xbdf52a1b, 
    0x3d9c29ac, 0x3de1c365, 0x3da19ba8, 0xbdc44a7a, 0xbe38c3a3, 0xbdd4cc5d, 0xbd43a15b, 0x3b4dbd55, 
    0x3dd920ab, 0x3cfb11b6, 0xbe4cc7dd, 0x3d1fdabc, 0x3d8505ac, 0x3dabb954, 0x3e1ca6bb, 0xbdc9f974, 
    0x3e42e3b3, 0x3db0bdfc, 0x39e5a39d, 0x3d6d3af0, 0xbe176a1f, 0x3bc39856, 0xbdc02715, 0xbd82f91c, 
    0xbb97c5b5, 0xbc64c77d, 0xbd7a2fac, 0x3df3b486, 0x3d8d34ab, 0xbe4f0e4f, 0x3dc7885f, 0xbe1f9dd8, 
    0x3dbfa13a, 0x3e079524, 0xbd41d643, 0xbd57f69b, 0xbdc939ba, 0xbe20b1a1, 0xbda415fc, 0xbd9b26a4, 
    0x3d686302, 0xbcd6c9fa, 0xbe630932, 0x3caa9e6d, 0x3bc21c7d, 0xbd695757, 0x3d838143, 0xbe1567bd, 
    0x3dfd036f, 0xbb81553f, 0x3daa1d16, 0x3d1bf6a5, 0xbd711d70, 0xbcc11b98, 0xbe1120e6, 0xbde4311a, 
    0xbe5a21c9, 0xbe2e1aa8, 0x3e0160c3, 0x3dbf5315, 0x3ea414db, 0x3db6f749, 0x3e7c7459, 0x3b8472d9, 
    0x3e828059, 0x3d3550e4, 0x3d82adb7, 0x3e0ff068, 0xbecbaa7e, 0x3e3df2ac, 0xbd8afeec, 0x3e415406, 
    0x3c8e7e35, 0xbdb88ddc, 0x3e36b8fa, 0xbe085967, 0xbea82106, 0x3ec00667, 0xbccd7cba, 0x3e18b52e, 
    0xbd9a94c5, 0xbc83adb9, 0xbc19bef8, 0x3d9a294c, 0x3e34d1d4, 0xbd0913dd, 0x3e0da53c, 0x3d3677e9, 
    0xbe4f22ea, 0xbe62aa2c, 0xbddc46bc, 0x3dbc744f, 0x3e352a61, 0x3e0c8402, 0x3e4a059f, 0x3e077ce7, 
    0x3ea31023, 0xbdb0a0ea, 0x3e41e733, 0x3c84c3c5, 0xbe14da4a, 0x3d32d470, 0xbe7bce2e, 0x3dd1e4db, 
    0x3c27945f, 0xbdd16eb7, 0x3e0df779, 0xbdcf6367, 0xbe4f8c57, 0x3e5d141a, 0xbe20752d, 0x3e1be52b, 
    0xbd860859, 0xbe55a7ad, 0x3db36d2c, 0xbe670643, 0xbe2e22b3, 0xbdf5bf83, 0x3e8584b3, 0xbe3cd75a, 
    0xbcf4e8a4, 0xbe11d255, 0xbe547935, 0x3e25f36f, 0xbd4bb95b, 0x3d8e4ab2, 0x3c0885a7, 0x3cd41926, 
    0x3e24da8d, 0x3e6cb516, 0x3ec78f2c, 0x3dacab82, 0xbeabf8e3, 0x3d2981f0, 0xbe9d14e5, 0xbdf2a568, 
    0x3e7316da, 0xbe038ab1, 0x3e5e085b, 0xbe9a31c6, 0xbe62128a, 0xbcdc89cf, 0xbdfd179a, 0x3dc9081f, 
    0x3cee95e2, 0xbe193bb1, 0x3dc9019e, 0xbd3c7994, 0xbda4cfc3, 0xbe0b12d9, 0x3edaa357, 0xbc366f34, 
    0xbd82d287, 0xbe7cadc4, 0xbe523002, 0x3ec0a5a5, 0x3e7acd4f, 0xbde5764c, 0x3f153818, 0xbe06bbd6, 
    0x3f1266fe, 0x3e88137b, 0x3e899468, 0xbd587337, 0x3e4e138c, 0x3d25ecad, 0xbdf05c8d, 0x3f071b40, 
    0xbde6bc2e, 0xbd6b2abe, 0xbe08136f, 0x3d83ccd3, 0xbd8da2a3, 0x3d9d5680, 0x3d8d51ab, 0xbcfed4ee, 
    0x3cd18bf4, 0xbdbe9a68, 0x3d92bd83, 0xba5682dd, 0x3e8f9526, 0x3dd18b9c, 0xbdaa6ecf, 0xbc88bc7d, 
    0xbd0bfc94, 0xbdf5de9e, 0xbec32f8a, 0x3cacba2b, 0x3f035e76, 0xbe223eef, 0x3f12877c, 0xbe30b1e2, 
    0x3f16887a, 0x3dea0469, 0x3e461bff, 0x3dd3fb36, 0x3dd6cf69, 0xbd203aa7, 0xbdb60e3c, 0x3ed71366, 
    0xbd2bdbbe, 0xbc026e5d, 0xbc149f7f, 0xbd7dc766, 0xbd41cdb3, 0x3e33bab8, 0x3d9d809f, 0x3ce0bc19, 
    0xbd76d611, 0x3c89bd07, 0x3da1d6d9, 0x3dcbaf85, 0x3e97811f, 0xbd51b682, 0xbdd074c9, 0xbd7a0c16, 
    0xbd5b733c, 0xbe5cfdbb, 0xbe08a212, 0xbea657b0, 0x3ee01d08, 0xbdbda94c, 0x3f20b0ec, 0xbdb5ae40, 
    0x3f241ce5, 0xbd9b535d, 0x3bfdafff, 0x3dac524e, 0x3e89e994, 0xbc87410a, 0xbd55fcbd, 0x3e37e2fe, 
    0xbea943fd, 0xbcbdeb80, 0xbbcd148a, 0x3df773d4, 0x3da67cf3, 0x3ec3b56e, 0x3db13b1a, 0x3cd4b742, 
    0x3e69427f, 0xbd7340d3, 0x3d792ed2, 0x3db4cc19, 0xbe1f79bc, 0xbd0bbbc7, 0xbdba0a81, 0xbc1a5df4, 
    0xbbaedfd3, 0xbd889a1d, 0x3e8ec9c1, 0xbe93f95a, 0x3e0a3518, 0x3e18c611, 0x3e1e6854, 0x3e6442a6, 
    0x3e2a3e7c, 0x3d6af8ae, 0x3e47b48a, 0x3e1cfbd7, 0xbd4c31d3, 0x3ed6994d, 0x3d1af5ed, 0xbdb9d5b3, 
    0x3dafe066, 0xbd44756a, 0x3ea828fa, 0xbe0e3eea, 0xbe058e2b, 0x3e9fb7f8, 0xbe4e2d76, 0x3f0cbba5, 
    0xbcb978f2, 0xbd87a7e6, 0xbd46a082, 0xbe141bdc, 0x3e34171a, 0xbe0f7238, 0x3d9ab124, 0x3e96fcd6, 
    0xbd9e95b5, 0xbde2adaf, 0x3e84d5cd, 0xbe7a98d7, 0xbbfdbfb6, 0x3e5eac43, 0x3e0aae04, 0x3ea243ae, 
    0x3e6e0067, 0xbdd694c9, 0x3ea01a9c, 0x3d596197, 0xbd62650c, 0x3dd033b3, 0xbdcb92c3, 0xbd9c2ce5, 
    0xbdb53580, 0xbd9d972d, 0x3e82bbd4, 0xbdf3457b, 0x3d423b3a, 0x3e37f0c7, 0xbdc8e635, 0x3ea10b4c, 
    0x3cd4aaf7, 0x3c5c8a43, 0xbd06866f, 0xbdfe49a5, 0x3c4f5680, 0xbe233e9c, 0x3e0c07d7, 0x3cee0f2a, 
    0x3db88958, 0xbd88879f, 0x3d6e482d, 0xbe183c33, 0xbe0a4ab7, 0x3e74d942, 0xbd1aed21, 0x3e84837c, 
    0x3dafd3b6, 0x3dbfeb96, 0x3ed4a7f0, 0x3dac633e, 0xbca11b23, 0x3e698a8c, 0xbd4e821e, 0xbd508c9d, 
    0x3e10fb5d, 0x3c62b891, 0x3ec5c935, 0xbe084fa4, 0x3cd1db7c, 0x3e0e70d8, 0xbe1d6023, 0x3e5e7fb7, 
    0xbd170c6a, 0xbd51c292, 0xbc4bf1c9, 0xbcebe92e, 0x3e0f40d7, 0xbd0fb75f, 0x3eadd166, 0x3e74c812, 
    0xbdba67c9, 0x3ea2f83e, 0xbda8e9f3, 0xbe21fb7a, 0x3eb87a1b, 0x3bb5fde1, 0x3e8089f8, 0xbdbb0162, 
    0x3ea68c57, 0xbcba6cbd, 0xbdf102c7, 0xbbbc5999, 0x3d610c5c, 0x3e210fc1, 0x3ca448d4, 0x3e0c0f43, 
    0xbd0312ee, 0x3e09ff2a, 0x3e1899fc, 0x3d647398, 0xbc6b3f6b, 0x3eedbb92, 0xbd6ea5a4, 0x3d8f5296, 
    0xbd93fd0f, 0x3cab1174, 0x3e60e13a, 0x3d95c97d, 0x3eee8743, 0x3cf779d1, 0xbcb9ea2f, 0xbe7c8b29, 
    0xbe6b210e, 0x3e117e2a, 0xbe1bf042, 0xbe691bf8, 0x3d922444, 0xbe055f32, 0x3d2b473a, 0xbbb1a647, 
    0xbcad8c98, 0x3e2613f5, 0x3ea9f1b9, 0x3dee7607, 0x3e5ed643, 0x3e5f1c3c, 0xbd9776af, 0xbd8046b9, 
    0x3eb923d9, 0x3e45fe96, 0x3dd7e62b, 0xbdd98262, 0xbdcbdf47, 0x3f99260d, 0xbea532ed, 0x3ea60129, 
    0xbebd38e9, 0xbe53c2d9, 0x3dcddf2b, 0xbe28ff5e, 0x3e56417a, 0xbdde7172, 0x3d9dea9f, 0xbed2e832, 
    0xbd997935, 0xbdbbc05d, 0x3c7b5f3c, 0x3eab1e0f, 0xbd5dbd38, 0x3e8513e7, 0xbe09a20c, 0x3dcdd2df, 
    0xbce057ed, 0x3e44ed60, 0x3ef1562b, 0x3de91251, 0x3dbc74a6, 0x3b80fbe2, 0xbe265a88, 0xbe04c793, 
    0x3ed00f73, 0xbda87865, 0x3d8bea55, 0x3e6a5373, 0x3c115983, 0x3e8ee251, 0xbe9a69af, 0x3d83b8f1, 
    0x3e461d0d, 0xbebbfcd9, 0xbecb72a9, 0xbeb6e14e, 0x3df5eb46, 0xbe0f33f4, 0x3d85eb09, 0xbe21b1cf, 
    0xbccdaf5b, 0xbd8337b5, 0xbd1bb254, 0xbe1a30df, 0x3e166dcb, 0xbd1df033, 0x3de4a806, 0xbd259a8c, 
    0x3db93d25, 0x3e5237fb, 0x3c1db1eb, 0xbe4e2f7d, 0x3cfb956d, 0x3c95f3ba, 0xbe852d1c, 0x3db04eb3, 
    0xbde647e9, 0xbe6c9390, 0x3be7e2e5, 0x3c69b980, 0x3c570627, 0xbc21cdf5, 0xbc3e4152, 0x3c05da07, 
    0x3d7769d4, 0xbe100234, 0xbc0d4500, 0xbc17688e, 0x3d9cb305, 0xbe311c2d, 0xbc3ba2c3, 0x3cd25be0, 
    0xbd9ac5a6, 0xbdd81638, 0xbdbb9949, 0xbdd3d792, 0x3dd61ecd, 0xbd99e798, 0x3e29a0e5, 0xbcc616a2, 
    0x3dda125c, 0x3dabea98, 0xbd36e7f5, 0xbe9d4a6b, 0xbe2b0ff1, 0x3d3cbc0b, 0xbe7f3e90, 0x3dbb9dde, 
    0xbe4596b3, 0xbe93e63d, 0xbd0d7c81, 0xbc7d3c62, 0xbd2f7356, 0x3da063f0, 0x3cd51677, 0xbcfbf99b, 
    0x3cbee57d, 0x3c998285, 0xbdda77d5, 0xbd24976e, 0xbe3f0145, 0xbe94e652, 0xbd3f20bf, 0xbcb448b1, 
    0xbdacb034, 0xbdab553e, 0xbd587c6c, 0xbdebc03d, 0x3d36acd0, 0xbd190bb4, 0x3e1eabdf, 0xbcd27661, 
    0x3db66a50, 0x3d259556, 0x3d0d11be, 0xbeb4a1e5, 0xbe14a433, 0x3d395a2d, 0xbe5fde14, 0x3d7825f4, 
    0xbe1b1061, 0xbdf350f1, 0xbc83ae07, 0xbb7cf87d, 0xbc6a1f50, 0xbdf94229, 0x3b4af57e, 0x3a852b79, 
    0x3d7bf884, 0xbe1f1895, 0xbda130b0, 0xbcefbc4c, 0xbea8681e, 0xbdca8eae, 0xbd1f8e31, 0xbca5be9a, 
    0xbd861885, 0x3e460791, 0x3da42089, 0x3d94c558, 0x3d8ed6ec, 0x3bc0d737, 0xbdb38a7b, 0x3d920474, 
    0xbdfa40a3, 0x3e1967fe, 0x3d237510, 0x3dfa10e7, 0xbe1de0ef, 0x3c0149eb, 0xbd19960e, 0x3d62821b, 
    0x3dde3d8e, 0xbd4161df, 0xbb2c540f, 0x3c17f786, 0xbccf6828, 0x3d7c9fba, 0xbd89dca0, 0x3c5866cc, 
    0xbc8f7dd9, 0xb9c278e5, 0x3ccad74c, 0xbccf6709, 0x3e0ed15b, 0xbd3e1077, 0xbd15ea47, 0x3c352bca, 
    0x3cff64d8, 0x3ddd8bf7, 0x3dbeb4f8, 0x3d9eb631, 0xbba4ddb8, 0x3da9cc91, 0xbe15645b, 0x3d1a6a95, 
    0xbe165264, 0x3d98ce59, 0xbd080945, 0x3edd5a53, 0xbd813e5c, 0x3cd6b777, 0xbd937bf0, 0xbd63dcc7, 
    0x3c178a19, 0xbd2d2c93, 0xbbc3f931, 0xbd9200c3, 0xbc29a287, 0x3d00f9a6, 0xbc8695ec, 0xb9484cfb, 
    0xbd099249, 0x3dc37c2c, 0xbd8c51d6, 0x3da7fc98, 0x3e4ebd54, 0xbc0b4473, 0xbd341b05, 0x3c8f4f00, 
    0x3c87826d, 0x3d7fbf1d, 0x3d28c4cf, 0x3de1d177, 0xbda54879, 0x3d309b47, 0xbd931c63, 0x3c24ff94, 
    0xbdfda8d1, 0xbcdc1e9a, 0xbd35a1b0, 0x3e768bd9, 0x3df8b847, 0xbbd22c4e, 0x3cd7fc9c, 0xbe1a674d, 
    0xbd659e6a, 0x3dafc6f9, 0xbbdaed64, 0x3b1727b5, 0x3c91b1b4, 0x3d31e797, 0xbc81b48a, 0x3c55ed2b, 
    0x3c61f495, 0x3d371acd, 0x3d25db5f, 0xbd8665fe, 0x3e28c697, 0x3bf757c3, 0xbdb3ddad, 0xba6c3f54, 
    0x3c2ad658, 0x3c0e74b6, 0x3c176ec8, 0xbe5db411, 0xbe9d344f, 0x3da178f2, 0xbe3b2e46, 0x3b75853c, 
    0xbe85e65b, 0xbe60915e, 0xbda1ffa3, 0xbdb84943, 0xbd540afd, 0xbe332a8f, 0x3d2bf4fa, 0xbd3599ac, 
    0xbd825493, 0x3e024c4b, 0xbd0c3d76, 0xbe90bd94, 0xbe5f0eea, 0xbe95e99c, 0xbe40d384, 0xbdd73309, 
    0xbe107d8c, 0x3d64d312, 0x3d6df80f, 0xbe291a50, 0x3b9f1777, 0x3d6eb1a6, 0xbdf6f96b, 0xbcb5cc3f, 
    0x3cdea196, 0x3cabed60, 0x3d9a2c9f, 0xbe7a03fd, 0xbdc8baf7, 0x3e541a86, 0xbdf87f2d, 0x3de7acb6, 
    0xbe69c08c, 0xbd996564, 0xbe15ce88, 0x3e374b82, 0xbe268511, 0x3c59bb90, 0x3bd82ef5, 0x3ce88aed, 
    0x3e44e465, 0xbd7e0e6a, 0x3df75f04, 0xbe2852a8, 0xbe4146d0, 0x3c6a358e, 0xbe0d1bb8, 0xbc0ac2eb, 
    0xbe536387, 0x3d00d56f, 0x3d3b56f1, 0xbc80ddf9, 0xbd441b6d, 0x3dbe4272, 0xbc66e359, 0x3e1a0865, 
    0x3d4fe702, 0x3e7a9f58, 0x3e0a449e, 0xbcba68ed, 0xbd4921d1, 0x3e229b60, 0xbd521929, 0x3d1d1d39, 
    0xbdec1c58, 0xbde88d87, 0xbc74c05f, 0x3dc75bfb, 0xbcaf6283, 0xbd084bf5, 0x3cd6d83f, 0x3d99f4cc, 
    0xbd895cf6, 0x3dea9008, 0x3d56edab, 0xbe0fcfd1, 0xbe4aea0b, 0xbd0c6d22, 0xbe6b2cee, 0xbc82b433, 
    0xbe6b329d, 0x3d0f5546, 0x3d8b2310, 0xbdd9f4b1, 0x3d5c0706, 0x3dcc8fba, 0x3d90a88e, 0xbd6bdc10, 
    0xbd877777, 0xbc4e0888, 0x3d2bc196, 0xbd281dfb, 0x3c8873dc, 0x3da7ad67, 0x3d5013e3, 0x3dc2832a, 
    0x3d5f184d, 0x3e0af82e, 0xbc931c5a, 0xbda68caa, 0xbe37871c, 0x3d8dd0c9, 0xbdafaef0, 0xbc1506d9, 
    0xbde76018, 0xbd832503, 0x3cc82483, 0xbe328aaa, 0x3d9bd7b6, 0x3d256105, 0x3cb60c05, 0x3ce05957, 
    0x3e00fdb8, 0xbddd2d1a, 0xbdc3682b, 0x3d218d74, 0x3d61ff38, 0xbd64f1c9, 0x3db9c1a1, 0x3cbc39f4, 
    0xbd6ba2bb, 0x3b0df3b3, 0x3dab1c01, 0xbe5ba845, 0x3c9dc036, 0x3c5d2285, 0x3d32bc55, 0xbab2f92a, 
    0x3d118bbb, 0x3d02670d, 0xbca582ee, 0xbe205caf, 0xbe390a4e, 0x39eca09e, 0xbe3f2a3f, 0xbc67f129, 
    0xbe3893db, 0xbddb8b51, 0x3c68c93a, 0xbd3c2a45, 0x3d81cbe8, 0xbc566e9a, 0xbd14f52f, 0x3c359360, 
    0x3d770d5c, 0xbc5fbd2f, 0xbdc4e437, 0xbd52aaf6, 0xbdeeb182, 0xbde455e5, 0x3d36fce2, 0x3ccc6ca1, 
    0xbdd09e4c, 0x3c30faec, 0x3d91d3ae, 0xbe01c3c5, 0x3c408ac1, 0x3cdb495d, 0x3d405bf7, 0x3cbe402f, 
    0x3c999650, 0x3dcfa59c, 0xbcd3acd5, 0xbdb88101, 0xbe49f462, 0x3b14876e, 0xbe3c560e, 0xbbc1c496, 
    0xbe115b43, 0xbdd4582d, 0xbc0cc044, 0xbd835bfa, 0x3d12e1f5, 0xbd31e159, 0xbceed831, 0x3c55a5cd, 
    0x3e0001cc, 0xbe365e46, 0xbe47713f, 0xbcb99772, 0xbbbf79ad, 0xbdc3d2db, 0x3c61ded0, 0x3d736f59, 
    0x3ca13f4b, 0x3e80428f, 0xbdf1cf47, 0x3d058492, 0x3cab64ab, 0x3d9aa376, 0xbe5ed45a, 0x3d9121e8, 
    0xbe720ad2, 0x3e3b40f3, 0x3cdc4290, 0x3e1192e1, 0x3e3229a9, 0x3dc8a8ad, 0x3e4b0e88, 0x3debbada, 
    0x3d5ea6d4, 0x3e837e21, 0x3dc5f619, 0xbdbfc147, 0x3cace10f, 0xbb64d451, 0xbd40becf, 0x3dbe9771, 
    0x3c805eb6, 0x3e3b3abc, 0xbcc650ea, 0x3d2274e1, 0x3ea51bee, 0x3d693335, 0x3e279681, 0x3d095032, 
    0x3cc95621, 0x3e4f97d3, 0xbd898661, 0x3d8997c7, 0xbd6d2209, 0x3df092ee, 0xbe099834, 0x3ce8c789, 
    0xbe524656, 0xbd81e484, 0xbc40d690, 0x3df69b99, 0x3d256553, 0x3c97eb3b, 0x3de5cfb9, 0xbbe25bd2, 
    0x3d11ec41, 0xbd4c83d9, 0x3cf231d5, 0x3d3d648b, 0xbb8d5801, 0x3da960df, 0x3c918352, 0xbcd4a4ec, 
    0x3cf53f37, 0x3c98c0b1, 0x3d775766, 0x3da2c0f5, 0x3d859897, 0x3da50d9f, 0x3d371799, 0xbd394d65, 
    0xbd76b762, 0x3b32e207, 0xbe0276cb, 0x3d87e65e, 0x3d025150, 0x3da56fb7, 0xbd800428, 0xbb970acc, 
    0xbe6a84d3, 0xbd8aba7a, 0xbe0851ad, 0x3dbc78e6, 0x3ea79e54, 0x3b511361, 0x3e11c5f3, 0xbcc9914e, 
    0x3dc53931, 0x3e75a3ce, 0x3c8f413e, 0x3e04a01f, 0x3d88e3f1, 0x3ccb325f, 0x3c2a51da, 0xbd531e6e, 
    0x3dc2dc66, 0xbe20d64d, 0x3dcdc2d7, 0xbda3184f, 0x3e10962a, 0x3c03d8da, 0x3dd4fae7, 0xbbfb906e, 
    0xbd8a28d4, 0x3d05f76a, 0x3d298c3d, 0xbd336deb, 0xbcb704cf, 0x3d1e2c18, 0xbd137803, 0x3cd2c178, 
    0xbd3eccd5, 0x3d50a63d, 0xbbf1da19, 0xbe61892f, 0xbe478a9c, 0x3bd32d8f, 0xbd3a0c99, 0xbc98ac74, 
    0xbd7cce5a, 0x3a0d36f1, 0x3ba43d18, 0xbe06bdb8, 0x3a87b328, 0xbd24da65, 0xbd850456, 0x3c0f2cd8, 
    0x3cdfe09c, 0xbd93d026, 0xbe1d3bea, 0xbd4ea305, 0xbe16e251, 0xbe1df7ab, 0x3d24d37b, 0x3ca7fdb6, 
    0xbd765c03, 0xbda0d8de, 0x3d1e7bf6, 0xbddb279e, 0xbd4af3e5, 0xbcf51d8d, 0xbd34a741, 0x3b0171f6, 
    0xbd6639fb, 0x3d7d74dc, 0xbd00fe52, 0xbe576540, 0xbe8de64b, 0xbd6f256b, 0xbe35db9e, 0xbcacb46a, 
    0xbe2f44f9, 0xbe44b091, 0x3ce92ad4, 0xbe1b7d3a, 0xbcab8aa6, 0xbdaecabd, 0xbd61e206, 0xbd1b3475, 
    0x3d4f038f, 0x3c4cbeff, 0xbe0c8d7e, 0xbde4a90e, 0xbe6ec809, 0xbe81858b, 0xbc07cc55, 0xbc38d420, 
    0xbd534223, 0xbcbd9366, 0x3d43a339, 0xbdd114cd, 0xbd88bc9a, 0xbabc452b, 0xbd48ba73, 0xbcbda7f1, 
    0xbbb7d66a, 0xbd02e55e, 0xbd7c21ec, 0xbdfcfa29, 0xbe31f93a, 0xbd0cae7b, 0xbddb9c1b, 0xbd2ce833, 
    0xbe08625b, 0xbe742f3d, 0x3c3275cb, 0xbde7888c, 0xbcc65733, 0xbde3daaf, 0xbc78e37e, 0xbd214235, 
    0x3d38cc95, 0xbe069bc1, 0xbe0d7772, 0xbd4d86e6, 0xbe60dc0d, 0xbe43e28e, 0x3a8afba2, 0x3cbd2b73, 
    0x3d58ab5a, 0xbd71c1d4, 0xbe22beb5, 0xbc4f8e61, 0xbd709bbf, 0x3cf762ff, 0xbdde3ae1, 0x3cbd0ee2, 
    0xbe13578f, 0xbd2cde81, 0x3c4cdb5e, 0xbeaa9dbf, 0x3e756295, 0x3d2f1c5a, 0x3e6fd7f8, 0x3d37a016, 
    0xbd4a043f, 0x3dc5473f, 0x3d637fa4, 0xbe77f230, 0xbd03750d, 0xbe334e06, 0xbde9245c, 0xbd02e953, 
    0x3da562dd, 0x3d687787, 0x3d7b94c5, 0xbda24fbe, 0xbce7c5dc, 0xba88a466, 0x3da22a09, 0xbde5a2c6, 
    0xbe014490, 0xbe828698, 0xbe446134, 0xbcee366a, 0xbd644ba3, 0xbd327faf, 0xbd8738f3, 0x3b48a42c, 
    0xbd5b159b, 0xbcb74b58, 0xbe1793f6, 0x3d8e163e, 0x3e8339df, 0xbc8e7047, 0x3dca6977, 0x3e26a9b0, 
    0xbce4cbca, 0x3d2ff71f, 0x3ced2deb, 0x3dfe6d66, 0xbcdb9676, 0xbca80258, 0x3d522715, 0xbd929cb7, 
    0x3e15659c, 0xbd8e74a4, 0x3dffd062, 0x3a9e2c4e, 0x3cd7033c, 0xbdc4846f, 0x3d9d0439, 0xbdd49f1c, 
    0xbe1f7af7, 0xbdc4804b, 0xbe4d0547, 0xbdf93ad7, 0x3d0449d3, 0x3d264d34, 0x3d4a576b, 0x3cf216ba, 
    0xbc590a5c, 0x3d1494f0, 0xbd43769a, 0x3d6031ea, 0x3e9eba0a, 0xbbf9a6f6, 0x3d951433, 0x3ddced39, 
    0xbdf2fdbd, 0xb9df35e4, 0x3cfe60a0, 0x3e832083, 0x3daa9cd3, 0xbd9b9fd8, 0xbc56c506, 0xbd03356d, 
    0x3e4db9c6, 0xbea08866, 0x3e4bada6, 0x3d94ce63, 0x3d861a0a, 0xbe478db0, 0x3c53fb63, 0xbd46c41f, 
    0xbd1a6476, 0xbd5f2551, 0x3e953649, 0xbd3f9af6, 0x3e1490b2, 0x3d6d4bc8, 0x3e6b5acc, 0x3e188d5e, 
    0x3e1142f6, 0x3da5e851, 0x3e1236ce, 0x3e312176, 0xbe48c8d3, 0x3eb078e6, 0x3d3cc66e, 0xbcabfd6c, 
    0xbd9f1633, 0xbc7d353f, 0x3e5bb5a4, 0xbe07b2fe, 0xbe34ae95, 0x3ea20fad, 0xbd7a9676, 0x3ec2c391, 
    0x3d2a4800, 0x3da0ede4, 0x3d238c2f, 0xbdceda95, 0x3daa6b46, 0xbdea0ddc, 0x3bc9f07b, 0x3e9ba9c4, 
    0xbd6b451c, 0xbd80457d, 0x3e26d747, 0xbd1a1f95, 0x3b0500d7, 0x3e33a6dc, 0x3dd9b145, 0x3e858ed3, 
    0x3e3c3328, 0xbe029bf4, 0x3e5ae293, 0xbcb2a3d5, 0xbd549cf6, 0x3e2cfd1a, 0xbe234f14, 0xbdb1e766, 
    0xbe027b1f, 0xbd97f501, 0x3e95c3b0, 0xbe2769d0, 0xbdc8f7e8, 0x3e044eb1, 0xbde40cb0, 0x3e4d58e7, 
    0x3d03e72a, 0xbdf43d4a, 0xbd80dd62, 0xbe5f5bce, 0xbd78139d, 0xbda7d27f, 0x3e26e5a4, 0x3c75e0f5, 
    0x3c833ce1, 0xbe22343a, 0xbd7ae506, 0xbc98c965, 0xbdf392f8, 0x3e409f20, 0xba189e5d, 0x3e9c7b29, 
    0x3e3bd2d6, 0x3dd1173a, 0x3e8485b5, 0x3dd69afc, 0xbe62e5db, 0x3e2c9436, 0xbe4cc6d7, 0xbdb7fbf9, 
    0x3e05b365, 0xbdcc227b, 0x3e8d6e6c, 0xbe81dae9, 0xbdefa9a4, 0x3e45a247, 0xbe4660a2, 0x3daf8eee, 
    0xbe06b940, 0xbdab5492, 0xbd492513, 0xbd99a240, 0xbc5763b7, 0xbdbf2a61, 0x3e944ee8, 0x3e312e5f, 
    0x3dd88f55, 0x3e81727d, 0xbc691ee2, 0xbdf5eb79, 0xbcd9f964, 0xbc1a05ff, 0xbe3a6870, 0x3cbfe04d, 
    0xbe7779bd, 0x3d6d1fb7, 0x3d47af3a, 0x3da9fddd, 0x3e81b253, 0x3ddaa390, 0x3e3fe799, 0xbcec4497, 
    0x3a38f3ee, 0x3e9b90df, 0x3e0541c9, 0xb8ab834e, 0x3d631a6c, 0xbd160161, 0x3c9c199a, 0x3da7087f, 
    0xbba5b017, 0x3e2178fd, 0xbd1ccf14, 0x3d2d3325, 0x3e8a88e4, 0x3de1bfbd, 0x3e109732, 0xbc525792, 
    0x3d1d9e61, 0x3e36eaa7, 0xbc81eb07, 0x3c31ed42, 0x3ca47eb2, 0x3ca9ffb0, 0xbdb427f4, 0x3d485864, 
    0xbe3d0ebb, 0xbdbf802d, 0xbcb9242f, 0x3db2dcd4, 0x3c064513, 0x3d1ef601, 0x3c298402, 0xbcb21b08, 
    0xbd29cc37, 0xbd858f12, 0x3c5c7930, 0x3dfbd5ad, 0x3d1759df, 0x3d46ec20, 0xbc4f9149, 0x3d30e744, 
    0x3dbdab48, 0x3d3ff2ff, 0x3d84f372, 0x3dc640c8, 0xbda155f3, 0x3ca1966b, 0x3d3513cc, 0xbcfd176e, 
    0x3bda16c9, 0x3de514e9, 0x3db7e907, 0xbcd31277, 0x3c02e62a, 0x3cf3d130, 0xbdd396f8, 0x3d26a0ef, 
    0xbe4ca19e, 0x3ce2c4e6, 0xbd9bb02d, 0xbcde9a75, 0x3e8f433e, 0x3d71d5dc, 0x3d324c20, 0xbd1f771c, 
    0xbcd40f08, 0x3e880d5e, 0x3d0bb038, 0x3e1b65eb, 0x3d2c58a7, 0x3d4d96db, 0x3cb0016b, 0x3d508ceb, 
    0x3dd1a5eb, 0xbe3d36f8, 0x3db3f6dd, 0xbd226557, 0x3db8896c, 0xbb4e13a9, 0x3d90d12d, 0xbd8aaad8, 
    0xbe2379b0, 0xbe165d4b, 0xbca50343, 0xbe2c892b, 0xbe8e6b4c, 0x3c18dda0, 0xbe99907f, 0x3d371418, 
    0xbe9a1f25, 0xbe9943cd, 0xbdd29a11, 0x3da3623e, 0x3e3fc54c, 0x3cd5c364, 0xbf07735d, 0xbe73f9d7, 
    0xbe539c60, 0x3e04ab21, 0x3d8df7eb, 0xbe759216, 0xbebdf9f6, 0xbe346a1e, 0xbe8b2711, 0x3ceb11ee, 
    0xbe84ba2c, 0xbe403a02, 0x3d95eaea, 0xbea654b3, 0x3e333eaa, 0xbe24002f, 0xbe6bb75b, 0x3d67601b, 
    0xbdb379a2, 0xbd15d648, 0x3e081c36, 0xbe7cbc26, 0xbe1e8623, 0x3e13c331, 0xbe8766e2, 0x3dc2c9c2, 
    0xbe83c1c7, 0xbe8c4b27, 0xbe946648, 0x3e8f699b, 0xbf0e2e7e, 0x3ddd17a6, 0xbe836c92, 0xbe641b15, 
    0x3e014c13, 0x3e5d3b2c, 0x3e07a424, 0xbf0b2588, 0xbe015c38, 0xbda4dd08, 0xbe8bcf84, 0x3d015373, 
    0xbe84a16b, 0xbe0414e3, 0xbe6ecc1a, 0xbd03da46, 0xbe5998b0, 0xbd122367, 0xbb3a789d, 0x3e3addc0, 
    0x3df99411, 0xbead35e4, 0x3e3dfb33, 0xbe7ab913, 0xbe95b2ab, 0x3e98148b, 0xbe66aded, 0x3e37687d, 
    0xbe5b9a3b, 0xbeb0dae6, 0xbc7a3c64, 0x3e21263e, 0xbd2800b9, 0x3e3cce73, 0xbecf6c2f, 0xbeab5bdf, 
    0x3d41f702, 0x3e3824d6, 0x3e31b252, 0xbec0ed27, 0xbe5e36f9, 0xbdcbbdfa, 0xbe57738e, 0x3dd881f6, 
    0xbec57e1c, 0xbdc6f6cc, 0xbe46647f, 0xbe292585, 0xbd2ba3b4, 0xbd66b97c, 0x38fa4aa2, 0x3e2e1a0f, 
    0xbe23d26b, 0xbded80d2, 0x3d04fe42, 0xbda09ea8, 0x3e687958, 0x3c87f6fc, 0x3eb45fe9, 0x3d89d8f9, 
    0x3ebf5c5c, 0xbd2a04db, 0x3df4e947, 0xbe84a470, 0x3dfdf4d7, 0x3da9b3e5, 0xbe46635f, 0x3e920e0d, 
    0xbe0462b9, 0xbebef562, 0x3d9597c7, 0x3ce18bf0, 0xbe3c4ba0, 0x3e30b1cc, 0x3d7a584d, 0x3d9a34d0, 
    0xbe11112b, 0xbe26b080, 0x3d1e6071, 0x3bbe31f7, 0xbcf4c355, 0x3d4971c9, 0x3dc80a8e, 0x3cfac4f2, 
    0xbe325f96, 0xbd9f64f8, 0xbe11309b, 0xbe5c33ee, 0x3de2349d, 0xbdb8b480, 0x3e91a9f8, 0x3d89e803, 
    0x3eb815b4, 0xbe3b7a61, 0x3e6601f1, 0xbea67a6c, 0x3d0f6cb3, 0x3cf368b3, 0xbdcdc47c, 0x3e4207c8, 
    0xbe5a9c45, 0xbef8ea7b, 0x3cd75e04, 0xbda4eda7, 0xbe353542, 0x3d9e28ea, 0xbda2121c, 0x3c0e7ed8, 
    0xbe3be6c5, 0xbdedde0d, 0xbca59810, 0x3a8b6531, 0xbe84c287, 0xbd95bcc1, 0x3dd6cd0e, 0xbd83a9c8, 
    0xbe222fe8, 0xbde94ae7, 0xbe002ba1, 0xbc297aff, 0xbc2a9db0, 0xbd35ac41, 0x3e1c30e8, 0xbc728d14, 
    0x3e711b7e, 0xbe2d0598, 0x3cedba73, 0xbebda18d, 0x3e0b974c, 0x3c56edfe, 0xbe1b6522, 0x3e452910, 
    0xbe29d3b0, 0xbe837ee0, 0x3d68c497, 0xbd305325, 0xbde8a8ae, 0xbe5a6e20, 0xbd23ed96, 0x3c852d93, 
    0xbe1ef889, 0xbe697275, 0x3d141d9d, 0xbd0452b5, 0xbe906802, 0x3ca695c0, 0x3e1d71a3, 0x3df09ca7, 
    0x3d4deeea, 0x3e330ee6, 0x3cdf78d9, 0xbe427a56, 0xbe9fde83, 0x3d7144ef, 0xbecb401b, 0x3da75385, 
    0xbebf2d59, 0xbd5f7901, 0xbdd40db8, 0xbd9be052, 0xbcd7c8dc, 0xbdbf07f0, 0xbe8e79ff, 0xbeab424b, 
    0xbe25112c, 0x3dc27c76, 0xbda12cf7, 0xbed2479d, 0xbdde5c72, 0xbe081f29, 0xbe04c11a, 0xbd7bb963, 
    0x3d83d8a3, 0xbe21fd0f, 0xbb5171ea, 0xbe2b1822, 0xbea8647f, 0xbe08320f, 0xbdef9ed9, 0x3e039c87, 
    0x3e7c9fc4, 0x3eac24d9, 0x3d215f1b, 0xbea95063, 0xbe95141f, 0x3e71ccce, 0xbea77659, 0x3da10d4e, 
    0xbe9658f8, 0xbda92acd, 0xbe4b6cd6, 0x3e4c8f4a, 0xbeb59f77, 0x3e105c47, 0xbdc9b44f, 0xbee2625a, 
    0x3d9cac20, 0x3e9f7b42, 0x3c8fd159, 0xbe92c214, 0x3e04d021, 0x3deb7f58, 0x3bb5641c, 0x3e255b1a, 
    0x3e23e583, 0x3e01f336, 0xbe7e2ec3, 0x3df17317, 0xbed5061e, 0xbde3961d, 0xbd9d13d0, 0x3e1c2a1f, 
    0x3e5853cf, 0x3e98e797, 0x3f040ddd, 0xbeb7363a, 0xbeca95a0, 0x3e16933d, 0xbea8c2c9, 0x3e636079, 
    0xbe830738, 0xbc65fe29, 0x3cd96ff9, 0x3e31e91e, 0x3ccbfc8a, 0x3e160ace, 0xbda8bab4, 0xbecacf3a, 
    0xbd020e61, 0x3e2e97b9, 0x3dbf8cfe, 0xbe395e4b, 0x3dd6428a, 0x3ddadb8f, 0xbddbef25, 0x3e6ecc9e, 
    0x3e1e9ba3, 0x3e1263ca, 0xbe0db68a, 0xbc96392a, 0xbd4d65ce, 0x3d51730a, 0xbda7d6aa, 0x3e1502a2, 
    0x3de17c53, 0x3e01b6e2, 0xbdaf08f6, 0xbe181550, 0xbd01aab7, 0xbe58e31e, 0xbc893bca, 0xbdec962b, 
    0xbb65c134, 0xbcf40818, 0xbe368af7, 0xbdebe1ea, 0xbe09d1c8, 0xbd766a73, 0xbd8ac57e, 0xbdc65800, 
    0xbd3d4820, 0x3df3c621, 0xbe311512, 0xbde2af5d, 0xbd80dbb4, 0x3e4027e2, 0xbc3758da, 0xbd7840c4, 
    0xbd8e1962, 0x3e0b4bdd, 0x3c04d0c0, 0x3d588b56, 0x3dbf4e0d, 0x3d3bcee5, 0xbea0a6c7, 0xbd41cedc, 
    0x3dc7a92a, 0x3a27c344, 0xbddfd1fc, 0xbd63ca0a, 0xbd8a367a, 0xbe0b3be5, 0xbce99b72, 0xbdefc4cd, 
    0x3cd6ef87, 0xbdbd2d8c, 0xbd5afddc, 0x3c5e73e0, 0xbcba97e1, 0xbde24e1f, 0xbdc9aab9, 0xbe107f05, 
    0xbd8ef01f, 0xbb6c8c71, 0xbe1c451a, 0x3ad38221, 0xbd287b13, 0xbc358b33, 0x3c7bec95, 0xbe0e0cdc, 
    0xbd085cf2, 0xbd146361, 0x3cd6620c, 0x3d103af4, 0xbe0000d2, 0xbc4b5c3e, 0xbe5d1736, 0xbe486cb2, 
    0x3da62116, 0x3c5c9f91, 0xbd259ffe, 0x3d5c8672, 0xbde1fbf4, 0xbe221d1f, 0xbd90f3cd, 0xbdfba533, 
    0x3bf020af, 0xbd05fcc6, 0xbe435bf9, 0x3e1ebb99, 0x3bf89999, 0xbe22eba1, 0xbc71e64c, 0xbe4e86f1, 
    0xbd6b8756, 0xbdadee13, 0xbe579a2e, 0xbd3ece95, 0x3d734a04, 0x3cc5e60d, 0x3d59141b, 0xbde0a748, 
    0xbce47e8f, 0x3d090290, 0x3db386e7, 0x3c259b73, 0x3d42c876, 0x3cec14c9, 0xbea17492, 0xbda4213b, 
    0xbdfb4819, 0xbe13715f, 0x3cb7d031, 0x3e116854, 0x3dd95b37, 0x3d800d40, 0x3e4a6703, 0xbd04a5a1, 
    0x3da0c41a, 0xbd345ba6, 0xbdcf4c9b, 0x3ce0bf8b, 0xbcdd0da0, 0xbd3d591d, 0xbd017ed6, 0x3e721364, 
    0x3c1b478c, 0xbe0f7237, 0x3d5c2229, 0xbe15c4dc, 0xbe40b67c, 0xbe996d1c, 0xbd831fea, 0xbcdd96a5, 
    0xbe3e1829, 0xbe80b017, 0x3df9b3fa, 0xbd26ed63, 0xbd8b6033, 0x3db45816, 0x3dba0549, 0xbb9882dd, 
    0xbdc53e98, 0x3d260d2b, 0x3d9438e6, 0xbd90a4b2, 0x3e178bcb, 0xbc61bf44, 0x3df43b07, 0xbd5d9eb4, 
    0x3dc259b8, 0x3d2200ac, 0xbdb447dc, 0xbda846eb, 0x3de4cfa1, 0xbd1a0403, 0x3df4251e, 0x3e61ac29, 
    0x3c804dd1, 0x3db1d69e, 0xbd553571, 0xbd925503, 0xbe2cf222, 0xbe975357, 0xbc77fa81, 0xbd6ced0d, 
    0xbe650dc1, 0xbdaadf36, 0x3e08d82d, 0xbdeb5ea6, 0xbe071417, 0x3d903a51, 0x3da5f56c, 0x3d818dca, 
    0xbd35fa55, 0x3d43afe4, 0x3d2b602b, 0xbd24e8af, 0x3dbc97ca, 0xbcd324a2, 0x3d88474f, 0xbd67ed60, 
    0x3dc1d5fe, 0xbe0236e0, 0xbdab60fd, 0xbce7340c, 0xbe5bab4c, 0xbda30ddd, 0xbe4ffd4c, 0x3e27fe52, 
    0xbe0fb91d, 0xbe3ab8b4, 0xbc90a720, 0xbdf494d8, 0xbe1bb9e3, 0xbec227d6, 0x3ce0c3f3, 0xbda12cc8, 
    0xbe860f93, 0x3cbc5091, 0x3d95b7b8, 0x3d48c015, 0x3de28014, 0x3c15026c, 0x3d7841c9, 0x3d609215, 
    0xbc84c540, 0x3d0f4972, 0x3ddea29e, 0xbda58aa6, 0x3e87d9c2, 0x3ccd1e05, 0x3e31db11, 0x3d8f96ae, 
    0x3e4c4f81, 0xbd7e59bf, 0x3cb08129, 0x3de85c65, 0x3e3c886d, 0x3e5b1346, 0x3dc9696e, 0x3d20cdb9, 
    0xbbc88fc1, 0x3d6906b4, 0x3d80bba8, 0x3e033122, 0xbda8fcdc, 0x3e822fc0, 0xbe065951, 0x3e3171ac, 
    0xbdbc3918, 0xbc012863, 0x3e8e6d13, 0xbdaac48a, 0x3db5d683, 0x3e4507c5, 0x3d5ee1b2, 0x3e0ed942, 
    0x3d2e5258, 0x3e20ea68, 0x3d015080, 0x3caa12df, 0x3e491f18, 0x3dd7b532, 0x3e567b5c, 0x3e1fecb8, 
    0x3e459921, 0x3e16517c, 0x3e20e673, 0x3e752150, 0x3e80736f, 0x3e2dba8b, 0x3dab8d93, 0x3de7b80b, 
    0x3e2822a1, 0x3e00fd4a, 0x3e079075, 0xbcef8f3c, 0xbd63179b, 0x3e8fea1a, 0xbe26782d, 0x3e841c44, 
    0xbe379958, 0x3d247fa7, 0x3e2977e0, 0xbc47f57e, 0x3e8ca87e, 0x3e0349ce, 0x3e6fb7f5, 0x3d241974, 
    0x3df0cdb8, 0x3d2c37e8, 0x3dd83485, 0x3ddec1d6, 0x3e0122e0, 0x3e1337ac, 0x3decc5d5, 0x3d845bcc, 
    0x3df9154a, 0xbcc6041f, 0x3e6dfbd8, 0x3e357a4f, 0x3e58c3d2, 0x3daf9dd1, 0xbc97dc5d, 0x3df44765, 
    0x3d6dcbd6, 0x3e271e33, 0x3dc0acd2, 0x3d32c901, 0xbd8e8b20, 0x3e31c08a, 0xbd77a4d0, 0x3e50329f, 
    0xbe09906d, 0x3cc0b9da, 0x3d00c1ed, 0xbe21000e, 0xbe1969d8, 0x3d8089a9, 0x3e2326f7, 0x3d868dba, 
    0xbe3d89d1, 0x3d57993e, 0x3e566f54, 0xbef9c47f, 0xbe27a1fe, 0x3e0b3990, 0xbdc1c11b, 0x3e903216, 
    0x3c9c954e, 0x3d2ba92e, 0x3ea9d5d4, 0x3e1453e4, 0xbd52ba76, 0x3e02d8ab, 0x3cc19d4d, 0xbe35b21d, 
    0x3d446071, 0x3db3ef89, 0x3e6488e7, 0xbe49b99b, 0xbe8affae, 0x3ce3c330, 0xbe499701, 0x3e23c877, 
    0xbe03ad87, 0xbe2d81ba, 0xbe292d85, 0xbd8b8edd, 0x3e6e3be0, 0xbd14571b, 0x3e4c8c8d, 0x3d9167c2, 
    0xbdfd1aae, 0xbd2d25e0, 0x3ee771d9, 0xbe6de2f7, 0xbe10e56c, 0x3e975195, 0xbdac2c22, 0x3e2e717f, 
    0xbe061689, 0xbe5af206, 0xbdd5ae23, 0xbd3fa77d, 0xbe00c649, 0x3c1aa9a2, 0xbd1b05a1, 0xbdaaf298, 
    0xbe332468, 0xbde0914a, 0x3dc432ef, 0xbde7d269, 0xbe41c886, 0x3d0e5538, 0xbe65f06a, 0xbcaa9cd2, 
    0xbe678e4e, 0xbe80bb0d, 0xbcdc4c11, 0xbe161c5a, 0x3e2818aa, 0x3cc463c7, 0x3dd60bf2, 0x3ed31160, 
    0xbd8541ff, 0xbe48bdfc, 0x3e7672e7, 0xbe8721db, 0x3dbb7ad8, 0x3dc2c776, 0x3e3636aa, 0x3e617d1f, 
    0x3e591364, 0xbca37821, 0x3d5dea95, 0xbdad4889, 0xbde7923c, 0x3e02945d, 0x3d44f5f4, 0x3d9c949a, 
    0xbe09dec2, 0xbe046ecb, 0x3e49ccaf, 0xbe128030, 0xbe1a38f0, 0x3de59abd, 0xbe396b69, 0xbb1b44d5, 
    0xbe6b062f, 0xbdb0aca8, 0x3dbc7c90, 0xbddd28e3, 0x3db09a37, 0x3d2284ff, 0x3e52aa6c, 0x3e9a9c8c
};

static const uint32_t _K53[] = {
    0x3f02287a, 0x3ed3d164, 0xbfaabde1, 0xbf83964b, 0x3fd6ef5c, 0xbfa0bd61, 0xbe8fc465, 0xbf46fb6f, 
    0x3e5a5028, 0x3f89d38f, 0xbf0299b8, 0x3ec013c2, 0xbe4c82ae, 0xbf9941fc, 0xbf6fb6d0, 0xbfe328d0, 
    0x3fc8dad4, 0xbe82525c, 0x3f15571e, 0x3f7c965f, 0xbf8e81d7, 0x3fe4f145, 0xbf443956, 0xbe51d8e2, 
    0xbf829192, 0x400bd491, 0x3f90828a, 0x3fefc983, 0x3fa71445, 0x3ee0692c, 0xc006d2fe, 0x3e818f04
};

static const uint32_t _K59[] = {
    0xbdc8ab33, 0xbe9acd1c, 0x3d97da21, 0xbe267b10, 0xbf171156, 0x3f0d5b5f, 0xbd844e8b, 0x3f221ccb, 
    0xbe412510, 0xbf8e0851, 0x3f7d8f6d, 0xbd093ba0, 0x3ed6a621, 0x3e8f9402, 0x3f54da86, 0xbe8f9ce8, 
    0x3e373fbf, 0xbea13c26, 0x3f1f1fdd, 0x3f169007, 0xbe6c01c7, 0xbf49088b, 0x3e6e3dd8, 0x3f2d092a, 
    0xbafb4f8c, 0xbec3de13, 0x3f0a4d9b, 0x3c377adc, 0xbf02c5cd, 0x3f0be585, 0x3f049975, 0x3f82db7d, 
    0xbe8062fd, 0x3e9d2579, 0xbe042b77, 0xbead3849, 0x3ecc0bdd, 0x3f0aafe6, 0xbf0b40b5, 0x3edceda9, 
    0xbf065e14, 0x3ece00b2, 0x3e9df0e0, 0xbeb9ec5b, 0x3f1fe298, 0x3f5c7723, 0x3e38ea44, 0x3e51e70d, 
    0x3ec2a32d, 0xbf885efc, 0xbfe71466, 0xbde7c802, 0xbee97524, 0xbd176af3, 0x3ee9a870, 0x3e83f5a2, 
    0xbf05572c, 0xbfe51708, 0x3f1fbfcb, 0xbffe5b9e, 0x3e78500d, 0x3ea4f348, 0xbcf2af94, 0xbdb9f74f, 
    0x3f11cc35, 0xbf7181a2, 0x3ea2da8e, 0xbeba41ef, 0x3f2b7534, 0xbe5f9a09, 0x3dbf3573, 0xbf5ade21, 
    0x3ec24114, 0x3e1f0370, 0xbfb16f40, 0x3edfe402, 0xc000f9c1, 0xbcf154c0, 0xbfdc2c15, 0x3e11a9b7, 
    0x3f00a7ac, 0x3bcccfc9, 0xbdadf209, 0x3eb08ba0, 0xbed083e0, 0x3f09581d, 0xbf04c72e, 0xbfe789d4, 
    0xbed3ae62, 0x3df5d7ca, 0xbf10c11a, 0x3ef13464, 0x3ecf6682, 0xbd9bc8c0, 0xbdd65854, 0xbf9eafc2, 
    0xbde0756c, 0xbee03d44, 0x3e646a1c, 0xbf895e37, 0xbeba6079, 0x3e6fbef2, 0xbe037b6e, 0x3f8103fe, 
    0xbe735818, 0xbebf9d1f, 0x3e54d7d9, 0xbc8b09ba, 0x3f9267fa, 0xbf32c9e0, 0x3ee98176, 0x3f8a7aae, 
    0xbea8a1b6, 0xbcd65755, 0xbda49970, 0xbe8e106a, 0x3d8c2035, 0xbf7b3047, 0xbec6cc31, 0x3f1da5af, 
    0xbeb53f89, 0xbeb3cc01, 0xbe915537, 0xbf341a64, 0xbf45acb0, 0xbfba7e7e, 0x3f27a681, 0xbe47cd1e, 
    0xbdf353e0, 0x3eee9b63, 0xbf638897, 0x3f143c65, 0xbe6ad334, 0xbf96e938, 0x3ea94d0b, 0xbf90b4af, 
    0x3dc7fffe, 0x3e91a6c7, 0xbf640d25, 0xbe53e8b0, 0xbed1c1b2, 0xbf08dc99, 0xbf92814d, 0xbfca8396, 
    0xbf999340, 0x3f08b1d4, 0xbe1064c9, 0xbf6af351, 0x3f1bfb38, 0xbf296e7f, 0x3e8e03d9, 0xbf02ef8c, 
    0x3ef316f4, 0x3ebce828, 0xbfc0439e, 0x3e9f6b16, 0xbe9211ca, 0x3e9b2ce2, 0xbf85f9db, 0xbe79ec65, 
    0x3e0773ba, 0xbed44166, 0x3d25dc8e, 0xbf825286, 0xbf77e583, 0x3f26d0a5, 0x3d3b2ba9, 0x3f2f0758, 
    0xbf16a3e3, 0xbfc38986, 0xbc808b93, 0x3e36e76b, 0x3f68fe49, 0x3ed09116, 0x3f151534, 0x3f46c207, 
    0xbd4dc301, 0x3e7d938b, 0xbdd5de8a, 0x3ea71a32, 0xbf0aef2a, 0xbe9e633d, 0xbe7090fe, 0x3f363d2b, 
    0xbe9d4eba, 0xbf45e8ae, 0xbf9a1bca, 0x3d68278b, 0xbf7f2d5f, 0xbfef13f8, 0x3f6c6771, 0xbed8e88d
};

static const uint32_t _K61[] = {
    0xbeda7a1f, 0x3e4b7eaa, 0x3e3f93cb, 0xbf3d4526, 0xbcc6d497, 0xbf690834
};

// Memory mapped buffers
#define _K12             ((int *)_K12)                       // s32[42] (168 bytes) 
#define _K20             ((float *)_K20)                     // f32[12,3,40] (5760 bytes) 
#define _K23             ((float *)_K23)                     // f32[12] (48 bytes) 
#define _K27             ((float *)_K27)                     // f32[24,3,12] (3456 bytes) 
#define _K30             ((float *)_K30)                     // f32[24] (96 bytes) 
#define _K34             ((float *)_K34)                     // f32[24,3,24] (6912 bytes) 
#define _K37             ((float *)_K37)                     // f32[24] (96 bytes) 
#define _K43             ((float *)_K43)                     // f32[32,3,24] (9216 bytes) 
#define _K46             ((float *)_K46)                     // f32[32] (128 bytes) 
#define _K5              ((float *)_K5)                      // f32[512] (2048 bytes) 
#define _K50             ((float *)_K50)                     // f32[32,3,32] (12288 bytes) 
#define _K53             ((float *)_K53)                     // f32[32] (128 bytes) 
#define _K59             ((float *)_K59)                     // f32[6,32] (768 bytes) 
#define _K61             ((float *)_K61)                     // f32[6] (24 bytes) 
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
#define _K19             ((float *)(_buffer + 0x00003e80))   // f32[50,12] (2400 bytes) 
#define _K21             ((float *)(_buffer + 0x00000000))   // f32[50,12] (2400 bytes) 
#define _K25             ((float *)(_buffer + 0x00000960))   // f32[50,12] (2400 bytes) 
#define _K26             ((float *)(_buffer + 0x000012c0))   // f32[50,24] (4800 bytes) 
#define _K28             ((float *)(_buffer + 0x00000000))   // f32[50,24] (4800 bytes) 
#define _K3              ((float *)(_buffer + 0x00000000))   // f32[512] (2048 bytes) 
#define _K32             ((float *)(_buffer + 0x000012c0))   // f32[50,24] (4800 bytes) 
#define _K33             ((float *)(_buffer + 0x00000000))   // f32[50,24] (4800 bytes) 
#define _K35             ((float *)(_buffer + 0x000012c0))   // f32[50,24] (4800 bytes) 
#define _K39             ((float *)(_buffer + 0x00000000))   // f32[50,24] (4800 bytes) 
#define _K41             ((float *)(_buffer + 0x000012c0))   // f32[25,24] (2400 bytes) 
#define _K42             ((float *)(_buffer + 0x00000000))   // f32[25,32] (3200 bytes) 
#define _K44             ((float *)(_buffer + 0x00000c80))   // f32[25,32] (3200 bytes) 
#define _K48             ((float *)(_buffer + 0x00000000))   // f32[25,32] (3200 bytes) 
#define _K49             ((float *)(_buffer + 0x00000c80))   // f32[25,32] (3200 bytes) 
#define _K51             ((float *)(_buffer + 0x00000000))   // f32[25,32] (3200 bytes) 
#define _K55             ((float *)(_buffer + 0x00000c80))   // f32[25,32] (3200 bytes) 
#define _K57             ((float *)(_buffer + 0x00000000))   // f32[12,32] (1536 bytes) 
#define _K58             ((float *)(_buffer + 0x00000600))   // f32[32] (128 bytes) 
#define _K6              ((float *)(_buffer + 0x00000800))   // f32[512] (2048 bytes) 
#define _K60             ((float *)(_buffer + 0x00000000))   // f32[6] (24 bytes) 
#define _K62             ((float *)(_buffer + 0x00000018))   // f32[6] (24 bytes) 
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
    conv1d_flat_f32(_K17, _K20, _K19, 0, 4000, 50, 12, 80, 120);
    add_f32(_K19, _K23, 1, 1, 1, 50, 12, _K21);
    relu_f32(_K21, 600, _K25);
    conv1d_flat_f32(_K25, _K27, _K26, 12, 612, 50, 24, 12, 36);
    add_f32(_K26, _K30, 1, 1, 1, 50, 24, _K28);
    relu_f32(_K28, 1200, _K32);
    conv1d_flat_f32(_K32, _K34, _K33, 24, 1224, 50, 24, 24, 72);
    add_f32(_K33, _K37, 1, 1, 1, 50, 24, _K35);
    relu_f32(_K35, 1200, _K39);
    maxpool1d_valid_f32(_K39, 2, 2, 24, 25, _K41);
    conv1d_flat_f32(_K41, _K43, _K42, 24, 624, 25, 32, 24, 72);
    add_f32(_K42, _K46, 1, 1, 1, 25, 32, _K44);
    relu_f32(_K44, 800, _K48);
    conv1d_flat_f32(_K48, _K50, _K49, 32, 832, 25, 32, 32, 96);
    add_f32(_K49, _K53, 1, 1, 1, 25, 32, _K51);
    relu_f32(_K51, 800, _K55);
    maxpool1d_valid_f32(_K55, 2, 2, 32, 12, _K57);
    globav1d_f32(_K57, 12, 32, _K58);
    dott_f32(_K59, _K58, _K60, 32, 6, 1);
    add_f32(_K60, _K61, 1, 1, 1, 1, 6, _K62);
    softmax_f32(_K62, 6, data_out);
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

