#include <QRect>

#include "qlift-QRect.h"

[[maybe_unused]] void *QRect_new(int x, int y, int width, int height) {
    return static_cast<void *>(new QRect{x, y, width, height});
}

[[maybe_unused]] void QRect_delete(void *rect) {
    delete static_cast<QRect *>(rect);
}

[[maybe_unused]] int QRect_x(void *rect) {
    return static_cast<QRect *>(rect)->x();
}

[[maybe_unused]] int QRect_y(void *rect) {
    return static_cast<QRect *>(rect)->y();
}

[[maybe_unused]] void QRect_setX(void *rect, int x) {
    static_cast<QRect *>(rect)->setX(x);
}

[[maybe_unused]] void QRect_setY(void *rect, int y) {
    static_cast<QRect *>(rect)->setY(y);
}

[[maybe_unused]] int QRect_height(void *rect) {
    return static_cast<QRect *>(rect)->height();
}

[[maybe_unused]] int QRect_width(void *rect) {
    return static_cast<QRect *>(rect)->width();
}

[[maybe_unused]] void QRect_setHeight(void *rect, int height) {
    static_cast<QRect *>(rect)->setHeight(height);
}

[[maybe_unused]] void QRect_setWidth(void *rect, int width) {
    static_cast<QRect *>(rect)->setHeight(width);
}

[[maybe_unused]] void *QRect_center(void *rect) {
    auto stackPoint = static_cast<QRect *>(rect)->center();
    return static_cast<void *>(new QPoint{stackPoint.x(), stackPoint.y()});
}

[[maybe_unused]] void QRect_moveCenter(void *rect, void *pos) {
    if (pos != nullptr) {
        static_cast<QRect *>(rect)->moveCenter(*static_cast<QPoint *>(pos));
    } else {
        static_cast<QRect *>(rect)->moveCenter(QPoint());
    }
}

[[maybe_unused]] int QRect_bottom(void *rect) {
    return static_cast<QRect *>(rect)->bottom();
}

[[maybe_unused]] void QRect_setBottom(void *rect, int y) {
    static_cast<QRect *>(rect)->setBottom(y);
}

[[maybe_unused]] void QRect_moveBottom(void *rect, int y) {
    static_cast<QRect *>(rect)->moveBottom(y);
}

[[maybe_unused]] void *QRect_bottomLeft(void *rect) {
    auto stackPoint = static_cast<QRect *>(rect)->bottomLeft();
    return static_cast<void *>(new QPoint{stackPoint.x(), stackPoint.y()});
}

[[maybe_unused]] void QRect_setBottomLeft(void *rect, void *pos) {
    if (pos != nullptr) {
        static_cast<QRect *>(rect)->setBottomLeft(*static_cast<QPoint *>(pos));
    } else {
        static_cast<QRect *>(rect)->setBottomLeft(QPoint());
    }
}

[[maybe_unused]] void QRect_moveBottomLeft(void *rect, void *pos) {
    if (pos != nullptr) {
        static_cast<QRect *>(rect)->moveBottomLeft(
            *static_cast<QPoint *>(pos));
    } else {
        static_cast<QRect *>(rect)->moveBottomLeft(QPoint());
    }
}

[[maybe_unused]] int QRect_left(void *rect) {
    return static_cast<QRect *>(rect)->left();
}

[[maybe_unused]] void QRect_setLeft(void *rect, int x) {
    static_cast<QRect *>(rect)->setLeft(x);
}

[[maybe_unused]] void QRect_moveLeft(void *rect, int x) {
    static_cast<QRect *>(rect)->moveLeft(x);
}

[[maybe_unused]] void *QRect_topLeft(void *rect) {
    auto stackPoint = static_cast<QRect *>(rect)->topLeft();
    return static_cast<void *>(new QPoint{stackPoint.x(), stackPoint.y()});
}

[[maybe_unused]] void QRect_setTopLeft(void *rect, void *pos) {
    if (pos != nullptr) {
        static_cast<QRect *>(rect)->setTopLeft(*static_cast<QPoint *>(pos));
    } else {
        static_cast<QRect *>(rect)->setTopLeft(QPoint());
    }
}

[[maybe_unused]] void QRect_moveTopLeft(void *rect, void *pos) {
    if (pos != nullptr) {
        static_cast<QRect *>(rect)->setBottomLeft(*static_cast<QPoint *>(pos));
    } else {
        static_cast<QRect *>(rect)->setBottomLeft(QPoint());
    }
}

[[maybe_unused]] int QRect_top(void *rect) {
    return static_cast<QRect *>(rect)->top();
}

[[maybe_unused]] void QRect_setTop(void *rect, int y) {
    static_cast<QRect *>(rect)->setTop(y);
}

[[maybe_unused]] void QRect_moveTop(void *rect, int y) {
    static_cast<QRect *>(rect)->moveTop(y);
}

[[maybe_unused]] void *QRect_topRight(void *rect) {
    auto stackPoint = static_cast<QRect *>(rect)->topRight();
    return static_cast<void *>(new QPoint{stackPoint.x(), stackPoint.y()});
}

[[maybe_unused]] void QRect_setTopRight(void *rect, void *pos) {
    if (pos != nullptr) {
        static_cast<QRect *>(rect)->setTopRight(*static_cast<QPoint *>(pos));
    } else {
        static_cast<QRect *>(rect)->setTopRight(QPoint());
    }
}

[[maybe_unused]] void QRect_moveTopRight(void *rect, void *pos) {
    if (pos != nullptr) {
        static_cast<QRect *>(rect)->moveTopRight(*static_cast<QPoint *>(pos));
    } else {
        static_cast<QRect *>(rect)->moveTopRight(QPoint());
    }
}

[[maybe_unused]] int QRect_right(void *rect) {
    return static_cast<QRect *>(rect)->right();
}

[[maybe_unused]] void QRect_setRight(void *rect, int x) {
    static_cast<QRect *>(rect)->setRight(x);
}

[[maybe_unused]] void QRect_moveRight(void *rect, int x) {
    static_cast<QRect *>(rect)->moveRight(x);
}

[[maybe_unused]] void *QRect_bottomRight(void *rect) {
    auto stackPoint = static_cast<QRect *>(rect)->bottomRight();
    return static_cast<void *>(new QPoint{stackPoint.x(), stackPoint.y()});
}

[[maybe_unused]] void QRect_setBottomRight(void *rect, void *pos) {
    if (pos != nullptr) {
        static_cast<QRect *>(rect)->setBottomRight(
            *static_cast<QPoint *>(pos));
    } else {
        static_cast<QRect *>(rect)->setBottomRight(QPoint());
    }
}

[[maybe_unused]] void QRect_moveBottomRight(void *rect, void *pos) {
    if (pos != nullptr) {
        static_cast<QRect *>(rect)->moveBottomRight(
            *static_cast<QPoint *>(pos));
    } else {
        static_cast<QRect *>(rect)->moveBottomRight(QPoint());
    }
}
