#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QGuiApplication_new(int *argc, char *argv[]);

LIBRARY_API void QGuiApplication_delete(void *guiApplication);

LIBRARY_API void QGuiApplication_setAttribute(int attribute, bool on);

LIBRARY_API bool QGuiApplication_testAttribute(int attribute);

#ifdef __cplusplus
}
#endif
