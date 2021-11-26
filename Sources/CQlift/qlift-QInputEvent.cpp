#include <QInputEvent>

#include "qlift-QInputEvent.h"

[[maybe_unused]] void QInputEvent_delete(void *inputEvent) {
    delete static_cast<QInputEvent *>(inputEvent);
}

[[maybe_unused]] int QInputEvent_modifiers(void *inputEvent) {
    return static_cast<QInputEvent *>(inputEvent)->modifiers();
}

[[maybe_unused]] unsigned long QInputEvent_timestamp(void *inputEvent) {
    return static_cast<QInputEvent *>(inputEvent)->timestamp();
}
