#include <QPushButton>

#ifndef SWIFT_PACKAGE
#include <wobjectimpl.h>
#else
#include "../../include/wobjectimpl.h"
#endif

#include "qlift-QPushButton.h"

[[maybe_unused]] void *
QPushButton_new(void *icon, const char *text, void *parent) {
    if (icon != nullptr) {
        return static_cast<void *>(
            new QliftPushButton{*static_cast<QIcon *>(icon),
                                text,
                                static_cast<QWidget *>(parent)});
    }
    return static_cast<void *>(
        new QliftPushButton{text, static_cast<QWidget *>(parent)});
}

[[maybe_unused]] void QPushButton_delete(void *pushButton) {
    delete static_cast<QliftPushButton *>(pushButton);
}

[[maybe_unused]] void QPushButton_mousePressEvent(void *pushButton,
                                                  void *mouseEvent) {
    static_cast<QliftPushButton *>(pushButton)
        ->mousePressEventSuper(static_cast<QMouseEvent *>(mouseEvent));
}

[[maybe_unused]] void QPushButton_mousePressEvent_Override(
    void *pushButton,
    void *context,
    void (*mousePressEvent_Functor)(void *, void *)) {
    static_cast<QliftPushButton *>(pushButton)
        ->mousePressEventOverride(context, mousePressEvent_Functor);
}

W_OBJECT_IMPL(QliftPushButton)

[[maybe_unused]] void
QliftPushButton::mousePressEventSuper(QMouseEvent *mouseEvent) {
    QPushButton::mousePressEvent(mouseEvent);
}

[[maybe_unused]] void QliftPushButton::mousePressEventOverride(
    void *context, void (*mousePressEvent_Functor)(void *, void *)) {
    m_mousePressEvent_Context = context;
    m_mousePressEvent_Functor = mousePressEvent_Functor;
}

[[maybe_unused]] void
QliftPushButton::mousePressEvent(QMouseEvent *mouseEvent) {
    if (m_mousePressEvent_Functor != nullptr) {
        (*m_mousePressEvent_Functor)(m_mousePressEvent_Context, mouseEvent);
        return;
    }
    QPushButton::mousePressEvent(mouseEvent);
}
