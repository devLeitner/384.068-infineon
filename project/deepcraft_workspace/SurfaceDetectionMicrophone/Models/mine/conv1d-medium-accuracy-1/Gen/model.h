/*
* DEEPCRAFT Studio 5.9.4563.0+34bdb7f4372a1120ca38a0cb02e62db5b4b78270
* Copyright © 2023- Imagimob AB, All Rights Reserved.
* 
* Generated at 02/21/2026 21:35:53 UTC. Any changes will be lost.
* 
* Model ID  3c962bd6-ad17-4c98-a3c8-2a39f4532ff0
* 
* Memory    Size                      Efficiency
* Buffers   19200 bytes (RAM)         100 %
* State     19592 bytes (RAM)         100 %
* Readonly  45324 bytes (Flash)       100 %
* 
* Backend              tensorflow
* Keras Version        2.15.0
* Backend Model Type   Sequential
* Backend Model Name   conv1d-medium-accuracy-1
* 
* Class Index | Symbol Label
* 0           | (unlabeled)
* 1           | brushing_teeth
* 2           | hair_drying
* 3           | showering
* 4           | air
* 5           | plastic
* 6           | plastic_out
* 7           | wood
* 8           | wood_out
* 
* Layer                          Shape           Type       Function
* Sliding Window (data points)   [512]           float      dequeue
*    window_shape = [512]
*    stride = 160
*    buffer_multiplier = 1
* Hamming smoothing              [512]           float      dequeue
*    sym = True
* Real Discrete Fourier Transform [257,2]         float      dequeue
*    axis = 0
* Frobenius norm                 [257]           float      dequeue
*    axis = 0
* Mel Filterbank                 [40]            float      dequeue
*    num_filters = 40
*    sample_rate = 16000
*    f_low = 300
*    f_high = 8000
* Add Constant                   [40]            float      dequeue
*    A = 1
* Logarithm                      [40]            float      dequeue
* Clip                           [40]            float      dequeue
*    min = 0
*    max = 4
* Imagimob Speech Features       [40]            float      dequeue
*    output_freq = 100
*    output_features = 40
*    low_cut_freq = 300
*    high_cut_freq = 8000
* Sliding Window (data points)   [100,40]        float      dequeue
*    window_shape = [100,40]
*    stride = 560
*    buffer_multiplier = 1
* Contextual Window (Sliding Window) [100,40]        float      dequeue
*    contextual_length_sec = 1
*    prediction_freq = 7
* Input Layer                    [100,40]        float      dequeue
*    shape = [100,40]
* Convolution 1D                 [50,16]         float      dequeue
*    filters = 16
*    kernel_size = 5
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[5,40,16]
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
* Convolution 1D                 [25,16]         float      dequeue
*    filters = 16
*    kernel_size = 5
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[5,16,16]
* Batch Normalization            [25,16]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[16]
*    beta = float[16]
*    mean = float[16]
*    variance = float[16]
* Activation                     [25,16]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [13,16]         float      dequeue
*    filters = 16
*    kernel_size = 5
*    dilation_rate = 1
*    strides = 2
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[5,16,16]
* Batch Normalization            [13,16]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[16]
*    beta = float[16]
*    mean = float[16]
*    variance = float[16]
* Activation                     [13,16]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [13,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,16,32]
* Batch Normalization            [13,32]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [13,32]         float      dequeue
*    activation = relu
*    trainable = True
* Convolution 1D                 [13,32]         float      dequeue
*    filters = 32
*    kernel_size = 3
*    dilation_rate = 1
*    strides = 1
*    padding = same
*    activation = linear
*    use_bias = False
*    trainable = True
*    weight = float[3,32,32]
* Batch Normalization            [13,32]         float      dequeue
*    epsilon = 0.001
*    trainable = True
*    scale = True
*    center = True
*    axis = 2
*    gamma = float[32]
*    beta = float[32]
*    mean = float[32]
*    variance = float[32]
* Activation                     [13,32]         float      dequeue
*    activation = relu
*    trainable = True
* Max pooling 1D                 [6,32]          float      dequeue
*    pool_size = 2
*    strides = 2
*    padding = valid
*    trainable = True
* Global average pooling 1D      [32]            float      dequeue
*    trainable = True
* Dense                          [9]             float      dequeue
*    units = 9
*    use_bias = True
*    activation = linear
*    trainable = True
*    weight = float[32,9]
*    bias = float[9]
* Activation                     [9]             float      dequeue
*    activation = softmax
*    trainable = True
* 
* Exported functions:
* 
* int IMAI_dequeue(float *restrict data_out)
*    Description: Dequeue features. RET_SUCCESS (0) on success, RET_NODATA (-1) if no data is available, RET_NOMEM (-2) on internal memory error
*    Parameter data_out is Output of size float[9].
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
* (ACC) Accuracy 89.334 %
* (F1S) F1 Score 89.535 %
* 
* Name of class                                               unlabeled              air   brushing_teeth      hair_drying          plastic      plastic_out        showering             wood         wood_out
* (TP) True Positive or Correct Positive Prediction                8800              171             1297             2454               97                0             1810              548                0
* (FN) False Negative or Incorrect Negative Prediction             1274              103               47               14              336               15                1                6               16
* (FP) False Positive or Incorrect Positive Prediction               79                2               74               24               45                0             1204              384                0
* (TN) True Negative or Correct Negative Prediction                6836            16713            15571            14497            16511            16974            13974            16051            16973
* (TPR) True Positive Rate or Sensitivity, Recall               87.35 %          62.41 %          96.50 %          99.43 %          22.40 %           0.00 %          99.94 %          98.92 %           0.00 %
* (TNR) True Negative Rate or Specificity, Selectivity          98.86 %          99.99 %          99.53 %          99.83 %          99.73 %         100.00 %          92.07 %          97.66 %         100.00 %
* (PPV) Positive Predictive Value or Precision                  99.11 %          98.84 %          94.60 %          99.03 %          68.31 %         100.00 %          60.05 %          58.80 %         100.00 %
* (NPV) Negative Predictive Value                               84.29 %          99.39 %          99.70 %          99.90 %          98.01 %          99.91 %          99.99 %          99.96 %          99.91 %
* (FNR) False Negative Rate or Miss Rate                        12.65 %          37.59 %           3.50 %           0.57 %          77.60 %         100.00 %           0.06 %           1.08 %         100.00 %
* (FPR) False Positive Rate or Fall-Out                          1.14 %           0.01 %           0.47 %           0.17 %           0.27 %           0.00 %           7.93 %           2.34 %           0.00 %
* (FDR) False Discovery Rate                                     0.89 %           1.16 %           5.40 %           0.97 %          31.69 %         100.00 %          39.95 %          41.20 %         100.00 %
* (FOR) False Omission Rate                                     15.71 %           0.61 %           0.30 %           0.10 %           1.99 %           0.09 %           0.01 %           0.04 %           0.09 %
* (F1S) F1 Score                                                92.86 %          76.51 %          95.54 %          99.23 %          33.74 %           0.00 %          75.03 %          73.76 %           0.00 %
*/


#define IMAI_TEST_AVG_ACC 0.8933427511919477 // Accuracy
#define IMAI_TEST_AVG_F1S 0.8953461899734537 // F1 Score

#define IMAI_TEST_STATS { \
 {name: "unlabeled", TP: 8800, FN: 1274, FP: 79, TN: 6836, TPR: 0.8735358348223, TNR: 0.9885755603759, PPV: 0.9911026016443, NPV: 0.8429099876695, FNR: 0.1264641651776, FPR: 0.0114244396240, FDR: 0.0088973983556, FOR: 0.1570900123304, F1S: 0.9286128845037, }, \
 {name: "brushing_t...", TP: 1297, FN: 47, FP: 74, TN: 15571, TPR: 0.9650297619047, TNR: 0.9952700543304, PPV: 0.9460247994164, NPV: 0.9969906518120, FNR: 0.0349702380952, FPR: 0.0047299456695, FDR: 0.0539752005835, FOR: 0.0030093481879, F1S: 0.9554327808471, }, \
 {name: "hair_drying", TP: 2454, FN: 14, FP: 24, TN: 14497, TPR: 0.9943273905996, TNR: 0.9983472212657, PPV: 0.9903147699757, NPV: 0.9990352146647, FNR: 0.0056726094003, FPR: 0.0016527787342, FDR: 0.0096852300242, FOR: 0.0009647853352, F1S: 0.9923170238576, }, \
 {name: "showering", TP: 1810, FN: 1, FP: 1204, TN: 13974, TPR: 0.9994478188845, TNR: 0.9206746606931, PPV: 0.6005308560053, NPV: 0.9999284436493, FNR: 0.0005521811154, FPR: 0.0793253393068, FDR: 0.3994691439946, FOR: 7.1556350626118, F1S: 0.7502590673575, }, \
 {name: "air", TP: 171, FN: 103, FP: 2, TN: 16713, TPR: 0.6240875912408, TNR: 0.9998803469937, PPV: 0.9884393063583, NPV: 0.9938748810656, FNR: 0.3759124087591, FPR: 0.0001196530062, FDR: 0.0115606936416, FOR: 0.0061251189343, F1S: 0.7651006711409, }, \
 {name: "plastic", TP: 97, FN: 336, FP: 45, TN: 16511, TPR: 0.2240184757505, TNR: 0.9972819521623, PPV: 0.6830985915492, NPV: 0.9800557962842, FNR: 0.7759815242494, FPR: 0.0027180478376, FDR: 0.3169014084507, FOR: 0.0199442037157, F1S: 0.3373913043478, }, \
 {name: "plastic_out", TP: 0, FN: 15, FP: 0, TN: 16974, TPR: 0, TNR: 1, PPV: 1, NPV: 0.9991170757549, FNR: 1, FPR: 0, FDR: 1, FOR: 0.0008829242450, F1S: 0, }, \
 {name: "wood", TP: 548, FN: 6, FP: 384, TN: 16051, TPR: 0.9891696750902, TNR: 0.9766352296927, PPV: 0.5879828326180, NPV: 0.9996263311951, FNR: 0.0108303249097, FPR: 0.0233647703072, FDR: 0.4120171673819, FOR: 0.0003736688048, F1S: 0.7375504710632, }, \
 {name: "wood_out", TP: 0, FN: 16, FP: 0, TN: 16973, TPR: 0, TNR: 1, PPV: 1, NPV: 0.9990582141385, FNR: 1, FPR: 0, FDR: 1, FOR: 0.0009417858614, F1S: 0, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_test_stats[] = IMAI_TEST_STATS;
#endif

/*
* Tensorflow Train Set
* 
* (ACC) Accuracy 94.411 %
* (F1S) F1 Score 93.857 %
* 
* Name of class                                               unlabeled              air   brushing_teeth      hair_drying          plastic      plastic_out        showering             wood         wood_out
* (TP) True Positive or Correct Positive Prediction               23720              842             6011             5277              118                0             7826             1783                0
* (FN) False Negative or Incorrect Negative Prediction             1266              179                7               39              960               52              134               22               39
* (FP) False Positive or Incorrect Positive Prediction              238               26              372               57              138                0              843             1024                0
* (TN) True Negative or Correct Negative Prediction               23051            47228            41885            42902            47059            48223            39472            45446            48236
* (TPR) True Positive Rate or Sensitivity, Recall               94.93 %          82.47 %          99.88 %          99.27 %          10.95 %           0.00 %          98.32 %          98.78 %           0.00 %
* (TNR) True Negative Rate or Specificity, Selectivity          98.98 %          99.94 %          99.12 %          99.87 %          99.71 %         100.00 %          97.91 %          97.80 %         100.00 %
* (PPV) Positive Predictive Value or Precision                  99.01 %          97.00 %          94.17 %          98.93 %          46.09 %         100.00 %          90.28 %          63.52 %         100.00 %
* (NPV) Negative Predictive Value                               94.79 %          99.62 %          99.98 %          99.91 %          98.00 %          99.89 %          99.66 %          99.95 %          99.92 %
* (FNR) False Negative Rate or Miss Rate                         5.07 %          17.53 %           0.12 %           0.73 %          89.05 %         100.00 %           1.68 %           1.22 %         100.00 %
* (FPR) False Positive Rate or Fall-Out                          1.02 %           0.06 %           0.88 %           0.13 %           0.29 %           0.00 %           2.09 %           2.20 %           0.00 %
* (FDR) False Discovery Rate                                     0.99 %           3.00 %           5.83 %           1.07 %          53.91 %         100.00 %           9.72 %          36.48 %         100.00 %
* (FOR) False Omission Rate                                      5.21 %           0.38 %           0.02 %           0.09 %           2.00 %           0.11 %           0.34 %           0.05 %           0.08 %
* (F1S) F1 Score                                                96.93 %          89.15 %          96.94 %          99.10 %          17.69 %           0.00 %          94.12 %          77.32 %           0.00 %
*/


#define IMAI_TRAIN_AVG_ACC 0.9441118591403418 // Accuracy
#define IMAI_TRAIN_AVG_F1S 0.9385650360888174 // F1 Score

#define IMAI_TRAIN_STATS { \
 {name: "unlabeled", TP: 23720, FN: 1266, FP: 238, TN: 23051, TPR: 0.9493316257103, TNR: 0.9897805831079, PPV: 0.9900659487436, NPV: 0.9479376567833, FNR: 0.0506683742896, FPR: 0.0102194168920, FDR: 0.0099340512563, FOR: 0.0520623432166, F1S: 0.9692710035959, }, \
 {name: "brushing_t...", TP: 6011, FN: 7, FP: 372, TN: 41885, TPR: 0.9988368228647, TNR: 0.9911967248029, PPV: 0.9417201942660, NPV: 0.9998329036570, FNR: 0.0011631771352, FPR: 0.0088032751970, FDR: 0.0582798057339, FOR: 0.0001670963429, F1S: 0.9694379485525, }, \
 {name: "hair_drying", TP: 5277, FN: 39, FP: 57, TN: 42902, TPR: 0.9926636568848, TNR: 0.9986731534719, PPV: 0.9893138357705, NPV: 0.9990917770894, FNR: 0.0073363431151, FPR: 0.0013268465280, FDR: 0.0106861642294, FOR: 0.0009082229105, F1S: 0.9909859154929, }, \
 {name: "showering", TP: 7826, FN: 134, FP: 843, TN: 39472, TPR: 0.9831658291457, TNR: 0.9790896688577, PPV: 0.9027569500519, NPV: 0.9966166742412, FNR: 0.0168341708542, FPR: 0.0209103311422, FDR: 0.0972430499480, FOR: 0.0033833257587, F1S: 0.9412472187142, }, \
 {name: "air", TP: 842, FN: 179, FP: 26, TN: 47228, TPR: 0.8246816846229, TNR: 0.9994497820290, PPV: 0.9700460829493, NPV: 0.9962241863016, FNR: 0.1753183153770, FPR: 0.0005502179709, FDR: 0.0299539170506, FOR: 0.0037758136983, F1S: 0.8914769719428, }, \
 {name: "plastic", TP: 118, FN: 960, FP: 138, TN: 47059, TPR: 0.1094619666048, TNR: 0.9970760853444, PPV: 0.4609375, NPV: 0.9800079135342, FNR: 0.8905380333951, FPR: 0.0029239146555, FDR: 0.5390625, FOR: 0.0199920864657, F1S: 0.1769115442278, }, \
 {name: "plastic_out", TP: 0, FN: 52, FP: 0, TN: 48223, TPR: 0, TNR: 1, PPV: 1, NPV: 0.9989228379078, FNR: 1, FPR: 0, FDR: 1, FOR: 0.0010771620921, F1S: 0, }, \
 {name: "wood", TP: 1783, FN: 22, FP: 1024, TN: 45446, TPR: 0.9878116343490, TNR: 0.9779642780288, PPV: 0.6351977199857, NPV: 0.9995161432216, FNR: 0.0121883656509, FPR: 0.0220357219711, FDR: 0.3648022800142, FOR: 0.0004838567783, F1S: 0.7732003469210, }, \
 {name: "wood_out", TP: 0, FN: 39, FP: 0, TN: 48236, TPR: 0, TNR: 1, PPV: 1, NPV: 0.9991921284308, FNR: 1, FPR: 0, FDR: 1, FOR: 0.0008078715691, F1S: 0, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_train_stats[] = IMAI_TRAIN_STATS;
#endif

/*
* Tensorflow Validation Set
* 
* (ACC) Accuracy 89.281 %
* (F1S) F1 Score 88.955 %
* 
* Name of class                                               unlabeled              air   brushing_teeth      hair_drying          plastic      plastic_out        showering             wood         wood_out
* (TP) True Positive or Correct Positive Prediction                8778              234             2439             1902               56                0             1856              511                0
* (FN) False Negative or Incorrect Negative Prediction              663              113              261                0              465               14              338               25               15
* (FP) False Positive or Incorrect Positive Prediction              395                1               68                6               58                0              832              534                0
* (TN) True Negative or Correct Negative Prediction                7834            17322            14902            15762            17091            17656            14644            16600            17655
* (TPR) True Positive Rate or Sensitivity, Recall               92.98 %          67.44 %          90.33 %         100.00 %          10.75 %           0.00 %          84.59 %          95.34 %           0.00 %
* (TNR) True Negative Rate or Specificity, Selectivity          95.20 %          99.99 %          99.55 %          99.96 %          99.66 %         100.00 %          94.62 %          96.88 %         100.00 %
* (PPV) Positive Predictive Value or Precision                  95.69 %          99.57 %          97.29 %          99.69 %          49.12 %         100.00 %          69.05 %          48.90 %         100.00 %
* (NPV) Negative Predictive Value                               92.20 %          99.35 %          98.28 %         100.00 %          97.35 %          99.92 %          97.74 %          99.85 %          99.92 %
* (FNR) False Negative Rate or Miss Rate                         7.02 %          32.56 %           9.67 %           0.00 %          89.25 %         100.00 %          15.41 %           4.66 %         100.00 %
* (FPR) False Positive Rate or Fall-Out                          4.80 %           0.01 %           0.45 %           0.04 %           0.34 %           0.00 %           5.38 %           3.12 %           0.00 %
* (FDR) False Discovery Rate                                     4.31 %           0.43 %           2.71 %           0.31 %          50.88 %         100.00 %          30.95 %          51.10 %         100.00 %
* (FOR) False Omission Rate                                      7.80 %           0.65 %           1.72 %           0.00 %           2.65 %           0.08 %           2.26 %           0.15 %           0.08 %
* (F1S) F1 Score                                                94.32 %          80.41 %          93.68 %          99.84 %          17.64 %           0.00 %          76.03 %          64.64 %           0.00 %
*/


#define IMAI_VALIDATION_AVG_ACC 0.8928126768534239 // Accuracy
#define IMAI_VALIDATION_AVG_F1S 0.889552596519838 // F1 Score

#define IMAI_VALIDATION_STATS { \
 {name: "unlabeled", TP: 8778, FN: 663, FP: 395, TN: 7834, TPR: 0.9297743883063, TNR: 0.9519990278284, PPV: 0.9569388422544, NPV: 0.9219724608685, FNR: 0.0702256116936, FPR: 0.0480009721715, FDR: 0.0430611577455, FOR: 0.0780275391314, F1S: 0.9431610615665, }, \
 {name: "brushing_t...", TP: 2439, FN: 261, FP: 68, TN: 14902, TPR: 0.9033333333333, TNR: 0.9954575818303, PPV: 0.9728759473474, NPV: 0.9827870474180, FNR: 0.0966666666666, FPR: 0.0045424181696, FDR: 0.0271240526525, FOR: 0.0172129525819, F1S: 0.9368158248511, }, \
 {name: "hair_drying", TP: 1902, FN: 0, FP: 6, TN: 15762, TPR: 1, TNR: 0.9996194824961, PPV: 0.9968553459119, NPV: 1, FNR: 0, FPR: 0.0003805175038, FDR: 0.0031446540880, FOR: 0, F1S: 0.9984251968503, }, \
 {name: "showering", TP: 1856, FN: 338, FP: 832, TN: 14644, TPR: 0.8459434822242, TNR: 0.9462393383303, PPV: 0.6904761904761, NPV: 0.9774395941796, FNR: 0.1540565177757, FPR: 0.0537606616696, FDR: 0.3095238095238, FOR: 0.0225604058203, F1S: 0.7603441212617, }, \
 {name: "air", TP: 234, FN: 113, FP: 1, TN: 17322, TPR: 0.6743515850144, TNR: 0.9999422732783, PPV: 0.9957446808510, NPV: 0.9935187840550, FNR: 0.3256484149855, FPR: 5.7726721699474, FDR: 0.0042553191489, FOR: 0.0064812159449, F1S: 0.8041237113402, }, \
 {name: "plastic", TP: 56, FN: 465, FP: 58, TN: 17091, TPR: 0.1074856046065, TNR: 0.9966178785935, PPV: 0.4912280701754, NPV: 0.9735133287764, FNR: 0.8925143953934, FPR: 0.0033821214064, FDR: 0.5087719298245, FOR: 0.0264866712235, F1S: 0.1763779527559, }, \
 {name: "plastic_out", TP: 0, FN: 14, FP: 0, TN: 17656, TPR: 0, TNR: 1, PPV: 1, NPV: 0.9992076966610, FNR: 1, FPR: 0, FDR: 1, FOR: 0.0007923033389, F1S: 0, }, \
 {name: "wood", TP: 511, FN: 25, FP: 534, TN: 16600, TPR: 0.9533582089552, TNR: 0.9688338975137, PPV: 0.4889952153110, NPV: 0.9984962406015, FNR: 0.0466417910447, FPR: 0.0311661024862, FDR: 0.5110047846889, FOR: 0.0015037593984, F1S: 0.6464263124604, }, \
 {name: "wood_out", TP: 0, FN: 15, FP: 0, TN: 17655, TPR: 0, TNR: 1, PPV: 1, NPV: 0.9991511035653, FNR: 1, FPR: 0, FDR: 1, FOR: 0.0008488964346, F1S: 0, }, \
}

#ifdef IMAI_STATS_ENABLED
static const IMAI_stats IMAI_validation_stats[] = IMAI_VALIDATION_STATS;
#endif

#define IMAI_API_QUEUE

// All symbols in order
#define IMAI_SYMBOL_MAP {"(unlabeled)", "brushing_teeth", "hair_drying", "showering", "air", "plastic", "plastic_out", "wood", "wood_out"}

// Model GUID (16 bytes)
#define IMAI_MODEL_ID {0xd6, 0x2b, 0x96, 0x3c, 0x17, 0xad, 0x98, 0x4c, 0xa3, 0xc8, 0x2a, 0x39, 0xf4, 0x53, 0x2f, 0xf0}

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

// data_out [9] (36 bytes)
#define IMAI_DATA_OUT_COUNT (9)
#define IMAI_DATA_OUT_TYPE float
#define IMAI_DATA_OUT_TYPE_ID IMAGINET_TYPES_FLOAT32
#define IMAI_DATA_OUT_SCALE (1)
#define IMAI_DATA_OUT_OFFSET (0)
#define IMAI_DATA_OUT_IS_QUANTIZED (0)

#define IMAI_KEY_MAX (62)



// Return codes
#define IMAI_RET_SUCCESS 0
#define IMAI_RET_NODATA -1
#define IMAI_RET_NOMEM -2

// Exported methods
int IMAI_dequeue(float *restrict data_out);
int IMAI_enqueue(const float *restrict data_in);
void IMAI_init(void);

#endif /* _IMAI_MODEL_H_ */
