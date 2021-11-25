#include <QMouseEvent>

#include "qlift-QMouseEvent.h"

[[maybe_unused]] void QMouseEvent_delete(void *mouseEvent) {
    delete static_cast<QMouseEvent *>(mouseEvent);
}

[[maybe_unused]] int QMouseEvent_button(void *mouseEvent) {
    return static_cast<QMouseEvent *>(mouseEvent)->button();
}

[[maybe_unused]] int QMouseEvent_buttons(void *mouseEvent) {
    return static_cast<QMouseEvent *>(mouseEvent)->buttons();
}

[[maybe_unused]] int QMouseEvent_flags(void *mouseEvent) {
    return static_cast<QMouseEvent *>(mouseEvent)->flags();
}

[[maybe_unused]] int QMouseEvent_source(void *mouseEvent) {
    return static_cast<QMouseEvent *>(mouseEvent)->source();
}

[[maybe_unused]] int QMouseEvent_globalX(void *mouseEvent) {
    return static_cast<QMouseEvent *>(mouseEvent)->globalX();
}

[[maybe_unused]] int QMouseEvent_globalY(void *mouseEvent) {
    return static_cast<QMouseEvent *>(mouseEvent)->globalY();
}

[[maybe_unused]] int QMouseEvent_x(void *mouseEvent) {
    return static_cast<QMouseEvent *>(mouseEvent)->x();
}

[[maybe_unused]] int QMouseEvent_y(void *mouseEvent) {
    return static_cast<QMouseEvent *>(mouseEvent)->y();
}

[[maybe_unused]] void *QMouseEvent_globalPos(void *mouseEvent) {
    auto pos = static_cast<QMouseEvent *>(mouseEvent)->globalPos();
    return new QPoint(pos);
}

[[maybe_unused]] void *QMouseEvent_pos(void *mouseEvent) {
    auto pos = static_cast<QMouseEvent *>(mouseEvent)->pos();
    return new QPoint(pos);
}

[[maybe_unused]] void *QMouseEvent_localPos(void *mouseEvent) {
    auto pos = static_cast<QMouseEvent *>(mouseEvent)->localPos();
    return new QPointF(pos);
}

[[maybe_unused]] void *QMouseEvent_screenPos(void *mouseEvent) {
    auto pos = static_cast<QMouseEvent *>(mouseEvent)->screenPos();
    return new QPointF(pos);
}

[[maybe_unused]] void *QMouseEvent_windowPos(void *mouseEvent) {
    auto pos = static_cast<QMouseEvent *>(mouseEvent)->windowPos();
    return new QPointF(pos);
}

