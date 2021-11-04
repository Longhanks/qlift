#include <QFrame>

#ifndef SWIFT_PACKAGE
#include <wobjectimpl.h>
#else
#include "../../include/wobjectimpl.h"
#endif

#include "qlift-QFrame.h"

[[maybe_unused]] void *QFrame_new(void *parent, int flags) {
    return static_cast<void *>(
        new QliftFrame{static_cast<QWidget *>(parent),
                       static_cast<QFlags<Qt::WindowType>>(flags)});
}

[[maybe_unused]] void QFrame_mousePressEvent(void *frame, void *mouseEvent) {
    static_cast<QliftFrame *>(frame)->mousePressEventSuper(
        static_cast<QMouseEvent *>(mouseEvent));
}

[[maybe_unused]] void QFrame_mousePressEvent_Override(
    void *frame,
    void *context,
    void (*mousePressEvent_Functor)(void *, void *)) {
    static_cast<QliftFrame *>(frame)->mousePressEventOverride(
        context, mousePressEvent_Functor);
}

[[maybe_unused]] void *QFrame_sizeHint(void *frame) {
    auto stackSize = static_cast<QliftFrame *>(frame)->sizeHintSuper();
    return static_cast<void *>(
        new QSize{stackSize.width(), stackSize.height()});
}

[[maybe_unused]] void QFrame_sizeHint_Override(
    void *frame, void *context, void *(*sizeHint_Functor)(void *)) {
    static_cast<QliftFrame *>(frame)->sizeHintOverride(context,
                                                       sizeHint_Functor);
}

[[maybe_unused]] void QFrame_swiftHookCleanup(void *frame) {
    if (frame != nullptr)
        static_cast<QliftFrame *>(frame)->swiftHookCleanup();
}

[[maybe_unused]] int QFrame_shape(void *frame) {
    return static_cast<QliftFrame *>(frame)->frameShape();
}

[[maybe_unused]] void QFrame_setShape(void *frame, int shape) {
    static_cast<QliftFrame *>(frame)->setFrameShape(static_cast<QFrame::Shape>(shape));
}

[[maybe_unused]] int QFrame_shadow(void *frame) {
    return static_cast<QliftFrame *>(frame)->frameShadow();
}

[[maybe_unused]] void QFrame_setShadow(void *frame, int shadow) {
    static_cast<QliftFrame *>(frame)->setFrameShadow(static_cast<QFrame::Shadow>(shadow));
}

W_OBJECT_IMPL(QliftFrame)

[[maybe_unused]] void
QliftFrame::mousePressEventSuper(QMouseEvent *mouseEvent) {
    QFrame::mousePressEvent(mouseEvent);
}

[[maybe_unused]] void QliftFrame::mousePressEventOverride(
    void *context, void (*mousePressEvent_Functor)(void *, void *)) {
    m_mousePressEvent_Context = context;
    m_mousePressEvent_Functor = mousePressEvent_Functor;
}

[[maybe_unused]] void QliftFrame::mousePressEvent(QMouseEvent *mouseEvent) {
    if (m_mousePressEvent_Functor != nullptr) {
        (*m_mousePressEvent_Functor)(m_mousePressEvent_Context, mouseEvent);
        return;
    }
    QFrame::mousePressEvent(mouseEvent);
}

[[maybe_unused]] QSize QliftFrame::sizeHintSuper() const {
    return QFrame::sizeHint();
}

[[maybe_unused]] void
QliftFrame::sizeHintOverride(void *context,
                             void *(*sizeHint_Functor)(void *)) {
    m_sizeHint_Context = context;
    m_sizeHint_Functor = sizeHint_Functor;
}

[[maybe_unused]] QSize QliftFrame::sizeHint() const {
    if (m_sizeHint_Functor != nullptr) {
        auto *size =
            static_cast<QSize *>((*m_sizeHint_Functor)(m_sizeHint_Context));
        return QSize{size->width(), size->height()};
    }
    return QFrame::sizeHint();
}
