/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 20:41:55 UTC. Any changes will be lost.
* 
* Model ID  d6f092bc-56cc-41ab-bbd6-f356d8967430
* 
* Memory    Size                      Efficiency
* Buffers   23200 bytes (RAM)         100 %
* State     26704 bytes (RAM)         100 %
* Readonly  39264 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-medium-balanced-1
* 
* Class Index | Symbol Label
* 0           | unlabelled
* 1           | Air
* 2           | Floor
* 3           | Carpet
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
* Convolution 1D                 [50,16]         float      dequeue
*    filters = 16
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,16,16]
* Convolution 1D                 [50,16]         float      dequeue
*    filters = 16
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,16,16]
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
* Max pooling 1D                 [25,16]         float      dequeue
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
*    weight = float[3,16,32]
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
* (ACC) Accuracy 99.511 %
* (F1S) F1 Score 99.511 %
* 
* Name of class                                               unlabeled              Air           Carpet            Floor
* (TP) True Positive or Correct Positive Prediction                2898             3597             1757             2728
* (FN) False Negative or Incorrect Negative Prediction               26               27                0                1
* (FP) False Positive or Incorrect Positive Prediction                2                0               20               32
* (TN) True Negative or Correct Negative Prediction                8108             7410             9257             8273
* (TPR) True Positive Rate or Sensitivity, Recall               99.11 %          99.25 %         100.00 %          99.96 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.98 %         100.00 %          99.78 %          99.61 %
* (PPV) Positive Predictive Value or Precision                  99.93 %         100.00 %          98.87 %          98.84 %
* (NPV) Negative Predictive Value                               99.68 %          99.64 %         100.00 %          99.99 %
* (FNR) False Negative Rate or Miss Rate                         0.89 %           0.75 %           0.00 %           0.04 %
* (FPR) False Positive Rate or Fall-Out                          0.02 %           0.00 %           0.22 %           0.39 %
* (FDR) False Discovery Rate                                     0.07 %           0.00 %           1.13 %           1.16 %
* (FOR) False Omission Rate                                      0.32 %           0.36 %           0.00 %           0.01 %
* (F1S) F1 Score                                                99.52 %          99.63 %          99.43 %          99.40 %
*/


#define IMAI_TEST_AVG_ACC 0.9951060358890701 // Accuracy
#define IMAI_TEST_AVG_F1S 0.9951098069047973 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 2898, FN: 26, FP: 2, TN: 8108, TPR: 0.9911080711354, TNR: 0.9997533908754, PPV: 0.9993103448275, NPV: 0.9968035406933, FNR: 0.0088919288645, FPR: 0.0002466091245, FDR: 0.0006896551724, FOR: 0.0031964593066, F1S: 0.9951923076923, }, \
 {name: "Air", TP: 3597, FN: 27, FP: 0, TN: 7410, TPR: 0.9925496688741, TNR: 1, PPV: 1, NPV: 0.9963695038321, FNR: 0.0074503311258, FPR: 0, FDR: 0, FOR: 0.0036304961678, F1S: 0.9962609056917, }, \
 {name: "Floor", TP: 2728, FN: 1, FP: 32, TN: 8273, TPR: 0.9996335654085, TNR: 0.9961468994581, PPV: 0.9884057971014, NPV: 0.9998791394730, FNR: 0.0003664345914, FPR: 0.0038531005418, FDR: 0.0115942028985, FOR: 0.0001208605269, F1S: 0.9939879759519, }, \
 {name: "Carpet", TP: 1757, FN: 0, FP: 20, TN: 9257, TPR: 1, TNR: 0.9978441306456, PPV: 0.9887450759707, NPV: 1, FNR: 0, FPR: 0.0021558693543, FDR: 0.0112549240292, FOR: 0, F1S: 0.9943406904357, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 99.165 %
* (F1S) F1 Score 99.164 %
* 
* Name of class                                               unlabeled              Air           Carpet            Floor
* (TP) True Positive or Correct Positive Prediction                9372             6503             9088             8411
* (FN) False Negative or Incorrect Negative Prediction              179                5               94                3
* (FP) False Positive or Incorrect Positive Prediction               96               55               79               51
* (TN) True Negative or Correct Negative Prediction               24008            27092            24394            25190
* (TPR) True Positive Rate or Sensitivity, Recall               98.13 %          99.92 %          98.98 %          99.96 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.60 %          99.80 %          99.68 %          99.80 %
* (PPV) Positive Predictive Value or Precision                  98.99 %          99.16 %          99.14 %          99.40 %
* (NPV) Negative Predictive Value                               99.26 %          99.98 %          99.62 %          99.99 %
* (FNR) False Negative Rate or Miss Rate                         1.87 %           0.08 %           1.02 %           0.04 %
* (FPR) False Positive Rate or Fall-Out                          0.40 %           0.20 %           0.32 %           0.20 %
* (FDR) False Discovery Rate                                     1.01 %           0.84 %           0.86 %           0.60 %
* (FOR) False Omission Rate                                      0.74 %           0.02 %           0.38 %           0.01 %
* (F1S) F1 Score                                                98.55 %          99.54 %          99.06 %          99.68 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9916505719803892 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9916363341877125 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 9372, FN: 179, FP: 96, TN: 24008, TPR: 0.9812585069626, TNR: 0.9960172585462, PPV: 0.9898605830164, NPV: 0.9925993302187, FNR: 0.0187414930373, FPR: 0.0039827414537, FDR: 0.0101394169835, FOR: 0.0074006697812, F1S: 0.9855407750144, }, \
 {name: "Air", TP: 6503, FN: 5, FP: 55, TN: 27092, TPR: 0.9992317148125, TNR: 0.9979739934431, PPV: 0.9916132967368, NPV: 0.9998154777281, FNR: 0.0007682851874, FPR: 0.0020260065568, FDR: 0.0083867032631, FOR: 0.0001845222718, F1S: 0.9954079289759, }, \
 {name: "Floor", TP: 8411, FN: 3, FP: 51, TN: 25190, TPR: 0.9996434513905, TNR: 0.9979794778336, PPV: 0.9939730560151, NPV: 0.9998809193029, FNR: 0.0003565486094, FPR: 0.0020205221663, FDR: 0.0060269439848, FOR: 0.0001190806970, F1S: 0.9968001896183, }, \
 {name: "Carpet", TP: 9088, FN: 94, FP: 79, TN: 24394, TPR: 0.9897625789588, TNR: 0.9967719527642, PPV: 0.9913821315588, NPV: 0.9961613851682, FNR: 0.0102374210411, FPR: 0.0032280472357, FDR: 0.0086178684411, FOR: 0.0038386148317, F1S: 0.9905716932802, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 98.852 %
* (F1S) F1 Score 98.850 %
* 
* Name of class                                               unlabeled              Air           Carpet            Floor
* (TP) True Positive or Correct Positive Prediction                2164             4358             2377             2811
* (FN) False Negative or Incorrect Negative Prediction               57                8               10               61
* (FP) False Positive or Incorrect Positive Prediction               11               75               28               22
* (TN) True Negative or Correct Negative Prediction                9614             7405             9431             8952
* (TPR) True Positive Rate or Sensitivity, Recall               97.43 %          99.82 %          99.58 %          97.88 %
* (TNR) True Negative Rate or Specificity, Selectivity          99.89 %          99.00 %          99.70 %          99.75 %
* (PPV) Positive Predictive Value or Precision                  99.49 %          98.31 %          98.84 %          99.22 %
* (NPV) Negative Predictive Value                               99.41 %          99.89 %          99.89 %          99.32 %
* (FNR) False Negative Rate or Miss Rate                         2.57 %           0.18 %           0.42 %           2.12 %
* (FPR) False Positive Rate or Fall-Out                          0.11 %           1.00 %           0.30 %           0.25 %
* (FDR) False Discovery Rate                                     0.51 %           1.69 %           1.16 %           0.78 %
* (FOR) False Omission Rate                                      0.59 %           0.11 %           0.11 %           0.68 %
* (F1S) F1 Score                                                98.45 %          99.06 %          99.21 %          98.55 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.9885193314198886 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.9884980494915225 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 2164, FN: 57, FP: 11, TN: 9614, TPR: 0.9743358847366, TNR: 0.9988571428571, PPV: 0.9949425287356, NPV: 0.9941060903732, FNR: 0.0256641152633, FPR: 0.0011428571428, FDR: 0.0050574712643, FOR: 0.0058939096267, F1S: 0.9845313921747, }, \
 {name: "Air", TP: 4358, FN: 8, FP: 75, TN: 7405, TPR: 0.9981676591846, TNR: 0.9899732620320, PPV: 0.9830814346943, NPV: 0.9989208147848, FNR: 0.0018323408153, FPR: 0.0100267379679, FDR: 0.0169185653056, FOR: 0.0010791852151, F1S: 0.9905671098988, }, \
 {name: "Floor", TP: 2811, FN: 61, FP: 22, TN: 8952, TPR: 0.9787604456824, TNR: 0.9975484733675, PPV: 0.9922343805153, NPV: 0.9932319982247, FNR: 0.0212395543175, FPR: 0.0024515266324, FDR: 0.0077656194846, FOR: 0.0067680017752, F1S: 0.9854513584574, }, \
 {name: "Carpet", TP: 2377, FN: 10, FP: 28, TN: 9431, TPR: 0.9958106409719, TNR: 0.9970398562215, PPV: 0.9883575883575, NPV: 0.9989407901705, FNR: 0.0041893590280, FPR: 0.0029601437784, FDR: 0.0116424116424, FOR: 0.0010592098294, F1S: 0.9920701168614, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"unlabelled", "Air", "Floor", "Carpet"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0xbc, 0x92, 0xf0, 0xd6, 0xcc, 0x56, 0xab, 0x41, 0xbb, 0xd6, 0xf3, 0x56, 0xd8, 0x96, 0x74, 0x30}

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
