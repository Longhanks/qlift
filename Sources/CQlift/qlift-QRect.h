#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QRect_new(int x, int y, int width, int height);

LIBRARY_API void QRect_delete(void *rect);

LIBRARY_API int QRect_x(void *rect);

LIBRARY_API int QRect_y(void *rect);

LIBRARY_API void QRect_setX(void *rect, int x);

LIBRARY_API void QRect_setY(void *rect, int y);

LIBRARY_API int QRect_height(void *rect);

LIBRARY_API int QRect_width(void *rect);

LIBRARY_API void QRect_setHeight(void *rect, int height);

LIBRARY_API void QRect_setWidth(void *rect, int width);

LIBRARY_API void *QRect_center(void *rect);

LIBRARY_API void QRect_moveCenter(void *rect, void *pos);

LIBRARY_API int QRect_bottom(void *rect);

LIBRARY_API void QRect_setBottom(void *rect, int y);

LIBRARY_API void QRect_moveBottom(void *rect, int y);

LIBRARY_API void *QRect_bottomLeft(void *rect);

LIBRARY_API void QRect_setBottomLeft(void *rect, void *pos);

LIBRARY_API void QRect_moveBottomLeft(void *rect, void *pos);

LIBRARY_API int QRect_left(void *rect);

LIBRARY_API void QRect_setLeft(void *rect, int x);

LIBRARY_API void QRect_moveLeft(void *rect, int x);

LIBRARY_API void *QRect_topLeft(void *rect);

LIBRARY_API void QRect_setTopLeft(void *rect, void *pos);

LIBRARY_API void QRect_moveTopLeft(void *rect, void *pos);

LIBRARY_API int QRect_top(void *rect);

LIBRARY_API void QRect_setTop(void *rect, int y);

LIBRARY_API void QRect_moveTop(void *rect, int y);

LIBRARY_API void *QRect_topRight(void *rect);

LIBRARY_API void QRect_setTopRight(void *rect, void *pos);

LIBRARY_API void QRect_moveTopRight(void *rect, void *pos);

LIBRARY_API int QRect_right(void *rect);

LIBRARY_API void QRect_setRight(void *rect, int x);

LIBRARY_API void QRect_moveRight(void *rect, int x);

LIBRARY_API void *QRect_bottomRight(void *rect);

LIBRARY_API void QRect_setBottomRight(void *rect, void *pos);

LIBRARY_API void QRect_moveBottomRight(void *rect, void *pos);

#ifdef __cplusplus
}
#endif
