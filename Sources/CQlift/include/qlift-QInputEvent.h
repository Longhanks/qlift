#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void QInputEvent_delete(void *inputEvent);
LIBRARY_API int QInputEvent_modifiers(void *inputEvent);
LIBRARY_API unsigned long QInputEvent_timestamp(void *inputEvent);
#ifdef __cplusplus
}
#endif
