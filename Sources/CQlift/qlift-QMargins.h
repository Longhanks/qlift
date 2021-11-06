#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QMargins_new(int left, int top, int right, int bottom);

LIBRARY_API void QMargins_delete(void *margins);

#ifdef __cplusplus
}
#endif
