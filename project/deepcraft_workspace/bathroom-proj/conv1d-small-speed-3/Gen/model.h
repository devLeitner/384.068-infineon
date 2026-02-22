/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 19:08:34 UTC. Any changes will be lost.
* 
* Model ID  2307b415-2867-4bd5-85f5-606c022927e7
* 
* Memory    Size                      Efficiency
* Buffers   6308 bytes (RAM)          100 %
* State     6044 bytes (RAM)          100 %
* Readonly  34084 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-small-speed-3
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
* Convolution 1D                 [15,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,13,32]
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
* (ACC) Accuracy 83.646 %
* (F1S) F1 Score 83.004 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction               11205             3890             4186             3311
* (FN) False Negative or Incorrect Negative Prediction              851              444                4             3118
* (FP) False Positive or Incorrect Positive Prediction             1185             2176               53             1003
* (TN) True Negative or Correct Negative Prediction               13768            20499            22766            19577
* (TPR) True Positive Rate or Sensitivity, Recall               92.94 %          89.76 %          99.90 %          51.50 %
* (TNR) True Negative Rate or Specificity, Selectivity          92.08 %          90.40 %          99.77 %          95.13 %
* (PPV) Positive Predictive Value or Precision                  90.44 %          64.13 %          98.75 %          76.75 %
* (NPV) Negative Predictive Value                               94.18 %          97.88 %          99.98 %          86.26 %
* (FNR) False Negative Rate or Miss Rate                         7.06 %          10.24 %           0.10 %          48.50 %
* (FPR) False Positive Rate or Fall-Out                          7.92 %           9.60 %           0.23 %           4.87 %
* (FDR) False Discovery Rate                                     9.56 %          35.87 %           1.25 %          23.25 %
* (FOR) False Omission Rate                                      5.82 %           2.12 %           0.02 %          13.74 %
* (F1S) F1 Score                                                91.67 %          74.81 %          99.32 %          61.64 %
*/


#define IMAI_TEST_AVG_ACC 0.8364619201007072 // Accuracy
#define IMAI_TEST_AVG_F1S 0.8300412535157422 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 11205, FN: 851, FP: 1185, TN: 13768, TPR: 0.9294127405441, TNR: 0.9207516886243, PPV: 0.9043583535108, NPV: 0.9417880840002, FNR: 0.0705872594558, FPR: 0.0792483113756, FDR: 0.0956416464891, FOR: 0.0582119159997, F1S: 0.9167143909023, }, \
 {name: "brushing_t...", TP: 3890, FN: 444, FP: 2176, TN: 20499, TPR: 0.8975542224273, TNR: 0.9040352811466, PPV: 0.6412792614573, NPV: 0.9787995989113, FNR: 0.1024457775726, FPR: 0.0959647188533, FDR: 0.3587207385426, FOR: 0.0212004010886, F1S: 0.7480769230769, }, \
 {name: "hair_drying", TP: 4186, FN: 4, FP: 53, TN: 22766, TPR: 0.9990453460620, TNR: 0.9976773741180, PPV: 0.9874970511913, NPV: 0.9998243302591, FNR: 0.0009546539379, FPR: 0.0023226258819, FDR: 0.0125029488086, FOR: 0.0001756697408, F1S: 0.9932376319848, }, \
 {name: "showering", TP: 3311, FN: 3118, FP: 1003, TN: 19577, TPR: 0.5150101104370, TNR: 0.9512633624878, PPV: 0.7675011590171, NPV: 0.8626129103326, FNR: 0.4849898895629, FPR: 0.0487366375121, FDR: 0.2324988409828, FOR: 0.1373870896673, F1S: 0.6164013776412, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 93.891 %
* (F1S) F1 Score 93.911 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction               43597            12685            12211            11935
* (FN) False Negative or Incorrect Negative Prediction             1713              126               45             3349
* (FP) False Positive or Incorrect Positive Prediction              619             3585              318              711
* (TN) True Negative or Correct Negative Prediction               39732            69265            73087            69666
* (TPR) True Positive Rate or Sensitivity, Recall               96.22 %          99.02 %          99.63 %          78.09 %
* (TNR) True Negative Rate or Specificity, Selectivity          98.47 %          95.08 %          99.57 %          98.99 %
* (PPV) Positive Predictive Value or Precision                  98.60 %          77.97 %          97.46 %          94.38 %
* (NPV) Negative Predictive Value                               95.87 %          99.82 %          99.94 %          95.41 %
* (FNR) False Negative Rate or Miss Rate                         3.78 %           0.98 %           0.37 %          21.91 %
* (FPR) False Positive Rate or Fall-Out                          1.53 %           4.92 %           0.43 %           1.01 %
* (FDR) False Discovery Rate                                     1.40 %          22.03 %           2.54 %           5.62 %
* (FOR) False Omission Rate                                      4.13 %           0.18 %           0.06 %           4.59 %
* (F1S) F1 Score                                                97.40 %          87.24 %          98.54 %          85.46 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9389103559379414 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9391055012426063 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 43597, FN: 1713, FP: 619, TN: 39732, TPR: 0.9621937762083, TNR: 0.9846596119055, PPV: 0.9860005427899, NPV: 0.9586681143684, FNR: 0.0378062237916, FPR: 0.0153403880944, FDR: 0.0139994572100, FOR: 0.0413318856315, F1S: 0.9739517011817, }, \
 {name: "brushing_t...", TP: 12685, FN: 126, FP: 3585, TN: 69265, TPR: 0.9901647022090, TNR: 0.9507892930679, PPV: 0.7796558082360, NPV: 0.9981842025622, FNR: 0.0098352977909, FPR: 0.0492107069320, FDR: 0.2203441917639, FOR: 0.0018157974377, F1S: 0.8723909081530, }, \
 {name: "hair_drying", TP: 12211, FN: 45, FP: 318, TN: 73087, TPR: 0.9963283289817, TNR: 0.9956678700361, PPV: 0.9746188841886, NPV: 0.9993846742875, FNR: 0.0036716710182, FPR: 0.0043321299638, FDR: 0.0253811158113, FOR: 0.0006153257124, F1S: 0.9853540447851, }, \
 {name: "showering", TP: 11935, FN: 3349, FP: 711, TN: 69666, TPR: 0.7808819680711, TNR: 0.9898972675732, PPV: 0.9437766882808, NPV: 0.9541327124563, FNR: 0.2191180319288, FPR: 0.0101027324267, FDR: 0.0562233117191, FOR: 0.0458672875436, F1S: 0.8546365914786, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 95.566 %
* (F1S) F1 Score 95.551 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction               10012             4262             4249             3204
* (FN) False Negative or Incorrect Negative Prediction              357               47               30              574
* (FP) False Positive or Incorrect Positive Prediction              133              521               34              320
* (TN) True Negative or Correct Negative Prediction               12233            17905            18422            18637
* (TPR) True Positive Rate or Sensitivity, Recall               96.56 %          98.91 %          99.30 %          84.81 %
* (TNR) True Negative Rate or Specificity, Selectivity          98.92 %          97.17 %          99.82 %          98.31 %
* (PPV) Positive Predictive Value or Precision                  98.69 %          89.11 %          99.21 %          90.92 %
* (NPV) Negative Predictive Value                               97.16 %          99.74 %          99.84 %          97.01 %
* (FNR) False Negative Rate or Miss Rate                         3.44 %           1.09 %           0.70 %          15.19 %
* (FPR) False Positive Rate or Fall-Out                          1.08 %           2.83 %           0.18 %           1.69 %
* (FDR) False Discovery Rate                                     1.31 %          10.89 %           0.79 %           9.08 %
* (FOR) False Omission Rate                                      2.84 %           0.26 %           0.16 %           2.99 %
* (F1S) F1 Score                                                97.61 %          93.75 %          99.25 %          87.76 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9556630745546514 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9555133844808391 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 10012, FN: 357, FP: 133, TN: 12233, TPR: 0.9655704503809, TNR: 0.9892447032185, PPV: 0.9868900936421, NPV: 0.9716441620333, FNR: 0.0344295496190, FPR: 0.0107552967814, FDR: 0.0131099063578, FOR: 0.0283558379666, F1S: 0.9761138734522, }, \
 {name: "brushing_t...", TP: 4262, FN: 47, FP: 521, TN: 17905, TPR: 0.9890925968902, TNR: 0.9717247367849, PPV: 0.8910725486096, NPV: 0.9973819073083, FNR: 0.0109074031097, FPR: 0.0282752632150, FDR: 0.1089274513903, FOR: 0.0026180926916, F1S: 0.9375274967003, }, \
 {name: "hair_drying", TP: 4249, FN: 30, FP: 34, TN: 18422, TPR: 0.9929890161252, TNR: 0.9981577806675, PPV: 0.9920616390380, NPV: 0.9983741599826, FNR: 0.0070109838747, FPR: 0.0018422193324, FDR: 0.0079383609619, FOR: 0.0016258400173, F1S: 0.9925251109553, }, \
 {name: "showering", TP: 3204, FN: 574, FP: 320, TN: 18637, TPR: 0.8480677607199, TNR: 0.9831196919343, PPV: 0.9091940976163, NPV: 0.9701212846806, FNR: 0.1519322392800, FPR: 0.0168803080656, FDR: 0.0908059023836, FOR: 0.0298787153193, F1S: 0.8775677896466, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"(unlabeled)", "brushing_teeth", "hair_drying", "showering"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0x15, 0xb4, 0x07, 0x23, 0x67, 0x28, 0xd5, 0x4b, 0x85, 0xf5, 0x60, 0x6c, 0x02, 0x29, 0x27, 0xe7}

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
