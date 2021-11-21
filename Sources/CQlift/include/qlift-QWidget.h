#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QWidget_new(void *parent, int flags);
LIBRARY_API bool QWidget_close(void *widget);
LIBRARY_API void QWidget_show(void *widget);
LIBRARY_API void QWidget_addAction(void *widget, void *action);
LIBRARY_API CQString QWidget_windowTitle(void *widget);
LIBRARY_API void QWidget_setWindowTitle(void *widget, const char *title);
LIBRARY_API void *QWidget_geometry(void *widget);
LIBRARY_API void QWidget_setGeometry(void *widget, void *rect);
LIBRARY_API bool QWidget_isEnabled(void *widget);
LIBRARY_API void QWidget_setEnabled(void *widget, bool enabled);
LIBRARY_API int QWidget_height(void *widget);
LIBRARY_API int QWidget_width(void *widget);
LIBRARY_API void *QWidget_layout(void *widget);
LIBRARY_API void QWidget_setLayout(void *widget, void *layout);
LIBRARY_API void *QWidget_pos(void *widget);
LIBRARY_API void QWidget_move(void *widget, void *point);
LIBRARY_API void QWidget_movexy(void *widget, int x, int y);
LIBRARY_API void *QWidget_window(void *widget);
LIBRARY_API void *QWidget_rect(void *widget);
LIBRARY_API void *QWidget_size(void *widget);
LIBRARY_API void QWidget_resize(void *widget, int w, int h);
LIBRARY_API void QWidget_adjustSize(void *widget);
LIBRARY_API void QWidget_setFixedSize(void *widget, void *size);
LIBRARY_API void *QWidget_frameGeometry(void *widget);
LIBRARY_API bool QWidget_isWindow(void *widget);
LIBRARY_API void *QWidget_maximumSize(void *widget);
LIBRARY_API void QWidget_setMaximumSize(void *widget, void *size);
LIBRARY_API void* QWidget_minimumSize(void *widget);
LIBRARY_API void QWidget_setMinimumSize(void *widget, void *size);
LIBRARY_API void QWidget_setGraphicsEffect(void *widget, void *effect);

LIBRARY_API void QWidget_mousePressEvent(void *widget, void *mouseEvent);
LIBRARY_API void QWidget_saveSwiftObject(void *widget, void *swiftObject);
LIBRARY_API void QWidget_mousePressEvent_Override(void *widget,
                                                  void (*mousePressEvent_Functor)(void *, void *));
LIBRARY_API void QWidget_sizeHint_Override(void *widget,
                                           void *(*sizeHint_Functor)(void *));
LIBRARY_API void QWidget_swiftHookCleanup(void *widget);

LIBRARY_API void *QWidget_sizeHint(void *widget);
LIBRARY_API void *QWidget_sizePolicy(void *widget);
LIBRARY_API void QWidget_setSizePolicy(void *widget, void *policy);
LIBRARY_API void QWidget_setAutoFillBackground(void *widget, bool enable);
LIBRARY_API bool QWidget_autoFillBackground(void *widget);
LIBRARY_API CQString QWidget_styleSheet(void *widget);
LIBRARY_API void QWidget_setStyleSheet(void *widget, const char *styleSheet);
LIBRARY_API void QWidget_setPalette(void *widget, const void *palette);
LIBRARY_API bool QWidget_isVisible(void *widget);
LIBRARY_API void QWidget_setVisible(void *widget, bool visible);
LIBRARY_API bool QWidget_isMinimized(void *widget);
LIBRARY_API bool QWidget_isMaximized(void *widget);
LIBRARY_API bool QWidget_isFullScreen(void *widget);
LIBRARY_API void QWidget_setWindowState(void *widget, int state);
LIBRARY_API void QWidget_overrideWindowState(void *widget, int state);
LIBRARY_API int QWidget_windowState(void *widget);
LIBRARY_API int QWidget_windowModality(void *widget);
LIBRARY_API void QWidget_setWindowModality(void *widget, int windowModality);

LIBRARY_API void *QWidget_mapToGlobal(void *widget, void *point);
LIBRARY_API void *QWidget_mapFromGlobal(void *widget, void *point);
LIBRARY_API void *QWidget_mapToParent(void *widget, void *point);
LIBRARY_API void *QWidget_mapFromParent(void *widget, void *point);
LIBRARY_API void *QWidget_mapTo(void *widget, void *parentWidget, void *point);
LIBRARY_API void *QWidget_mapFrom(void *widget, void *parentWidget, void *point);
LIBRARY_API void QWidget_setAttribute(void * widget, int attribute, bool on);
LIBRARY_API bool QWidget_testAttribute(void * widget, int attribute);
LIBRARY_API void QWidget_updateXY(void * widget, int x, int y, int w, int h);
LIBRARY_API void QWidget_updateR(void * widget, void *rect);
LIBRARY_API void QWidget_updateGeometry(void * widget);
LIBRARY_API void QWidget_showFullScreen(void * widget);
LIBRARY_API void QWidget_showMaximized(void * widget);
LIBRARY_API void QWidget_showMinimized(void * widget);
LIBRARY_API void QWidget_showNormal(void * widget);
LIBRARY_API void QWidget_update(void * widget);
LIBRARY_API void QWidget_setFocusReason(void * widget, int reason);
LIBRARY_API bool QWidget_setFocus(void * widget);
LIBRARY_API bool QWidget_hasFocus(void * widget);
LIBRARY_API int  QWidget_focusPolicy(void * widget);
LIBRARY_API void QWidget_setFocusPolicy(void * widget, int policy);
LIBRARY_API void QWidget_clearFocus(void * widget);
LIBRARY_API void QWidget_setWindowIcon(void * widget, void *icon);
LIBRARY_API void *QWidget_windowIcon(void * widget);
LIBRARY_API void QWidget_setWindowIconText(void * widget, const char *text);
LIBRARY_API CQString QWidget_windowIconText(void * widget);
LIBRARY_API int QWidget_x(void * widget);
LIBRARY_API int QWidget_y(void * widget);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

#include <QWidget>
#include <wobjectdefs.h>

class QliftWidget : public QWidget {
    W_OBJECT(QliftWidget)

public:
    using QWidget::QWidget;
    ~QliftWidget() override = default;
    QliftWidget(const QliftWidget &) = delete;
    QliftWidget &operator=(QliftWidget &) = delete;
    QliftWidget(QliftWidget &&) noexcept = delete;
    QliftWidget &operator=(QliftWidget &&) noexcept = delete;

    void mousePressEventSuper(QMouseEvent *mouseEvent);
    [[nodiscard]] QSize sizeHintSuper() const;
    [[nodiscard]] QSize sizeHint() const override;

    void *swiftObject = nullptr;
    void (*m_mousePressEvent_Functor)(void *, void *) = nullptr;
    void *(*m_sizeHint_Functor)(void *) = nullptr;

protected:
    void mousePressEvent(QMouseEvent *mouseEvent) override;

private:
};

#endif
