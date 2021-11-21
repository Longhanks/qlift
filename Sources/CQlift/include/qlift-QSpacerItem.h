#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QSpacerItem_new(int w, int h, int hPolicy, int vPolicy);

LIBRARY_API void QSpacerItem_delete(void *spacerItem);

#ifdef __cplusplus
}
#endif
