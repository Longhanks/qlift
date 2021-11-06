#include <QAction>

#include "qlift-QAction.h"

[[maybe_unused]] void *
QAction_new(void *icon, const char *text, void *parent) {
    if (icon != nullptr) {
        return static_cast<void *>(
            new QAction{*static_cast<QIcon *>(icon),
                        text,
                        static_cast<QWidget *>(parent)});
    }

    if (text != nullptr) {
        return static_cast<void *>(
            new QAction{text, static_cast<QWidget *>(parent)});
    }

    return static_cast<void *>(new QAction{static_cast<QWidget *>(parent)});
}

[[maybe_unused]] const ushort *QAction_text(void *action, int *len) {
    auto text = static_cast<QAction *>(action)->text();
    *len = text.size();
    return text.utf16();
}

[[maybe_unused]] void QAction_setText(void *action, const char *text) {
    static_cast<QAction *>(action)->setText(text);
}

[[maybe_unused]] void QAction_triggered_connect(void *action,
                                                void *receiver,
                                                void *context,
                                                void (*slot_ptr)(void *,
                                                                 bool)) {
    QObject::connect(
        static_cast<QAction *>(action),
        &QAction::triggered,
        static_cast<QObject *>(receiver),
        [context, slot_ptr](bool checked) { (*slot_ptr)(context, checked); });
}
