/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 20:36:21 UTC. Any changes will be lost.
* 
* Model ID  7375f80e-546b-4d03-9350-9b0b44acb2d8
* 
* Memory    Size                      Efficiency
* Buffers   23200 bytes (RAM)         100 %
* State     26704 bytes (RAM)         100 %
* Readonly  57760 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-medium-balanced-2
* 
* Class Index | Symbol Label
* 0           | (unlabeled)
* 1           | brushing_teeth
* 2           | hair_drying
* 3           | showering
* 
* Layer                          Shape           Type       Function
* Sliding Window (data points)   [1024]          float      dequeue
*    window_shape = [1024]
*    stride = 160
*    buffer_multiplier = 1
* Hamming smoothing              [1024]          float      dequeue
*    sym = True
* Real Discrete Fourier Transform [513,2]         float      dequeue
*    axis = 0
* Frobenius norm                 [513]           float      dequeue
*    axis = 0
* Mel Filterbank                 [50]            float      dequeue
*    num_filters = 50
*    sample_rate = 16000
*    f_low = 300
*    f_high = 8000
* Add Constant                   [50]            float      dequeue
*    A = 1
* Logarithm                      [50]            float      dequeue
* Clip                           [50]            float      dequeue
*    min = 0
*    max = 4
* Imagimob Speech Features       [50]            float      dequeue
*    output_freq = 100
*    output_features = 50
*    low_cut_freq = 300
*    high_cut_freq = 8000
* Sliding Window (data points)   [100,50]        float      dequeue
*    window_shape = [100,50]
*    stride = 500
*    buffer_multiplier = 1
* Contextual Window (Sliding Window) [100,50]        float      dequeue
*    contextual_length_sec = 1
*    prediction_freq = 10
* Input Layer                    [100,50]        float      dequeue
*    shape = [100,50]
* Convolution 1D                 [50,16]         float      dequeue
*    filters = 16
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,50,16]
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
* (ACC) Accuracy 89.256 %
* (F1S) F1 Score 89.371 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                4986             2583             2797             1946
* (FN) False Negative or Incorrect Negative Prediction              579              132               17              754
* (FP) False Positive or Incorrect Positive Prediction               68              814               13              587
* (TN) True Negative or Correct Negative Prediction                8161            10265            10967            10507
* (TPR) True Positive Rate or Sensitivity, Recall               89.60 %          95.14 %          99.40 %          72.07 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.17 %          92.65 %          99.88 %          94.71 %
* (PPV) Positive Predictive Value or Precision                  98.65 %          76.04 %          99.54 %          76.83 %
* (NPV) Negative Predictive Value                               93.38 %          98.73 %          99.85 %          93.30 %
* (FNR) False Negative Rate or Miss Rate                        10.40 %           4.86 %           0.60 %          27.93 %
* (FPR) False Positive Rate or Fall-Out                          0.83 %           7.35 %           0.12 %           5.29 %
* (FDR) False Discovery Rate                                     1.35 %          23.96 %           0.46 %          23.17 %
* (FOR) False Omission Rate                                      6.62 %           1.27 %           0.15 %           6.70 %
* (F1S) F1 Score                                                93.91 %          84.52 %          99.47 %          74.37 %
*/


#define IMAI_TEST_AVG_ACC 0.8925619834710744 // Accuracy
#define IMAI_TEST_AVG_F1S 0.8937076731484591 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 4986, FN: 579, FP: 68, TN: 8161, TPR: 0.8959568733153, TNR: 0.9917365414995, PPV: 0.9865453106450, NPV: 0.9337528604118, FNR: 0.1040431266846, FPR: 0.0082634585004, FDR: 0.0134546893549, FOR: 0.0662471395881, F1S: 0.9390714756568, }, \
 {name: "brushing_t...", TP: 2583, FN: 132, FP: 814, TN: 10265, TPR: 0.9513812154696, TNR: 0.9265276649517, PPV: 0.7603768030615, NPV: 0.9873040300086, FNR: 0.0486187845303, FPR: 0.0734723350482, FDR: 0.2396231969384, FOR: 0.0126959699913, F1S: 0.8452225130890, }, \
 {name: "hair_drying", TP: 2797, FN: 17, FP: 13, TN: 10967, TPR: 0.9939587775408, TNR: 0.9988160291438, PPV: 0.9953736654804, NPV: 0.9984522942461, FNR: 0.0060412224591, FPR: 0.0011839708561, FDR: 0.0046263345195, FOR: 0.0015477057538, F1S: 0.9946657183499, }, \
 {name: "showering", TP: 1946, FN: 754, FP: 587, TN: 10507, TPR: 0.7207407407407, TNR: 0.9470885163151, PPV: 0.7682589814449, NPV: 0.9330432466033, FNR: 0.2792592592592, FPR: 0.0529114836848, FDR: 0.2317410185550, FOR: 0.0669567533966, F1S: 0.7437416395948, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 97.691 %
* (F1S) F1 Score 97.711 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction               29579             7205             8003             9538
* (FN) False Negative or Incorrect Negative Prediction              898               61               55              270
* (FP) False Positive or Incorrect Positive Prediction              286               84               46              868
* (TN) True Negative or Correct Negative Prediction               24846            48259            47505            44933
* (TPR) True Positive Rate or Sensitivity, Recall               97.05 %          99.16 %          99.32 %          97.25 %
* (TNR) True Negative Rate or Specificity, Selectivity          98.86 %          99.83 %          99.90 %          98.10 %
* (PPV) Positive Predictive Value or Precision                  99.04 %          98.85 %          99.43 %          91.66 %
* (NPV) Negative Predictive Value                               96.51 %          99.87 %          99.88 %          99.40 %
* (FNR) False Negative Rate or Miss Rate                         2.95 %           0.84 %           0.68 %           2.75 %
* (FPR) False Positive Rate or Fall-Out                          1.14 %           0.17 %           0.10 %           1.90 %
* (FDR) False Discovery Rate                                     0.96 %           1.15 %           0.57 %           8.34 %
* (FOR) False Omission Rate                                      3.49 %           0.13 %           0.12 %           0.60 %
* (F1S) F1 Score                                                98.04 %          99.00 %          99.37 %          94.37 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9769102123756945 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9771064964077626 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 29579, FN: 898, FP: 286, TN: 24846, TPR: 0.9705351576598, TNR: 0.9886200859462, PPV: 0.9904235727440, NPV: 0.9651180857675, FNR: 0.0294648423401, FPR: 0.0113799140537, FDR: 0.0095764272559, FOR: 0.0348819142324, F1S: 0.9803785091644, }, \
 {name: "brushing_t...", TP: 7205, FN: 61, FP: 84, TN: 48259, TPR: 0.9916047343793, TNR: 0.9982624164822, PPV: 0.9884757854301, NPV: 0.9987375827814, FNR: 0.0083952656206, FPR: 0.0017375835177, FDR: 0.0115242145698, FOR: 0.0012624172185, F1S: 0.9900377877018, }, \
 {name: "hair_drying", TP: 8003, FN: 55, FP: 46, TN: 47505, TPR: 0.9931744849838, TNR: 0.9990326176105, PPV: 0.9942850043483, NPV: 0.9988435660218, FNR: 0.0068255150161, FPR: 0.0009673823894, FDR: 0.0057149956516, FOR: 0.0011564339781, F1S: 0.9937294344074, }, \
 {name: "showering", TP: 9538, FN: 270, FP: 868, TN: 44933, TPR: 0.9724714518760, TNR: 0.9810484487238, PPV: 0.9165865846626, NPV: 0.9940269451142, FNR: 0.0275285481239, FPR: 0.0189515512761, FDR: 0.0834134153373, FOR: 0.0059730548857, F1S: 0.9437023844859, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 95.292 %
* (F1S) F1 Score 95.240 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                8289             4096             2662             3656
* (FN) False Negative or Incorrect Negative Prediction              324                0               22              578
* (FP) False Positive or Incorrect Positive Prediction              600              103               22              199
* (TN) True Negative or Correct Negative Prediction               10414            15428            16921            15194
* (TPR) True Positive Rate or Sensitivity, Recall               96.24 %         100.00 %          99.18 %          86.35 %
* (TNR) True Negative Rate or Specificity, Selectivity          94.55 %          99.34 %          99.87 %          98.71 %
* (PPV) Positive Predictive Value or Precision                  93.25 %          97.55 %          99.18 %          94.84 %
* (NPV) Negative Predictive Value                               96.98 %         100.00 %          99.87 %          96.34 %
* (FNR) False Negative Rate or Miss Rate                         3.76 %           0.00 %           0.82 %          13.65 %
* (FPR) False Positive Rate or Fall-Out                          5.45 %           0.66 %           0.13 %           1.29 %
* (FDR) False Discovery Rate                                     6.75 %           2.45 %           0.82 %           5.16 %
* (FOR) False Omission Rate                                      3.02 %           0.00 %           0.13 %           3.66 %
* (F1S) F1 Score                                                94.72 %          98.76 %          99.18 %          90.39 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9529219952106792 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9523983474970042 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 8289, FN: 324, FP: 600, TN: 10414, TPR: 0.9623824451410, TNR: 0.9455238786998, PPV: 0.9325008437394, NPV: 0.9698267833861, FNR: 0.0376175548589, FPR: 0.0544761213001, FDR: 0.0674991562605, FOR: 0.0301732166138, F1S: 0.9472060335961, }, \
 {name: "brushing_t...", TP: 4096, FN: 0, FP: 103, TN: 15428, TPR: 1, TNR: 0.9933681025046, PPV: 0.9754703500833, NPV: 1, FNR: 0, FPR: 0.0066318974953, FDR: 0.0245296499166, FOR: 0, F1S: 0.9875828812537, }, \
 {name: "hair_drying", TP: 2662, FN: 22, FP: 22, TN: 16921, TPR: 0.9918032786885, TNR: 0.9987015286549, PPV: 0.9918032786885, NPV: 0.9987015286549, FNR: 0.0081967213114, FPR: 0.0012984713450, FDR: 0.0081967213114, FOR: 0.0012984713450, F1S: 0.9918032786885, }, \
 {name: "showering", TP: 3656, FN: 578, FP: 199, TN: 15194, TPR: 0.8634860651865, TNR: 0.9870720457350, PPV: 0.9483787289234, NPV: 0.9633527770732, FNR: 0.1365139348134, FPR: 0.0129279542649, FDR: 0.0516212710765, FOR: 0.0366472229267, F1S: 0.9039436271479, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"(unlabeled)", "brushing_teeth", "hair_drying", "showering"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0x0e, 0xf8, 0x75, 0x73, 0x6b, 0x54, 0x03, 0x4d, 0x93, 0x50, 0x9b, 0x0b, 0x44, 0xac, 0xb2, 0xd8}

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

#define IMAI_KEY_MAX (54)



// Return codes
#define IMAI_RET_SUCCESS 0
#define IMAI_RET_NODATA -1
#define IMAI_RET_NOMEM -2

// Exported methods
int IMAI_dequeue(float *restrict data_out);
int IMAI_enqueue(const float *restrict data_in);
void IMAI_init(void);

#endif /* _IMAI_MODEL_H_ */
