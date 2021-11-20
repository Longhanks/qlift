#include <QGroupBox>

#include "qlift-QGroupBox.h"

[[maybe_unused]] void *QGroupBox_new(const char *title, void *parent) {
    return static_cast<void *>(
        new QGroupBox{title, static_cast<QWidget *>(parent)});
}

[[maybe_unused]] int QGroupBox_alignment(void *groupBox) {
    return static_cast<QGroupBox *>(groupBox)->alignment();
}

[[maybe_unused]] void QGroupBox_setAlignment(void *groupBox, int alignment) {
    static_cast<QGroupBox *>(groupBox)->setAlignment(alignment);
}

[[maybe_unused]] CQString QGroupBox_title(void *groupBox) {
    auto text = static_cast<QGroupBox *>(groupBox)->title();
    return CQString { text.utf16(), text.size() };
}

[[maybe_unused]] void QGroupBox_setTitle(void *groupBox, const char *title) {
    static_cast<QGroupBox *>(groupBox)->setTitle(title);
}
