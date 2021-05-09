#include <QGroupBox>

#include "qlift-QGroupBox.h"

[[maybe_unused]] void *QGroupBox_new(const char *title, void *parent) {
    return static_cast<void *>(
        new QGroupBox{title, static_cast<QWidget *>(parent)});
}

[[maybe_unused]] void QGroupBox_delete(void *groupBox) {
    delete static_cast<QGroupBox *>(groupBox);
}

[[maybe_unused]] void QGroupBox_setAlignment(void *groupBox, int alignment) {
    static_cast<QGroupBox *>(groupBox)->setAlignment(alignment);
}

[[maybe_unused]] const char *QGroupBox_title(void *groupBox) {
    return static_cast<QGroupBox *>(groupBox)->title().toLocal8Bit().data();
}

[[maybe_unused]] void QGroupBox_setTitle(void *groupBox, const char *title) {
    static_cast<QGroupBox *>(groupBox)->setTitle(title);
}
