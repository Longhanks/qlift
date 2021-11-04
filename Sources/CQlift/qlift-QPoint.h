#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QPoint_new(int x, int y);

LIBRARY_API void QPoint_delete(void *point);

LIBRARY_API bool QPoint_isNull(void *point);

LIBRARY_API int QPoint_manhattanLength(void *point);

LIBRARY_API int QPoint_x(void *point);

LIBRARY_API int QPoint_y(void *point);

LIBRARY_API void QPoint_setX(void *point, int x);

LIBRARY_API void QPoint_setY(void *point, int y);

LIBRARY_API bool QPoint_equal(void *p1, void *p2);

LIBRARY_API bool QPoint_unequal(void *p1, void *p2);

LIBRARY_API void *QPoint_add(void *p1, void *p2);

LIBRARY_API void *QPoint_substract(void *p1, void *p2);

#ifdef __cplusplus
}
#endif
