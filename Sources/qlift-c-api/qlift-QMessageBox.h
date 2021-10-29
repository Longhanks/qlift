#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QMessageBox_new(void *parent);
LIBRARY_API void QMessageBox_setWindowTitle(void *messageBox,
                                            const char *title);
LIBRARY_API void QMessageBox_setIcon(void *messageBox, int icon);
LIBRARY_API void QMessageBox_setText(void *messageBox, const char *text);
LIBRARY_API void QMessageBox_setStandardButtons(void *messageBox, int buttons);
LIBRARY_API void QMessageBox_setDefaultButtonStandardButton(void *messageBox,
                                                            int button);
LIBRARY_API int QMessageBox_exec(void *messageBox);

#ifdef __cplusplus
}
#endif
