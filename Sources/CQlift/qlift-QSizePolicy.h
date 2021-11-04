#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QSizePolicy_new(int horizontal, int vertical, int type);

LIBRARY_API void QSizePolicy_delete(void *sizePolicy);

#ifdef __cplusplus
}
#endif
