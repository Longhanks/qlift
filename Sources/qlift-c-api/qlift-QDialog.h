#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QDialog_new(void *parent, int flags);

LIBRARY_API void QDialog_delete(void *dialog);

LIBRARY_API int QDialog_exec(void *dialog);

LIBRARY_API void QDialog_accept(void *dialog);

LIBRARY_API void QDialog_reject(void *dialog);

#ifdef __cplusplus
}
#endif
