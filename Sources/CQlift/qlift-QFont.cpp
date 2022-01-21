//
//  qlift-QFont.cpp
//  
//
//  Created by Dmitriy Borovikov on 21.01.2022.
//

#include <QFont>
#include "qlift-QFont.h"


[[maybe_unused]] void *QFont_new(const void *font) {
    return new QFont(*static_cast<const QFont *>(font));
}
[[maybe_unused]] void *QFont_new1(const char *family, int pointSize, int weight, bool italic) {
    return new QFont(family, pointSize, weight, italic);
}
[[maybe_unused]] void *QFont_new2() {
    return new QFont();
}
[[maybe_unused]] void QFont_delete(void *font) {
    delete static_cast<QFont *>(font);
}
[[maybe_unused]] bool QFont_bold(void *font) {
    return static_cast<QFont *>(font)->bold();
}
[[maybe_unused]] int QFont_capitalization(void *font) {
    return static_cast<QFont *>(font)->capitalization();
}
[[maybe_unused]] CQString QFont_defaultFamily(void *font) {
    auto text = static_cast<QFont *>(font)->defaultFamily();
    return CQString { text.utf16(), text.size() };
}
[[maybe_unused]] bool QFont_exactMatch(void *font) {
    return static_cast<QFont *>(font)->exactMatch();
}
[[maybe_unused]] CQString QFont_family(void *font) {
    auto text = static_cast<QFont *>(font)->family();
    return CQString { text.utf16(), text.size() };
}
[[maybe_unused]] bool QFont_fixedPitch(void *font) {
    return static_cast<QFont *>(font)->fixedPitch();
}
[[maybe_unused]] int QFont_hintingPreference(void *font) {
    return static_cast<QFont *>(font)->hintingPreference();
}
[[maybe_unused]] bool QFont_italic(void *font) {
    return static_cast<QFont *>(font)->italic();
}
[[maybe_unused]] bool QFont_kerning(void *font) {
    return static_cast<QFont *>(font)->kerning();
}
[[maybe_unused]] CQString QFont_key(void *font) {
    auto text = static_cast<QFont *>(font)->key();
    return CQString { text.utf16(), text.size() };
}
[[maybe_unused]] double QFont_letterSpacing(void *font) {
    return static_cast<QFont *>(font)->letterSpacing();
}
[[maybe_unused]] int QFont_letterSpacingType(void *font) {
    return static_cast<QFont *>(font)->letterSpacingType();
}
[[maybe_unused]] bool QFont_overline(void *font) {
    return static_cast<QFont *>(font)->overline();
}
[[maybe_unused]] int QFont_pixelSize(void *font) {
    return static_cast<QFont *>(font)->pixelSize();
}
[[maybe_unused]] int QFont_pointSize(void *font) {
    return static_cast<QFont *>(font)->pointSize();
}
[[maybe_unused]] double QFont_pointSizeF(void *font) {
    return static_cast<QFont *>(font)->pointSizeF();
}
[[maybe_unused]] int QFont_stretch(void *font) {
    return static_cast<QFont *>(font)->stretch();
}
[[maybe_unused]] bool QFont_strikeOut(void *font) {
    return static_cast<QFont *>(font)->strikeOut();
}
[[maybe_unused]] int QFont_style(void *font) {
    return static_cast<QFont *>(font)->style();
}
[[maybe_unused]] int QFont_styleHint(void *font) {
    return static_cast<QFont *>(font)->styleHint();
}
[[maybe_unused]] CQString QFont_styleName(void *font) {
    auto text = static_cast<QFont *>(font)->styleName();
    return CQString { text.utf16(), text.size() };
}
[[maybe_unused]] int QFont_styleStrategy(void *font) {
    return static_cast<QFont *>(font)->styleStrategy();
}
[[maybe_unused]] CQString QFont_toString(void *font) {
    auto text = static_cast<QFont *>(font)->toString();
    return CQString { text.utf16(), text.size() };
}
[[maybe_unused]] bool QFont_underline(void *font) {
    return static_cast<QFont *>(font)->underline();
}
[[maybe_unused]] int QFont_weight(void *font) {
    return static_cast<QFont *>(font)->weight();
}
[[maybe_unused]] double QFont_wordSpacing(void *font) {
    return static_cast<QFont *>(font)->wordSpacing();
}
[[maybe_unused]] bool QFont_fromString(void *font, const char *descrip) {
    return static_cast<QFont *>(font)->fromString(descrip);
}
[[maybe_unused]] bool QFont_isCopyOf(void *font, const void *f) {
    return static_cast<QFont *>(font)->isCopyOf(*static_cast<const QFont *>(f));
}

[[maybe_unused]] void QFont_swap(void *font, void *other) {
    static_cast<QFont *>(font)->swap(*static_cast<QFont *>(other));
}
[[maybe_unused]] void QFont_setBold(void *font, bool enable) {
    static_cast<QFont *>(font)->setBold(enable);
}
[[maybe_unused]] void QFont_setCapitalization(void *font, int caps) {
    static_cast<QFont *>(font)->setCapitalization(static_cast<QFont::Capitalization>(caps));
}
[[maybe_unused]] void QFont_setFamily(void *font, const char *family) {
    static_cast<QFont *>(font)->setFamily(family);
}
[[maybe_unused]] void QFont_setFixedPitch(void *font, bool enable) {
    static_cast<QFont *>(font)->setFixedPitch(enable);
}
[[maybe_unused]] void QFont_setHintingPreference(void *font, int hintingPreference) {
    static_cast<QFont *>(font)->setHintingPreference(static_cast<QFont::HintingPreference>(hintingPreference));
}
[[maybe_unused]] void QFont_setItalic(void *font, bool enable) {
    static_cast<QFont *>(font)->setItalic(enable);
}
[[maybe_unused]] void QFont_setKerning(void *font, bool enable) {
    static_cast<QFont *>(font)->setKerning(enable);
}
[[maybe_unused]] void QFont_setLetterSpacing(void *font, int type, double spacing) {
    static_cast<QFont *>(font)->setLetterSpacing(static_cast<QFont::SpacingType>(type), spacing);
}
[[maybe_unused]] void QFont_setOverline(void *font, bool enable) {
    static_cast<QFont *>(font)->setOverline(enable);
}
[[maybe_unused]] void QFont_setPixelSize(void *font, int pixelSize) {
    static_cast<QFont *>(font)->setPixelSize(pixelSize);
}
[[maybe_unused]] void QFont_setPointSize(void *font, int pointSize) {
    static_cast<QFont *>(font)->setPointSize(pointSize);
}
[[maybe_unused]] void QFont_setPointSizeF(void *font, double pointSize) {
    static_cast<QFont *>(font)->setPointSizeF(pointSize);
}
[[maybe_unused]] void QFont_setStretch(void *font, int factor) {
    static_cast<QFont *>(font)->setStretch(factor);
}
[[maybe_unused]] void QFont_setStrikeOut(void *font, bool enable) {
    static_cast<QFont *>(font)->setStrikeOut(enable);
}
[[maybe_unused]] void QFont_setStyle(void *font, int style) {
    static_cast<QFont *>(font)->setStyle(static_cast<QFont::Style>(style));
}
[[maybe_unused]] void QFont_setStyleHint(void *font, int hint, int strategy) {
    static_cast<QFont *>(font)->setStyleHint(static_cast<QFont::StyleHint>(hint), static_cast<QFont::StyleStrategy>(strategy));
}
[[maybe_unused]] void QFont_setStyleName(void *font, const char *styleName) {
    static_cast<QFont *>(font)->setStyleName(styleName);
}
[[maybe_unused]] void QFont_setStyleStrategy(void *font, int strategy) {
    static_cast<QFont *>(font)->setStyleStrategy(static_cast<QFont::StyleStrategy>(strategy));
}
[[maybe_unused]] void QFont_setUnderline(void *font, bool enable) {
    static_cast<QFont *>(font)->setUnderline(enable);
}
[[maybe_unused]] void QFont_setWeight(void *font, int weight) {
    static_cast<QFont *>(font)->setWeight(weight);
}
[[maybe_unused]] void QFont_setWordSpacing(void *font, double spacing) {
    static_cast<QFont *>(font)->setWordSpacing(spacing);
}
