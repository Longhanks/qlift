#include <QPoint>

#include "qlift-QPoint.h"

[[maybe_unused]] void *QPoint_new(int x, int y) {
    return static_cast<void *>(new QPoint{x, y});
}

[[maybe_unused]] void QPoint_delete(void *point) {
    delete static_cast<QPoint *>(point);
}

[[maybe_unused]] bool QPoint_isNull(void *point) {
    return static_cast<QPoint *>(point)->isNull();
}

[[maybe_unused]] int QPoint_manhattanLength(void *point) {
    return static_cast<QPoint *>(point)->manhattanLength();
}

[[maybe_unused]] int QPoint_x(void *point) {
    return static_cast<QPoint *>(point)->x();
}

[[maybe_unused]] int QPoint_y(void *point) {
    return static_cast<QPoint *>(point)->y();
}

[[maybe_unused]] void QPoint_setX(void *point, int x) {
    static_cast<QPoint *>(point)->setX(x);
}

[[maybe_unused]] void QPoint_setY(void *point, int y) {
    static_cast<QPoint *>(point)->setY(y);
}

[[maybe_unused]] bool QPoint_equal(void *p1, void *p2) {
    return *static_cast<QPoint *>(p1) == *static_cast<QPoint *>(p2);
}

[[maybe_unused]] bool QPoint_unequal(void *p1, void *p2) {
    return *static_cast<QPoint *>(p1) != *static_cast<QPoint *>(p2);
}

[[maybe_unused]] void *QPoint_add(void *p1, void *p2) {
    auto stackPoint = *static_cast<QPoint *>(p1) + *static_cast<QPoint *>(p2);
    return static_cast<void *>(new QPoint{stackPoint.x(), stackPoint.y()});
}

[[maybe_unused]] void *QPoint_substract(void *p1, void *p2) {
    auto stackPoint = *static_cast<QPoint *>(p1) - *static_cast<QPoint *>(p2);
    return static_cast<void *>(new QPoint{stackPoint.x(), stackPoint.y()});
}
