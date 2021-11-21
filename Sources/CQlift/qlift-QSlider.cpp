#include <QSlider>
#include <wobjectimpl.h>
#include "qlift-QSlider.h"

[[maybe_unused]] void *
QSlider_new_orientation(const int orientation, void *parent) {
    return static_cast<void *>(new QSlider{static_cast<Qt::Orientation>(orientation), static_cast<QWidget *>(parent)});
}

[[maybe_unused]] void *
QSlider_new(void *parent) {
    return static_cast<void *>(new QSlider{static_cast<QWidget *>(parent)});
}

[[maybe_unused]] void QSlider_setTickPosition(void *slider, int position) {
    static_cast<QSlider *>(slider)->setTickPosition(static_cast<QSlider::TickPosition>(position));
}

[[maybe_unused]] int QSlider_tickPosition(void *slider) {
    return static_cast<QSlider *>(slider)->tickPosition();
}

[[maybe_unused]] void QSlider_setTickInterval(void *slider, int ti) {
    static_cast<QSlider *>(slider)->setTickInterval(ti);
}

[[maybe_unused]] int QSlider_tickInterval(void *slider) {
    return static_cast<QSlider *>(slider)->tickInterval();
}

