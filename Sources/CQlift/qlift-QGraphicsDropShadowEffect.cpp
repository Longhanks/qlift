//
//  qlift-QGraphicsDropShadowEffect.cpp
//  
//
//  Created by Dmitriy Borovikov on 06.11.2021.
//

#include <QGraphicsDropShadowEffect>
#include "qlift-QGraphicsDropShadowEffect.h"

[[maybe_unused]] void QGraphicsDropShadowEffect_delete(void *graphicsEffect) {
    delete static_cast<QGraphicsDropShadowEffect *>(graphicsEffect);
}
[[maybe_unused]] void *QGraphicsDropShadowEffect_new(void *parent) {
    return new QGraphicsDropShadowEffect(static_cast<QObject*>(parent));
}

[[maybe_unused]] double QGraphicsDropShadowEffect_blurRadius(void *graphicsEffect) {
    return static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->blurRadius();
}

[[maybe_unused]] double QGraphicsDropShadowEffect_xOffset(void *graphicsEffect) {
    return static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->xOffset();
}

[[maybe_unused]] double QGraphicsDropShadowEffect_yOffset(void *graphicsEffect) {
    return static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->yOffset();
}

[[maybe_unused]] void* QGraphicsDropShadowEffect_color(void *graphicsEffect) {
    auto color = static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->color();
    return new QColor(color);
}

[[maybe_unused]] CQPointF QGraphicsDropShadowEffect_offset(void *graphicsEffect) {
    CQPointF cqpointf;
    auto qpointf = static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->offset();
    cqpointf.x = qpointf.x();
    cqpointf.y = qpointf.y();
    return cqpointf;
}

[[maybe_unused]] void QGraphicsDropShadowEffect_setBlurRadius(void *graphicsEffect, double blurRadius) {
    static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->setBlurRadius(blurRadius);
}

[[maybe_unused]] void QGraphicsDropShadowEffect_setColor(void *graphicsEffect, void *color) {
    static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->setColor(*static_cast<QColor *>(color));
}

[[maybe_unused]] void QGraphicsDropShadowEffect_setOffset(void *graphicsEffect, double dx, double dy) {
    static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->setOffset(dx, dy);
}

[[maybe_unused]] void QGraphicsDropShadowEffect_setOffsetD(void *graphicsEffect, double d) {
    static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->setOffset(d);
}

[[maybe_unused]] void QGraphicsDropShadowEffect_setXOffset(void *graphicsEffect, double dx) {
    static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->setXOffset(dx);
}

[[maybe_unused]] void QGraphicsDropShadowEffect_setYOffset(void *graphicsEffect, double dy) {
    static_cast<QGraphicsDropShadowEffect *>(graphicsEffect)->setYOffset(dy);
}
