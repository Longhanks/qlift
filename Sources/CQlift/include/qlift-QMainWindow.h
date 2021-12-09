#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

#pragma clang diagnostic ignored "-Wnullability-completeness"

#pragma clang assume_nonnull begin

LIBRARY_API void *QMainWindow_new(void * _Nullable parent, int flags);
LIBRARY_API void * _Nullable QMainWindow_centralWidget(void *mainWindow);
LIBRARY_API void QMainWindow_setCentralWidget(void *mainWindow, void * _Nullable widget);
LIBRARY_API void *QMainWindow_menuBar(void *mainWindow);
LIBRARY_API void QMainWindow_setMenuBar(void *mainWindow, void *menuBar);
LIBRARY_API void QMainWindow_closeEvent(void *mainWindow, void *event);

LIBRARY_API void *QMainWindow_statusBar(void *mainWindow);
LIBRARY_API void QMainWindow_setStatusBar(void *mainWindow, void * _Nullable statusbar);

LIBRARY_API void QMainWindow_saveSwiftObject(void *mainWindow, void *swiftObject);
LIBRARY_API void QMainWindow_setEventFunctor(void *mainWindow, void (*event_Functor)(void *, CQTEventType, void *));
LIBRARY_API void QMainWindow_swiftHookCleanup(void * _Nullable mainWindow);

LIBRARY_API void QMainWindow_mouseDoubleClickEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_mouseMoveEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_mousePressEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_mouseReleaseEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_keyPressEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_keyReleaseEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_actionEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_changeEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_closeEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_contextMenuEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_enterEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_focusInEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_focusOutEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_hideEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_leaveEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_moveEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_paintEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_resizeEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_showEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_tabletEvent(void *mainWindow, void *event);
LIBRARY_API void QMainWindow_wheelEvent(void *mainWindow, void *event);

#pragma clang assume_nonnull end

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

#include <QMainWindow>
#include <wobjectdefs.h>

class QliftMainWindow : public QMainWindow {
    W_OBJECT(QliftMainWindow)

public:
    using QMainWindow::QMainWindow;
    ~QliftMainWindow() override = default;
    QliftMainWindow(const QliftMainWindow &) = delete;
    QliftMainWindow &operator=(QliftMainWindow &) = delete;
    QliftMainWindow(QliftMainWindow &&) noexcept = delete;
    QliftMainWindow &operator=(QliftMainWindow &&) noexcept = delete;

    void mouseDoubleClickEventSuper(QMouseEvent *event);
    void mouseMoveEventSuper(QMouseEvent *event);
    void mousePressEventSuper(QMouseEvent *event);
    void mouseReleaseEventSuper(QMouseEvent *event);
    void keyPressEventSuper(QKeyEvent *event);
    void keyReleaseEventSuper(QKeyEvent *event);

    void actionEventSuper(QActionEvent *event);
    void changeEventSuper(QEvent *event);
    void closeEventSuper(QCloseEvent *event);
    void contextMenuEventSuper(QContextMenuEvent *event);
    void enterEventSuper(QEvent *event);
    void focusInEventSuper(QFocusEvent *event);
    void focusOutEventSuper(QFocusEvent *event);
    void hideEventSuper(QHideEvent *event);
    void leaveEventSuper(QEvent *event);
    void moveEventSuper(QMoveEvent *event);
    void paintEventSuper(QPaintEvent *event);
    void resizeEventSuper(QResizeEvent *event);
    void showEventSuper(QShowEvent *event);
    void tabletEventSuper(QTabletEvent *event);
    void wheelEventSuper(QWheelEvent *event);

    void *swiftObject = nullptr;
    void (*m_eventFunctor)(void *, CQTEventType, void *) = nullptr;

protected:
    void mouseDoubleClickEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
    void keyReleaseEvent(QKeyEvent *event) override;

    void actionEvent(QActionEvent *event) override;
    void changeEvent(QEvent *event) override;
    void closeEvent(QCloseEvent *event) override;
    void contextMenuEvent(QContextMenuEvent *event) override;
    void enterEvent(QEvent *event) override;
    void focusInEvent(QFocusEvent *event) override;
    void focusOutEvent(QFocusEvent *event) override;
    void hideEvent(QHideEvent *event) override;
    void leaveEvent(QEvent *event) override;
    void moveEvent(QMoveEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;
    void showEvent(QShowEvent *event) override;
    void tabletEvent(QTabletEvent *event) override;
    void wheelEvent(QWheelEvent *event) override;

private:
};

#endif
