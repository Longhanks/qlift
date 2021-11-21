#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QPushButton_new(void *icon, const char *text, void *parent);
LIBRARY_API void QPushButton_setFlat(void *pushButton, bool enabled);
LIBRARY_API bool QPushButton_isFlat(void *pushButton);
LIBRARY_API void QPushButton_mousePressEvent(void *pushButton,
                                             void *mouseEvent);
LIBRARY_API void QPushButton_mousePressEvent_Override(
    void *pushButton,
    void *context,
    void (*mousePressEvent_Functor)(void *, void *));
LIBRARY_API void QPushButton_swiftHookCleanup(void *pushButton);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

#include <QPushButton>
#include <wobjectdefs.h>

class QliftPushButton : public QPushButton {
    W_OBJECT(QliftPushButton)

public:
    using QPushButton::QPushButton;
    ~QliftPushButton() noexcept override = default;
    QliftPushButton(const QliftPushButton &) = delete;
    QliftPushButton &operator=(QliftPushButton &) = delete;
    QliftPushButton(QliftPushButton &&) noexcept = delete;
    QliftPushButton &operator=(QliftPushButton &&) noexcept = delete;

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
