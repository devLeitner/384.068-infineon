/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/19/2026 21:19:50 UTC. Any changes will be lost.
* 
* Model ID  93105c29-32c9-45e7-b270-624d4416942c
* 
* Memory    Size                      Efficiency
* Buffers   20160 bytes (RAM)         76 %
* State     8392 bytes (RAM)          100 %
* Readonly  144760 bytes (Flash)      100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-large-balanced-3
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
* Convolution 1D                 [60,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,20,32]
* Convolution 1D                 [60,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Convolution 1D                 [60,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Batch Normalization            [60,32]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [60,32]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [30,32]         float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Dropout                        [30,32]         float      dequeue
*    rate = 0.05
*    trainable = True
* Convolution 1D                 [30,48]         float      dequeue
*    filters = 48
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,48]
* Convolution 1D                 [30,48]         float      dequeue
*    filters = 48
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,48,48]
* Batch Normalization            [30,48]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[48]
*    beta = float[48]
*    mean = float[48]
*    variance = float[48]
* Activation                     [30,48]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [15,48]         float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Dropout                        [15,48]         float      dequeue
*    rate = 0.05
*    trainable = True
* Convolution 1D                 [15,48]         float      dequeue
*    filters = 48
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,48,48]
* Convolution 1D                 [15,48]         float      dequeue
*    filters = 48
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,48,48]
* Batch Normalization            [15,48]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[48]
*    beta = float[48]
*    mean = float[48]
*    variance = float[48]
* Activation                     [15,48]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [7,48]          float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Dropout                        [7,48]          float      dequeue
*    rate = 0.05
*    trainable = True
* Global average pooling 1D      [48]            float      dequeue
*    trainable = True
* Dense                          [40]            float      dequeue
*    units = 40
*    use_bias = False
*    activation = linear
*    trainable = True
*    weight = float[48,40]
* Batch Normalization            [40]            float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 1
*    gamma = float[40]
*    beta = float[40]
*    mean = float[40]
*    variance = float[40]
* Activation                     [40]            float      dequeue
*    activation = relu
*    trainable = True
* Dropout                        [40]            float      dequeue
*    rate = 0.2
*    trainable = True
* Dense                          [4]             float      dequeue
*    units = 4
*    use_bias = False
*    activation = linear
*    trainable = True
*    weight = float[40,4]
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
* (ACC) Accuracy 90.629 %
* (F1S) F1 Score 90.519 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                 983                0              302              659
* (FN) False Negative or Incorrect Negative Prediction                9                0                1              191
* (FP) False Positive or Incorrect Positive Prediction              188                3                4                6
* (TN) True Negative or Correct Negative Prediction                 965             2142             1838             1289
* (TPR) True Positive Rate or Sensitivity, Recall               99.09 %         100.00 %          99.67 %          77.53 %
* (TNR) True Negative Rate or Specificity, Selectivity          83.69 %          99.86 %          99.78 %          99.54 %
* (PPV) Positive Predictive Value or Precision                  83.95 %           0.00 %          98.69 %          99.10 %
* (NPV) Negative Predictive Value                               99.08 %         100.00 %          99.95 %          87.09 %
* (FNR) False Negative Rate or Miss Rate                         0.91 %         100.00 %           0.33 %          22.47 %
* (FPR) False Positive Rate or Fall-Out                         16.31 %           0.14 %           0.22 %           0.46 %
* (FDR) False Discovery Rate                                    16.05 %         100.00 %           1.31 %           0.90 %
* (FOR) False Omission Rate                                      0.92 %           0.00 %           0.05 %          12.91 %
* (F1S) F1 Score                                                90.89 %           0.00 %          99.18 %          87.00 %
*/


#define IMAI_TEST_AVG_ACC 0.9062937062937063 // Accuracy
#define IMAI_TEST_AVG_F1S 0.905191455731585 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 983, FN: 9, FP: 188, TN: 965, TPR: 0.9909274193548, TNR: 0.8369470945359, PPV: 0.8394534585824, NPV: 0.9907597535934, FNR: 0.0090725806451, FPR: 0.1630529054640, FDR: 0.1605465414175, FOR: 0.0092402464065, F1S: 0.9089227924179, }, \
 {name: "brushing_t...", TP: 0, FN: 0, FP: 3, TN: 2142, TPR: 1, TNR: 0.9986013986013, PPV: 0, NPV: 1, FNR: 1, FPR: 0.0013986013986, FDR: 1, FOR: 0, F1S: 0, }, \
 {name: "hair_drying", TP: 302, FN: 1, FP: 4, TN: 1838, TPR: 0.9966996699669, TNR: 0.9978284473398, PPV: 0.9869281045751, NPV: 0.9994562262098, FNR: 0.0033003300330, FPR: 0.0021715526601, FDR: 0.0130718954248, FOR: 0.0005437737901, F1S: 0.9917898193760, }, \
 {name: "showering", TP: 659, FN: 191, FP: 6, TN: 1289, TPR: 0.7752941176470, TNR: 0.9953667953667, PPV: 0.9909774436090, NPV: 0.8709459459459, FNR: 0.2247058823529, FPR: 0.0046332046332, FDR: 0.0090225563909, FOR: 0.1290540540540, F1S: 0.8699669966996, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 98.451 %
* (F1S) F1 Score 98.460 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                3126              390              302              886
* (FN) False Negative or Incorrect Negative Prediction               49                2                5               18
* (FP) False Positive or Incorrect Positive Prediction                8               18                6               42
* (TN) True Negative or Correct Negative Prediction                1595             4368             4465             3832
* (TPR) True Positive Rate or Sensitivity, Recall               98.46 %          99.49 %          98.37 %          98.01 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.50 %          99.59 %          99.87 %          98.92 %
* (PPV) Positive Predictive Value or Precision                  99.74 %          95.59 %          98.05 %          95.47 %
* (NPV) Negative Predictive Value                               97.02 %          99.95 %          99.89 %          99.53 %
* (FNR) False Negative Rate or Miss Rate                         1.54 %           0.51 %           1.63 %           1.99 %
* (FPR) False Positive Rate or Fall-Out                          0.50 %           0.41 %           0.13 %           1.08 %
* (FDR) False Discovery Rate                                     0.26 %           4.41 %           1.95 %           4.53 %
* (FOR) False Omission Rate                                      2.98 %           0.05 %           0.11 %           0.47 %
* (F1S) F1 Score                                                99.10 %          97.50 %          98.21 %          96.72 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9845123482628715 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9845995698173702 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 3126, FN: 49, FP: 8, TN: 1595, TPR: 0.9845669291338, TNR: 0.9950093574547, PPV: 0.9974473516273, NPV: 0.9701946472019, FNR: 0.0154330708661, FPR: 0.0049906425452, FDR: 0.0025526483726, FOR: 0.0298053527980, F1S: 0.9909652876842, }, \
 {name: "brushing_t...", TP: 390, FN: 2, FP: 18, TN: 4368, TPR: 0.9948979591836, TNR: 0.9958960328317, PPV: 0.9558823529411, NPV: 0.9995423340961, FNR: 0.0051020408163, FPR: 0.0041039671682, FDR: 0.0441176470588, FOR: 0.0004576659038, F1S: 0.975, }, \
 {name: "hair_drying", TP: 302, FN: 5, FP: 6, TN: 4465, TPR: 0.9837133550488, TNR: 0.9986580183404, PPV: 0.9805194805194, NPV: 0.9988814317673, FNR: 0.0162866449511, FPR: 0.0013419816595, FDR: 0.0194805194805, FOR: 0.0011185682326, F1S: 0.9821138211382, }, \
 {name: "showering", TP: 886, FN: 18, FP: 42, TN: 3832, TPR: 0.9800884955752, TNR: 0.9891584925141, PPV: 0.9547413793103, NPV: 0.9953246753246, FNR: 0.0199115044247, FPR: 0.0108415074858, FDR: 0.0452586206896, FOR: 0.0046753246753, F1S: 0.9672489082969, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 95.521 %
* (F1S) F1 Score 95.521 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                 602              369              162              637
* (FN) False Negative or Incorrect Negative Prediction               51                9                0               23
* (FP) False Positive or Incorrect Positive Prediction               26                4                1               52
* (TN) True Negative or Correct Negative Prediction                1174             1471             1690             1141
* (TPR) True Positive Rate or Sensitivity, Recall               92.19 %          97.62 %         100.00 %          96.52 %
* (TNR) True Negative Rate or Specificity, Selectivity          97.83 %          99.73 %          99.94 %          95.64 %
* (PPV) Positive Predictive Value or Precision                  95.86 %          98.93 %          99.39 %          92.45 %
* (NPV) Negative Predictive Value                               95.84 %          99.39 %         100.00 %          98.02 %
* (FNR) False Negative Rate or Miss Rate                         7.81 %           2.38 %           0.00 %           3.48 %
* (FPR) False Positive Rate or Fall-Out                          2.17 %           0.27 %           0.06 %           4.36 %
* (FDR) False Discovery Rate                                     4.14 %           1.07 %           0.61 %           7.55 %
* (FOR) False Omission Rate                                      4.16 %           0.61 %           0.00 %           1.98 %
* (F1S) F1 Score                                                93.99 %          98.27 %          99.69 %          94.44 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9552077711818673 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9552148134994808 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 602, FN: 51, FP: 26, TN: 1174, TPR: 0.9218989280245, TNR: 0.9783333333333, PPV: 0.9585987261146, NPV: 0.9583673469387, FNR: 0.0781010719754, FPR: 0.0216666666666, FDR: 0.0414012738853, FOR: 0.0416326530612, F1S: 0.9398907103825, }, \
 {name: "brushing_t...", TP: 369, FN: 9, FP: 4, TN: 1471, TPR: 0.9761904761904, TNR: 0.9972881355932, PPV: 0.9892761394101, NPV: 0.9939189189189, FNR: 0.0238095238095, FPR: 0.0027118644067, FDR: 0.0107238605898, FOR: 0.0060810810810, F1S: 0.9826897470039, }, \
 {name: "hair_drying", TP: 162, FN: 0, FP: 1, TN: 1690, TPR: 1, TNR: 0.9994086339444, PPV: 0.9938650306748, NPV: 1, FNR: 0, FPR: 0.0005913660555, FDR: 0.0061349693251, FOR: 0, F1S: 0.9969230769230, }, \
 {name: "showering", TP: 637, FN: 23, FP: 52, TN: 1141, TPR: 0.9651515151515, TNR: 0.9564124056999, PPV: 0.9245283018867, NPV: 0.9802405498281, FNR: 0.0348484848484, FPR: 0.0435875943000, FDR: 0.0754716981132, FOR: 0.0197594501718, F1S: 0.9444032616753, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"(unlabeled)", "brushing_teeth", "hair_drying", "showering"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0x29, 0x5c, 0x10, 0x93, 0xc9, 0x32, 0xe7, 0x45, 0xb2, 0x70, 0x62, 0x4d, 0x44, 0x16, 0x94, 0x2c}

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

#define IMAI_KEY_MAX (64)



// Return codes
#define IMAI_RET_SUCCESS 0
#define IMAI_RET_NODATA -1
#define IMAI_RET_NOMEM -2

// Exported methods
int IMAI_dequeue(float *restrict data_out);
int IMAI_enqueue(const float *restrict data_in);
void IMAI_init(void);

#endif /* _IMAI_MODEL_H_ */
