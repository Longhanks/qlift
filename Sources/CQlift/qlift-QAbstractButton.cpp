#include <QAbstractButton>

#include "qlift-QAbstractButton.h"

[[maybe_unused]] CQString QAbstractButton_text(void *abstractButton) {
    auto text = static_cast<QAbstractButton *>(abstractButton)->text();
    return CQString { text.utf16(), text.size() };
}

[[maybe_unused]] void QAbstractButton_setText(void *abstractButton,
                                              const char *text) {
    static_cast<QAbstractButton *>(abstractButton)->setText(text);
}

[[maybe_unused]] void QAbstractButton_clicked_connect(void *abstractButton,
                                                      void *receiver,
                                                      void *context,
                                                      void (*slot_ptr)(void *, bool)) {
    QObject::connect(
        static_cast<QAbstractButton *>(abstractButton),
        &QAbstractButton::clicked,
        static_cast<QObject *>(receiver),
        [context, slot_ptr](bool checked) { (*slot_ptr)(context, checked); });
}

[[maybe_unused]] void QAbstractButton_toggled_connect(void *abstractButton,
                                                      void *receiver,
                                                      void *context,
                                                      void (*slot_ptr)(void *, bool)) {
    QObject::connect(
        static_cast<QAbstractButton *>(abstractButton),
        &QAbstractButton::toggled,
        static_cast<QObject *>(receiver),
        [context, slot_ptr](bool checked) { (*slot_ptr)(context, checked); });
}

[[maybe_unused]] void QAbstractButton_pressed_connect(void *abstractButton,
                                                      void *receiver,
                                                      void *context,
                                                      void (*slot_ptr)(void *)) {
    QObject::connect(
                     static_cast<QAbstractButton *>(abstractButton),
                     &QAbstractButton::pressed,
                     static_cast<QObject *>(receiver),
                     [context, slot_ptr]() { (*slot_ptr)(context); });
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

[[maybe_unused]] void QAbstractButton_setCheckable(void *abstractButton,
                                                   bool checkable) {
    static_cast<QAbstractButton *>(abstractButton)->setCheckable(checkable);
}

[[maybe_unused]] bool QAbstractButton_getCheckable(void *abstractButton) {
    return static_cast<QAbstractButton *>(abstractButton)->isCheckable();
}

[[maybe_unused]] void QAbstractButton_setChecked(void *abstractButton,
                                                 bool checked) {
    static_cast<QAbstractButton *>(abstractButton)->setChecked(checked);
}

[[maybe_unused]] bool QAbstractButton_getChecked(void *abstractButton) {
    return static_cast<QAbstractButton *>(abstractButton)->isChecked();
}
