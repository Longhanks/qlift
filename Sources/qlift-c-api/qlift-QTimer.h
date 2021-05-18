#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif
LIBRARY_API void *QTimer_new(void *parent);
LIBRARY_API void QTimer_delete(void *timer);

LIBRARY_API void QTimer_singleShot(int msec,
                                   int timerType,
                                   void *context,
                                   void (*slot_ptr)(void *));

LIBRARY_API void QTimer_connect(void *timer,
                                void *receiver,
                                void *context,
                                void (*slot_ptr)(void *));

#ifdef __cplusplus
}
#endif
