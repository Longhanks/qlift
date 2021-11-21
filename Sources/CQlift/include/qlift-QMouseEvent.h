#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void QMouseEvent_delete(void *mouseEvent);

LIBRARY_API int QMouseEvent_button(void *mouseEvent);

#ifdef __cplusplus
}
#endif
