#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

#pragma clang diagnostic ignored "-Wnullability-completeness"

#pragma clang assume_nonnull begin

LIBRARY_API void *QFrame_new(void * _Nullable parent, int flags);
LIBRARY_API int QFrame_shape(void *frame);
LIBRARY_API void QFrame_setShape(void *frame, int shape);
LIBRARY_API int QFrame_shadow(void *frame);
LIBRARY_API void QFrame_setShadow(void *frame, int shadow);

LIBRARY_API void *QFrame_frameRect(void *frame);
LIBRARY_API int QFrame_frameStyle(void *frame);
LIBRARY_API int QFrame_frameWidth(void *frame);
LIBRARY_API int QFrame_lineWidth(void *frame);
LIBRARY_API int QFrame_midLineWidth(void *frame);
LIBRARY_API void QFrame_setFrameRect(void *frame, const void *rect);
LIBRARY_API void QFrame_setFrameStyle(void *frame, int style);
LIBRARY_API void QFrame_setLineWidth(void *frame, int width);
LIBRARY_API void QFrame_setMidLineWidth(void *frame, int width);


//LIBRARY_API void QFrame_mousePressEvent(void *frame, void *mouseEvent);
//LIBRARY_API void QFrame_mousePressEvent_Override(
//                                                 void *frame,
//                                                 void *context,
//                                                 void (*mousePressEvent_Functor)(void *, void *));
//LIBRARY_API void *QFrame_sizeHint(void *frame);
//LIBRARY_API void QFrame_sizeHint_Override(void *frame,
//                                          void *context,
//                                          void *(*sizeHint_Functor)(void *));
//LIBRARY_API void QFrame_swiftHookCleanup(void *frame);

LIBRARY_API void QFrame_saveSwiftObject(void *frame, void *swiftObject);
LIBRARY_API void QFrame_setEventFunctor(void *frame, bool (*event_Functor)(void *, CQTEventType, void *));
LIBRARY_API void QFrame_sizeHint_Override(void *frame, void * _Nonnull (* _Nonnull sizeHint_Functor)(void *));
LIBRARY_API void QFrame_swiftHookCleanup(void * _Nullable frame);

LIBRARY_API void QFrame_mouseDoubleClickEvent(void *frame, void *event);
LIBRARY_API void QFrame_mouseMoveEvent(void *frame, void *event);
LIBRARY_API void QFrame_mousePressEvent(void *frame, void *event);
LIBRARY_API void QFrame_mouseReleaseEvent(void *frame, void *event);
LIBRARY_API void QFrame_keyPressEvent(void *frame, void *event);
LIBRARY_API void QFrame_keyReleaseEvent(void *frame, void *event);
LIBRARY_API void QFrame_actionEvent(void *frame, void *event);
LIBRARY_API void QFrame_changeEvent(void *frame, void *event);
LIBRARY_API void QFrame_closeEvent(void *frame, void *event);
LIBRARY_API void QFrame_contextMenuEvent(void *frame, void *event);
LIBRARY_API void QFrame_enterEvent(void *frame, void *event);
LIBRARY_API void QFrame_focusInEvent(void *frame, void *event);
LIBRARY_API void QFrame_focusOutEvent(void *frame, void *event);
LIBRARY_API void QFrame_hideEvent(void *frame, void *event);
LIBRARY_API void QFrame_leaveEvent(void *frame, void *event);
LIBRARY_API void QFrame_moveEvent(void *frame, void *event);
LIBRARY_API void QFrame_paintEvent(void *frame, void *event);
LIBRARY_API void QFrame_resizeEvent(void *frame, void *event);
LIBRARY_API void QFrame_showEvent(void *frame, void *event);
LIBRARY_API void QFrame_tabletEvent(void *frame, void *event);
LIBRARY_API void QFrame_wheelEvent(void *frame, void *event);
LIBRARY_API bool QFrame_event(void *frame, void *event);
LIBRARY_API void QFrame_setWindowFlag(void *frame, int flag, bool on);

#pragma clang assume_nonnull end


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

#include <QFrame>
#include <wobjectdefs.h>

class QliftFrame : public QFrame {
    W_OBJECT(QliftFrame)

public:
    using QFrame::QFrame;
    ~QliftFrame() override = default;
    QliftFrame(const QliftFrame &) = delete;
    QliftFrame &operator=(QliftFrame &) = delete;
    QliftFrame(QliftFrame &&) noexcept = delete;
    QliftFrame &operator=(QliftFrame &&) noexcept = delete;

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
    bool eventSuper(QEvent *event);

    [[nodiscard]] QSize sizeHintSuper() const;
    [[nodiscard]] QSize sizeHint() const override;

    void *swiftObject = nullptr;
    bool (*m_eventFunctor)(void *, CQTEventType, void *) = nullptr;
    void *(*m_sizeHint_Functor)(void *) = nullptr;

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
    bool event(QEvent *event) override;

private:
};

#endif
