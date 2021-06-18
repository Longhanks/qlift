#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

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

LIBRARY_API void QButtonGroup_addButton(void *buttonGroup, void *abstractButton, int id);
LIBRARY_API int QButtonGroup_checkedId(void *buttonGroup);
LIBRARY_API bool QButtonGroup_exclusive(void *buttonGroup);
LIBRARY_API void QButtonGroup_setExclusive(void *buttonGroup, bool on);
LIBRARY_API int QButtonGroup_id(void *buttonGroup, void *abstractButton);
LIBRARY_API void QButtonGroup_setId(void *buttonGroup, void *abstractButton, int id);

#ifdef __cplusplus
}
#endif
