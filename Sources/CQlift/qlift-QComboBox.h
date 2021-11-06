#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QComboBox_new(void *parent);
LIBRARY_API void QComboBox_addItem(void *comboBox, const char *text, void *userData);
LIBRARY_API void
QComboBox_currentIndexChanged_connect(void *comboBox,
                                      void *receiver,
                                      void *context,
                                      void (*slot_ptr)(void *, int));

#ifdef __cplusplus
}
#endif
