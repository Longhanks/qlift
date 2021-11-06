#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QGroupBox_new(const char *title, void *parent);
LIBRARY_API void QGroupBox_setAlignment(void *groupBox, int alignment);
LIBRARY_API const ushort *QGroupBox_title(void *groupBox, int *len);
LIBRARY_API void QGroupBox_setTitle(void *groupBox, const char *title);

#ifdef __cplusplus
}
#endif
