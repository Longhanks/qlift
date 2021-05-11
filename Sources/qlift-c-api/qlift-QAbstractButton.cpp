#include <QAbstractButton>

#include "qlift-QAbstractButton.h"

[[maybe_unused]] const char *QAbstractButton_text(void *abstractButton) {
    return static_cast<QAbstractButton *>(abstractButton)
        ->text()
        .toLocal8Bit()
        .data();
}

[[maybe_unused]] void QAbstractButton_setText(void *abstractButton,
                                              const char *text) {
    static_cast<QAbstractButton *>(abstractButton)->setText(text);
}

[[maybe_unused]] void QAbstractButton_clicked_connect(void *abstractButton,
                                                      void *receiver,
                                                      void *context,
                                                      void (*slot_ptr)(void *,
                                                                       bool)) {
    QObject::connect(
        static_cast<QAbstractButton *>(abstractButton),
        &QAbstractButton::clicked,
        static_cast<QObject *>(receiver),
        [context, slot_ptr](bool checked) { (*slot_ptr)(context, checked); });
}

[[maybe_unused]] void QAbstractButton_setIcon(void *abstractButton,
                                              void *icon) {
    return static_cast<QAbstractButton *>(abstractButton)
    ->setIcon(*static_cast<QIcon *>(icon));
}

[[maybe_unused]] void QAbstractButton_setIconSize(void *abstractButton,
                                              void *size) {
    return static_cast<QAbstractButton *>(abstractButton)
    ->setIconSize(*static_cast<QSize *>(size));
}
