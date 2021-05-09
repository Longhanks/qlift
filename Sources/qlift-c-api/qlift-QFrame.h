#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QFrame_new(void *parent, int flags);

LIBRARY_API void QFrame_delete(void *frame);

LIBRARY_API void QFrame_mousePressEvent(void *frame, void *mouseEvent);

LIBRARY_API void QFrame_mousePressEvent_Override(
    void *frame,
    void *context,
    void (*mousePressEvent_Functor)(void *, void *));

LIBRARY_API void *QFrame_sizeHint(void *frame);

LIBRARY_API void QFrame_sizeHint_Override(void *frame,
                                          void *context,
                                          void *(*sizeHint_Functor)(void *));

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

#include <QFrame>

#ifndef SWIFT_PACKAGE
#include <wobjectdefs.h>
#else
#include "../../include/wobjectdefs.h"
#endif

class QliftFrame : public QFrame {
    W_OBJECT(QliftFrame)

public:
    using QFrame::QFrame;
    ~QliftFrame() override = default;
    QliftFrame(const QliftFrame &) = delete;
    QliftFrame &operator=(QliftFrame &) = delete;
    QliftFrame(QliftFrame &&) noexcept = delete;
    QliftFrame &operator=(QliftFrame &&) noexcept = delete;

    void mousePressEventSuper(QMouseEvent *mouseEvent);
    void mousePressEventOverride(void *context,
                                 void (*mousePressEvent_Functor)(void *,
                                                                 void *));

    [[nodiscard]] QSize sizeHintSuper() const;
    void sizeHintOverride(void *context, void *(*sizeHint_Functor)(void *));
    [[nodiscard]] QSize sizeHint() const override;

protected:
    void mousePressEvent(QMouseEvent *mouseEvent) override;

private:
    void (*m_mousePressEvent_Functor)(void *, void *) = nullptr;
    void *m_mousePressEvent_Context = nullptr;
    void *(*m_sizeHint_Functor)(void *) = nullptr;
    void *m_sizeHint_Context = nullptr;
};

#endif
