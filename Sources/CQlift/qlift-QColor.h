//
//  qlift-QColor.h
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QColor_new();
LIBRARY_API void QColor_delete(void *color);
LIBRARY_API void *QColor_new_color(const void *color);
LIBRARY_API void *QColor_new_name(const char *name);
LIBRARY_API void *QColor_new_rgba(int r, int g, int b, int a);
LIBRARY_API void QColor_setNamedColor(void *color, const char *name);
LIBRARY_API void QColor_setRgb(void *color, int r, int g, int b, int a);

#ifdef __cplusplus
}
#endif
