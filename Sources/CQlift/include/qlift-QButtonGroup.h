#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

#pragma clang diagnostic ignored "-Wnullability-completeness"
#pragma clang assume_nonnull begin

LIBRARY_API void QButtonGroup_idClicked_connect(void *buttonGroup,
                                                void *receiver,
                                                void *context,
                                                void (*slot_ptr)(void *, int));
LIBRARY_API void QButtonGroup_idPressed_connect(void *buttonGroup,
                                                void *receiver,
                                                void *context,
                                                void (*slot_ptr)(void *, int));
LIBRARY_API void QButtonGroup_idReleased_connect(void *buttonGroup,
                                                 void *receiver,
                                                 void *context,
                                                 void (*slot_ptr)(void *, int));
LIBRARY_API void QButtonGroup_idToggled_connect(void *buttonGroup,
                                                void *receiver,
                                                void *context,
                                                void (*slot_ptr)(void *, int, bool));
#pragma clang assume_nonnull end

LIBRARY_API void QButtonGroup_addButton(void *buttonGroup, void *abstractButton, int id);
LIBRARY_API int QButtonGroup_checkedId(void *buttonGroup);
LIBRARY_API bool QButtonGroup_exclusive(void *buttonGroup);
LIBRARY_API void QButtonGroup_setExclusive(void *buttonGroup, bool on);
LIBRARY_API int QButtonGroup_id(void *buttonGroup, void *abstractButton);
LIBRARY_API void QButtonGroup_setId(void *buttonGroup, void *abstractButton, int id);
LIBRARY_API void *QButtonGroup_new(void *parent);

#ifdef __cplusplus
}
#endif
