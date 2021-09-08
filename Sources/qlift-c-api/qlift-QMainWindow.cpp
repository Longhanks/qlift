#include <QMainWindow>

#ifndef SWIFT_PACKAGE
#include <wobjectimpl.h>
#else
#include "../../include/wobjectimpl.h"
#endif

#include "qlift-QMainWindow.h"

[[maybe_unused]] void *QMainWindow_new(void *parent, int flags) {
    return static_cast<void *>(
        new QliftMainWindow{static_cast<QWidget *>(parent),
                            static_cast<QFlags<Qt::WindowType>>(flags)});
}

[[maybe_unused]] void QMainWindow_delete(void *mainWindow) {
    delete static_cast<QliftMainWindow *>(mainWindow);
}

[[maybe_unused]] void *QMainWindow_centralWidget(void *mainWindow) {
    return static_cast<void *>(
        static_cast<QMainWindow *>(mainWindow)->centralWidget());
}

[[maybe_unused]] void QMainWindow_setCentralWidget(void *mainWindow,
                                                   void *widget) {
    static_cast<QMainWindow *>(mainWindow)
        ->setCentralWidget(static_cast<QWidget *>(widget));
}

[[maybe_unused]] void *QMainWindow_menuBar(void *mainWindow) {
    return static_cast<void *>(
        static_cast<QMainWindow *>(mainWindow)->menuBar());
}

[[maybe_unused]] void QMainWindow_setMenuBar(void *mainWindow, void *menuBar) {
    static_cast<QMainWindow *>(mainWindow)
        ->setMenuBar(static_cast<QMenuBar *>(menuBar));
}

[[maybe_unused]] void *QMainWindow_statusBar(void *mainWindow) {
    return static_cast<void *>(
        static_cast<QMainWindow *>(mainWindow)->statusBar());
}

[[maybe_unused]] void QMainWindow_setStatusBar(void *mainWindow, void *statusbar) {
    static_cast<QMainWindow *>(mainWindow)->setStatusBar(static_cast<QStatusBar *>(statusbar));
}


[[maybe_unused]] void QMainWindow_closeEvent(void *mainWindow, void *event) {
    static_cast<QliftMainWindow *>(mainWindow)
        ->closeEventSuper(static_cast<QCloseEvent *>(event));
}

[[maybe_unused]] void
QMainWindow_closeEvent_Override(void *mainWindow,
                                void *context,
                                void (*closeEvent_Functor)(void *, void *)) {
    static_cast<QliftMainWindow *>(mainWindow)
        ->closeEventOverride(context, closeEvent_Functor);
}

W_OBJECT_IMPL(QliftMainWindow)

[[maybe_unused]] void QliftMainWindow::closeEventSuper(QCloseEvent *e) {
    QMainWindow::closeEvent(e);
}

[[maybe_unused]] void QliftMainWindow::closeEventOverride(
    void *context, void (*closeEvent_Functor)(void *, void *)) {
    m_closeEvent_Context = context;
    m_closeEvent_Functor = closeEvent_Functor;
}

[[maybe_unused]] void QliftMainWindow::closeEvent(QCloseEvent *e) {
    if (m_closeEvent_Functor != nullptr) {
        (*m_closeEvent_Functor)(m_closeEvent_Context, e);
        return;
    }
    QMainWindow::closeEvent(e);
}
