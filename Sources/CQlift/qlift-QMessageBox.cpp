#include <QMessageBox>

#include "qlift-QMessageBox.h"

[[maybe_unused]] void *QMessageBox_new(void *parent) {
    return static_cast<void *>(
        new QMessageBox{static_cast<QWidget *>(parent)});
}

[[maybe_unused]] void QMessageBox_setWindowTitle(void *messageBox, const char *title) {
    static_cast<QMessageBox *>(messageBox)->setWindowTitle(title);
}

[[maybe_unused]] CQString QMessageBox_windowTitle(void *messageBox) {
    auto text = static_cast<QMessageBox *>(messageBox)->windowTitle();
    return CQString { text.utf16(), text.size() };
}

[[maybe_unused]] int QMessageBox_icon(void *messageBox) {
    return static_cast<QMessageBox *>(messageBox)->icon();
}

[[maybe_unused]] int QMessageBox_standardButtons(void *messageBox) {
    return static_cast<QMessageBox *>(messageBox)->standardButtons();
}

[[maybe_unused]] void QMessageBox_setIcon(void *messageBox, int icon) {
    static_cast<QMessageBox *>(messageBox)
        ->setIcon(static_cast<QMessageBox::Icon>(icon));
}

[[maybe_unused]] CQString QMessageBox_text(void *messageBox) {
    auto text = static_cast<QMessageBox *>(messageBox)->text();
    return CQString { text.utf16(), text.size() };
}

[[maybe_unused]] void QMessageBox_setText(void *messageBox, const char *text) {
    static_cast<QMessageBox *>(messageBox)->setText(text);
}

[[maybe_unused]] void QMessageBox_setStandardButtons(void *messageBox,
                                                     int buttons) {
    static_cast<QMessageBox *>(messageBox)
        ->setStandardButtons(
            static_cast<QFlags<QMessageBox::StandardButton>>(buttons));
}

[[maybe_unused]] void
QMessageBox_setDefaultButtonStandardButton(void *messageBox, int button) {
    static_cast<QMessageBox *>(messageBox)
        ->setDefaultButton(static_cast<QMessageBox::StandardButton>(button));
}

[[maybe_unused]] int QMessageBox_exec(void *messageBox) {
    return static_cast<QMessageBox *>(messageBox)->exec();
}
