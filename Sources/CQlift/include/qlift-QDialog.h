#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QDialog_new(void *parent, int flags);
LIBRARY_API int QDialog_exec(void *dialog);
LIBRARY_API void QDialog_accept(void *dialog);
LIBRARY_API void QDialog_reject(void *dialog);
LIBRARY_API bool QDialog_isModal(void *dialog);
LIBRARY_API void QDialog_setModal(void *dialog, bool modal);
LIBRARY_API bool QDialog_isSizeGripEnabled(void *dialog);
LIBRARY_API void QDialog_setSizeGripEnabled(void *dialog, bool on);
LIBRARY_API void QDialog_done(void *dialog, int r);
LIBRARY_API void QDialog_open(void *dialog);

#ifdef __cplusplus
}
#endif
