/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/20/2026 23:42:31 UTC. Any changes will be lost.
* 
* Model ID  2491fbf4-e264-413c-9d36-cfad17511b06
* 
* Memory    Size                      Efficiency
* Buffers   6720 bytes (RAM)          100 %
* State     8392 bytes (RAM)          100 %
* Readonly  69800 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-large-balanced-0
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
* Convolution 1D                 [15,16]         float      dequeue
*    filters = 16
*    kernel_size = 5
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[5,16,16]
* Batch Normalization            [15,16]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[16]
*    beta = float[16]
*    mean = float[16]
*    variance = float[16]
* Activation                     [15,16]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [15,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,16,32]
* Convolution 1D                 [15,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Convolution 1D                 [15,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Batch Normalization            [15,32]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [15,32]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [7,32]          float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Convolution 1D                 [7,32]          float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Convolution 1D                 [7,32]          float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Batch Normalization            [7,32]          float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [7,32]          float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [3,32]          float      dequeue
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
* (ACC) Accuracy 98.865 %
* (F1S) F1 Score 98.884 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                1910              412              295               83
* (FN) False Negative or Incorrect Negative Prediction               15               13                2                1
* (FP) False Positive or Incorrect Positive Prediction                9                6                1               15
* (TN) True Negative or Correct Negative Prediction                 797             2300             2433             2632
* (TPR) True Positive Rate or Sensitivity, Recall               99.22 %          96.94 %          99.33 %          98.81 %
* (TNR) True Negative Rate or Specificity, Selectivity          98.88 %          99.74 %          99.96 %          99.43 %
* (PPV) Positive Predictive Value or Precision                  99.53 %          98.56 %          99.66 %          84.69 %
* (NPV) Negative Predictive Value                               98.15 %          99.44 %          99.92 %          99.96 %
* (FNR) False Negative Rate or Miss Rate                         0.78 %           3.06 %           0.67 %           1.19 %
* (FPR) False Positive Rate or Fall-Out                          1.12 %           0.26 %           0.04 %           0.57 %
* (FDR) False Discovery Rate                                     0.47 %           1.44 %           0.34 %          15.31 %
* (FOR) False Omission Rate                                      1.85 %           0.56 %           0.08 %           0.04 %
* (F1S) F1 Score                                                99.38 %          97.75 %          99.49 %          91.21 %
*/


#define IMAI_TEST_AVG_ACC 0.9886488465763457 // Accuracy
#define IMAI_TEST_AVG_F1S 0.9888375099526155 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 1910, FN: 15, FP: 9, TN: 797, TPR: 0.9922077922077, TNR: 0.9888337468982, PPV: 0.9953100573215, NPV: 0.9815270935960, FNR: 0.0077922077922, FPR: 0.0111662531017, FDR: 0.0046899426784, FOR: 0.0184729064039, F1S: 0.9937565036420, }, \
 {name: "brushing_t...", TP: 412, FN: 13, FP: 6, TN: 2300, TPR: 0.9694117647058, TNR: 0.9973980919340, PPV: 0.9856459330143, NPV: 0.9943795936013, FNR: 0.0305882352941, FPR: 0.0026019080659, FDR: 0.0143540669856, FOR: 0.0056204063986, F1S: 0.9774614472123, }, \
 {name: "hair_drying", TP: 295, FN: 2, FP: 1, TN: 2433, TPR: 0.9932659932659, TNR: 0.9995891536565, PPV: 0.9966216216216, NPV: 0.9991786447638, FNR: 0.0067340067340, FPR: 0.0004108463434, FDR: 0.0033783783783, FOR: 0.0008213552361, F1S: 0.9949409780775, }, \
 {name: "showering", TP: 83, FN: 1, FP: 15, TN: 2632, TPR: 0.9880952380952, TNR: 0.9943332074046, PPV: 0.8469387755102, NPV: 0.9996202050892, FNR: 0.0119047619047, FPR: 0.0056667925953, FDR: 0.1530612244897, FOR: 0.0003797949107, F1S: 0.9120879120879, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 97.071 %
* (F1S) F1 Score 97.121 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                7138             2433              307             2316
* (FN) False Negative or Incorrect Negative Prediction              341               13                0               14
* (FP) False Positive or Incorrect Positive Prediction               18               21               11              318
* (TN) True Negative or Correct Negative Prediction                5065            10095            12244             9914
* (TPR) True Positive Rate or Sensitivity, Recall               95.44 %          99.47 %         100.00 %          99.40 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.65 %          99.79 %          99.91 %          96.89 %
* (PPV) Positive Predictive Value or Precision                  99.75 %          99.14 %          96.54 %          87.93 %
* (NPV) Negative Predictive Value                               93.69 %          99.87 %         100.00 %          99.86 %
* (FNR) False Negative Rate or Miss Rate                         4.56 %           0.53 %           0.00 %           0.60 %
* (FPR) False Positive Rate or Fall-Out                          0.35 %           0.21 %           0.09 %           3.11 %
* (FDR) False Discovery Rate                                     0.25 %           0.86 %           3.46 %          12.07 %
* (FOR) False Omission Rate                                      6.31 %           0.13 %           0.00 %           0.14 %
* (F1S) F1 Score                                                97.55 %          99.31 %          98.24 %          93.31 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9707053017035504 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9712091161595148 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 7138, FN: 341, FP: 18, TN: 5065, TPR: 0.9544056692071, TNR: 0.9964587841825, PPV: 0.9974846282839, NPV: 0.9369219385867, FNR: 0.0455943307928, FPR: 0.0035412158174, FDR: 0.0025153717160, FOR: 0.0630780614132, F1S: 0.9754697642637, }, \
 {name: "brushing_t...", TP: 2433, FN: 13, FP: 21, TN: 10095, TPR: 0.9946852003270, TNR: 0.9979240806642, PPV: 0.9914425427872, NPV: 0.9987138899881, FNR: 0.0053147996729, FPR: 0.0020759193357, FDR: 0.0085574572127, FOR: 0.0012861100118, F1S: 0.9930612244897, }, \
 {name: "hair_drying", TP: 307, FN: 0, FP: 11, TN: 12244, TPR: 1, TNR: 0.9991024071807, PPV: 0.9654088050314, NPV: 1, FNR: 0, FPR: 0.0008975928192, FDR: 0.0345911949685, FOR: 0, F1S: 0.9824, }, \
 {name: "showering", TP: 2316, FN: 14, FP: 318, TN: 9914, TPR: 0.9939914163090, TNR: 0.9689210320562, PPV: 0.8792710706150, NPV: 0.9985898468976, FNR: 0.0060085836909, FPR: 0.0310789679437, FDR: 0.1207289293849, FOR: 0.0014101531023, F1S: 0.9331184528605, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 97.396 %
* (F1S) F1 Score 97.390 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                2237              388              464             1213
* (FN) False Negative or Incorrect Negative Prediction               38                4                1               72
* (FP) False Positive or Incorrect Positive Prediction               73                0                3               39
* (TN) True Negative or Correct Negative Prediction                2069             4025             3949             3093
* (TPR) True Positive Rate or Sensitivity, Recall               98.33 %          98.98 %          99.78 %          94.40 %
* (TNR) True Negative Rate or Specificity, Selectivity          96.59 %         100.00 %          99.92 %          98.75 %
* (PPV) Positive Predictive Value or Precision                  96.84 %         100.00 %          99.36 %          96.88 %
* (NPV) Negative Predictive Value                               98.20 %          99.90 %          99.97 %          97.73 %
* (FNR) False Negative Rate or Miss Rate                         1.67 %           1.02 %           0.22 %           5.60 %
* (FPR) False Positive Rate or Fall-Out                          3.41 %           0.00 %           0.08 %           1.25 %
* (FDR) False Discovery Rate                                     3.16 %           0.00 %           0.64 %           3.12 %
* (FOR) False Omission Rate                                      1.80 %           0.10 %           0.03 %           2.27 %
* (F1S) F1 Score                                                97.58 %          99.49 %          99.57 %          95.62 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9739642291147838 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9738953551978653 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 2237, FN: 38, FP: 73, TN: 2069, TPR: 0.9832967032967, TNR: 0.9659197012138, PPV: 0.9683982683982, NPV: 0.9819648789748, FNR: 0.0167032967032, FPR: 0.0340802987861, FDR: 0.0316017316017, FOR: 0.0180351210251, F1S: 0.9757906215921, }, \
 {name: "brushing_t...", TP: 388, FN: 4, FP: 0, TN: 4025, TPR: 0.9897959183673, TNR: 1, PPV: 1, NPV: 0.9990071978158, FNR: 0.0102040816326, FPR: 0, FDR: 0, FOR: 0.0009928021841, F1S: 0.9948717948717, }, \
 {name: "hair_drying", TP: 464, FN: 1, FP: 3, TN: 3949, TPR: 0.9978494623655, TNR: 0.9992408906882, PPV: 0.9935760171306, NPV: 0.9997468354430, FNR: 0.0021505376344, FPR: 0.0007591093117, FDR: 0.0064239828693, FOR: 0.0002531645569, F1S: 0.9957081545064, }, \
 {name: "showering", TP: 1213, FN: 72, FP: 39, TN: 3093, TPR: 0.9439688715953, TNR: 0.9875478927203, PPV: 0.9688498402555, NPV: 0.9772511848341, FNR: 0.0560311284046, FPR: 0.0124521072796, FDR: 0.0311501597444, FOR: 0.0227488151658, F1S: 0.9562475364603, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"(unlabeled)", "brushing_teeth", "hair_drying", "showering"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0xf4, 0xfb, 0x91, 0x24, 0x64, 0xe2, 0x3c, 0x41, 0x9d, 0x36, 0xcf, 0xad, 0x17, 0x51, 0x1b, 0x06}

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

#define IMAI_KEY_MAX (56)



// Return codes
#define IMAI_RET_SUCCESS 0
#define IMAI_RET_NODATA -1
#define IMAI_RET_NOMEM -2

// Exported methods
int IMAI_dequeue(float *restrict data_out);
int IMAI_enqueue(const float *restrict data_in);
void IMAI_init(void);

#endif /* _IMAI_MODEL_H_ */
