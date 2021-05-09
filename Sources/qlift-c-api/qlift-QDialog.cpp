#include <QDialog>

#include "qlift-QDialog.h"

[[maybe_unused]] void *QDialog_new(void *parent, int flags) {
    return static_cast<void *>(
        new QDialog{static_cast<QWidget *>(parent),
                    static_cast<QFlags<Qt::WindowType>>(flags)});
}

[[maybe_unused]] void QDialog_delete(void *dialog) {
    delete static_cast<QDialog *>(dialog);
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
