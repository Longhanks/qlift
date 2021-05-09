#include <QLabel>

#include "qlift-QLabel.h"

[[maybe_unused]] void *QLabel_new(const char *text, void *parent, int flags) {
    return static_cast<void *>(
        new QLabel{text,
                   static_cast<QWidget *>(parent),
                   static_cast<QFlags<Qt::WindowType>>(flags)});
}

[[maybe_unused]] void QLabel_delete(void *label) {
    delete static_cast<QLabel *>(label);
}

[[maybe_unused]] void QLabel_setAlignment(void *label, int alignment) {
    static_cast<QLabel *>(label)->setAlignment(
        static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

[[maybe_unused]] const char *QLabel_text(void *label) {
    return static_cast<QLabel *>(label)->text().toLocal8Bit().data();
}

[[maybe_unused]] void QLabel_setText(void *label, const char *text) {
    static_cast<QLabel *>(label)->setText(text);
}

[[maybe_unused]] void QLabel_setPixmap(void *label, const void *pixmap) {
    static_cast<QLabel *>(label)->setPixmap(*(static_cast<QPixmap const*>(pixmap)));
}

[[maybe_unused]] bool QLabel_hasScaledContents(void *label) {
    return static_cast<QLabel *>(label)->hasScaledContents();
}

[[maybe_unused]] void QLabel_setScaledContents(void *label, bool isScaled) {
    static_cast<QLabel *>(label)->setScaledContents(isScaled);
}
