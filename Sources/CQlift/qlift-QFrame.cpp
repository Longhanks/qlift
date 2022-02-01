#include <QFrame>
#include <wobjectimpl.h>
#include "qlift-QFrame.h"

[[maybe_unused]] void *QFrame_new(void *parent, int flags) {
    return static_cast<void *>(
        new QliftFrame{static_cast<QWidget *>(parent),
                       static_cast<QFlags<Qt::WindowType>>(flags)});
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

[[maybe_unused]] void *QFrame_frameRect(void *frame) {
    return new QRect(static_cast<QliftFrame *>(frame)->frameRect());
}
[[maybe_unused]] int QFrame_frameStyle(void *frame) {
    return static_cast<QliftFrame *>(frame)->frameStyle();
}
[[maybe_unused]] int QFrame_frameWidth(void *frame) {
    return static_cast<QliftFrame *>(frame)->frameWidth();
}
[[maybe_unused]] int QFrame_lineWidth(void *frame) {
    return static_cast<QliftFrame *>(frame)->lineWidth();
}
[[maybe_unused]] int QFrame_midLineWidth(void *frame) {
    return static_cast<QliftFrame *>(frame)->midLineWidth();
}
[[maybe_unused]] void QFrame_setFrameRect(void *frame, const void *rect) {
    static_cast<QliftFrame *>(frame)->setFrameRect(*static_cast<const QRect *>(rect));
}
[[maybe_unused]] void QFrame_setFrameStyle(void *frame, int style) {
    static_cast<QliftFrame *>(frame)->setFrameStyle(style);
}
[[maybe_unused]] void QFrame_setLineWidth(void *frame, int width) {
    static_cast<QliftFrame *>(frame)->setLineWidth(width);
}
[[maybe_unused]] void QFrame_setMidLineWidth(void *frame, int width) {
    static_cast<QliftFrame *>(frame)->setMidLineWidth(width);
}


[[maybe_unused]] void QFrame_setEventFunctor(void *frame, bool (*eventFunctor)(void *, CQTEventType, void *)) {
    static_cast<QliftFrame *>(frame)->m_eventFunctor = eventFunctor;
}

[[maybe_unused]] void QFrame_sizeHint_Override(void *frame,
                                                void *(*sizeHint_Functor)(void *)) {
    static_cast<QliftFrame *>(frame)->m_sizeHint_Functor = sizeHint_Functor;
}

[[maybe_unused]] void QFrame_swiftHookCleanup(void *frame) {
    if (frame != nullptr)
        static_cast<QliftFrame *>(frame)->swiftObject = nullptr;
}

[[maybe_unused]] void QFrame_saveSwiftObject(void *frame, void *swiftObject) {
    static_cast<QliftFrame *>(frame)->swiftObject = swiftObject;
}

[[maybe_unused]] void QFrame_mouseDoubleClickEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->mouseDoubleClickEventSuper(static_cast<QMouseEvent *>(event));
}
[[maybe_unused]] void QFrame_mouseMoveEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->mouseMoveEventSuper(static_cast<QMouseEvent *>(event));
}
[[maybe_unused]] void QFrame_mousePressEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->mousePressEventSuper(static_cast<QMouseEvent *>(event));
}
[[maybe_unused]] void QFrame_mouseReleaseEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->mouseReleaseEventSuper(static_cast<QMouseEvent *>(event));
}
[[maybe_unused]] void QFrame_keyPressEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->keyPressEventSuper(static_cast<QKeyEvent *>(event));
}
[[maybe_unused]] void QFrame_keyReleaseEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->keyReleaseEventSuper(static_cast<QKeyEvent *>(event));
}

[[maybe_unused]] void QFrame_actionEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->actionEventSuper(static_cast<QActionEvent *>(event));
}
[[maybe_unused]] void QFrame_changeEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->changeEventSuper(static_cast<QEvent *>(event));
}
[[maybe_unused]] void QFrame_closeEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->closeEventSuper(static_cast<QCloseEvent *>(event));
}
[[maybe_unused]] void QFrame_contextMenuEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->contextMenuEventSuper(static_cast<QContextMenuEvent *>(event));
}
[[maybe_unused]] void QFrame_enterEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->enterEventSuper(static_cast<QEvent *>(event));
}
[[maybe_unused]] void QFrame_focusInEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->focusInEventSuper(static_cast<QFocusEvent *>(event));
}
[[maybe_unused]] void QFrame_focusOutEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->focusOutEventSuper(static_cast<QFocusEvent *>(event));
}
[[maybe_unused]] void QFrame_hideEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->hideEventSuper(static_cast<QHideEvent *>(event));
}
[[maybe_unused]] void QFrame_leaveEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->leaveEventSuper(static_cast<QEvent *>(event));
}
[[maybe_unused]] void QFrame_moveEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->moveEventSuper(static_cast<QMoveEvent *>(event));
}
[[maybe_unused]] void QFrame_paintEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->paintEventSuper(static_cast<QPaintEvent *>(event));
}
[[maybe_unused]] void QFrame_resizeEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->resizeEventSuper(static_cast<QResizeEvent *>(event));
}
[[maybe_unused]] void QFrame_showEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->showEventSuper(static_cast<QShowEvent *>(event));
}
[[maybe_unused]] void QFrame_tabletEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->tabletEventSuper(static_cast<QTabletEvent *>(event));
}
[[maybe_unused]] void QFrame_wheelEvent(void *frame, void *event) {
    static_cast<QliftFrame *>(frame)->wheelEventSuper(static_cast<QWheelEvent *>(event));
}
[[maybe_unused]] bool QFrame_event(void *frame, void *event) {
    return static_cast<QliftFrame *>(frame)->eventSuper(static_cast<QEvent *>(event));
}

W_OBJECT_IMPL(QliftFrame)

[[maybe_unused]] void QliftFrame::mouseDoubleClickEventSuper(QMouseEvent *event) {
    QFrame::mouseDoubleClickEvent(event);
}
[[maybe_unused]] void QliftFrame::mouseMoveEventSuper(QMouseEvent *event) {
    QFrame::mouseMoveEvent(event);
}
[[maybe_unused]] void QliftFrame::mousePressEventSuper(QMouseEvent *event) {
    QFrame::mousePressEvent(event);
}
[[maybe_unused]] void QliftFrame::mouseReleaseEventSuper(QMouseEvent *event) {
    QFrame::mouseReleaseEvent(event);
}
[[maybe_unused]] void QliftFrame::keyPressEventSuper(QKeyEvent *event) {
    QFrame::keyPressEvent(event);
}
[[maybe_unused]] void QliftFrame::keyReleaseEventSuper(QKeyEvent *event) {
    QFrame::keyReleaseEvent(event);
}
[[maybe_unused]] void QliftFrame::actionEventSuper(QActionEvent *event) {
    QFrame::actionEvent(event);
}
[[maybe_unused]] void QliftFrame::changeEventSuper(QEvent *event) {
    QFrame::changeEvent(event);
}
[[maybe_unused]] void QliftFrame::closeEventSuper(QCloseEvent *event) {
    QFrame::closeEvent(event);
}
[[maybe_unused]] void QliftFrame::contextMenuEventSuper(QContextMenuEvent *event) {
    QFrame::contextMenuEvent(event);
}
[[maybe_unused]] void QliftFrame::enterEventSuper(QEvent *event) {
    QFrame::enterEvent(event);
}
[[maybe_unused]] void QliftFrame::focusInEventSuper(QFocusEvent *event) {
    QFrame::focusInEvent(event);
}
[[maybe_unused]] void QliftFrame::focusOutEventSuper(QFocusEvent *event) {
    QFrame::focusOutEvent(event);
}
[[maybe_unused]] void QliftFrame::hideEventSuper(QHideEvent *event) {
    QFrame::hideEvent(event);
}
[[maybe_unused]] void QliftFrame::leaveEventSuper(QEvent *event) {
    QFrame::leaveEvent(event);
}
[[maybe_unused]] void QliftFrame::moveEventSuper(QMoveEvent *event) {
    QFrame::moveEvent(event);
}
[[maybe_unused]] void QliftFrame::paintEventSuper(QPaintEvent *event) {
    QFrame::paintEvent(event);
}
[[maybe_unused]] void QliftFrame::resizeEventSuper(QResizeEvent *event) {
    QFrame::resizeEvent(event);
}
[[maybe_unused]] void QliftFrame::showEventSuper(QShowEvent *event) {
    QFrame::showEvent(event);
}
[[maybe_unused]] void QliftFrame::tabletEventSuper(QTabletEvent *event) {
    QFrame::tabletEvent(event);
}
[[maybe_unused]] void QliftFrame::wheelEventSuper(QWheelEvent *event) {
    QFrame::wheelEvent(event);
}
[[maybe_unused]] bool QliftFrame::eventSuper(QEvent *event) {
    return QFrame::event(event);
}

[[maybe_unused]] void QliftFrame::mouseDoubleClickEvent(QMouseEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQmouseDoubleClickEvent, event);
    else
        QFrame::mouseDoubleClickEvent(event);
}
[[maybe_unused]] void QliftFrame::mouseMoveEvent(QMouseEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQmouseMoveEvent, event);
    else
        QFrame::mouseMoveEvent(event);
}
[[maybe_unused]] void QliftFrame::mousePressEvent(QMouseEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQmousePressEvent, event);
    else
        QFrame::mousePressEvent(event);
}
[[maybe_unused]] void QliftFrame::mouseReleaseEvent(QMouseEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQmouseReleaseEvent, event);
    else
        QFrame::mouseReleaseEvent(event);
}
[[maybe_unused]] void QliftFrame::keyPressEvent(QKeyEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQkeyPressEvent, event);
    else
        QFrame::keyPressEvent(event);
}
[[maybe_unused]] void QliftFrame::keyReleaseEvent(QKeyEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQkeyReleaseEvent, event);
    else
        QFrame::keyReleaseEvent(event);
}

[[maybe_unused]] void QliftFrame::actionEvent(QActionEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQactionEvent, event);
    else
        QFrame::actionEvent(event);
}
[[maybe_unused]] void QliftFrame::changeEvent(QEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQchangeEvent, event);
    else
        QFrame::changeEvent(event);
}
[[maybe_unused]] void QliftFrame::closeEvent(QCloseEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQcloseEvent, event);
    else
        QFrame::closeEvent(event);
}
[[maybe_unused]] void QliftFrame::contextMenuEvent(QContextMenuEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQcontextMenuEvent, event);
    else
        QFrame::contextMenuEvent(event);
}
[[maybe_unused]] void QliftFrame::enterEvent(QEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQenterEvent, event);
    else
        QFrame::enterEvent(event);
}
[[maybe_unused]] void QliftFrame::focusInEvent(QFocusEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQfocusInEvent, event);
    else
        QFrame::focusInEvent(event);
}
[[maybe_unused]] void QliftFrame::focusOutEvent(QFocusEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQfocusOutEvent, event);
    else
        QFrame::focusOutEvent(event);
}
[[maybe_unused]] void QliftFrame::hideEvent(QHideEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQhideEvent, event);
    else
        QFrame::hideEvent(event);
}
[[maybe_unused]] void QliftFrame::leaveEvent(QEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQleaveEvent, event);
    else
        QFrame::leaveEvent(event);
}
[[maybe_unused]] void QliftFrame::moveEvent(QMoveEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQmoveEvent, event);
    else
        QFrame::moveEvent(event);
}
[[maybe_unused]] void QliftFrame::paintEvent(QPaintEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQpaintEvent, event);
    else
        QFrame::paintEvent(event);
}
[[maybe_unused]] void QliftFrame::resizeEvent(QResizeEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQresizeEvent, event);
    else
        QFrame::resizeEvent(event);
}
[[maybe_unused]] void QliftFrame::showEvent(QShowEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQshowEvent, event);
    else
        QFrame::showEvent(event);
}
[[maybe_unused]] void QliftFrame::tabletEvent(QTabletEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQtabletEvent, event);
    else
        QFrame::tabletEvent(event);
}
[[maybe_unused]] void QliftFrame::wheelEvent(QWheelEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQwheelEvent, event);
    else
        QFrame::wheelEvent(event);
}
[[maybe_unused]] bool QliftFrame::event(QEvent *event) {
    if (swiftObject != nullptr)
        return m_eventFunctor(swiftObject, CQEvent, event);
    else
        return QFrame::event(event);
}

[[maybe_unused]] QSize QliftFrame::sizeHintSuper() const {
    return QFrame::sizeHint();
}

[[maybe_unused]] QSize QliftFrame::sizeHint() const {
    if (swiftObject != nullptr) {
        auto *size = static_cast<QSize *>((*m_sizeHint_Functor)(swiftObject));
        return QSize{size->width(), size->height()};
    }
    return QFrame::sizeHint();
}
