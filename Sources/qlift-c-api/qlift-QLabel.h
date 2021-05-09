#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QLabel_new(const char *text, void *parent, int flags);

LIBRARY_API void QLabel_delete(void *label);

LIBRARY_API void QLabel_setAlignment(void *label, int alignment);

LIBRARY_API const char *QLabel_text(void *label);

LIBRARY_API void QLabel_setText(void *label, const char *text);

LIBRARY_API void QLabel_setPixmap(void *label, const void *pixmap);

LIBRARY_API bool QLabel_hasScaledContents(void *label);

LIBRARY_API void QLabel_setScaledContents(void *label, bool isScaled);

LIBRARY_API bool QLabel_openExternalLinks(void *label);

LIBRARY_API void QLabel_setOpenExternalLinks(void *label, bool open);

#ifdef __cplusplus
}
#endif
