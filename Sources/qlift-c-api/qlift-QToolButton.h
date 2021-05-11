#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QToolButton_new(void *parent);

LIBRARY_API void QToolButton_delete(void *toolButton);

LIBRARY_API void QToolButton_mousePressEvent(void *toolButton,
                                             void *mouseEvent);

LIBRARY_API void QToolButton_setStyle(void *toolButton, int style);

LIBRARY_API void QToolButton_mousePressEvent_Override(
    void *toolButton,
    void *context,
    void (*mousePressEvent_Functor)(void *, void *));

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

#include <QToolButton>

#ifndef SWIFT_PACKAGE
#include <wobjectdefs.h>
#else
#include "../../include/wobjectdefs.h"
#endif

class QliftToolButton : public QToolButton {
    W_OBJECT(QliftToolButton)

public:
    using QToolButton::QToolButton;
    ~QliftToolButton() noexcept override = default;
    QliftToolButton(const QliftToolButton &) = delete;
    QliftToolButton &operator=(QliftToolButton &) = delete;
    QliftToolButton(QliftToolButton &&) noexcept = delete;
    QliftToolButton &operator=(QliftToolButton &&) noexcept = delete;

    void mousePressEventSuper(QMouseEvent *mouseEvent);
    void mousePressEventOverride(void *context,
                                 void (*mousePressEvent_Functor)(void *,
                                                                 void *));

protected:
    void mousePressEvent(QMouseEvent *mouseEvent) override;

private:
    void (*m_mousePressEvent_Functor)(void *, void *) = nullptr;
    void *m_mousePressEvent_Context = nullptr;
};

#endif
