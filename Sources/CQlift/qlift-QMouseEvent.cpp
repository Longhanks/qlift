#include <QMouseEvent>

#include "qlift-QMouseEvent.h"

[[maybe_unused]] void QMouseEvent_delete(void *mouseEvent) {
    delete static_cast<QMouseEvent *>(mouseEvent);
}

[[maybe_unused]] int QMouseEvent_button(void *mouseEvent) {
    return static_cast<int>(static_cast<QMouseEvent *>(mouseEvent)->button());
}
