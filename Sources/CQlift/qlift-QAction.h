#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

#pragma clang diagnostic ignored "-Wnullability-completeness"

LIBRARY_API void *QAction_new(void *icon, const char *text, void *parent);
LIBRARY_API CQString QAction_text(void *action);
LIBRARY_API void QAction_setText(void *action, const char *text);
#pragma clang assume_nonnull begin
LIBRARY_API void QAction_triggered_connect(void *action,
                                           void *receiver,
                                           void *context,
                                           void (*slot_ptr)(void *, bool));
#pragma clang assume_nonnull end

#ifdef __cplusplus
}
#endif
