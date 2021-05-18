#include <QObject>

#include "qlift-QObject.h"

[[maybe_unused]] void *QObject_new(void *parent) {
    return static_cast<void *>(new QObject{static_cast<QObject *>(parent)});
}

[[maybe_unused]] void QObject_delete(void *object) {
    delete static_cast<QObject *>(object);
}

[[maybe_unused]] void *QObject_parent(void *object) {
    return static_cast<QObject *>(object)->parent();
}

[[maybe_unused]] void QObject_setObjectName(void *object, const char *name) {
    static_cast<QObject *>(object)->setObjectName(name);
}

[[maybe_unused]] void QObject_destroyed_connect(void *object,
                                                void *receiver,
                                                void *context,
                                                void (*slot_ptr)(void *)) {
    QObject::connect(static_cast<QObject *>(object),
                     &QObject::destroyed,
                     static_cast<QObject *>(receiver),
                     [context, slot_ptr]() { (*slot_ptr)(context); });
}
