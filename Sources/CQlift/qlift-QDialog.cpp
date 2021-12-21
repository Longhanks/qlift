#include <QDialog>

#include "qlift-QDialog.h"

[[maybe_unused]] void *QDialog_new(void *parent, int flags) {
    return static_cast<void *>(
        new QDialog{static_cast<QWidget *>(parent),
                    static_cast<QFlags<Qt::WindowType>>(flags)});
}

[[maybe_unused]] int QDialog_exec(void *dialog) {
    return static_cast<QDialog *>(dialog)->exec();
}

[[maybe_unused]] void QDialog_accept(void *dialog) {
    static_cast<QDialog *>(dialog)->accept();
}

[[maybe_unused]] void QDialog_reject(void *dialog) {
    static_cast<QDialog *>(dialog)->reject();
}

[[maybe_unused]] bool QDialog_isModal(void *dialog) {
    return static_cast<QDialog *>(dialog)->isModal();
}

[[maybe_unused]] void QDialog_setModal(void *dialog, bool modal) {
    static_cast<QDialog *>(dialog)->setModal(modal);
}

[[maybe_unused]] bool QDialog_isSizeGripEnabled(void *dialog) {
    return static_cast<QDialog *>(dialog)->isSizeGripEnabled();
}

[[maybe_unused]] void QDialog_setSizeGripEnabled(void *dialog, bool on) {
    static_cast<QDialog *>(dialog)->setSizeGripEnabled(on);
}
[[maybe_unused]] void QDialog_done(void *dialog, int r) {
    static_cast<QDialog *>(dialog)->done(r);
}
[[maybe_unused]] void QDialog_open(void *dialog) {
    static_cast<QDialog *>(dialog)->open();
}
