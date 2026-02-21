/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 19:08:27 UTC. Any changes will be lost.
* 
* Model ID  471dc195-0993-4636-8e88-90f8e007ac5f
* 
* Memory    Size                      Efficiency
* Buffers   6308 bytes (RAM)          100 %
* State     6044 bytes (RAM)          100 %
* Readonly  16516 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-small-speed-0
* 
* Class Index | Symbol Label
* 0           | (unlabeled)
* 1           | brushing_teeth
* 2           | hair_drying
* 3           | showering
* 
* Layer                          Shape           Type       Function
* Sliding Window (data points)   [128]           float      dequeue
*    window_shape = [128]
*    stride = 16
*    buffer_multiplier = 1
* Hann smoothing                 [128]           float      dequeue
*    sym = True
* Real Discrete Fourier Transform [65,2]          float      dequeue
*    axis = 0
* Frobenius norm                 [65]            float      dequeue
*    axis = 0
* Mel Filterbank                 [10]            float      dequeue
*    num_filters = 10
*    sample_rate = 16000
*    f_low = 300
*    f_high = 6000
*    htk = True
*    librosa = False
* Clip                           [10]            float      dequeue
*    min = 0.000316227766016
*    max = 3.40282347E+38
* Logarithm                      [10]            float      dequeue
*    base = 0
* Sliding Window (data points)   [60,20]         float      dequeue
*    window_shape = [60,20]
*    stride = 660
*    buffer_multiplier = 1
* Input Layer                    [60,20]         float      dequeue
*    shape = [60,20]
* Convolution 1D                 [29,13]         float      dequeue
*    filters = 13
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 2
*    padding = valid
*    activation = linear
*    use_bias = True
*    trainable = True
*    weight = float[3,20,13]
*    bias = float[13]
* Convolution 1D                 [15,12]         float      dequeue
*    filters = 12
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,13,12]
* Batch Normalization            [15,12]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[12]
*    beta = float[12]
*    mean = float[12]
*    variance = float[12]
* Activation                     [15,12]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [15,24]         float      dequeue
*    filters = 24
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,12,24]
* Convolution 1D                 [15,24]         float      dequeue
*    filters = 24
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,24,24]
* Batch Normalization            [15,24]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[24]
*    beta = float[24]
*    mean = float[24]
*    variance = float[24]
* Activation                     [15,24]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [7,24]          float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Dropout                        [7,24]          float      dequeue
*    rate = 0.05
*    trainable = True
* Global average pooling 1D      [24]            float      dequeue
*    trainable = True
* Dense                          [4]             float      dequeue
*    units = 4
*    use_bias = True
*    activation = linear
*    trainable = True
*    weight = float[24,4]
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
* (ACC) Accuracy 82.332 %
* (F1S) F1 Score 81.249 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction               11257             1499             4184             5297
* (FN) False Negative or Incorrect Negative Prediction              799             2835                6             1132
* (FP) False Positive or Incorrect Positive Prediction             1109               61               21             3581
* (TN) True Negative or Correct Negative Prediction               13844            22614            22798            16999
* (TPR) True Positive Rate or Sensitivity, Recall               93.37 %          34.59 %          99.86 %          82.39 %
* (TNR) True Negative Rate or Specificity, Selectivity          92.58 %          99.73 %          99.91 %          82.60 %
* (PPV) Positive Predictive Value or Precision                  91.03 %          96.09 %          99.50 %          59.66 %
* (NPV) Negative Predictive Value                               94.54 %          88.86 %          99.97 %          93.76 %
* (FNR) False Negative Rate or Miss Rate                         6.63 %          65.41 %           0.14 %          17.61 %
* (FPR) False Positive Rate or Fall-Out                          7.42 %           0.27 %           0.09 %          17.40 %
* (FDR) False Discovery Rate                                     8.97 %           3.91 %           0.50 %          40.34 %
* (FOR) False Omission Rate                                      5.46 %          11.14 %           0.03 %           6.24 %
* (F1S) F1 Score                                                92.19 %          50.87 %          99.68 %          69.21 %
*/


#define IMAI_TEST_AVG_ACC 0.8233181532081899 // Accuracy
#define IMAI_TEST_AVG_F1S 0.8124942333263789 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 11257, FN: 799, FP: 1109, TN: 13844, TPR: 0.9337259455872, TNR: 0.9258342807463, PPV: 0.9103186155587, NPV: 0.9454346786860, FNR: 0.0662740544127, FPR: 0.0741657192536, FDR: 0.0896813844412, FOR: 0.0545653213139, F1S: 0.9218737204160, }, \
 {name: "brushing_t...", TP: 1499, FN: 2835, FP: 61, TN: 22614, TPR: 0.3458698661744, TNR: 0.9973098125689, PPV: 0.9608974358974, NPV: 0.8886007308735, FNR: 0.6541301338255, FPR: 0.0026901874310, FDR: 0.0391025641025, FOR: 0.1113992691264, F1S: 0.5086528673227, }, \
 {name: "hair_drying", TP: 4184, FN: 6, FP: 21, TN: 22798, TPR: 0.9985680190930, TNR: 0.9990797142731, PPV: 0.9950059453032, NPV: 0.9997368882652, FNR: 0.0014319809069, FPR: 0.0009202857268, FDR: 0.0049940546967, FOR: 0.0002631117347, F1S: 0.9967837998808, }, \
 {name: "showering", TP: 5297, FN: 1132, FP: 3581, TN: 16999, TPR: 0.8239228495878, TNR: 0.8259961127308, PPV: 0.5966433881504, NPV: 0.9375654955600, FNR: 0.1760771504121, FPR: 0.1740038872691, FDR: 0.4033566118495, FOR: 0.0624345044399, F1S: 0.6921016528385, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 96.717 %
* (F1S) F1 Score 96.728 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction               43931            12356            12120            14442
* (FN) False Negative or Incorrect Negative Prediction             1379              455              136              842
* (FP) False Positive or Incorrect Positive Prediction              878              681               90             1163
* (TN) True Negative or Correct Negative Prediction               39473            72169            73315            69214
* (TPR) True Positive Rate or Sensitivity, Recall               96.96 %          96.45 %          98.89 %          94.49 %
* (TNR) True Negative Rate or Specificity, Selectivity          97.82 %          99.07 %          99.88 %          98.35 %
* (PPV) Positive Predictive Value or Precision                  98.04 %          94.78 %          99.26 %          92.55 %
* (NPV) Negative Predictive Value                               96.62 %          99.37 %          99.81 %          98.80 %
* (FNR) False Negative Rate or Miss Rate                         3.04 %           3.55 %           1.11 %           5.51 %
* (FPR) False Positive Rate or Fall-Out                          2.18 %           0.93 %           0.12 %           1.65 %
* (FDR) False Discovery Rate                                     1.96 %           5.22 %           0.74 %           7.45 %
* (FOR) False Omission Rate                                      3.38 %           0.63 %           0.19 %           1.20 %
* (F1S) F1 Score                                                97.50 %          95.61 %          99.08 %          93.51 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9671729258355611 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9672768021288297 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 43931, FN: 1379, FP: 878, TN: 39473, TPR: 0.9695652173913, TNR: 0.9782409357884, PPV: 0.9804057220647, NPV: 0.9662440027416, FNR: 0.0304347826086, FPR: 0.0217590642115, FDR: 0.0195942779352, FOR: 0.0337559972583, F1S: 0.9749553368324, }, \
 {name: "brushing_t...", TP: 12356, FN: 455, FP: 681, TN: 72169, TPR: 0.9644836468659, TNR: 0.9906520247083, PPV: 0.9477640561478, NPV: 0.9937348534919, FNR: 0.0355163531340, FPR: 0.0093479752916, FDR: 0.0522359438521, FOR: 0.0062651465080, F1S: 0.9560507582791, }, \
 {name: "hair_drying", TP: 12120, FN: 136, FP: 90, TN: 73315, TPR: 0.9889033942558, TNR: 0.9987739254819, PPV: 0.9926289926289, NPV: 0.9981484254809, FNR: 0.0110966057441, FPR: 0.0012260745180, FDR: 0.0073710073710, FOR: 0.0018515745190, F1S: 0.9907626910815, }, \
 {name: "showering", TP: 14442, FN: 842, FP: 1163, TN: 69214, TPR: 0.9449097095001, TNR: 0.9834747147505, PPV: 0.9254726049343, NPV: 0.9879810437364, FNR: 0.0550902904998, FPR: 0.0165252852494, FDR: 0.0745273950656, FOR: 0.0120189562635, F1S: 0.9350901615461, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 97.216 %
* (F1S) F1 Score 97.263 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                9935             4188             4247             3732
* (FN) False Negative or Incorrect Negative Prediction              434              121               32               46
* (FP) False Positive or Incorrect Positive Prediction               88               30                7              508
* (TN) True Negative or Correct Negative Prediction               12278            18396            18449            18449
* (TPR) True Positive Rate or Sensitivity, Recall               95.81 %          97.19 %          99.25 %          98.78 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.29 %          99.84 %          99.96 %          97.32 %
* (PPV) Positive Predictive Value or Precision                  99.12 %          99.29 %          99.84 %          88.02 %
* (NPV) Negative Predictive Value                               96.59 %          99.35 %          99.83 %          99.75 %
* (FNR) False Negative Rate or Miss Rate                         4.19 %           2.81 %           0.75 %           1.22 %
* (FPR) False Positive Rate or Fall-Out                          0.71 %           0.16 %           0.04 %           2.68 %
* (FDR) False Discovery Rate                                     0.88 %           0.71 %           0.16 %          11.98 %
* (FOR) False Omission Rate                                      3.41 %           0.65 %           0.17 %           0.25 %
* (F1S) F1 Score                                                97.44 %          98.23 %          99.54 %          93.09 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9721574664614031 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9726267636190116 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 9935, FN: 434, FP: 88, TN: 12278, TPR: 0.9581444690905, TNR: 0.9928837134077, PPV: 0.9912201935548, NPV: 0.9658590308370, FNR: 0.0418555309094, FPR: 0.0071162865922, FDR: 0.0087798064451, FOR: 0.0341409691629, F1S: 0.9744017261671, }, \
 {name: "brushing_t...", TP: 4188, FN: 121, FP: 30, TN: 18396, TPR: 0.9719192388025, TNR: 0.9983718658417, PPV: 0.9928876244665, NPV: 0.9934654641680, FNR: 0.0280807611974, FPR: 0.0016281341582, FDR: 0.0071123755334, FOR: 0.0065345358319, F1S: 0.9822915445056, }, \
 {name: "hair_drying", TP: 4247, FN: 32, FP: 7, TN: 18449, TPR: 0.9925216172002, TNR: 0.9996207195491, PPV: 0.9983544898918, NPV: 0.9982684919647, FNR: 0.0074783827997, FPR: 0.0003792804508, FDR: 0.0016455101081, FOR: 0.0017315080352, F1S: 0.9954295089651, }, \
 {name: "showering", TP: 3732, FN: 46, FP: 508, TN: 18449, TPR: 0.9878242456326, TNR: 0.9732025109458, PPV: 0.8801886792452, NPV: 0.9975128413084, FNR: 0.0121757543673, FPR: 0.0267974890541, FDR: 0.1198113207547, FOR: 0.0024871586915, F1S: 0.9309054627089, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"(unlabeled)", "brushing_teeth", "hair_drying", "showering"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0x95, 0xc1, 0x1d, 0x47, 0x93, 0x09, 0x36, 0x46, 0x8e, 0x88, 0x90, 0xf8, 0xe0, 0x07, 0xac, 0x5f}

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

#define IMAI_KEY_MAX (45)



// Return codes
#define IMAI_RET_SUCCESS 0
#define IMAI_RET_NODATA -1
#define IMAI_RET_NOMEM -2

// Exported methods
int IMAI_dequeue(float *restrict data_out);
int IMAI_enqueue(const float *restrict data_in);
void IMAI_init(void);

#endif /* _IMAI_MODEL_H_ */
