#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API const ushort *QAbstractButton_text(void *abstractButton, int *len);
LIBRARY_API void QAbstractButton_setText(void *abstractButton,
                                         const char *text);
LIBRARY_API void QAbstractButton_clicked_connect(void *abstractButton,
                                                 void *receiver,
                                                 void *context,
                                                 void (*slot_ptr)(void *, bool));
LIBRARY_API void QAbstractButton_toggled_connect(void *abstractButton,
                                                 void *receiver,
                                                 void *context,
                                                 void (*slot_ptr)(void *, bool));
LIBRARY_API void QAbstractButton_pressed_connect(void *abstractButton,
                                                 void *receiver,
                                                 void *context,
                                                 void (*slot_ptr)(void *));

LIBRARY_API void QAbstractButton_setIcon(void *abstractButton,
                                         void *icon);
LIBRARY_API void QAbstractButton_setIconSize(void *abstractButton,
                                             void *size);
LIBRARY_API void QAbstractButton_setCheckable(void *abstractButton,
                                              bool checkable);
LIBRARY_API bool QAbstractButton_getCheckable(void *abstractButton);
LIBRARY_API void QAbstractButton_setChecked(void *abstractButton,
                                              bool checked);
LIBRARY_API bool QAbstractButton_getChecked(void *abstractButton);

#ifdef __cplusplus
}
#endif
