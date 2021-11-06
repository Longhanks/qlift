//
//  qlift-QGraphicsDropShadowEffect.cpp
//  
//
//  Created by Dmitriy Borovikov on 06.11.2021.
//

#include <QGraphicsDropShadowEffect>
#include "qlift-QGraphicsDropShadowEffect.h"

void QGraphicsDropShadowEffect_delete(void *graphicsEffect) {
    delete static_cast<QGraphicsDropShadowEffect *>(graphicsEffect);
}
void *QGraphicsDropShadowEffect_new(void *parent) {
    return new QGraphicsDropShadowEffect(static_cast<QObject*>(parent));
}

double QGraphicsDropShadowEffect_blurRadius(void *graphicsEffect) {
    return static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->blurRadius();
}

double QGraphicsDropShadowEffect_xOffset(void *graphicsEffect) {
    return static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->xOffset();
}

double QGraphicsDropShadowEffect_yOffset(void *graphicsEffect) {
    return static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->yOffset();
}

void* QGraphicsDropShadowEffect_color(void *graphicsEffect) {
    auto color = static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->color();
    return new QColor(color);
}

CQPointF QGraphicsDropShadowEffect_offset(void *graphicsEffect) {
    CQPointF cqpointf;
    auto qpointf = static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->offset();
    cqpointf.x = qpointf.x();
    cqpointf.y = qpointf.y();
    return cqpointf;
}

void QGraphicsDropShadowEffect_setBlurRadius(void *graphicsEffect, double blurRadius) {
    static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->setBlurRadius(blurRadius);
}

void QGraphicsDropShadowEffect_setColor(void *graphicsEffect, void *color) {
    static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->setColor(*static_cast<QColor *>(color));
}

void QGraphicsDropShadowEffect_setOffset(void *graphicsEffect, double dx, double dy) {
    static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->setOffset(dx, dy);
}

void QGraphicsDropShadowEffect_setOffsetD(void *graphicsEffect, double d) {
    static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->setOffset(d);
}

void QGraphicsDropShadowEffect_setXOffset(void *graphicsEffect, double dx) {
    static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->setXOffset(dx);
}

void QGraphicsDropShadowEffect_setYOffset(void *graphicsEffect, double dy) {
    static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->setYOffset(dy);
}
