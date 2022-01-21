//
//  qlift-QPainter.cpp
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

#include <QPainter>

#include "qlift-QPainter.h"

[[maybe_unused]] void *QPainter_new_device(void *qpaintdevice) {
    return static_cast<void *>( new QPainter { static_cast<QPaintDevice *>(qpaintdevice) });
}

[[maybe_unused]] void QPainter_delete(void *pen) {
    delete static_cast<QPainter *>(pen);
}

[[maybe_unused]] void QPainter_setPen(void *qpaintdevice, void *pen) {
    static_cast<QPainter *>(qpaintdevice)->setPen(*static_cast<const QPen *>(pen));
}
[[maybe_unused]] void QPainter_setbrush(void *qpaintdevice, void *brush) {
    static_cast<QPainter *>(qpaintdevice)->setBrush(*static_cast<const QBrush*>(brush));
}
[[maybe_unused]] void QPainter_setBackground(void *qpaintdevice, void *brush) {
    static_cast<QPainter *>(qpaintdevice)->setBackground(*static_cast<const QBrush*>(brush));
}
[[maybe_unused]] void QPainter_setOpacity(void *qpaintdevice, double opacity) {
    static_cast<QPainter *>(qpaintdevice)->setOpacity(opacity);
}
[[maybe_unused]] void QPainter_drawLine(void *qpaintdevice, int x1, int y1, int x2, int y2) {
    static_cast<QPainter *>(qpaintdevice)->drawLine(x1, y1, x2, y2);
}
[[maybe_unused]] void QPainter_drawLineP(void *qpaintdevice, void *p1, void *p2) {
    static_cast<QPainter *>(qpaintdevice)->drawLine(*static_cast<const QPoint*>(p1), *static_cast<const QPoint*>(p2));
}
[[maybe_unused]] void QPainter_drawRectxy(void *qpaintdevice, int x1, int y1, int w, int h) {
    static_cast<QPainter *>(qpaintdevice)->drawRect(x1, y1, w, h);
}
[[maybe_unused]] void QPainter_drawRect(void *qpaintdevice, void *rect) {
    static_cast<QPainter *>(qpaintdevice)->drawRect(*static_cast<const QRect*>(rect));
}
[[maybe_unused]] void QPainter_drawEllipse(void *qpaintdevice, void *rect) {
    static_cast<QPainter *>(qpaintdevice)->drawEllipse(*static_cast<const QRect*>(rect));
}
[[maybe_unused]] void QPainter_fillRectBrush(void *qpaintdevice, void *rect, void *brush) {
    static_cast<QPainter *>(qpaintdevice)->fillRect(*static_cast<const QRect*>(rect), *static_cast<const QBrush*>(brush));
}
[[maybe_unused]] void QPainter_fillRectColor(void *qpaintdevice, void *rect, void *color) {
    static_cast<QPainter *>(qpaintdevice)->fillRect(*static_cast<const QRect*>(rect), *static_cast<const QColor*>(color));
}
[[maybe_unused]] bool QPainter_end(void *qpaintdevice) {
    return static_cast<QPainter *>(qpaintdevice)->end();
}
[[maybe_unused]] void QPainter_drawText(void *qpaintdevice, const void *position, const char *text) {
    static_cast<QPainter *>(qpaintdevice)->drawText(*static_cast<const QPoint*>(position), text);
}
[[maybe_unused]] void QPainter_drawText1(void *qpaintdevice, int x, int y, const char *text) {
    static_cast<QPainter *>(qpaintdevice)->drawText(x, y, text);
}
[[maybe_unused]] void QPainter_drawText2(void *qpaintdevice, const void *rectangle, int flags, const char *text, void *boundingRect) {
    static_cast<QPainter *>(qpaintdevice)->drawText(*static_cast<const QRect*>(rectangle), flags, text, static_cast<QRect*>(boundingRect));
}
[[maybe_unused]] void QPainter_drawText3(void *qpaintdevice, int x, int y, int width, int height, int flags, const char *text, void *boundingRect) {
    static_cast<QPainter *>(qpaintdevice)->drawText(x, y, width, height, flags, text, static_cast<QRect*>(boundingRect));
}
[[maybe_unused]] void QPainter_setFont(void *qpaintdevice, const void *font) {
    static_cast<QPainter *>(qpaintdevice)->setFont(*static_cast<const QFont *>(font));
}
