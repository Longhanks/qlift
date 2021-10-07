#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QComboBox_new(void *parent);

LIBRARY_API void
QComboBox_addItem(void *comboBox, const char *text, void *userData);

LIBRARY_API void
QComboBox_currentIndexChangedInt_connect(void *comboBox,
                                         void *receiver,
                                         void *context,
                                         void (*slot_ptr)(void *, int));

LIBRARY_API void
QComboBox_currentIndexChangedString_connect(void *comboBox,
                                            void *receiver,
                                            void *context,
                                            void (*slot_ptr)(void *, const char *));

#ifdef __cplusplus
}
#endif
