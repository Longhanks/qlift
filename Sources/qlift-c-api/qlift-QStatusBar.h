#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QStatusBar_new(void *parent);
LIBRARY_API void QStatusBar_delete(void *statusBar);

LIBRARY_API void QStatusBar_addPermanentWidget(void *statusBar, void *widget, int stretch);
LIBRARY_API void QStatusBar_addWidget(void *statusBar, void *widget, int stretch);
LIBRARY_API int  QStatusBar_insertPermanentWidget(void *statusBar, int index, void *widget, int stretch);
LIBRARY_API int  QStatusBar_insertWidget(void *statusBar, int index, void *widget, int stretch);
LIBRARY_API void QStatusBar_removeWidget(void *statusBar, void *widget);
LIBRARY_API bool QStatusBar_isSizeGripEnabled(void *statusBar);
LIBRARY_API void QStatusBar_setSizeGripEnabled(void *statusBar, bool enabled);
LIBRARY_API void QStatusBar_clearMessage(void *statusBar);
LIBRARY_API void QStatusBar_showMessage(void *statusBar, const char *message, int timeout);


#ifdef __cplusplus
}
#endif
