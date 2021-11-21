#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void QEvent_delete(void *event);
LIBRARY_API void QEvent_accept(void *event);
LIBRARY_API void QEvent_ignore(void *event);
LIBRARY_API bool QEvent_isAccepted(void *event);
LIBRARY_API void QEvent_setAccepted(void *event, bool accepted);
LIBRARY_API bool QEvent_spontaneous(void *event);
LIBRARY_API int QEvent_type(void *event);

#ifdef __cplusplus
}
#endif
