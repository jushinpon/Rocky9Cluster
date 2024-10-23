#define GIT_SUMM v2.2.8
#define GIT_HASH b875ea8f
#define GIT_BRANCH master
#define GIT_DATE 2024-01-22 22:28:58 -0500
#define DEEPMD_ROOT /opt/deepmd_lammpslib
#define TensorFlow_INCLUDE_DIRS /opt/anaconda3/lib/python3.11/site-packages/tensorflow/include;/opt/anaconda3/lib/python3.11/site-packages/tensorflow/include
#define TensorFlow_LIBRARY /opt/anaconda3/lib/python3.11/site-packages/tensorflow/libtensorflow_cc.so.2
#define DPMD_CVT_STR(...) #__VA_ARGS__
#define DPMD_CVT_ASSTR(X) DPMD_CVT_STR(X)
#define STR_GIT_SUMM DPMD_CVT_ASSTR(GIT_SUMM)
#define STR_GIT_HASH DPMD_CVT_ASSTR(GIT_HASH)
#define STR_GIT_BRANCH DPMD_CVT_ASSTR(GIT_BRANCH)
#define STR_GIT_DATE DPMD_CVT_ASSTR(GIT_DATE)
#define STR_FLOAT_PREC DPMD_CVT_ASSTR(FLOAT_PREC)
#define STR_DEEPMD_ROOT DPMD_CVT_ASSTR(DEEPMD_ROOT)
#define STR_TensorFlow_INCLUDE_DIRS DPMD_CVT_ASSTR(TensorFlow_INCLUDE_DIRS)
#define STR_TensorFlow_LIBRARY DPMD_CVT_ASSTR(TensorFlow_LIBRARY)
