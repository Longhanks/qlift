#include <QObject>
#include <QVariant>
#include <iostream>

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

[[maybe_unused]] void QObject_setParent(void *object, void *parent) {
    static_cast<QObject *>(object)->setParent(static_cast<QObject *>(parent));
}

[[maybe_unused]] CQString QObject_objectName(void *object) {
    auto text = static_cast<QObject *>(object)->objectName();
    return CQString { text.utf16(), text.size() };
}

[[maybe_unused]] void QObject_setObjectName(void *object, const char *name) {
    static_cast<QObject *>(object)->setObjectName(name);
}

[[maybe_unused]] void *QObject_destroyed_connect(void *object,
                                                 void *receiver,
                                                 void *context,
                                                 void (*slot_ptr)(void *)) {
    auto handle = QObject::connect(static_cast<QObject *>(object),
                                   &QObject::destroyed,
                                   static_cast<QObject *>(receiver),
                                   [context, slot_ptr]() { (*slot_ptr)(context); });
    return static_cast<void *>(new QMetaObject::Connection(handle));
}

[[maybe_unused]] bool QObject_destroyed_disconnect(void *connection) {
    return QObject::disconnect(*static_cast<QMetaObject::Connection *>(connection));
}

[[maybe_unused]] void QObject_dumpObjectInfo(void *object) {
    static_cast<QObject *>(object)->dumpObjectInfo();
}

[[maybe_unused]] void QObject_dumpObjectTree(void *object) {
    static_cast<QObject *>(object)->dumpObjectTree();
}

[[maybe_unused]] void *QObject_getSwiftObject(void *object) {
    auto property = static_cast<QObject *>(object)->property("_swift_object");
    return property.value<void*>();
}

[[maybe_unused]] void QObject_setSwiftObject(void *object, void *swiftObject) {
    QVariant property = QVariant::fromValue(swiftObject);
    static_cast<QObject *>(object)->setProperty("_swift_object", property);
}

[[maybe_unused]] void QObject_clearSwiftObject(void *object) {
    static_cast<QObject *>(object)->setProperty("_swift_object", {});
}

[[maybe_unused]] void QObject_deleteLater(void *object) {
    static_cast<QObject *>(object)->deleteLater();
}
