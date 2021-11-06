#include <QProgressBar>

#include "qlift-QProgressBar.h"

[[maybe_unused]] void *QProgressBar_new(void *parent) {
    return static_cast<void *>(new QProgressBar{static_cast<QWidget *>(parent)});
}

[[maybe_unused]] int QProgressBar_value(void *progressBar) {
    return static_cast<QProgressBar *>(progressBar)->value();
}

[[maybe_unused]] void QProgressBar_setValue(void *progressBar, int value) {
    static_cast<QProgressBar *>(progressBar)->setValue(value);
}

[[maybe_unused]] int QProgressBar_minimum(void *progressBar) {
    return static_cast<QProgressBar *>(progressBar)->minimum();
}

[[maybe_unused]] void QProgressBar_setMinimum(void *progressBar, int min) {
    static_cast<QProgressBar *>(progressBar)->setMinimum(min);
}

[[maybe_unused]] int QProgressBar_maximum(void *progressBar) {
    return static_cast<QProgressBar *>(progressBar)->maximum();
}

[[maybe_unused]] void QProgressBar_setMaximum(void *progressBar, int max) {
    static_cast<QProgressBar *>(progressBar)->setMaximum(max);
}

[[maybe_unused]] CQString QProgressBar_format(void *progressBar) {
    auto text = static_cast<QProgressBar *>(progressBar)->format();
    return CQString { text.utf16(), text.size() };
}

[[maybe_unused]] void QProgressBar_setFormat(void *progressBar, const char *format) {
    static_cast<QProgressBar *>(progressBar)->setFormat(format);
}

[[maybe_unused]] bool QProgressBar_isTextVisible(void *progressBar) {
    return static_cast<QProgressBar *>(progressBar)->isTextVisible();
}

[[maybe_unused]] void QProgressBar_setTextVisible(void *progressBar, bool visible) {
    static_cast<QProgressBar *>(progressBar)->setTextVisible(visible);
}

[[maybe_unused]] int QProgressBar_orientation(void *progressBar) {
    return static_cast<QProgressBar *>(progressBar)->orientation();
}

[[maybe_unused]] void QProgressBar_setOrientation(void *progressBar, int orientation) {
    static_cast<QProgressBar *>(progressBar)->setOrientation(static_cast<Qt::Orientation>(orientation));
}

[[maybe_unused]] int QProgressBar_alignment(void *progressBar) {
    return static_cast<QProgressBar *>(progressBar)->alignment();
}

[[maybe_unused]] void QProgressBar_setAlignment(void *progressBar, int alignment) {
    static_cast<QProgressBar *>(progressBar)->setAlignment(
                                static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

[[maybe_unused]] void QProgressBar_setInvertedAppearance(void *progressBar, bool invert) {
    static_cast<QProgressBar *>(progressBar)->setInvertedAppearance(invert);
}

[[maybe_unused]] void QProgressBar_setTextDirection(void *progressBar, int textDirection) {
    static_cast<QProgressBar *>(progressBar)->setTextDirection(static_cast<QProgressBar::Direction>(textDirection));
}

[[maybe_unused]] bool QProgressBar_invertedAppearance(void *progressBar) {
    return static_cast<QProgressBar *>(progressBar)->invertedAppearance();
}

[[maybe_unused]] int QProgressBar_textDirection(void *progressBar) {
    return static_cast<QProgressBar *>(progressBar)->textDirection();
}
