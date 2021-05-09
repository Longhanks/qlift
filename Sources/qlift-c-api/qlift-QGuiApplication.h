#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QGuiApplication_new(int *argc, char *argv[]);

LIBRARY_API void QGuiApplication_delete(void *guiApplication);

#ifdef __cplusplus
}
#endif
