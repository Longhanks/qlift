#include <QRadioButton>
#include <wobjectimpl.h>
#include "qlift-QRadioButton.h"

[[maybe_unused]] void *
QRadioButton_new(const char *text, void *parent) {
    return static_cast<void *>(
        new QliftRadioButton{text, static_cast<QWidget *>(parent)});
}

[[maybe_unused]] void QRadioButton_mousePressEvent(void *radioButton,
                                                  void *mouseEvent) {
    static_cast<QliftRadioButton *>(radioButton)
        ->mousePressEventSuper(static_cast<QMouseEvent *>(mouseEvent));
}

[[maybe_unused]] void QRadioButton_mousePressEvent_Override(
    void *radioButton,
    void *context,
    void (*mousePressEvent_Functor)(void *, void *)) {
    static_cast<QliftRadioButton *>(radioButton)
        ->mousePressEventOverride(context, mousePressEvent_Functor);
}

[[maybe_unused]] void QRadioButton_swiftHookCleanup(void *radioButton) {
    if (radioButton != nullptr)
        static_cast<QliftRadioButton *>(radioButton)->swiftHookCleanup();
}

W_OBJECT_IMPL(QliftRadioButton)

[[maybe_unused]] void
QliftRadioButton::mousePressEventSuper(QMouseEvent *mouseEvent) {
    QRadioButton::mousePressEvent(mouseEvent);
}

[[maybe_unused]] void QliftRadioButton::mousePressEventOverride(
    void *context, void (*mousePressEvent_Functor)(void *, void *)) {
    m_mousePressEvent_Context = context;
    m_mousePressEvent_Functor = mousePressEvent_Functor;
}

[[maybe_unused]] void
QliftRadioButton::mousePressEvent(QMouseEvent *mouseEvent) {
    if (m_mousePressEvent_Functor != nullptr) {
        (*m_mousePressEvent_Functor)(m_mousePressEvent_Context, mouseEvent);
        return;
    }
    QRadioButton::mousePressEvent(mouseEvent);
}
