#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QProgressBar_new(void *parent);
LIBRARY_API int QProgressBar_value(void *progressBar);
LIBRARY_API void QProgressBar_setValue(void *progressBar, int value);
LIBRARY_API int QProgressBar_minimum(void *progressBar);
LIBRARY_API void QProgressBar_setMinimum(void *progressBar, int min);
LIBRARY_API int QProgressBar_maximum(void *progressBar);
LIBRARY_API void QProgressBar_setMaximum(void *progressBar, int max);
LIBRARY_API const ushort *QProgressBar_format(void *progressBar, int *len);
LIBRARY_API void QProgressBar_setFormat(void *progressBar, const char *format);
LIBRARY_API bool QProgressBar_isTextVisible(void *progressBar);
LIBRARY_API void QProgressBar_setTextVisible(void *progressBar, bool visible);
LIBRARY_API int QProgressBar_orientation(void *progressBar);
LIBRARY_API void QProgressBar_setOrientation(void *progressBar, int orientation);

#ifdef __cplusplus
}
#endif
