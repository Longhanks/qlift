#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QWidget_new(void *parent, int flags);

LIBRARY_API void QWidget_delete(void *widget);

LIBRARY_API bool QWidget_close(void *widget);

LIBRARY_API void QWidget_show(void *widget);

LIBRARY_API void QWidget_addAction(void *widget, void *action);

LIBRARY_API const char *QWidget_windowTitle(void *widget);

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

LIBRARY_API void QWidget_mousePressEvent(void *widget, void *mouseEvent);

LIBRARY_API void QWidget_mousePressEvent_Override(
    void *widget,
    void *context,
    void (*mousePressEvent_Functor)(void *, void *));

LIBRARY_API void *QWidget_sizeHint(void *widget);

LIBRARY_API void QWidget_setAutoFillBackground(void *widget, bool enable);

LIBRARY_API bool QWidget_autoFillBackground(void *widget);

LIBRARY_API void QWidget_sizeHint_Override(void *widget,
                                           void *context,
                                           void *(*sizeHint_Functor)(void *));

LIBRARY_API void *QWidget_sizePolicy(void *widget);

LIBRARY_API void QWidget_setSizePolicy(void *widget, void *policy);

LIBRARY_API const char *QWidget_styleSheet(void *widget);

LIBRARY_API void QWidget_setStyleSheet(void *widget, const char *styleSheet);

LIBRARY_API void QWidget_setPalette(void *widget, const void *palette);

LIBRARY_API bool QWidget_isVisible(void *widget);
LIBRARY_API void QWidget_setVisible(void *widget, bool visible);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

#include <QWidget>

#ifndef SWIFT_PACKAGE
#include <wobjectdefs.h>
#else
#include "../../include/wobjectdefs.h"
#endif

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
