//
//  qlift-QPainter.h
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QPainter_new_device(void *qpaintdevice);
LIBRARY_API void QPainter_delete(void *qpaintdevice);
LIBRARY_API void QPainter_setPen(void *qpaintdevice, void *pen);
LIBRARY_API void QPainter_setbrush(void *qpaintdevice, void *brush);
LIBRARY_API void QPainter_setBackground(void *qpaintdevice, void *brush);
LIBRARY_API void QPainter_setOpacity(void *qpaintdevice, double opacity);
LIBRARY_API void QPainter_drawLine(void *qpaintdevice, int x1, int y1, int x2, int y2);
LIBRARY_API void QPainter_drawLineP(void *qpaintdevice, void *p1, void *p2);
LIBRARY_API void QPainter_drawRectxy(void *qpaintdevice, int x1, int y1, int w, int h);
LIBRARY_API void QPainter_drawRect(void *qpaintdevice, void *rect);
LIBRARY_API void QPainter_drawEllipse(void *qpaintdevice, void *rect);
LIBRARY_API void QPainter_fillRectBrush(void *qpaintdevice, void *rect, void *brush);
LIBRARY_API void QPainter_fillRectColor(void *qpaintdevice, void *rect, void *color);

#ifdef __cplusplus
}
#endif
