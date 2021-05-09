#include <QSpinBox>

#include "qlift-QSpinBox.h"

[[maybe_unused]] void *QSpinBox_new(void *parent) {
    return static_cast<void *>(new QSpinBox{static_cast<QWidget *>(parent)});
}

[[maybe_unused]] void QSpinBox_delete(void *spinBox) {
    delete static_cast<QSpinBox *>(spinBox);
}

[[maybe_unused]] int QSpinBox_value(void *spinBox) {
    return static_cast<QSpinBox *>(spinBox)->value();
}

[[maybe_unused]] void QSpinBox_setValue(void *spinBox, int value) {
    static_cast<QSpinBox *>(spinBox)->setValue(value);
}

[[maybe_unused]] int QSpinBox_minimum(void *spinBox) {
    return static_cast<QSpinBox *>(spinBox)->minimum();
}

[[maybe_unused]] void QSpinBox_setMinimum(void *spinBox, int min) {
    static_cast<QSpinBox *>(spinBox)->setMinimum(min);
}

[[maybe_unused]] int QSpinBox_maximum(void *spinBox) {
    return static_cast<QSpinBox *>(spinBox)->maximum();
}

[[maybe_unused]] void QSpinBox_setMaximum(void *spinBox, int max) {
    static_cast<QSpinBox *>(spinBox)->setMaximum(max);
}
