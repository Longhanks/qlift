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

LIBRARY_API int QLayout_indexOfItem(void *layout, void *layoutItem);
LIBRARY_API int QLayout_indexOfWidget(void *layout, void *widget);
LIBRARY_API void *QLayout_parentWidget(void *layout);
LIBRARY_API void QLayout_removeItem(void *layout, void *item);
LIBRARY_API void QLayout_removeWidget(void *layout, void *widget);
LIBRARY_API void QLayout_removeWidgetAt(void *layout, int index);
LIBRARY_API void QLayout_removeItemAt(void *layout, int index);
LIBRARY_API void QLayout_invalidate(void *layout);

#ifdef __cplusplus
}
#endif
