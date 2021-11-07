//
//  qlift-QGraphicsDropShadowEffect.h
//  
//
//  Created by Dmitriy Borovikov on 06.11.2021.
//

#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    double x;
    double y;
} CQPointF;

LIBRARY_API void *QGraphicsDropShadowEffect_new(void *parent);
LIBRARY_API void QGraphicsDropShadowEffect_delete(void *graphicsEffect);
LIBRARY_API double QGraphicsDropShadowEffect_blurRadius(void *graphicsEffect);
LIBRARY_API double QGraphicsDropShadowEffect_xOffset(void *graphicsEffect);
LIBRARY_API double QGraphicsDropShadowEffect_yOffset(void *graphicsEffect);
LIBRARY_API void* QGraphicsDropShadowEffect_color(void *graphicsEffect);
LIBRARY_API CQPointF QGraphicsDropShadowEffect_offset(void *graphicsEffect);

LIBRARY_API void QGraphicsDropShadowEffect_setBlurRadius(void *graphicsEffect, double blurRadius);
LIBRARY_API void QGraphicsDropShadowEffect_setColor(void *graphicsEffect, void *color);
LIBRARY_API void QGraphicsDropShadowEffect_setOffset(void *graphicsEffect, double dx, double dy);
LIBRARY_API void QGraphicsDropShadowEffect_setOffsetD(void *graphicsEffect, double d);
LIBRARY_API void QGraphicsDropShadowEffect_setXOffset(void *graphicsEffect, double dx);
LIBRARY_API void QGraphicsDropShadowEffect_setYOffset(void *graphicsEffect, double dy);

#ifdef __cplusplus
}
#endif
