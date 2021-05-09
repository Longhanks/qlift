#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QMenuBar_new(void *parent);

LIBRARY_API void QMenuBar_delete(void *menuBar);

#ifdef __cplusplus
}
#endif
