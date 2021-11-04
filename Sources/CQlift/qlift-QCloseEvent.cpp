#include <QCloseEvent>

#include "qlift-QCloseEvent.h"

[[maybe_unused]] void QCloseEvent_delete(void *closeEvent) {
    delete static_cast<QCloseEvent *>(closeEvent);
}
