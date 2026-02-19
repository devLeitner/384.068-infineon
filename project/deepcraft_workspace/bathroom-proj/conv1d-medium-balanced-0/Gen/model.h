/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/19/2026 20:18:01 UTC. Any changes will be lost.
* 
* Model ID  22d4b737-9ff0-4754-8c93-1a29402e9de7
* 
* Memory    Size                      Efficiency
* Buffers   6240 bytes (RAM)          100 %
* State     8392 bytes (RAM)          100 %
* Readonly  37688 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-medium-balanced-0
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
* Convolution 1D                 [30,12]         float      dequeue
*    filters = 12
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,20,12]
* Batch Normalization            [30,12]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[12]
*    beta = float[12]
*    mean = float[12]
*    variance = float[12]
* Activation                     [30,12]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [30,24]         float      dequeue
*    filters = 24
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,12,24]
* Convolution 1D                 [30,24]         float      dequeue
*    filters = 24
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,24,24]
* Batch Normalization            [30,24]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[24]
*    beta = float[24]
*    mean = float[24]
*    variance = float[24]
* Activation                     [30,24]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [15,24]         float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
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
*    weight = float[3,24,32]
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
* (ACC) Accuracy 90.769 %
* (F1S) F1 Score 90.671 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                 977                0              302              668
* (FN) False Negative or Incorrect Negative Prediction               15                0                1              182
* (FP) False Positive or Incorrect Positive Prediction              182                2                1               13
* (TN) True Negative or Correct Negative Prediction                 971             2143             1841             1282
* (TPR) True Positive Rate or Sensitivity, Recall               98.49 %         100.00 %          99.67 %          78.59 %
* (TNR) True Negative Rate or Specificity, Selectivity          84.22 %          99.91 %          99.95 %          99.00 %
* (PPV) Positive Predictive Value or Precision                  84.30 %           0.00 %          99.67 %          98.09 %
* (NPV) Negative Predictive Value                               98.48 %         100.00 %          99.95 %          87.57 %
* (FNR) False Negative Rate or Miss Rate                         1.51 %         100.00 %           0.33 %          21.41 %
* (FPR) False Positive Rate or Fall-Out                         15.78 %           0.09 %           0.05 %           1.00 %
* (FDR) False Discovery Rate                                    15.70 %         100.00 %           0.33 %           1.91 %
* (FOR) False Omission Rate                                      1.52 %           0.00 %           0.05 %          12.43 %
* (F1S) F1 Score                                                90.84 %           0.00 %          99.67 %          87.26 %
*/


#define IMAI_TEST_AVG_ACC 0.9076923076923077 // Accuracy
#define IMAI_TEST_AVG_F1S 0.9067062003885094 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 977, FN: 15, FP: 182, TN: 971, TPR: 0.9848790322580, TNR: 0.8421509106678, PPV: 0.8429680759275, NPV: 0.9847870182555, FNR: 0.0151209677419, FPR: 0.1578490893321, FDR: 0.1570319240724, FOR: 0.0152129817444, F1S: 0.9084146908414, }, \
 {name: "brushing_t...", TP: 0, FN: 0, FP: 2, TN: 2143, TPR: 1, TNR: 0.9990675990675, PPV: 0, NPV: 1, FNR: 1, FPR: 0.0009324009324, FDR: 1, FOR: 0, F1S: 0, }, \
 {name: "hair_drying", TP: 302, FN: 1, FP: 1, TN: 1841, TPR: 0.9966996699669, TNR: 0.9994571118349, PPV: 0.9966996699669, NPV: 0.9994571118349, FNR: 0.0033003300330, FPR: 0.0005428881650, FDR: 0.0033003300330, FOR: 0.0005428881650, F1S: 0.9966996699669, }, \
 {name: "showering", TP: 668, FN: 182, FP: 13, TN: 1282, TPR: 0.7858823529411, TNR: 0.9899613899613, PPV: 0.9809104258443, NPV: 0.8756830601092, FNR: 0.2141176470588, FPR: 0.0100386100386, FDR: 0.0190895741556, FOR: 0.1243169398907, F1S: 0.8726322664924, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 98.535 %
* (F1S) F1 Score 98.546 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                3113              390              307              898
* (FN) False Negative or Incorrect Negative Prediction               62                2                0                6
* (FP) False Positive or Incorrect Positive Prediction                2                7                8               53
* (TN) True Negative or Correct Negative Prediction                1601             4379             4463             3821
* (TPR) True Positive Rate or Sensitivity, Recall               98.05 %          99.49 %         100.00 %          99.34 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.88 %          99.84 %          99.82 %          98.63 %
* (PPV) Positive Predictive Value or Precision                  99.94 %          98.24 %          97.46 %          94.43 %
* (NPV) Negative Predictive Value                               96.27 %          99.95 %         100.00 %          99.84 %
* (FNR) False Negative Rate or Miss Rate                         1.95 %           0.51 %           0.00 %           0.66 %
* (FPR) False Positive Rate or Fall-Out                          0.12 %           0.16 %           0.18 %           1.37 %
* (FDR) False Discovery Rate                                     0.06 %           1.76 %           2.54 %           5.57 %
* (FOR) False Omission Rate                                      3.73 %           0.05 %           0.00 %           0.16 %
* (F1S) F1 Score                                                98.98 %          98.86 %          98.71 %          96.82 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9853495186270406 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9854588022155315 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 3113, FN: 62, FP: 2, TN: 1601, TPR: 0.9804724409448, TNR: 0.9987523393636, PPV: 0.9993579454253, NPV: 0.9627179795550, FNR: 0.0195275590551, FPR: 0.0012476606363, FDR: 0.0006420545746, FOR: 0.0372820204449, F1S: 0.9898251192368, }, \
 {name: "brushing_t...", TP: 390, FN: 2, FP: 7, TN: 4379, TPR: 0.9948979591836, TNR: 0.9984040127678, PPV: 0.9823677581863, NPV: 0.9995434832230, FNR: 0.0051020408163, FPR: 0.0015959872321, FDR: 0.0176322418136, FOR: 0.0004565167769, F1S: 0.9885931558935, }, \
 {name: "hair_drying", TP: 307, FN: 0, FP: 8, TN: 4463, TPR: 1, TNR: 0.9982106911205, PPV: 0.9746031746031, NPV: 1, FNR: 0, FPR: 0.0017893088794, FDR: 0.0253968253968, FOR: 0, F1S: 0.9871382636655, }, \
 {name: "showering", TP: 898, FN: 6, FP: 53, TN: 3821, TPR: 0.9933628318584, TNR: 0.9863190500774, PPV: 0.9442691903259, NPV: 0.9984321923177, FNR: 0.0066371681415, FPR: 0.0136809499225, FDR: 0.0557308096740, FOR: 0.0015678076822, F1S: 0.9681940700808, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 96.384 %
* (F1S) F1 Score 96.373 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                 596              377              162              651
* (FN) False Negative or Incorrect Negative Prediction               57                1                0                9
* (FP) False Positive or Incorrect Positive Prediction                8                2                3               54
* (TN) True Negative or Correct Negative Prediction                1192             1473             1688             1139
* (TPR) True Positive Rate or Sensitivity, Recall               91.27 %          99.74 %         100.00 %          98.64 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.33 %          99.86 %          99.82 %          95.47 %
* (PPV) Positive Predictive Value or Precision                  98.68 %          99.47 %          98.18 %          92.34 %
* (NPV) Negative Predictive Value                               95.44 %          99.93 %         100.00 %          99.22 %
* (FNR) False Negative Rate or Miss Rate                         8.73 %           0.26 %           0.00 %           1.36 %
* (FPR) False Positive Rate or Fall-Out                          0.67 %           0.14 %           0.18 %           4.53 %
* (FDR) False Discovery Rate                                     1.32 %           0.53 %           1.82 %           7.66 %
* (FOR) False Omission Rate                                      4.56 %           0.07 %           0.00 %           0.78 %
* (F1S) F1 Score                                                94.83 %          99.60 %          99.08 %          95.38 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9638424177010254 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9637276304274933 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 596, FN: 57, FP: 8, TN: 1192, TPR: 0.9127105666156, TNR: 0.9933333333333, PPV: 0.9867549668874, NPV: 0.9543634907926, FNR: 0.0872894333843, FPR: 0.0066666666666, FDR: 0.0132450331125, FOR: 0.0456365092073, F1S: 0.9482895783611, }, \
 {name: "brushing_t...", TP: 377, FN: 1, FP: 2, TN: 1473, TPR: 0.9973544973544, TNR: 0.9986440677966, PPV: 0.9947229551451, NPV: 0.9993215739484, FNR: 0.0026455026455, FPR: 0.0013559322033, FDR: 0.0052770448548, FOR: 0.0006784260515, F1S: 0.9960369881109, }, \
 {name: "hair_drying", TP: 162, FN: 0, FP: 3, TN: 1688, TPR: 1, TNR: 0.9982259018332, PPV: 0.9818181818181, NPV: 1, FNR: 0, FPR: 0.0017740981667, FDR: 0.0181818181818, FOR: 0, F1S: 0.9908256880733, }, \
 {name: "showering", TP: 651, FN: 9, FP: 54, TN: 1139, TPR: 0.9863636363636, TNR: 0.9547359597652, PPV: 0.9234042553191, NPV: 0.9921602787456, FNR: 0.0136363636363, FPR: 0.0452640402347, FDR: 0.0765957446808, FOR: 0.0078397212543, F1S: 0.9538461538461, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"(unlabeled)", "brushing_teeth", "hair_drying", "showering"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0x37, 0xb7, 0xd4, 0x22, 0xf0, 0x9f, 0x54, 0x47, 0x8c, 0x93, 0x1a, 0x29, 0x40, 0x2e, 0x9d, 0xe7}

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

#define IMAI_KEY_MAX (52)



// Return codes
#define IMAI_RET_SUCCESS 0
#define IMAI_RET_NODATA -1
#define IMAI_RET_NOMEM -2

// Exported methods
int IMAI_dequeue(float *restrict data_out);
int IMAI_enqueue(const float *restrict data_in);
void IMAI_init(void);

#endif /* _IMAI_MODEL_H_ */
