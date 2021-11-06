#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QSize_new(int width, int height);

LIBRARY_API void QSize_delete(void *size);

LIBRARY_API int QSize_width(void *size);

LIBRARY_API int QSize_height(void *size);

LIBRARY_API void QSize_setWidth(void *size, int width);

LIBRARY_API void QSize_setHeight(void *size, int height);

#ifdef __cplusplus
}
#endif
