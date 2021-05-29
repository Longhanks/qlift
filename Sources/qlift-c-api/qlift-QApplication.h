#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QApplication_new(int *argc, char *argv[]);

LIBRARY_API void QApplication_delete(void *application);

LIBRARY_API void *QApplication_desktop(void);

LIBRARY_API bool QApplication_set_style(void *application, const char *style);

#ifdef __cplusplus
}
#endif
