#include <QVBoxLayout>

#include "qlift-QVBoxLayout.h"

[[maybe_unused]] void *QVBoxLayout_new(void *parent) {
    return static_cast<void *>(
        new QVBoxLayout{static_cast<QWidget *>(parent)});
}

[[maybe_unused]] void QVBoxLayout_delete(void *vBoxLayout) {
    delete static_cast<QVBoxLayout *>(vBoxLayout);
}
