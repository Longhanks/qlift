#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif
LIBRARY_API void *QTimer_new(void *parent);
LIBRARY_API void QTimer_singleShot(int msec,
                                   int timerType,
                                   void *context,
                                   void (*slot_ptr)(void *));

LIBRARY_API void QTimer_connect(void *timer,
                                void *receiver,
                                void *context,
                                void (*slot_ptr)(void *));

LIBRARY_API void QTimer_startms(void *timer, int msec);

LIBRARY_API void QTimer_start(void *timer);

LIBRARY_API void QTimer_stop(void *timer);

#ifdef __cplusplus
}
#endif
