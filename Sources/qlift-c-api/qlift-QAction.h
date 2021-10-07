#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QAction_new(void *icon, const char *text, void *parent);

LIBRARY_API const char *QAction_text(void *action);

LIBRARY_API void QAction_setText(void *action, const char *text);

LIBRARY_API void QAction_triggered_connect(void *action,
                                           void *receiver,
                                           void *context,
                                           void (*slot_ptr)(void *, bool));

#ifdef __cplusplus
}
#endif
