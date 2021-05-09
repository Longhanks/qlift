#include <QEvent>

#include "qlift-QEvent.h"

[[maybe_unused]] void QEvent_delete(void *event) {
    delete static_cast<QEvent *>(event);
}

[[maybe_unused]] void QEvent_accept(void *event) {
    static_cast<QEvent *>(event)->accept();
}

[[maybe_unused]] void QEvent_ignore(void *event) {
    static_cast<QEvent *>(event)->ignore();
}
