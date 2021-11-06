//
//  qlift-QBrush.h
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QBrush_new();
LIBRARY_API void QBrush_delete(void *brush);
LIBRARY_API void *QBrush_new_brush(const void *brush);
LIBRARY_API void *QBrush_new_pixmap(const void *pixmap);
LIBRARY_API void *QBrush_new_color_pixmap(const void *color, const void *pixmap);
LIBRARY_API void *QBrush_new_color_style(const void *color, int style);
LIBRARY_API void *QBrush_new_style(int style);

#ifdef __cplusplus
}
#endif
