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

[[maybe_unused]] bool QEvent_isAccepted(void *event) {
    return static_cast<QEvent *>(event)->isAccepted();
}

[[maybe_unused]] void QEvent_setAccepted(void *event, bool accepted) {
    static_cast<QEvent *>(event)->setAccepted(accepted);
}

[[maybe_unused]] bool QEvent_spontaneous(void *event) {
    return static_cast<QEvent *>(event)->spontaneous();
}

[[maybe_unused]] int QEvent_type(void *event) {
    return static_cast<QEvent *>(event)->type();
}

