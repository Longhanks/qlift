#include <QToolButton>
#include <wobjectimpl.h>
#include "qlift-QToolButton.h"

[[maybe_unused]] void *
QToolButton_new(void *parent) {
    return static_cast<void *>(
        new QliftToolButton{static_cast<QWidget *>(parent)});
}

[[maybe_unused]] void QToolButton_setToolButtonStyle(void *toolButton, int style) {
    static_cast<QliftToolButton *>(toolButton)->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(style));
}

[[maybe_unused]] int QToolButton_toolButtonStyle(void *toolButton) {
    return static_cast<QliftToolButton *>(toolButton)->toolButtonStyle();
}

[[maybe_unused]] void QToolButton_mousePressEvent(void *toolButton,
                                                  void *mouseEvent) {
    static_cast<QliftToolButton *>(toolButton)
        ->mousePressEventSuper(static_cast<QMouseEvent *>(mouseEvent));
}

[[maybe_unused]] void QToolButton_mousePressEvent_Override(
    void *toolButton,
    void *context,
    void (*mousePressEvent_Functor)(void *, void *)) {
    static_cast<QliftToolButton *>(toolButton)
        ->mousePressEventOverride(context, mousePressEvent_Functor);
}

[[maybe_unused]] void QToolButton_swiftHookCleanup(void *toolButton) {
    if (toolButton != nullptr)
        static_cast<QliftToolButton *>(toolButton)->swiftHookCleanup();
}

W_OBJECT_IMPL(QliftToolButton)

[[maybe_unused]] void
QliftToolButton::mousePressEventSuper(QMouseEvent *mouseEvent) {
    QToolButton::mousePressEvent(mouseEvent);
}

[[maybe_unused]] void QliftToolButton::mousePressEventOverride(
    void *context, void (*mousePressEvent_Functor)(void *, void *)) {
    m_mousePressEvent_Context = context;
    m_mousePressEvent_Functor = mousePressEvent_Functor;
}

[[maybe_unused]] void
QliftToolButton::mousePressEvent(QMouseEvent *mouseEvent) {
    if (m_mousePressEvent_Functor != nullptr) {
        (*m_mousePressEvent_Functor)(m_mousePressEvent_Context, mouseEvent);
        return;
    }
    QToolButton::mousePressEvent(mouseEvent);
}
