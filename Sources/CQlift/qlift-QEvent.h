#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void QEvent_delete(void *event);

LIBRARY_API void QEvent_accept(void *event);

LIBRARY_API void QEvent_ignore(void *event);

#ifdef __cplusplus
}
#endif
