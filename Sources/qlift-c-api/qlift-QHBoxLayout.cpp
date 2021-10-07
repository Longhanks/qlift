#include <QHBoxLayout>

#include "qlift-QHBoxLayout.h"

[[maybe_unused]] void *QHBoxLayout_new(void *parent) {
    return static_cast<void *>(
        new QHBoxLayout{static_cast<QWidget *>(parent)});
}
