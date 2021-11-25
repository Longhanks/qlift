#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void QMouseEvent_delete(void *mouseEvent);
LIBRARY_API int QMouseEvent_button(void *mouseEvent);

LIBRARY_API int QMouseEvent_button(void *mouseEvent);
LIBRARY_API int QMouseEvent_buttons(void *mouseEvent);
LIBRARY_API int QMouseEvent_flags(void *mouseEvent);
LIBRARY_API int QMouseEvent_source(void *mouseEvent);
LIBRARY_API int QMouseEvent_globalX(void *mouseEvent);
LIBRARY_API int QMouseEvent_globalY(void *mouseEvent);
LIBRARY_API int QMouseEvent_x(void *mouseEvent);
LIBRARY_API int QMouseEvent_y(void *mouseEvent);
LIBRARY_API void *QMouseEvent_globalPos(void *mouseEvent);
LIBRARY_API void *QMouseEvent_pos(void *mouseEvent);
LIBRARY_API void *QMouseEvent_localPos(void *mouseEvent);
LIBRARY_API void *QMouseEvent_screenPos(void *mouseEvent);
LIBRARY_API void *QMouseEvent_windowPos(void *mouseEvent);

#ifdef __cplusplus
}
#endif
