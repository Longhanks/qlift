#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QSlider_new_orientation(int orientation, void *parent);
LIBRARY_API void *QSlider_new(void *parent);
LIBRARY_API void QSlider_setTickPosition(void *slider, int position);
LIBRARY_API int QSlider_tickPosition(void *slider);
LIBRARY_API void QSlider_setTickInterval(void *slider, int ti);
LIBRARY_API int QSlider_tickInterval(void *slider);

#ifdef __cplusplus
}
#endif
