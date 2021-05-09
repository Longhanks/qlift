#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API const char *QAbstractButton_text(void *abstractButton);

LIBRARY_API void QAbstractButton_setText(void *abstractButton,
                                         const char *text);

LIBRARY_API void QAbstractButton_clicked_connect(void *abstractButton,
                                                 void *receiver,
                                                 void *context,
                                                 void (*slot_ptr)(void *,
                                                                  bool));

#ifdef __cplusplus
}
#endif
