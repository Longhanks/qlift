#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QDialogButtonBox_new(void *parent);

LIBRARY_API void QDialogButtonBox_delete(void *dialogButtonBox);

LIBRARY_API int QDialogButtonBox_orientation(void *dialogButtonBox);

LIBRARY_API void QDialogButtonBox_setOrientation(void *dialogButtonBox,
                                                 int orientation);

LIBRARY_API int QDialogButtonBox_standardButtons(void *dialogButtonBox);

LIBRARY_API void QDialogButtonBox_setStandardButtons(void *dialogButtonBox,
                                                     int standardButtons);

LIBRARY_API void QDialogButtonBox_accepted_connect(void *dialogButtonBox,
                                                   void *receiver,
                                                   void *context,
                                                   void (*slot_ptr)(void *));

LIBRARY_API void QDialogButtonBox_rejected_connect(void *dialogButtonBox,
                                                   void *receiver,
                                                   void *context,
                                                   void (*slot_ptr)(void *));

#ifdef __cplusplus
}
#endif
