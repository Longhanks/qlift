#include <QSize>

#include "qlift-QSize.h"

[[maybe_unused]] void *QSize_new(int width, int height) {
    return static_cast<void *>(new QSize{width, height});
}

[[maybe_unused]] void QSize_delete(void *point) {
    delete static_cast<QSize *>(point);
}

[[maybe_unused]] int QSize_width(void *size) {
    return static_cast<QSize *>(size)->width();
}

[[maybe_unused]] int QSize_height(void *size) {
    return static_cast<QSize *>(size)->height();
}

[[maybe_unused]] void QSize_setWidth(void *size, int width) {
    static_cast<QSize *>(size)->setWidth(width);
}

[[maybe_unused]] void QSize_setHeight(void *size, int height) {
    static_cast<QSize *>(size)->setHeight(height);
}
