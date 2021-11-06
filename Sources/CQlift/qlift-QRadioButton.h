#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QRadioButton_new(const char *text, void *parent);
LIBRARY_API void QRadioButton_setFlat(void *radioButton, bool enabled);
LIBRARY_API bool QRadioButton_isFlat(void *radioButton);
LIBRARY_API void QRadioButton_mousePressEvent(void *radioButton, void *mouseEvent);
LIBRARY_API void QRadioButton_mousePressEvent_Override(void *radioButton,
                                                       void *context,
                                                       void (*mousePressEvent_Functor)(void *, void *));
LIBRARY_API void QRadioButton_swiftHookCleanup(void *radioButton);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

#include <QRadioButton>

#ifndef SWIFT_PACKAGE
#include <wobjectdefs.h>
#else
#include "../../include/wobjectdefs.h"
#endif

class QliftRadioButton : public QRadioButton {
    W_OBJECT(QliftRadioButton)

public:
    using QRadioButton::QRadioButton;
    ~QliftRadioButton() noexcept override = default;
    QliftRadioButton(const QliftRadioButton &) = delete;
    QliftRadioButton &operator=(QliftRadioButton &) = delete;
    QliftRadioButton(QliftRadioButton &&) noexcept = delete;
    QliftRadioButton &operator=(QliftRadioButton &&) noexcept = delete;

    void mousePressEventSuper(QMouseEvent *mouseEvent);
    void mousePressEventOverride(void *context,
                                 void (*mousePressEvent_Functor)(void *,
                                                                 void *));
    void swiftHookCleanup() {
        m_mousePressEvent_Functor = nullptr;
    }

protected:
    void mousePressEvent(QMouseEvent *mouseEvent) override;

private:
    void (*m_mousePressEvent_Functor)(void *, void *) = nullptr;
    void *m_mousePressEvent_Context = nullptr;
};

#endif
