#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QLabel_new(const char *text, void *parent, int flags);
LIBRARY_API int QLabel_alignment(void *label);
LIBRARY_API void QLabel_setAlignment(void *label, int alignment);
LIBRARY_API CQString QLabel_text(void *label);
LIBRARY_API void QLabel_setText(void *label, const char *text);
LIBRARY_API void QLabel_setPixmap(void *label, const void *pixmap);
LIBRARY_API void QLabel_setImage(void *label, const void *image);
LIBRARY_API bool QLabel_hasScaledContents(void *label);
LIBRARY_API void QLabel_setScaledContents(void *label, bool isScaled);
LIBRARY_API bool QLabel_openExternalLinks(void *label);
LIBRARY_API void QLabel_setOpenExternalLinks(void *label, bool open);
LIBRARY_API bool QLabel_wordWrap(void *label);
LIBRARY_API void QLabel_setWordWrap(void *label, bool on);
LIBRARY_API int QLabel_indent(void *label);
LIBRARY_API void QLabel_setIndent(void *label, int indent);
LIBRARY_API void *QLabel_pixmap(void *label);
LIBRARY_API int QLabel_textFormat(void *label);
LIBRARY_API void QLabel_setTextFormat(void *label, int format);

#ifdef __cplusplus
}
#endif
