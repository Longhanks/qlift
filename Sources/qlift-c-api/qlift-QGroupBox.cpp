#include <QGroupBox>

#include "qlift-QGroupBox.h"

[[maybe_unused]] void *QGroupBox_new(const char *title, void *parent) {
    return static_cast<void *>(
        new QGroupBox{title, static_cast<QWidget *>(parent)});
}

[[maybe_unused]] void QGroupBox_setAlignment(void *groupBox, int alignment) {
    static_cast<QGroupBox *>(groupBox)->setAlignment(alignment);
}

[[maybe_unused]] const ushort *QGroupBox_title(void *groupBox, int *len) {
    auto text = static_cast<QGroupBox *>(groupBox)->title();
    *len = text.size();
    return text.utf16();
}

[[maybe_unused]] void QGroupBox_setTitle(void *groupBox, const char *title) {
    static_cast<QGroupBox *>(groupBox)->setTitle(title);
}
