/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 18:58:06 UTC. Any changes will be lost.
* 
* Model ID  dbe58b44-d41c-4df6-8067-0cebae70b775
* 
* Memory    Size                      Efficiency
* Buffers   6308 bytes (RAM)          100 %
* State     6044 bytes (RAM)          100 %
* Readonly  25380 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-small-speed-2
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
* Convolution 1D                 [15,16]         float      dequeue
*    filters = 16
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,13,16]
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
* Dropout                        [7,32]          float      dequeue
*    rate = 0.05
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
* (ACC) Accuracy 83.761 %
* (F1S) F1 Score 83.101 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction               11465             1996             4184             4978
* (FN) False Negative or Incorrect Negative Prediction              591             2338                6             1451
* (FP) False Positive or Incorrect Positive Prediction             1187              403               39             2757
* (TN) True Negative or Correct Negative Prediction               13766            22272            22780            17823
* (TPR) True Positive Rate or Sensitivity, Recall               95.10 %          46.05 %          99.86 %          77.43 %
* (TNR) True Negative Rate or Specificity, Selectivity          92.06 %          98.22 %          99.83 %          86.60 %
* (PPV) Positive Predictive Value or Precision                  90.62 %          83.20 %          99.08 %          64.36 %
* (NPV) Negative Predictive Value                               95.88 %          90.50 %          99.97 %          92.47 %
* (FNR) False Negative Rate or Miss Rate                         4.90 %          53.95 %           0.14 %          22.57 %
* (FPR) False Positive Rate or Fall-Out                          7.94 %           1.78 %           0.17 %          13.40 %
* (FDR) False Discovery Rate                                     9.38 %          16.80 %           0.92 %          35.64 %
* (FOR) False Omission Rate                                      4.12 %           9.50 %           0.03 %           7.53 %
* (F1S) F1 Score                                                92.80 %          59.29 %          99.47 %          70.29 %
*/


#define IMAI_TEST_AVG_ACC 0.8376096856603354 // Accuracy
#define IMAI_TEST_AVG_F1S 0.8310068650287566 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 11465, FN: 591, FP: 1187, TN: 13766, TPR: 0.9509787657597, TNR: 0.9206179362000, PPV: 0.9061808409737, NPV: 0.9588354112976, FNR: 0.0490212342402, FPR: 0.0793820637999, FDR: 0.0938191590262, FOR: 0.0411645887023, F1S: 0.9280395013760, }, \
 {name: "brushing_t...", TP: 1996, FN: 2338, FP: 403, TN: 22272, TPR: 0.4605445316105, TNR: 0.9822271223814, PPV: 0.8320133388912, NPV: 0.9049979683055, FNR: 0.5394554683894, FPR: 0.0177728776185, FDR: 0.1679866611087, FOR: 0.0950020316944, F1S: 0.5929006386454, }, \
 {name: "hair_drying", TP: 4184, FN: 6, FP: 39, TN: 22780, TPR: 0.9985680190930, TNR: 0.9982908979359, PPV: 0.9907648591049, NPV: 0.9997366804178, FNR: 0.0014319809069, FPR: 0.0017091020640, FDR: 0.0092351408950, FOR: 0.0002633195821, F1S: 0.9946511351479, }, \
 {name: "showering", TP: 4978, FN: 1451, FP: 2757, TN: 17823, TPR: 0.7743039352932, TNR: 0.8660349854227, PPV: 0.6435681965093, NPV: 0.9247172356542, FNR: 0.2256960647067, FPR: 0.1339650145772, FDR: 0.3564318034906, FOR: 0.0752827643457, F1S: 0.7029087828297, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 96.789 %
* (F1S) F1 Score 96.794 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction               44018            12449            12182            14261
* (FN) False Negative or Incorrect Negative Prediction             1292              362               74             1023
* (FP) False Positive or Incorrect Positive Prediction              797             1001              129              824
* (TN) True Negative or Correct Negative Prediction               39554            71849            73276            69553
* (TPR) True Positive Rate or Sensitivity, Recall               97.15 %          97.17 %          99.40 %          93.31 %
* (TNR) True Negative Rate or Specificity, Selectivity          98.02 %          98.63 %          99.82 %          98.83 %
* (PPV) Positive Predictive Value or Precision                  98.22 %          92.56 %          98.95 %          94.54 %
* (NPV) Negative Predictive Value                               96.84 %          99.50 %          99.90 %          98.55 %
* (FNR) False Negative Rate or Miss Rate                         2.85 %           2.83 %           0.60 %           6.69 %
* (FPR) False Positive Rate or Fall-Out                          1.98 %           1.37 %           0.18 %           1.17 %
* (FDR) False Discovery Rate                                     1.78 %           7.44 %           1.05 %           5.46 %
* (FOR) False Omission Rate                                      3.16 %           0.50 %           0.10 %           1.45 %
* (F1S) F1 Score                                                97.68 %          94.81 %          99.17 %          93.92 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9678850351968807 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.967943658271349 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 44018, FN: 1292, FP: 797, TN: 39554, TPR: 0.9714853233281, TNR: 0.9802483209833, PPV: 0.9822157759678, NPV: 0.9683689957400, FNR: 0.0285146766718, FPR: 0.0197516790166, FDR: 0.0177842240321, FOR: 0.0316310042599, F1S: 0.9768210818307, }, \
 {name: "brushing_t...", TP: 12449, FN: 362, FP: 1001, TN: 71849, TPR: 0.9717430333307, TNR: 0.9862594371997, PPV: 0.9255762081784, NPV: 0.9949869133511, FNR: 0.0282569666692, FPR: 0.0137405628002, FDR: 0.0744237918215, FOR: 0.0050130866488, F1S: 0.9480979399108, }, \
 {name: "hair_drying", TP: 12182, FN: 74, FP: 129, TN: 73276, TPR: 0.9939621409921, TNR: 0.9982426265240, PPV: 0.9895215660791, NPV: 0.9989911383776, FNR: 0.0060378590078, FPR: 0.0017573734759, FDR: 0.0104784339208, FOR: 0.0010088616223, F1S: 0.9917368828102, }, \
 {name: "showering", TP: 14261, FN: 1023, FP: 824, TN: 69553, TPR: 0.9330672598796, TNR: 0.9882916293675, PPV: 0.9453762015246, NPV: 0.9855049875311, FNR: 0.0669327401203, FPR: 0.0117083706324, FDR: 0.0546237984753, FOR: 0.0144950124688, F1S: 0.9391814020876, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 97.247 %
* (F1S) F1 Score 97.265 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction               10053             4220             4247             3589
* (FN) False Negative or Incorrect Negative Prediction              316               89               32              189
* (FP) False Positive or Incorrect Positive Prediction              123              147                9              347
* (TN) True Negative or Correct Negative Prediction               12243            18279            18447            18610
* (TPR) True Positive Rate or Sensitivity, Recall               96.95 %          97.93 %          99.25 %          95.00 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.01 %          99.20 %          99.95 %          98.17 %
* (PPV) Positive Predictive Value or Precision                  98.79 %          96.63 %          99.79 %          91.18 %
* (NPV) Negative Predictive Value                               97.48 %          99.52 %          99.83 %          98.99 %
* (FNR) False Negative Rate or Miss Rate                         3.05 %           2.07 %           0.75 %           5.00 %
* (FPR) False Positive Rate or Fall-Out                          0.99 %           0.80 %           0.05 %           1.83 %
* (FDR) False Discovery Rate                                     1.21 %           3.37 %           0.21 %           8.82 %
* (FOR) False Omission Rate                                      2.52 %           0.48 %           0.17 %           1.01 %
* (F1S) F1 Score                                                97.86 %          97.28 %          99.52 %          93.05 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9724653617769958 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9726483771333057 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 10053, FN: 316, FP: 123, TN: 12243, TPR: 0.9695245443147, TNR: 0.9900533721494, PPV: 0.9879127358490, NPV: 0.9748387610478, FNR: 0.0304754556852, FPR: 0.0099466278505, FDR: 0.0120872641509, FOR: 0.0251612389521, F1S: 0.9786322706254, }, \
 {name: "brushing_t...", TP: 4220, FN: 89, FP: 147, TN: 18279, TPR: 0.9793455558134, TNR: 0.9920221426245, PPV: 0.9663384474467, NPV: 0.9951546167247, FNR: 0.0206544441865, FPR: 0.0079778573754, FDR: 0.0336615525532, FOR: 0.0048453832752, F1S: 0.9727985246657, }, \
 {name: "hair_drying", TP: 4247, FN: 32, FP: 9, TN: 18447, TPR: 0.9925216172002, TNR: 0.9995123537061, PPV: 0.9978853383458, NPV: 0.9982683045619, FNR: 0.0074783827997, FPR: 0.0004876462938, FDR: 0.0021146616541, FOR: 0.0017316954380, F1S: 0.9951962507322, }, \
 {name: "showering", TP: 3589, FN: 189, FP: 347, TN: 18610, TPR: 0.9499735309687, TNR: 0.9816954159413, PPV: 0.9118394308943, NPV: 0.9899462737379, FNR: 0.0500264690312, FPR: 0.0183045840586, FDR: 0.0881605691056, FOR: 0.0100537262620, F1S: 0.9305159450350, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"(unlabeled)", "brushing_teeth", "hair_drying", "showering"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0x44, 0x8b, 0xe5, 0xdb, 0x1c, 0xd4, 0xf6, 0x4d, 0x80, 0x67, 0x0c, 0xeb, 0xae, 0x70, 0xb7, 0x75}

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
