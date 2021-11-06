#include <QInputEvent>

#include "qlift-QInputEvent.h"

[[maybe_unused]] void QInputEvent_delete(void *inputEvent) {
    delete static_cast<QInputEvent *>(inputEvent);
}
