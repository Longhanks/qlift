#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QSpinBox_new(void *parent);

LIBRARY_API int QSpinBox_value(void *spinBox);

LIBRARY_API void QSpinBox_setValue(void *spinBox, int value);

LIBRARY_API int QSpinBox_minimum(void *spinBox);

LIBRARY_API void QSpinBox_setMinimum(void *spinBox, int min);

LIBRARY_API int QSpinBox_maximum(void *spinBox);

LIBRARY_API void QSpinBox_setMaximum(void *spinBox, int max);

#ifdef __cplusplus
}
#endif
