#include <QMenuBar>

#include "qlift-QMenuBar.h"

[[maybe_unused]] void *QMenuBar_new(void *parent) {
    return static_cast<void *>(new QMenuBar{static_cast<QWidget *>(parent)});
}
