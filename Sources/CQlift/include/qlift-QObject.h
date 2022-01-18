#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

#pragma clang diagnostic ignored "-Wnullability-completeness"

#pragma clang assume_nonnull begin
LIBRARY_API void *QObject_new(void * _Nullable parent);
LIBRARY_API void QObject_delete(void *object);

LIBRARY_API void * _Nullable QObject_parent(void *object);
LIBRARY_API void QObject_setParent(void *object, void * _Nullable parent);
LIBRARY_API CQString QObject_objectName(void *object);
LIBRARY_API void QObject_setObjectName(void *object, const char *name);
LIBRARY_API void *QObject_destroyed_connect(void *object,
                                            void *receiver,
                                            void *context,
                                            void (*slot_ptr)(void *));
LIBRARY_API bool QObject_destroyed_disconnect(void * _Nullable connection);

LIBRARY_API void QObject_dumpObjectInfo(void *object);
LIBRARY_API void QObject_dumpObjectTree(void *object);
LIBRARY_API void * _Nullable QObject_getSwiftObject(void *object);
LIBRARY_API void QObject_setSwiftObject(void *object, void *swiftObject);
LIBRARY_API void QObject_clearSwiftObject(void *object);
LIBRARY_API void QObject_deleteLater(void *object);

#pragma clang assume_nonnull end

#ifdef __cplusplus
}
#endif
