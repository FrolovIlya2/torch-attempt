#ifndef TH_TENSOR_INC
#define TH_TENSOR_INC

#include "THStorage.h"

#define THTensor          TH_CONCAT_3(TH,Real,Tensor)
#define THTensor_(NAME)   TH_CONCAT_4(TH,Real,Tensor_,NAME)

#include "generic/THTensor.h"
#include "THGenerateAllTypes.h"

#endif
