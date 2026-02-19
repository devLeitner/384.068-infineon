/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/19/2026 21:04:45 UTC. Any changes will be lost.
* 
* Model ID  f4d3c173-6420-47e2-8fec-fe50d4c82860
* 
* Memory    Size                      Efficiency
* Buffers   6720 bytes (RAM)          100 %
* State     8392 bytes (RAM)          100 %
* Readonly  114472 bytes (Flash)      100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-medium-balanced-3
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
* Hann smoothing                 [512]           float      dequeue
*    sym = True
* Real Discrete Fourier Transform [257,2]         float      dequeue
*    axis = 0
* Frobenius norm                 [257]           float      dequeue
*    axis = 0
* Mel Filterbank                 [20]            float      dequeue
*    num_filters = 20
*    sample_rate = 16000
*    f_low = 300
*    f_high = 8000
*    htk = True
*    librosa = False
* Clip                           [20]            float      dequeue
*    min = 0.000316227766016
*    max = 3.40282347E+38
* Logarithm                      [20]            float      dequeue
*    base = 0
* Sliding Window (data points)   [60,20]         float      dequeue
*    window_shape = [60,20]
*    stride = 660
*    buffer_multiplier = 1
* Input Layer                    [60,20]         float      dequeue
*    shape = [60,20]
* Convolution 1D                 [30,16]         float      dequeue
*    filters = 16
*    kernel_size = 5
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[5,20,16]
* Batch Normalization            [30,16]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[16]
*    beta = float[16]
*    mean = float[16]
*    variance = float[16]
* Activation                     [30,16]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [15,32]         float      dequeue
*    filters = 32
*    kernel_size = 5
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[5,16,32]
* Convolution 1D                 [8,32]          float      dequeue
*    filters = 32
*    kernel_size = 5
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[5,32,32]
* Batch Normalization            [8,32]          float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [8,32]          float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [8,64]          float      dequeue
*    filters = 64
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,64]
* Convolution 1D                 [8,64]          float      dequeue
*    filters = 64
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,64,64]
* Batch Normalization            [8,64]          float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[64]
*    beta = float[64]
*    mean = float[64]
*    variance = float[64]
* Activation                     [8,64]          float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [4,64]          float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Dropout                        [4,64]          float      dequeue
*    rate = 0.05
*    trainable = True
* Global average pooling 1D      [64]            float      dequeue
*    trainable = True
* Dense                          [4]             float      dequeue
*    units = 4
*    use_bias = True
*    activation = linear
*    trainable = True
*    weight = float[64,4]
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

#ifndef _IMAI_MODEL_H_
#define _IMAI_MODEL_H_
#ifdef _MSC_VER
#pragma once
#endif

#include <stdint.h>

typedef struct {    
    char *name;
    double TP; // True Positive or Correct Positive Prediction
    double FN; // False Negative or Incorrect Negative Prediction
    double FP; // False Positive or Incorrect Positive Prediction
    double TN; // True Negative or Correct Negative Prediction
    double TPR; // True Positive Rate or Sensitivity, Recall
    double TNR; // True Negative Rate or Specificity, Selectivity
    double PPV; // Positive Predictive Value or Precision
    double NPV; // Negative Predictive Value
    double FNR; // False Negative Rate or Miss Rate
    double FPR; // False Positive Rate or Fall-Out
    double FDR; // False Discovery Rate
    double FOR; // False Omission Rate
    double F1S; // F1 Score
} IMAI_stats;

/*
* Tensorflow Test Set
* 
* (ACC) Accuracy 89.650 %
* (F1S) F1 Score 89.939 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                 981                0              303              639
* (FN) False Negative or Incorrect Negative Prediction               11                0                0              211
* (FP) False Positive or Incorrect Positive Prediction              180               27               10                5
* (TN) True Negative or Correct Negative Prediction                 973             2118             1832             1290
* (TPR) True Positive Rate or Sensitivity, Recall               98.89 %         100.00 %         100.00 %          75.18 %
* (TNR) True Negative Rate or Specificity, Selectivity          84.39 %          98.74 %          99.46 %          99.61 %
* (PPV) Positive Predictive Value or Precision                  84.50 %           0.00 %          96.81 %          99.22 %
* (NPV) Negative Predictive Value                               98.88 %         100.00 %         100.00 %          85.94 %
* (FNR) False Negative Rate or Miss Rate                         1.11 %         100.00 %           0.00 %          24.82 %
* (FPR) False Positive Rate or Fall-Out                         15.61 %           1.26 %           0.54 %           0.39 %
* (FDR) False Discovery Rate                                    15.50 %         100.00 %           3.19 %           0.78 %
* (FOR) False Omission Rate                                      1.12 %           0.00 %           0.00 %          14.06 %
* (F1S) F1 Score                                                91.13 %           0.00 %          98.38 %          85.54 %
*/


#define IMAI_TEST_AVG_ACC 0.8965034965034965 // Accuracy
#define IMAI_TEST_AVG_F1S 0.8993873598231409 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 981, FN: 11, FP: 180, TN: 973, TPR: 0.9889112903225, TNR: 0.8438855160450, PPV: 0.8449612403100, NPV: 0.9888211382113, FNR: 0.0110887096774, FPR: 0.1561144839549, FDR: 0.1550387596899, FOR: 0.0111788617886, F1S: 0.9112865768694, }, \
 {name: "brushing_t...", TP: 0, FN: 0, FP: 27, TN: 2118, TPR: 1, TNR: 0.9874125874125, PPV: 0, NPV: 1, FNR: 1, FPR: 0.0125874125874, FDR: 1, FOR: 0, F1S: 0, }, \
 {name: "hair_drying", TP: 303, FN: 0, FP: 10, TN: 1832, TPR: 1, TNR: 0.9945711183496, PPV: 0.9680511182108, NPV: 1, FNR: 0, FPR: 0.0054288816503, FDR: 0.0319488817891, FOR: 0, F1S: 0.9837662337662, }, \
 {name: "showering", TP: 639, FN: 211, FP: 5, TN: 1290, TPR: 0.7517647058823, TNR: 0.9961389961389, PPV: 0.9922360248447, NPV: 0.8594270486342, FNR: 0.2482352941176, FPR: 0.0038610038610, FDR: 0.0077639751552, FOR: 0.1405729513657, F1S: 0.8554216867469, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 84.701 %
* (F1S) F1 Score 85.397 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                3106              389              117              435
* (FN) False Negative or Incorrect Negative Prediction               69                3              190              469
* (FP) False Positive or Incorrect Positive Prediction                7              666               19               39
* (TN) True Negative or Correct Negative Prediction                1596             3720             4452             3835
* (TPR) True Positive Rate or Sensitivity, Recall               97.83 %          99.23 %          38.11 %          48.12 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.56 %          84.82 %          99.58 %          98.99 %
* (PPV) Positive Predictive Value or Precision                  99.78 %          36.87 %          86.03 %          91.77 %
* (NPV) Negative Predictive Value                               95.86 %          99.92 %          95.91 %          89.10 %
* (FNR) False Negative Rate or Miss Rate                         2.17 %           0.77 %          61.89 %          51.88 %
* (FPR) False Positive Rate or Fall-Out                          0.44 %          15.18 %           0.42 %           1.01 %
* (FDR) False Discovery Rate                                     0.22 %          63.13 %          13.97 %           8.23 %
* (FOR) False Omission Rate                                      4.14 %           0.08 %           4.09 %          10.90 %
* (F1S) F1 Score                                                98.79 %          53.77 %          52.82 %          63.13 %
*/


#define IMAI_TRAIN_AVG_ACC 0.8470071159480954 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.853974966406387 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 3106, FN: 69, FP: 7, TN: 1596, TPR: 0.9782677165354, TNR: 0.9956331877729, PPV: 0.9977513652425, NPV: 0.9585585585585, FNR: 0.0217322834645, FPR: 0.0043668122270, FDR: 0.0022486347574, FOR: 0.0414414414414, F1S: 0.9879134860050, }, \
 {name: "brushing_t...", TP: 389, FN: 3, FP: 666, TN: 3720, TPR: 0.9923469387755, TNR: 0.8481532147742, PPV: 0.3687203791469, NPV: 0.9991941982272, FNR: 0.0076530612244, FPR: 0.1518467852257, FDR: 0.6312796208530, FOR: 0.0008058017727, F1S: 0.5376641326883, }, \
 {name: "hair_drying", TP: 117, FN: 190, FP: 19, TN: 4452, TPR: 0.3811074918566, TNR: 0.9957503914113, PPV: 0.8602941176470, NPV: 0.9590693666523, FNR: 0.6188925081433, FPR: 0.0042496085886, FDR: 0.1397058823529, FOR: 0.0409306333476, F1S: 0.5282167042889, }, \
 {name: "showering", TP: 435, FN: 469, FP: 39, TN: 3835, TPR: 0.4811946902654, TNR: 0.9899328859060, PPV: 0.9177215189873, NPV: 0.8910315985130, FNR: 0.5188053097345, FPR: 0.0100671140939, FDR: 0.0822784810126, FOR: 0.1089684014869, F1S: 0.6313497822931, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 96.060 %
* (F1S) F1 Score 96.043 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                 594              377              154              655
* (FN) False Negative or Incorrect Negative Prediction               59                1                8                5
* (FP) False Positive or Incorrect Positive Prediction                5                8                6               54
* (TN) True Negative or Correct Negative Prediction                1195             1467             1685             1139
* (TPR) True Positive Rate or Sensitivity, Recall               90.96 %          99.74 %          95.06 %          99.24 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.58 %          99.46 %          99.65 %          95.47 %
* (PPV) Positive Predictive Value or Precision                  99.17 %          97.92 %          96.25 %          92.38 %
* (NPV) Negative Predictive Value                               95.30 %          99.93 %          99.53 %          99.56 %
* (FNR) False Negative Rate or Miss Rate                         9.04 %           0.26 %           4.94 %           0.76 %
* (FPR) False Positive Rate or Fall-Out                          0.42 %           0.54 %           0.35 %           4.53 %
* (FDR) False Discovery Rate                                     0.83 %           2.08 %           3.75 %           7.62 %
* (FOR) False Omission Rate                                      4.70 %           0.07 %           0.47 %           0.44 %
* (F1S) F1 Score                                                94.89 %          98.82 %          95.65 %          95.69 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.960604425256341 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.960428221615779 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 594, FN: 59, FP: 5, TN: 1195, TPR: 0.9096477794793, TNR: 0.9958333333333, PPV: 0.9916527545909, NPV: 0.9529505582137, FNR: 0.0903522205206, FPR: 0.0041666666666, FDR: 0.0083472454090, FOR: 0.0470494417862, F1S: 0.9488817891373, }, \
 {name: "brushing_t...", TP: 377, FN: 1, FP: 8, TN: 1467, TPR: 0.9973544973544, TNR: 0.9945762711864, PPV: 0.9792207792207, NPV: 0.9993188010899, FNR: 0.0026455026455, FPR: 0.0054237288135, FDR: 0.0207792207792, FOR: 0.0006811989100, F1S: 0.9882044560943, }, \
 {name: "hair_drying", TP: 154, FN: 8, FP: 6, TN: 1685, TPR: 0.9506172839506, TNR: 0.9964518036664, PPV: 0.9625, NPV: 0.9952746603662, FNR: 0.0493827160493, FPR: 0.0035481963335, FDR: 0.0375, FOR: 0.0047253396337, F1S: 0.9565217391304, }, \
 {name: "showering", TP: 655, FN: 5, FP: 54, TN: 1139, TPR: 0.9924242424242, TNR: 0.9547359597652, PPV: 0.9238363892806, NPV: 0.9956293706293, FNR: 0.0075757575757, FPR: 0.0452640402347, FDR: 0.0761636107193, FOR: 0.0043706293706, F1S: 0.9569028487947, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"(unlabeled)", "brushing_teeth", "hair_drying", "showering"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0x73, 0xc1, 0xd3, 0xf4, 0x20, 0x64, 0xe2, 0x47, 0x8f, 0xec, 0xfe, 0x50, 0xd4, 0xc8, 0x28, 0x60}

// First nibble is bit encoding, second nibble is number of bytes
#define IMAGINET_TYPES_NONE	(0x0)
#define IMAGINET_TYPES_FLOAT32	(0x14)
#define IMAGINET_TYPES_FLOAT64	(0x18)
#define IMAGINET_TYPES_INT8	(0x21)
#define IMAGINET_TYPES_INT16	(0x22)
#define IMAGINET_TYPES_INT32	(0x24)
#define IMAGINET_TYPES_INT64	(0x28)
#define IMAGINET_TYPES_QDYN8	(0x31)
#define IMAGINET_TYPES_QDYN16	(0x32)
#define IMAGINET_TYPES_QDYN32	(0x34)

// data_in [1] (4 bytes)
#define IMAI_DATA_IN_COUNT (1)
#define IMAI_DATA_IN_TYPE float
#define IMAI_DATA_IN_TYPE_ID IMAGINET_TYPES_FLOAT32
#define IMAI_DATA_IN_SCALE (1)
#define IMAI_DATA_IN_OFFSET (0)
#define IMAI_DATA_IN_IS_QUANTIZED (0)

// data_out [4] (16 bytes)
#define IMAI_DATA_OUT_COUNT (4)
#define IMAI_DATA_OUT_TYPE float
#define IMAI_DATA_OUT_TYPE_ID IMAGINET_TYPES_FLOAT32
#define IMAI_DATA_OUT_SCALE (1)
#define IMAI_DATA_OUT_OFFSET (0)
#define IMAI_DATA_OUT_IS_QUANTIZED (0)

#define IMAI_KEY_MAX (50)



// Return codes
#define IMAI_RET_SUCCESS 0
#define IMAI_RET_NODATA -1
#define IMAI_RET_NOMEM -2

// Exported methods
int IMAI_dequeue(float *restrict data_out);
int IMAI_enqueue(const float *restrict data_in);
void IMAI_init(void);

#endif /* _IMAI_MODEL_H_ */
