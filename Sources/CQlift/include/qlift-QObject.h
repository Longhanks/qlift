#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QObject_new(void *parent);
LIBRARY_API void QObject_delete(void *object);

LIBRARY_API void *QObject_parent(void *object);
LIBRARY_API void QObject_setParent(void *object, void *parent);
LIBRARY_API CQString QObject_objectName(void *object);
LIBRARY_API void QObject_setObjectName(void *object, const char *name);
LIBRARY_API void *QObject_destroyed_connect(void *object,
                                            void *receiver,
                                            void *context,
                                            void (*slot_ptr)(void *));
LIBRARY_API bool QObject_destroyed_disconnect(void *connection);

LIBRARY_API void QObject_dumpObjectInfo(void *object);
LIBRARY_API void QObject_dumpObjectTree(void *object);
LIBRARY_API void *QObject_getSwiftObject(void *object);
LIBRARY_API void QObject_setSwiftObject(void *object, void *swiftObject);
LIBRARY_API void QObject_clearSwiftObject(void *object);

#ifdef __cplusplus
}
#endif