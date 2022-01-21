//
//  qlift-QFont.hpp
//  
//
//  Created by Dmitriy Borovikov on 21.01.2022.
//

#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QFont_new(const void *font);
LIBRARY_API void *QFont_new1(const char *family, int pointSize, int weight1, bool italic);
LIBRARY_API void *QFont_new2();

LIBRARY_API void QFont_delete(void *font);
LIBRARY_API bool QFont_bold(void *font);
LIBRARY_API int QFont_capitalization(void *font);
LIBRARY_API CQString QFont_defaultFamily(void *font);
LIBRARY_API bool QFont_exactMatch(void *font);
LIBRARY_API CQString QFont_family(void *font);
LIBRARY_API bool QFont_fixedPitch(void *font);
LIBRARY_API int QFont_hintingPreference(void *font);
LIBRARY_API bool QFont_italic(void *font);
LIBRARY_API bool QFont_kerning(void *font);
LIBRARY_API CQString QFont_key(void *font);
LIBRARY_API double QFont_letterSpacing(void *font);
LIBRARY_API int QFont_letterSpacingType(void *font);
LIBRARY_API bool QFont_overline(void *font);
LIBRARY_API int QFont_pixelSize(void *font);
LIBRARY_API int QFont_pointSize(void *font);
LIBRARY_API double QFont_pointSizeF(void *font);
LIBRARY_API int QFont_stretch(void *font);
LIBRARY_API bool QFont_strikeOut(void *font);
LIBRARY_API int QFont_style(void *font);
LIBRARY_API int QFont_styleHint(void *font);
LIBRARY_API CQString QFont_styleName(void *font);
LIBRARY_API int QFont_styleStrategy(void *font);
LIBRARY_API CQString QFont_toString(void *font);
LIBRARY_API bool QFont_underline(void *font);
LIBRARY_API int QFont_weight(void *font);
LIBRARY_API double QFont_wordSpacing(void *font);
LIBRARY_API bool QFont_fromString(void *font, const char *descrip);
LIBRARY_API bool QFont_isCopyOf(void *font, const void *f);
LIBRARY_API void QFont_swap(void *font, void *other);
LIBRARY_API void QFont_setBold(void *font, bool enable);
LIBRARY_API void QFont_setCapitalization(void *font, int caps);
LIBRARY_API void QFont_setFamily(void *font, const char *family);
LIBRARY_API void QFont_setFixedPitch(void *font, bool enable);
LIBRARY_API void QFont_setHintingPreference(void *font, int hintingPreference);
LIBRARY_API void QFont_setItalic(void *font, bool enable);
LIBRARY_API void QFont_setKerning(void *font, bool enable);
LIBRARY_API void QFont_setLetterSpacing(void *font, int type, double spacing);
LIBRARY_API void QFont_setOverline(void *font, bool enable);
LIBRARY_API void QFont_setPixelSize(void *font, int pixelSize);
LIBRARY_API void QFont_setPointSize(void *font, int pointSize);
LIBRARY_API void QFont_setPointSizeF(void *font, double pointSize);
LIBRARY_API void QFont_setStretch(void *font, int factor);
LIBRARY_API void QFont_setStrikeOut(void *font, bool enable);
LIBRARY_API void QFont_setStyle(void *font, int style);
LIBRARY_API void QFont_setStyleHint(void *font, int hint, int strategy);
LIBRARY_API void QFont_setStyleName(void *font, const char *styleName);
LIBRARY_API void QFont_setStyleStrategy(void *font, int strategy);
LIBRARY_API void QFont_setUnderline(void *font, bool enable);
LIBRARY_API void QFont_setWeight(void *font, int weight);
LIBRARY_API void QFont_setWordSpacing(void *font, double spacing);

#ifdef __cplusplus
}
#endif
