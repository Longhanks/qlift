#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API bool QLayout_isEnabled(void *layout);

LIBRARY_API void QLayout_setEnabled(void *layout, bool enabled);

LIBRARY_API void *QLayout_contentsMargins(void *layout);

LIBRARY_API void QLayout_setContentsMargins(void *layout,
                                            void *contentsMargins);

LIBRARY_API int QLayout_spacing(void *layout);

LIBRARY_API void QLayout_setSpacing(void *layout, int spacing);

LIBRARY_API int QLayout_sizeConstraint(void *layout);

LIBRARY_API void QLayout_setSizeConstraint(void *layout, int sizeConstraint);

#ifdef __cplusplus
}
#endif
