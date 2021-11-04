#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API unsigned int QLayoutItem_alignment(void *layoutItem);

LIBRARY_API void QLayoutItem_setAlignment(void *layoutItem, int alignment);

#ifdef __cplusplus
}
#endif
