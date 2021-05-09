#include <QAbstractSpinBox>

#include "qlift-QAbstractSpinBox.h"

[[maybe_unused]] void *QAbstractSpinBox_new(void *parent) {
    return static_cast<void *>(
        new QAbstractSpinBox{static_cast<QWidget *>(parent)});
}

[[maybe_unused]] void QAbstractSpinBox_delete(void *abstractSpinBox) {
    delete static_cast<QAbstractSpinBox *>(abstractSpinBox);
}
