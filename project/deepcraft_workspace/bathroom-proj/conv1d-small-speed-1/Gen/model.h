/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 19:08:44 UTC. Any changes will be lost.
* 
* Model ID  53dc3f31-5702-4062-867e-64ae04f405e6
* 
* Memory    Size                      Efficiency
* Buffers   6308 bytes (RAM)          100 %
* State     6044 bytes (RAM)          100 %
* Readonly  12772 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-small-speed-1
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
* Convolution 1D                 [15,16]         float      dequeue
*    filters = 16
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,16,16]
* Convolution 1D                 [15,16]         float      dequeue
*    filters = 16
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,16,16]
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
* Max pooling 1D                 [7,16]          float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Dropout                        [7,16]          float      dequeue
*    rate = 0.05
*    trainable = True
* Global average pooling 1D      [16]            float      dequeue
*    trainable = True
* Dense                          [4]             float      dequeue
*    units = 4
*    use_bias = True
*    activation = linear
*    trainable = True
*    weight = float[16,4]
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
* (ACC) Accuracy 80.851 %
* (F1S) F1 Score 79.901 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction               11095             1514             4174             5054
* (FN) False Negative or Incorrect Negative Prediction              961             2820               16             1375
* (FP) False Positive or Incorrect Positive Prediction             1235              212               49             3676
* (TN) True Negative or Correct Negative Prediction               13718            22463            22770            16904
* (TPR) True Positive Rate or Sensitivity, Recall               92.03 %          34.93 %          99.62 %          78.61 %
* (TNR) True Negative Rate or Specificity, Selectivity          91.74 %          99.07 %          99.79 %          82.14 %
* (PPV) Positive Predictive Value or Precision                  89.98 %          87.72 %          98.84 %          57.89 %
* (NPV) Negative Predictive Value                               93.45 %          88.85 %          99.93 %          92.48 %
* (FNR) False Negative Rate or Miss Rate                         7.97 %          65.07 %           0.38 %          21.39 %
* (FPR) False Positive Rate or Fall-Out                          8.26 %           0.93 %           0.21 %          17.86 %
* (FDR) False Discovery Rate                                    10.02 %          12.28 %           1.16 %          42.11 %
* (FOR) False Omission Rate                                      6.55 %          11.15 %           0.07 %           7.52 %
* (F1S) F1 Score                                                90.99 %          49.97 %          99.23 %          66.68 %
*/


#define IMAI_TEST_AVG_ACC 0.808508275019438 // Accuracy
#define IMAI_TEST_AVG_F1S 0.7990070867443857 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 11095, FN: 961, FP: 1235, TN: 13718, TPR: 0.9202886529528, TNR: 0.9174078780177, PPV: 0.8998377939983, NPV: 0.9345323250902, FNR: 0.0797113470471, FPR: 0.0825921219822, FDR: 0.1001622060016, FOR: 0.0654676749097, F1S: 0.9099483310095, }, \
 {name: "brushing_t...", TP: 1514, FN: 2820, FP: 212, TN: 22463, TPR: 0.3493308721735, TNR: 0.9906504961411, PPV: 0.8771726535341, NPV: 0.8884626033303, FNR: 0.6506691278264, FPR: 0.0093495038588, FDR: 0.1228273464658, FOR: 0.1115373966696, F1S: 0.4996699669966, }, \
 {name: "hair_drying", TP: 4174, FN: 16, FP: 49, TN: 22770, TPR: 0.9961813842482, TNR: 0.9978526666374, PPV: 0.9883968742600, NPV: 0.9992978144474, FNR: 0.0038186157517, FPR: 0.0021473333625, FDR: 0.0116031257399, FOR: 0.0007021855525, F1S: 0.9922738618804, }, \
 {name: "showering", TP: 5054, FN: 1375, FP: 3676, TN: 16904, TPR: 0.7861253694198, TNR: 0.8213799805636, PPV: 0.5789232531500, NPV: 0.9247770665791, FNR: 0.2138746305801, FPR: 0.1786200194363, FDR: 0.4210767468499, FOR: 0.0752229334208, F1S: 0.6667986014908, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 95.995 %
* (F1S) F1 Score 96.009 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction               43680            12179            12123            14248
* (FN) False Negative or Incorrect Negative Prediction             1630              632              133             1036
* (FP) False Positive or Incorrect Positive Prediction              977             1023              146             1285
* (TN) True Negative or Correct Negative Prediction               39374            71827            73259            69092
* (TPR) True Positive Rate or Sensitivity, Recall               96.40 %          95.07 %          98.91 %          93.22 %
* (TNR) True Negative Rate or Specificity, Selectivity          97.58 %          98.60 %          99.80 %          98.17 %
* (PPV) Positive Predictive Value or Precision                  97.81 %          92.25 %          98.81 %          91.73 %
* (NPV) Negative Predictive Value                               96.02 %          99.13 %          99.82 %          98.52 %
* (FNR) False Negative Rate or Miss Rate                         3.60 %           4.93 %           1.09 %           6.78 %
* (FPR) False Positive Rate or Fall-Out                          2.42 %           1.40 %           0.20 %           1.83 %
* (FDR) False Discovery Rate                                     2.19 %           7.75 %           1.19 %           8.27 %
* (FOR) False Omission Rate                                      3.98 %           0.87 %           0.18 %           1.48 %
* (F1S) F1 Score                                                97.10 %          93.64 %          98.86 %          92.47 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9599467669067604 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9600918475838158 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 43680, FN: 1630, FP: 977, TN: 39374, TPR: 0.9640256014124, TNR: 0.9757874649946, PPV: 0.9781221309089, NPV: 0.9602477807043, FNR: 0.0359743985875, FPR: 0.0242125350053, FDR: 0.0218778690910, FOR: 0.0397522192956, F1S: 0.9710227083263, }, \
 {name: "brushing_t...", TP: 12179, FN: 632, FP: 1023, TN: 71827, TPR: 0.9506673952072, TNR: 0.9859574468085, PPV: 0.9225117406453, NPV: 0.9912778260809, FNR: 0.0493326047927, FPR: 0.0140425531914, FDR: 0.0774882593546, FOR: 0.0087221739190, F1S: 0.9363779648637, }, \
 {name: "hair_drying", TP: 12123, FN: 133, FP: 146, TN: 73259, TPR: 0.9891481723237, TNR: 0.9980110346706, PPV: 0.9881000896568, NPV: 0.9981878133856, FNR: 0.0108518276762, FPR: 0.0019889653293, FDR: 0.0118999103431, FOR: 0.0018121866143, F1S: 0.9886238532110, }, \
 {name: "showering", TP: 14248, FN: 1036, FP: 1285, TN: 69092, TPR: 0.9322166971996, TNR: 0.9817411938559, PPV: 0.9172729028519, NPV: 0.9852270134610, FNR: 0.0677833028003, FPR: 0.0182588061440, FDR: 0.0827270971480, FOR: 0.0147729865389, F1S: 0.9246844274264, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 97.018 %
* (F1S) F1 Score 97.058 %
* 
* Name of class                                               unlabeled   brushing_teeth      hair_drying        showering
* (TP) True Positive or Correct Positive Prediction                9981             4173             4241             3662
* (FN) False Negative or Incorrect Negative Prediction              388              136               38              116
* (FP) False Positive or Incorrect Positive Prediction              114               71               19              474
* (TN) True Negative or Correct Negative Prediction               12252            18355            18437            18483
* (TPR) True Positive Rate or Sensitivity, Recall               96.26 %          96.84 %          99.11 %          96.93 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.08 %          99.61 %          99.90 %          97.50 %
* (PPV) Positive Predictive Value or Precision                  98.87 %          98.33 %          99.55 %          88.54 %
* (NPV) Negative Predictive Value                               96.93 %          99.26 %          99.79 %          99.38 %
* (FNR) False Negative Rate or Miss Rate                         3.74 %           3.16 %           0.89 %           3.07 %
* (FPR) False Positive Rate or Fall-Out                          0.92 %           0.39 %           0.10 %           2.50 %
* (FDR) False Discovery Rate                                     1.13 %           1.67 %           0.45 %          11.46 %
* (FOR) False Omission Rate                                      3.07 %           0.74 %           0.21 %           0.62 %
* (F1S) F1 Score                                                97.55 %          97.58 %          99.33 %          92.54 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9701781394325929 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9705798985488557 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 9981, FN: 388, FP: 114, TN: 12252, TPR: 0.9625807696016, TNR: 0.9907811741872, PPV: 0.9887072808320, NPV: 0.9693037974683, FNR: 0.0374192303983, FPR: 0.0092188258127, FDR: 0.0112927191679, FOR: 0.0306962025316, F1S: 0.9754691164972, }, \
 {name: "brushing_t...", TP: 4173, FN: 136, FP: 71, TN: 18355, TPR: 0.9684381527036, TNR: 0.9961467491587, PPV: 0.9832704995287, NPV: 0.9926450705748, FNR: 0.0315618472963, FPR: 0.0038532508412, FDR: 0.0167295004712, FOR: 0.0073549294251, F1S: 0.9757979656260, }, \
 {name: "hair_drying", TP: 4241, FN: 38, FP: 19, TN: 18437, TPR: 0.9911194204253, TNR: 0.9989705244906, PPV: 0.9955399061032, NPV: 0.9979431664411, FNR: 0.0088805795746, FPR: 0.0010294755093, FDR: 0.0044600938967, FOR: 0.0020568335588, F1S: 0.9933247452863, }, \
 {name: "showering", TP: 3662, FN: 116, FP: 474, TN: 18483, TPR: 0.9692959237691, TNR: 0.9749960436777, PPV: 0.8853965183752, NPV: 0.9937631055433, FNR: 0.0307040762308, FPR: 0.0250039563222, FDR: 0.1146034816247, FOR: 0.0062368944566, F1S: 0.9254485721506, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"(unlabeled)", "brushing_teeth", "hair_drying", "showering"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0x31, 0x3f, 0xdc, 0x53, 0x02, 0x57, 0x62, 0x40, 0x86, 0x7e, 0x64, 0xae, 0x04, 0xf4, 0x05, 0xe6}

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
