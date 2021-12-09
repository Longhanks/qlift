#include <QMainWindow>
#include <wobjectimpl.h>
#include "qlift-QMainWindow.h"

[[maybe_unused]] void *QMainWindow_new(void *parent, int flags) {
    return new QliftMainWindow{static_cast<QWidget *>(parent), static_cast<QFlags<Qt::WindowType>>(flags)};
}
[[maybe_unused]] void *QMainWindow_centralWidget(void *mainWindow) {
    return static_cast<QMainWindow *>(mainWindow)->centralWidget();
}
[[maybe_unused]] void QMainWindow_setCentralWidget(void *mainWindow, void *widget) {
    static_cast<QMainWindow *>(mainWindow)->setCentralWidget(static_cast<QWidget *>(widget));
}
[[maybe_unused]] void *QMainWindow_menuBar(void *mainWindow) {
    return static_cast<QMainWindow *>(mainWindow)->menuBar();
}
[[maybe_unused]] void QMainWindow_setMenuBar(void *mainWindow, void *menuBar) {
    static_cast<QMainWindow *>(mainWindow)->setMenuBar(static_cast<QMenuBar *>(menuBar));
}
[[maybe_unused]] void *QMainWindow_statusBar(void *mainWindow) {
    return static_cast<QMainWindow *>(mainWindow)->statusBar();
}
[[maybe_unused]] void QMainWindow_setStatusBar(void *mainWindow, void *statusbar) {
    static_cast<QMainWindow *>(mainWindow)->setStatusBar(static_cast<QStatusBar *>(statusbar));
}


[[maybe_unused]] void QMainWindow_setEventFunctor(void *mainWindow, void (*eventFunctor)(void *, CQTEventType, void *)) {
    static_cast<QliftMainWindow *>(mainWindow)->m_eventFunctor = eventFunctor;
}
[[maybe_unused]] void QMainWindow_swiftHookCleanup(void *mainWindow) {
    if (mainWindow != nullptr)
        static_cast<QliftMainWindow *>(mainWindow)->swiftObject = nullptr;
}
[[maybe_unused]] void QMainWindow_saveSwiftObject(void *mainWindow, void *swiftObject) {
    static_cast<QliftMainWindow *>(mainWindow)->swiftObject = swiftObject;
}

[[maybe_unused]] void QMainWindow_mouseDoubleClickEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->mouseDoubleClickEventSuper(static_cast<QMouseEvent *>(event));
}
[[maybe_unused]] void QMainWindow_mouseMoveEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->mouseMoveEventSuper(static_cast<QMouseEvent *>(event));
}
[[maybe_unused]] void QMainWindow_mousePressEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->mousePressEventSuper(static_cast<QMouseEvent *>(event));
}
[[maybe_unused]] void QMainWindow_mouseReleaseEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->mouseReleaseEventSuper(static_cast<QMouseEvent *>(event));
}
[[maybe_unused]] void QMainWindow_keyPressEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->keyPressEventSuper(static_cast<QKeyEvent *>(event));
}
[[maybe_unused]] void QMainWindow_keyReleaseEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->keyReleaseEventSuper(static_cast<QKeyEvent *>(event));
}
[[maybe_unused]] void QMainWindow_actionEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->actionEventSuper(static_cast<QActionEvent *>(event));
}
[[maybe_unused]] void QMainWindow_changeEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->changeEventSuper(static_cast<QEvent *>(event));
}
[[maybe_unused]] void QMainWindow_closeEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->closeEventSuper(static_cast<QCloseEvent *>(event));
}
[[maybe_unused]] void QMainWindow_contextMenuEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->contextMenuEventSuper(static_cast<QContextMenuEvent *>(event));
}
[[maybe_unused]] void QMainWindow_enterEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->enterEventSuper(static_cast<QEvent *>(event));
}
[[maybe_unused]] void QMainWindow_focusInEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->focusInEventSuper(static_cast<QFocusEvent *>(event));
}
[[maybe_unused]] void QMainWindow_focusOutEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->focusOutEventSuper(static_cast<QFocusEvent *>(event));
}
[[maybe_unused]] void QMainWindow_hideEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->hideEventSuper(static_cast<QHideEvent *>(event));
}
[[maybe_unused]] void QMainWindow_leaveEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->leaveEventSuper(static_cast<QEvent *>(event));
}
[[maybe_unused]] void QMainWindow_moveEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->moveEventSuper(static_cast<QMoveEvent *>(event));
}
[[maybe_unused]] void QMainWindow_paintEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->paintEventSuper(static_cast<QPaintEvent *>(event));
}
[[maybe_unused]] void QMainWindow_resizeEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->resizeEventSuper(static_cast<QResizeEvent *>(event));
}
[[maybe_unused]] void QMainWindow_showEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->showEventSuper(static_cast<QShowEvent *>(event));
}
[[maybe_unused]] void QMainWindow_tabletEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->tabletEventSuper(static_cast<QTabletEvent *>(event));
}
[[maybe_unused]] void QMainWindow_wheelEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)->wheelEventSuper(static_cast<QWheelEvent *>(event));
}

W_OBJECT_IMPL(QliftMainWindow)

[[maybe_unused]] void QliftMainWindow::mouseDoubleClickEventSuper(QMouseEvent *event) {
    QMainWindow::mouseDoubleClickEvent(event);
}
[[maybe_unused]] void QliftMainWindow::mouseMoveEventSuper(QMouseEvent *event) {
    QMainWindow::mouseMoveEvent(event);
}
[[maybe_unused]] void QliftMainWindow::mousePressEventSuper(QMouseEvent *event) {
    QMainWindow::mousePressEvent(event);
}
[[maybe_unused]] void QliftMainWindow::mouseReleaseEventSuper(QMouseEvent *event) {
    QMainWindow::mouseReleaseEvent(event);
}
[[maybe_unused]] void QliftMainWindow::keyPressEventSuper(QKeyEvent *event) {
    QMainWindow::keyPressEvent(event);
}
[[maybe_unused]] void QliftMainWindow::keyReleaseEventSuper(QKeyEvent *event) {
    QMainWindow::keyReleaseEvent(event);
}
[[maybe_unused]] void QliftMainWindow::actionEventSuper(QActionEvent *event) {
    QMainWindow::actionEvent(event);
}
[[maybe_unused]] void QliftMainWindow::changeEventSuper(QEvent *event) {
    QMainWindow::changeEvent(event);
}
[[maybe_unused]] void QliftMainWindow::closeEventSuper(QCloseEvent *event) {
    QMainWindow::closeEvent(event);
}
[[maybe_unused]] void QliftMainWindow::contextMenuEventSuper(QContextMenuEvent *event) {
    QMainWindow::contextMenuEvent(event);
}
[[maybe_unused]] void QliftMainWindow::enterEventSuper(QEvent *event) {
    QMainWindow::enterEvent(event);
}
[[maybe_unused]] void QliftMainWindow::focusInEventSuper(QFocusEvent *event) {
    QMainWindow::focusInEvent(event);
}
[[maybe_unused]] void QliftMainWindow::focusOutEventSuper(QFocusEvent *event) {
    QMainWindow::focusOutEvent(event);
}
[[maybe_unused]] void QliftMainWindow::hideEventSuper(QHideEvent *event) {
    QMainWindow::hideEvent(event);
}
[[maybe_unused]] void QliftMainWindow::leaveEventSuper(QEvent *event) {
    QMainWindow::leaveEvent(event);
}
[[maybe_unused]] void QliftMainWindow::moveEventSuper(QMoveEvent *event) {
    QMainWindow::moveEvent(event);
}
[[maybe_unused]] void QliftMainWindow::paintEventSuper(QPaintEvent *event) {
    QMainWindow::paintEvent(event);
}
[[maybe_unused]] void QliftMainWindow::resizeEventSuper(QResizeEvent *event) {
    QMainWindow::resizeEvent(event);
}
[[maybe_unused]] void QliftMainWindow::showEventSuper(QShowEvent *event) {
    QMainWindow::showEvent(event);
}
[[maybe_unused]] void QliftMainWindow::tabletEventSuper(QTabletEvent *event) {
    QMainWindow::tabletEvent(event);
}
[[maybe_unused]] void QliftMainWindow::wheelEventSuper(QWheelEvent *event) {
    QMainWindow::wheelEvent(event);
}

[[maybe_unused]] void QliftMainWindow::mouseDoubleClickEvent(QMouseEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQmouseDoubleClickEvent, event);
    else
        QMainWindow::mouseDoubleClickEvent(event);
}
[[maybe_unused]] void QliftMainWindow::mouseMoveEvent(QMouseEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQmouseMoveEvent, event);
    else
        QMainWindow::mouseMoveEvent(event);
}
[[maybe_unused]] void QliftMainWindow::mousePressEvent(QMouseEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQmousePressEvent, event);
    else
        QMainWindow::mousePressEvent(event);
}
[[maybe_unused]] void QliftMainWindow::mouseReleaseEvent(QMouseEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQmouseReleaseEvent, event);
    else
        QMainWindow::mouseReleaseEvent(event);
}
[[maybe_unused]] void QliftMainWindow::keyPressEvent(QKeyEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQkeyPressEvent, event);
    else
        QMainWindow::keyPressEvent(event);
}
[[maybe_unused]] void QliftMainWindow::keyReleaseEvent(QKeyEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQkeyReleaseEvent, event);
    else
        QMainWindow::keyReleaseEvent(event);
}

[[maybe_unused]] void QliftMainWindow::actionEvent(QActionEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQactionEvent, event);
    else
        QMainWindow::actionEvent(event);
}
[[maybe_unused]] void QliftMainWindow::changeEvent(QEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQchangeEvent, event);
    else
        QMainWindow::changeEvent(event);
}
[[maybe_unused]] void QliftMainWindow::closeEvent(QCloseEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQcloseEvent, event);
    else
        QMainWindow::closeEvent(event);
}
[[maybe_unused]] void QliftMainWindow::contextMenuEvent(QContextMenuEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQcontextMenuEvent, event);
    else
        QMainWindow::contextMenuEvent(event);
}
[[maybe_unused]] void QliftMainWindow::enterEvent(QEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQenterEvent, event);
    else
        QMainWindow::enterEvent(event);
}
[[maybe_unused]] void QliftMainWindow::focusInEvent(QFocusEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQfocusInEvent, event);
    else
        QMainWindow::focusInEvent(event);
}
[[maybe_unused]] void QliftMainWindow::focusOutEvent(QFocusEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQfocusOutEvent, event);
    else
        QMainWindow::focusOutEvent(event);
}
[[maybe_unused]] void QliftMainWindow::hideEvent(QHideEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQhideEvent, event);
    else
        QMainWindow::hideEvent(event);
}
[[maybe_unused]] void QliftMainWindow::leaveEvent(QEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQleaveEvent, event);
    else
        QMainWindow::leaveEvent(event);
}
[[maybe_unused]] void QliftMainWindow::moveEvent(QMoveEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQmoveEvent, event);
    else
        QMainWindow::moveEvent(event);
}
[[maybe_unused]] void QliftMainWindow::paintEvent(QPaintEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQpaintEvent, event);
    else
        QMainWindow::paintEvent(event);
}
[[maybe_unused]] void QliftMainWindow::resizeEvent(QResizeEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQresizeEvent, event);
    else
        QMainWindow::resizeEvent(event);
}
[[maybe_unused]] void QliftMainWindow::showEvent(QShowEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQshowEvent, event);
    else
        QMainWindow::showEvent(event);
}
[[maybe_unused]] void QliftMainWindow::tabletEvent(QTabletEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQtabletEvent, event);
    else
        QMainWindow::tabletEvent(event);
}
[[maybe_unused]] void QliftMainWindow::wheelEvent(QWheelEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQwheelEvent, event);
    else
        QMainWindow::wheelEvent(event);
}
