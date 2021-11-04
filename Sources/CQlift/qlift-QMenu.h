#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QMenu_new(const char *title, void *parent);
LIBRARY_API const ushort *QMenu_title(void *menu, int *len);
LIBRARY_API void QMenu_setTitle(void *menu, const char *title);
LIBRARY_API void *QMenu_menuAction(void *menu);

#ifdef __cplusplus
}
#endif
