#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

#pragma clang diagnostic ignored "-Wnullability-completeness"
#pragma clang assume_nonnull begin

LIBRARY_API void *QDialogButtonBox_new(void * _Nullable parent);
LIBRARY_API int QDialogButtonBox_orientation(void *dialogButtonBox);
LIBRARY_API void QDialogButtonBox_setOrientation(void *dialogButtonBox, int orientation);
LIBRARY_API int QDialogButtonBox_standardButtons(void *dialogButtonBox);
LIBRARY_API void QDialogButtonBox_setStandardButtons(void *dialogButtonBox, int standardButtons);
LIBRARY_API void QDialogButtonBox_accepted_connect(void *dialogButtonBox,
                                                   void *receiver,
                                                   void (*slot_ptr)(void *));
LIBRARY_API void QDialogButtonBox_rejected_connect(void *dialogButtonBox,
                                                   void *receiver,
                                                   void (*slot_ptr)(void *));
LIBRARY_API bool QDialogButtonBox_centerButtons(void *dialogButtonBox);
LIBRARY_API void QDialogButtonBox_setCenterButtons(void *dialogButtonBox, bool center);

#pragma clang assume_nonnull end

#ifdef __cplusplus
}
#endif
