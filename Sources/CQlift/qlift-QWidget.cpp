#include <QWidget>

#ifndef SWIFT_PACKAGE
#include <wobjectimpl.h>
#else
#include "../../include/wobjectimpl.h"
#endif

#include "qlift-QWidget.h"

[[maybe_unused]] void *QWidget_new(void *parent, int flags) {
    return static_cast<void *>(
        new QliftWidget{static_cast<QWidget *>(parent),
                        static_cast<QFlags<Qt::WindowType>>(flags)});
}

[[maybe_unused]] bool QWidget_close(void *widget) {
    return static_cast<QWidget *>(widget)->close();
}

[[maybe_unused]] void QWidget_show(void *widget) {
    static_cast<QWidget *>(widget)->show();
}

[[maybe_unused]] void QWidget_addAction(void *widget, void *action) {
    static_cast<QWidget *>(widget)->addAction(static_cast<QAction *>(action));
}

[[maybe_unused]] const ushort *QWidget_windowTitle(void *widget, int *len) {
    auto text = static_cast<QWidget *>(widget)->windowTitle();
    *len = text.size();
    return text.utf16();
}

[[maybe_unused]] void QWidget_setWindowTitle(void *widget, const char *title) {
    static_cast<QWidget *>(widget)->setWindowTitle(title);
}

[[maybe_unused]] void *QWidget_geometry(void *widget) {
    auto stackRect = static_cast<QWidget *>(widget)->geometry();
    return static_cast<void *>(new QRect{
        stackRect.x(), stackRect.y(), stackRect.width(), stackRect.height()});
}

[[maybe_unused]] void QWidget_setGeometry(void *widget, void *rect) {
    if (rect != nullptr) {
        static_cast<QWidget *>(widget)->setGeometry(
            *static_cast<QRect *>(rect));
    } else {
        static_cast<QWidget *>(widget)->setGeometry(QRect());
    }
}

[[maybe_unused]] bool QWidget_isEnabled(void *widget) {
    return static_cast<QWidget *>(widget)->isEnabled();
}

[[maybe_unused]] void QWidget_setEnabled(void *widget, bool enabled) {
    static_cast<QWidget *>(widget)->setEnabled(enabled);
}

[[maybe_unused]] int QWidget_height(void *widget) {
    return static_cast<QWidget *>(widget)->height();
}

[[maybe_unused]] int QWidget_width(void *widget) {
    return static_cast<QWidget *>(widget)->width();
}

[[maybe_unused]] void *QWidget_layout(void *widget) {
    return static_cast<void *>(static_cast<QWidget *>(widget)->layout());
}

[[maybe_unused]] void QWidget_setLayout(void *widget, void *layout) {
    static_cast<QWidget *>(widget)->setLayout(static_cast<QLayout *>(layout));
}

[[maybe_unused]] void *QWidget_pos(void *widget) {
    auto stackPoint = static_cast<QWidget *>(widget)->pos();
    return static_cast<void *>(new QPoint{stackPoint.x(), stackPoint.y()});
}

[[maybe_unused]] void QWidget_move(void *widget, void *point) {
    if (point != nullptr) {
        static_cast<QWidget *>(widget)->move(*static_cast<QPoint *>(point));
    } else {
        static_cast<QWidget *>(widget)->move(QPoint());
    }
}

[[maybe_unused]]  void QWidget_movexy(void *widget, int x, int y) {
    static_cast<QWidget *>(widget)->move(x, y);
}

[[maybe_unused]] void *QWidget_window(void *widget) {
    return static_cast<void *>(static_cast<QWidget *>(widget)->window());
}

[[maybe_unused]] void *QWidget_rect(void *widget) {
    auto stackRect = static_cast<QWidget *>(widget)->rect();
    return static_cast<void *>(new QRect{
        stackRect.x(), stackRect.y(), stackRect.width(), stackRect.height()});
}

[[maybe_unused]] void *QWidget_size(void *widget) {
    auto stackSize = static_cast<QWidget *>(widget)->size();
    return static_cast<void *>(
        new QSize{stackSize.width(), stackSize.height()});
}

[[maybe_unused]] void QWidget_adjustSize(void *widget) {
    static_cast<QWidget *>(widget)->adjustSize();
}

[[maybe_unused]] void QWidget_resize(void *widget, int w, int h) {
    static_cast<QWidget *>(widget)->resize(w, h);
}

[[maybe_unused]] void QWidget_setFixedSize(void *widget, void *size) {
    static_cast<QWidget *>(widget)->setFixedSize(*static_cast<QSize *>(size));
}

[[maybe_unused]] void *QWidget_frameGeometry(void *widget) {
    auto stackRect = static_cast<QWidget *>(widget)->frameGeometry();
    return static_cast<void *>(new QRect{
        stackRect.x(), stackRect.y(), stackRect.width(), stackRect.height()});
}

[[maybe_unused]] bool QWidget_isWindow(void *widget) {
    return static_cast<QWidget *>(widget)->isWindow();
}

[[maybe_unused]] void *QWidget_maximumSize(void *widget) {
    auto stackSize = static_cast<QWidget *>(widget)->maximumSize();
    return new QSize{stackSize.width(), stackSize.height()};
}

[[maybe_unused]] void QWidget_setMaximumSize(void *widget, void *size) {
    if (size != nullptr) {
        static_cast<QWidget *>(widget)->setMaximumSize(
            *static_cast<QSize *>(size));
    } else {
        static_cast<QWidget *>(widget)->setMaximumSize(QSize());
    }
}

[[maybe_unused]] void* QWidget_minimumSize(void *widget) {
    auto stackSize = static_cast<QWidget*>(widget)->minimumSize();
    return new QSize {stackSize.width(), stackSize.height() };
}

[[maybe_unused]] void QWidget_setMinimumSize(void *widget, void *size) {
    if (size != nullptr) {
        static_cast<QWidget *>(widget)->setMinimumSize(*static_cast<QSize *>(size));
    } else {
        static_cast<QWidget *>(widget)->setMinimumSize(QSize());
    }
}

[[maybe_unused]] void QWidget_mousePressEvent(void *widget, void *mouseEvent) {
    static_cast<QliftWidget *>(widget)->mousePressEventSuper(
        static_cast<QMouseEvent *>(mouseEvent));
}

[[maybe_unused]] void QWidget_mousePressEvent_Override(
    void *widget,
    void *context,
    void (*mousePressEvent_Functor)(void *, void *)) {
    static_cast<QliftWidget *>(widget)->mousePressEventOverride(
        context, mousePressEvent_Functor);
}

[[maybe_unused]] void QWidget_swiftHookCleanup(void *widget) {
    if (widget != nullptr)
        static_cast<QliftWidget *>(widget)->swiftHookCleanup();
}

[[maybe_unused]] void *QWidget_sizePolicy(void *widget) {
    auto stackPolicy = static_cast<QWidget *>(widget)->sizePolicy();
    return static_cast<void *>(new QSizePolicy{stackPolicy.horizontalPolicy(),
                                               stackPolicy.verticalPolicy(),
                                               stackPolicy.controlType()});
}

[[maybe_unused]] void QWidget_setSizePolicy(void *widget, void *policy) {
    static_cast<QWidget *>(widget)->setSizePolicy(
        *static_cast<QSizePolicy *>(policy));
}

[[maybe_unused]] const ushort *QWidget_styleSheet(void *widget, int *len) {
    auto text = static_cast<QWidget *>(widget)->styleSheet();
    *len = text.size();
    return text.utf16();
}

[[maybe_unused]] void QWidget_setStyleSheet(void *widget,
                                            const char *styleSheet) {
    static_cast<QWidget *>(widget)->setStyleSheet(styleSheet);
}

[[maybe_unused]] void *QWidget_sizeHint(void *widget) {
    auto stackSize = static_cast<QliftWidget *>(widget)->sizeHintSuper();
    return static_cast<void *>(
        new QSize{stackSize.width(), stackSize.height()});
}

[[maybe_unused]] void QWidget_sizeHint_Override(
    void *widget, void *context, void *(*sizeHint_Functor)(void *)) {
    static_cast<QliftWidget *>(widget)->sizeHintOverride(context,
                                                         sizeHint_Functor);
}

[[maybe_unused]] void QWidget_setAutoFillBackground(void *widget, bool enabled) {
    static_cast<QWidget *>(widget)->setAutoFillBackground(enabled);
}

[[maybe_unused]] bool QWidget_autoFillBackground(void *widget) {
    return static_cast<QWidget *>(widget)->autoFillBackground();
}

[[maybe_unused]] void QWidget_setPalette(void *widget, const void *palette) {
    static_cast<QWidget *>(widget)->setPalette(*static_cast<const QPalette *>(palette));
}

[[maybe_unused]] bool QWidget_isVisible(void *widget) {
    return static_cast<QWidget *>(widget)->isVisible();
}

[[maybe_unused]] void QWidget_setVisible(void *widget, bool visible) {
    static_cast<QWidget *>(widget)->setVisible(visible);
}

[[maybe_unused]] void QWidget_setAttribute(void * widget, int attribute, bool on) {
    static_cast<QWidget *>(widget)->setAttribute(static_cast<Qt::WidgetAttribute>(attribute), on);
}

[[maybe_unused]] bool QWidget_testAttribute(void * widget, int attribute) {
    return static_cast<QWidget *>(widget)->testAttribute(static_cast<Qt::WidgetAttribute>(attribute));
}

[[maybe_unused]] bool QWidget_isMinimized(void *widget) {
    return static_cast<QWidget *>(widget)->isMinimized();
}

[[maybe_unused]] bool QWidget_isMaximized(void *widget) {
    return static_cast<QWidget *>(widget)->isMaximized();
}

[[maybe_unused]] bool QWidget_isFullScreen(void *widget) {
    return static_cast<QWidget *>(widget)->isFullScreen();
}

[[maybe_unused]] void QWidget_setWindowState(void *widget, int state) {
    static_cast<QWidget *>(widget)->setWindowState(static_cast<Qt::WindowStates>(state));
}

[[maybe_unused]] void QWidget_overrideWindowState(void *widget, int state) {
    static_cast<QWidget *>(widget)->overrideWindowState(static_cast<Qt::WindowStates>(state));
}

[[maybe_unused]] int QWidget_windowState(void *widget) {
    return static_cast<QWidget *>(widget)->windowState();
}

[[maybe_unused]] int QWidget_windowModality(void *widget) {
    return static_cast<QWidget *>(widget)->windowModality();
}

[[maybe_unused]] void QWidget_setWindowModality(void *widget, int windowModality) {
    static_cast<QWidget *>(widget)->setWindowModality(static_cast<Qt::WindowModality>(windowModality));
}

[[maybe_unused]] void *QWidget_mapToGlobal(void *widget, void *point) {
    auto mapPoint = static_cast<QWidget *>(widget)->mapToGlobal(*static_cast<QPoint *>(point));
    return static_cast<void *>(new QPoint{mapPoint.x(), mapPoint.y()});
}

[[maybe_unused]] void *QWidget_mapFromGlobal(void *widget, void *point) {
    auto mapPoint = static_cast<QWidget *>(widget)->mapFromGlobal(*static_cast<QPoint *>(point));
    return static_cast<void *>(new QPoint{mapPoint.x(), mapPoint.y()});
}

[[maybe_unused]] void *QWidget_mapToParent(void *widget, void *point) {
    auto mapPoint = static_cast<QWidget *>(widget)->mapToParent(*static_cast<QPoint *>(point));
    return static_cast<void *>(new QPoint{mapPoint.x(), mapPoint.y()});
}

[[maybe_unused]] void *QWidget_mapFromParent(void *widget, void *point) {
    auto mapPoint = static_cast<QWidget *>(widget)->mapFromParent(*static_cast<QPoint *>(point));
    return static_cast<void *>(new QPoint{mapPoint.x(), mapPoint.y()});
}

[[maybe_unused]] void *QWidget_mapTo(void *widget, void *parentWidget, void *point) {
    auto mapPoint = static_cast<QWidget *>(widget)->mapTo(static_cast<QWidget *>(parentWidget), *static_cast<QPoint *>(point));
    return static_cast<void *>(new QPoint{mapPoint.x(), mapPoint.y()});
}

[[maybe_unused]] void *QWidget_mapFrom(void *widget, void *parentWidget, void *point) {
    auto mapPoint = static_cast<QWidget *>(widget)->mapFrom(static_cast<QWidget *>(parentWidget), *static_cast<QPoint *>(point));
    return static_cast<void *>(new QPoint{mapPoint.x(), mapPoint.y()});
}

W_OBJECT_IMPL(QliftWidget)

[[maybe_unused]] void
QliftWidget::mousePressEventSuper(QMouseEvent *mouseEvent) {
    QWidget::mousePressEvent(mouseEvent);
}

[[maybe_unused]] void QliftWidget::mousePressEventOverride(
    void *context, void (*mousePressEvent_Functor)(void *, void *)) {
    m_mousePressEvent_Context = context;
    m_mousePressEvent_Functor = mousePressEvent_Functor;
}

[[maybe_unused]] void QliftWidget::mousePressEvent(QMouseEvent *mouseEvent) {
    if (m_mousePressEvent_Functor != nullptr) {
        (*m_mousePressEvent_Functor)(m_mousePressEvent_Context, mouseEvent);
        return;
    }
    QWidget::mousePressEvent(mouseEvent);
}

[[maybe_unused]] QSize QliftWidget::sizeHintSuper() const {
    return QWidget::sizeHint();
}

[[maybe_unused]] void
QliftWidget::sizeHintOverride(void *context,
                              void *(*sizeHint_Functor)(void *)) {
    m_sizeHint_Context = context;
    m_sizeHint_Functor = sizeHint_Functor;
}

[[maybe_unused]] QSize QliftWidget::sizeHint() const {
    if (m_sizeHint_Functor != nullptr) {
        auto *size =
            static_cast<QSize *>((*m_sizeHint_Functor)(m_sizeHint_Context));
        return QSize{size->width(), size->height()};
    }
    return QWidget::sizeHint();
}
