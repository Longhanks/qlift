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

void *QGraphicsDropShadowEffect_new(void *parent);
void QGraphicsDropShadowEffect_delete(void *graphicsEffect);
double QGraphicsDropShadowEffect_blurRadius(void *graphicsEffect);
double QGraphicsDropShadowEffect_xOffset(void *graphicsEffect);
double QGraphicsDropShadowEffect_yOffset(void *graphicsEffect);
void* QGraphicsDropShadowEffect_color(void *graphicsEffect);
CQPointF QGraphicsDropShadowEffect_offset(void *graphicsEffect);

void QGraphicsDropShadowEffect_setBlurRadius(void *graphicsEffect, double blurRadius);
void QGraphicsDropShadowEffect_setColor(void *graphicsEffect, void *color);
void QGraphicsDropShadowEffect_setOffset(void *graphicsEffect, double dx, double dy);
void QGraphicsDropShadowEffect_setOffsetD(void *graphicsEffect, double d);
void QGraphicsDropShadowEffect_setXOffset(void *graphicsEffect, double dx);
void QGraphicsDropShadowEffect_setYOffset(void *graphicsEffect, double dy);

#ifdef __cplusplus
}
#endif
