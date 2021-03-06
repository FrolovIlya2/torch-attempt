#define TH_TENSOR_APPLY(self, code)               \
  {                                               \
    real *self##_data = THTensor_(data)(self);    \
    long self##_size = THTensor_(nElement)(self); \
    int i;                                        \
                                                  \
    for(i = 0; i < self##_size; i++)              \
    {                                             \
      code                                        \
    }                                             \
  }

#define TH_TENSOR_APPLY2(self, tensor, code)                            \
  {                                                                     \
    real *self##_data = THTensor_(data)(self);                          \
    long self##_size = THTensor_(nElement)(self);                       \
    real *tensor##_data = THTensor_(data)(tensor);                      \
    long tensor##_size = THTensor_(nElement)(tensor);                   \
    int i;                                                              \
                                                                        \
    THArgCheck(self##_size == tensor##_size, 1, "inconsistent tensor sizes"); \
    for(i = 0; i < self##_size; i++)                                    \
    {                                                                   \
      code                                                              \
    }                                                                   \
  }                                                                     \

#define TH_TENSOR_APPLY3(self, tensor1, tensor2, code)                  \
  {                                                                     \
    real *self##_data = THTensor_(data)(self);                          \
    long self##_size = THTensor_(nElement)(self);                       \
    real *tensor1##_data = THTensor_(data)(tensor1);                    \
    long tensor1##_size = THTensor_(nElement)(tensor1);                 \
    real *tensor2##_data = THTensor_(data)(tensor2);                    \
    long tensor2##_size = THTensor_(nElement)(tensor2);                 \
    int i;                                                              \
                                                                        \
    THArgCheck(self##_size == tensor1##_size, 1, "inconsistent tensor sizes"); \
    THArgCheck(self##_size == tensor2##_size, 1, "inconsistent tensor sizes"); \
    for(i = 0; i < self##_size; i++)                                    \
    {                                                                   \
      code                                                              \
    }                                                                   \
  }                                                                     \

