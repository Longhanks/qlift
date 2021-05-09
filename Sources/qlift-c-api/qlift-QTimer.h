#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void QTimer_singleShot(int msec,
                                   int timerType,
                                   void *context,
                                   void (*slot_ptr)(void *));

#ifdef __cplusplus
}
#endif
