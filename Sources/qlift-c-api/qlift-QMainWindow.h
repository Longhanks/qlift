#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QMainWindow_new(void *parent, int flags);
LIBRARY_API void QMainWindow_delete(void *mainWindow);
LIBRARY_API void *QMainWindow_centralWidget(void *mainWindow);
LIBRARY_API void QMainWindow_setCentralWidget(void *mainWindow, void *widget);
LIBRARY_API void *QMainWindow_menuBar(void *mainWindow);
LIBRARY_API void QMainWindow_setMenuBar(void *mainWindow, void *menuBar);
LIBRARY_API void QMainWindow_closeEvent(void *mainWindow, void *event);

LIBRARY_API void *QMainWindow_statusBar(void *mainWindow);
LIBRARY_API void QMainWindow_setStatusBar(void *mainWindow, void *statusbar);

LIBRARY_API void
QMainWindow_closeEvent_Override(void *mainWindow,
                                void *context,
                                void (*closeEvent_Functor)(void *, void *));

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

#include <QMainWindow>

#ifndef SWIFT_PACKAGE
#include <wobjectdefs.h>
#else
#include "../../include/wobjectdefs.h"
#endif

class QliftMainWindow : public QMainWindow {
    W_OBJECT(QliftMainWindow)

public:
    using QMainWindow::QMainWindow;
    ~QliftMainWindow() override = default;
    QliftMainWindow(const QliftMainWindow &) = delete;
    QliftMainWindow &operator=(QliftMainWindow &) = delete;
    QliftMainWindow(QliftMainWindow &&) noexcept = delete;
    QliftMainWindow &operator=(QliftMainWindow &&) noexcept = delete;

    void closeEventSuper(QCloseEvent *closeEvent);
    void closeEventOverride(void *context,
                            void (*closeEvent_Functor)(void *, void *));

protected:
    void closeEvent(QCloseEvent *closeEvent) override;

private:
    void (*m_closeEvent_Functor)(void *, void *) = nullptr;
    void *m_closeEvent_Context = nullptr;
};

#endif
