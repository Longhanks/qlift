#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QBoxLayout_new(int direction, void *parent);

LIBRARY_API void QBoxLayout_addItem(void *boxLayout, void *layoutItem);

LIBRARY_API void
QBoxLayout_addLayout(void *boxLayout, void *layout, int stretch);

LIBRARY_API void QBoxLayout_addWidget(void *boxLayout,
                                      void *widget,
                                      int stretch,
                                      int alignment);

LIBRARY_API void QBoxLayout_setStretch(void *boxLayout, int index, int stretch);
LIBRARY_API int QBoxLayout_stretch(void *boxLayout, int index);

#ifdef __cplusplus
}
#endif
