#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QScrollArea_new(void *parent);
LIBRARY_API void  QScrollArea_setWidget(void *scrollArea, void *widget);
LIBRARY_API void  QScrollArea_ensureVisible(void *scrollArea, int x, int y, int xmargin, int ymargin);
LIBRARY_API void  QScrollArea_ensureWidgetVisible(void *scrollArea, void *childWidget, int xmargin, int ymargin);
LIBRARY_API int   QScrollArea_alignment(void *scrollArea);
LIBRARY_API void  QScrollArea_setAlignment(void *scrollArea, int alignment);
LIBRARY_API void  QScrollArea_setWidgetResizable(void *scrollArea, bool resizable);
LIBRARY_API bool  QScrollArea_widgetResizable(void *scrollArea);
LIBRARY_API int   QScrollArea_sizeAdjustPolicy(void *scrollArea);
LIBRARY_API void  QScrollArea_setHorizontalScrollBarPolicy(void *scrollArea, int scrollBarPolicy);
LIBRARY_API void  QScrollArea_setVerticalScrollBarPolicy(void *scrollArea, int scrollBarPolicy);
LIBRARY_API int   QScrollArea_horizontalScrollBarPolicy(void *scrollArea);
LIBRARY_API int   QScrollArea_verticalScrollBarPolicy(void *scrollArea);
LIBRARY_API void  QScrollArea_setSizeAdjustPolicy(void *scrollArea, int sizeAdjustPolicy);

#ifdef __cplusplus
}
#endif
