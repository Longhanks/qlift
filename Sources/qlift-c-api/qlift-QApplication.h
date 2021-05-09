#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QApplication_new(int *argc, char *argv[]);

LIBRARY_API void QApplication_delete(void *application);

LIBRARY_API void *QApplication_desktop(void);

#ifdef __cplusplus
}
#endif
