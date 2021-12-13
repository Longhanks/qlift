#include <QWidget>
#include <QIcon>
#include <wobjectimpl.h>
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

[[maybe_unused]] CQString QWidget_windowTitle(void *widget) {
    auto text = static_cast<QWidget *>(widget)->windowTitle();
    return CQString { text.utf16(), text.size() };
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
[[maybe_unused]] void QWidget_setGraphicsEffect(void *widget, void *effect) {
    static_cast<QWidget*>(widget)->setGraphicsEffect(static_cast<QGraphicsEffect *>(effect));
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
[[maybe_unused]] CQString QWidget_styleSheet(void *widget) {
    auto text = static_cast<QWidget *>(widget)->styleSheet();
    return CQString { text.utf16(), text.size() };
}
[[maybe_unused]] void QWidget_setStyleSheet(void *widget,
                                            const char *styleSheet) {
    static_cast<QWidget *>(widget)->setStyleSheet(styleSheet);
}
[[maybe_unused]] void *QWidget_sizeHint(void *widget) {
    auto stackSize = static_cast<QliftWidget *>(widget)->sizeHintSuper();
    return static_cast<void *>(new QSize{stackSize.width(), stackSize.height()});
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
[[maybe_unused]] void QWidget_updateXY(void * widget, int x, int y, int w, int h) {
    static_cast<QWidget *>(widget)->update(x, y, w, h);
}
[[maybe_unused]] void QWidget_updateR(void * widget, void *rect) {
    static_cast<QWidget *>(widget)->update(*static_cast<QRect *>(rect));
}
[[maybe_unused]] void QWidget_updateGeometry(void * widget) {
    static_cast<QWidget *>(widget)->updateGeometry();
}
[[maybe_unused]] void QWidget_showFullScreen(void * widget) {
    static_cast<QWidget *>(widget)->showFullScreen();
}
[[maybe_unused]] void QWidget_showMaximized(void * widget) {
    static_cast<QWidget *>(widget)->showMaximized();
}
[[maybe_unused]] void QWidget_showMinimized(void * widget) {
    static_cast<QWidget *>(widget)->showMinimized();
}
[[maybe_unused]] void QWidget_showNormal(void * widget) {
    static_cast<QWidget *>(widget)->showNormal();
}
[[maybe_unused]] void QWidget_update(void * widget) {
    static_cast<QWidget *>(widget)->update();
}
[[maybe_unused]] void QWidget_setFocusReason(void * widget, int reason) {
    static_cast<QWidget *>(widget)->setFocus(static_cast<Qt::FocusReason>(reason));
}
[[maybe_unused]] void QWidget_setFocus(void * widget) {
    static_cast<QWidget *>(widget)->setFocus();
}
[[maybe_unused]] bool QWidget_hasFocus(void * widget) {
    return static_cast<QWidget *>(widget)->hasFocus();
}
[[maybe_unused]] int QWidget_focusPolicy(void * widget) {
    return static_cast<QWidget *>(widget)->focusPolicy();
}
[[maybe_unused]] void QWidget_setFocusPolicy(void * widget, int policy) {
    static_cast<QWidget *>(widget)->setFocusPolicy(static_cast<Qt::FocusPolicy>(policy));
}
[[maybe_unused]] void QWidget_clearFocus(void * widget) {
    static_cast<QWidget *>(widget)->clearFocus();
}
[[maybe_unused]] void QWidget_setWindowIcon(void * widget, void *icon) {
    static_cast<QWidget *>(widget)->setWindowIcon(*static_cast<QIcon *>(icon));
}
[[maybe_unused]] void *QWidget_windowIcon(void * widget) {
    auto wicon = static_cast<QWidget *>(widget)->windowIcon();
    return new QIcon(wicon);
}
[[maybe_unused]] void QWidget_setWindowIconText(void * widget, const char *text) {
    static_cast<QWidget *>(widget)->setWindowIconText(text);
}
[[maybe_unused]] CQString QWidget_windowIconText(void * widget) {
    auto text = static_cast<QWidget *>(widget)->windowIconText();
    return CQString { text.utf16(), text.size() };
}
[[maybe_unused]] int QWidget_x(void * widget) {
    return static_cast<QWidget *>(widget)->x();
}
[[maybe_unused]] int QWidget_y(void * widget) {
    return static_cast<QWidget *>(widget)->y();
}
[[maybe_unused]] bool QWidget_updatesEnabled(void *widget) {
    return static_cast<QWidget *>(widget)->updatesEnabled();
}
[[maybe_unused]] void QWidget_setUpdatesEnabled(void *widget, bool enable) {
    static_cast<QWidget *>(widget)->setUpdatesEnabled(enable);
}


[[maybe_unused]] void QWidget_setEventFunctor(void *widget, void (*eventFunctor)(void *, CQTEventType, void *)) {
    static_cast<QliftWidget *>(widget)->m_eventFunctor = eventFunctor;
}

[[maybe_unused]] void QWidget_sizeHint_Override(void *widget,
                                                void *(*sizeHint_Functor)(void *)) {
    static_cast<QliftWidget *>(widget)->m_sizeHint_Functor = sizeHint_Functor;
}

[[maybe_unused]] void QWidget_swiftHookCleanup(void *widget) {
    if (widget != nullptr)
        static_cast<QliftWidget *>(widget)->swiftObject = nullptr;
}

[[maybe_unused]] void QWidget_saveSwiftObject(void *widget, void *swiftObject) {
    static_cast<QliftWidget *>(widget)->swiftObject = swiftObject;
}

[[maybe_unused]] void QWidget_mouseDoubleClickEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->mouseDoubleClickEventSuper(static_cast<QMouseEvent *>(event));
}
[[maybe_unused]] void QWidget_mouseMoveEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->mouseMoveEventSuper(static_cast<QMouseEvent *>(event));
}
[[maybe_unused]] void QWidget_mousePressEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->mousePressEventSuper(static_cast<QMouseEvent *>(event));
}
[[maybe_unused]] void QWidget_mouseReleaseEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->mouseReleaseEventSuper(static_cast<QMouseEvent *>(event));
}
[[maybe_unused]] void QWidget_keyPressEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->keyPressEventSuper(static_cast<QKeyEvent *>(event));
}
[[maybe_unused]] void QWidget_keyReleaseEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->keyReleaseEventSuper(static_cast<QKeyEvent *>(event));
}

[[maybe_unused]] void QWidget_actionEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->actionEventSuper(static_cast<QActionEvent *>(event));
}
[[maybe_unused]] void QWidget_changeEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->changeEventSuper(static_cast<QEvent *>(event));
}
[[maybe_unused]] void QWidget_closeEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->closeEventSuper(static_cast<QCloseEvent *>(event));
}
[[maybe_unused]] void QWidget_contextMenuEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->contextMenuEventSuper(static_cast<QContextMenuEvent *>(event));
}
[[maybe_unused]] void QWidget_enterEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->enterEventSuper(static_cast<QEvent *>(event));
}
[[maybe_unused]] void QWidget_focusInEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->focusInEventSuper(static_cast<QFocusEvent *>(event));
}
[[maybe_unused]] void QWidget_focusOutEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->focusOutEventSuper(static_cast<QFocusEvent *>(event));
}
[[maybe_unused]] void QWidget_hideEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->hideEventSuper(static_cast<QHideEvent *>(event));
}
[[maybe_unused]] void QWidget_leaveEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->leaveEventSuper(static_cast<QEvent *>(event));
}
[[maybe_unused]] void QWidget_moveEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->moveEventSuper(static_cast<QMoveEvent *>(event));
}
[[maybe_unused]] void QWidget_paintEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->paintEventSuper(static_cast<QPaintEvent *>(event));
}
[[maybe_unused]] void QWidget_resizeEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->resizeEventSuper(static_cast<QResizeEvent *>(event));
}
[[maybe_unused]] void QWidget_showEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->showEventSuper(static_cast<QShowEvent *>(event));
}
[[maybe_unused]] void QWidget_tabletEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->tabletEventSuper(static_cast<QTabletEvent *>(event));
}
[[maybe_unused]] void QWidget_wheelEvent(void *widget, void *event) {
    static_cast<QliftWidget *>(widget)->wheelEventSuper(static_cast<QWheelEvent *>(event));
}

W_OBJECT_IMPL(QliftWidget)

[[maybe_unused]] void QliftWidget::mouseDoubleClickEventSuper(QMouseEvent *event) {
    QWidget::mouseDoubleClickEvent(event);
}
[[maybe_unused]] void QliftWidget::mouseMoveEventSuper(QMouseEvent *event) {
    QWidget::mouseMoveEvent(event);
}
[[maybe_unused]] void QliftWidget::mousePressEventSuper(QMouseEvent *event) {
    QWidget::mousePressEvent(event);
}
[[maybe_unused]] void QliftWidget::mouseReleaseEventSuper(QMouseEvent *event) {
    QWidget::mouseReleaseEvent(event);
}
[[maybe_unused]] void QliftWidget::keyPressEventSuper(QKeyEvent *event) {
    QWidget::keyPressEvent(event);
}
[[maybe_unused]] void QliftWidget::keyReleaseEventSuper(QKeyEvent *event) {
    QWidget::keyReleaseEvent(event);
}
[[maybe_unused]] void QliftWidget::actionEventSuper(QActionEvent *event) {
    QWidget::actionEvent(event);
}
[[maybe_unused]] void QliftWidget::changeEventSuper(QEvent *event) {
    QWidget::changeEvent(event);
}
[[maybe_unused]] void QliftWidget::closeEventSuper(QCloseEvent *event) {
    QWidget::closeEvent(event);
}
[[maybe_unused]] void QliftWidget::contextMenuEventSuper(QContextMenuEvent *event) {
    QWidget::contextMenuEvent(event);
}
[[maybe_unused]] void QliftWidget::enterEventSuper(QEvent *event) {
    QWidget::enterEvent(event);
}
[[maybe_unused]] void QliftWidget::focusInEventSuper(QFocusEvent *event) {
    QWidget::focusInEvent(event);
}
[[maybe_unused]] void QliftWidget::focusOutEventSuper(QFocusEvent *event) {
    QWidget::focusOutEvent(event);
}
[[maybe_unused]] void QliftWidget::hideEventSuper(QHideEvent *event) {
    QWidget::hideEvent(event);
}
[[maybe_unused]] void QliftWidget::leaveEventSuper(QEvent *event) {
    QWidget::leaveEvent(event);
}
[[maybe_unused]] void QliftWidget::moveEventSuper(QMoveEvent *event) {
    QWidget::moveEvent(event);
}
[[maybe_unused]] void QliftWidget::paintEventSuper(QPaintEvent *event) {
    QWidget::paintEvent(event);
}
[[maybe_unused]] void QliftWidget::resizeEventSuper(QResizeEvent *event) {
    QWidget::resizeEvent(event);
}
[[maybe_unused]] void QliftWidget::showEventSuper(QShowEvent *event) {
    QWidget::showEvent(event);
}
[[maybe_unused]] void QliftWidget::tabletEventSuper(QTabletEvent *event) {
    QWidget::tabletEvent(event);
}
[[maybe_unused]] void QliftWidget::wheelEventSuper(QWheelEvent *event) {
    QWidget::wheelEvent(event);
}

[[maybe_unused]] void QliftWidget::mouseDoubleClickEvent(QMouseEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQmouseDoubleClickEvent, event);
    else
        QWidget::mouseDoubleClickEvent(event);
}
[[maybe_unused]] void QliftWidget::mouseMoveEvent(QMouseEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQmouseMoveEvent, event);
    else
        QWidget::mouseMoveEvent(event);
}
[[maybe_unused]] void QliftWidget::mousePressEvent(QMouseEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQmousePressEvent, event);
    else
        QWidget::mousePressEvent(event);
}
[[maybe_unused]] void QliftWidget::mouseReleaseEvent(QMouseEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQmouseReleaseEvent, event);
    else
        QWidget::mouseReleaseEvent(event);
}
[[maybe_unused]] void QliftWidget::keyPressEvent(QKeyEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQkeyPressEvent, event);
    else
        QWidget::keyPressEvent(event);
}
[[maybe_unused]] void QliftWidget::keyReleaseEvent(QKeyEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQkeyReleaseEvent, event);
    else
        QWidget::keyReleaseEvent(event);
}

[[maybe_unused]] void QliftWidget::actionEvent(QActionEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQactionEvent, event);
    else
        QWidget::actionEvent(event);
}
[[maybe_unused]] void QliftWidget::changeEvent(QEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQchangeEvent, event);
    else
        QWidget::changeEvent(event);
}
[[maybe_unused]] void QliftWidget::closeEvent(QCloseEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQcloseEvent, event);
    else
        QWidget::closeEvent(event);
}
[[maybe_unused]] void QliftWidget::contextMenuEvent(QContextMenuEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQcontextMenuEvent, event);
    else
        QWidget::contextMenuEvent(event);
}
[[maybe_unused]] void QliftWidget::enterEvent(QEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQenterEvent, event);
    else
        QWidget::enterEvent(event);
}
[[maybe_unused]] void QliftWidget::focusInEvent(QFocusEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQfocusInEvent, event);
    else
        QWidget::focusInEvent(event);
}
[[maybe_unused]] void QliftWidget::focusOutEvent(QFocusEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQfocusOutEvent, event);
    else
        QWidget::focusOutEvent(event);
}
[[maybe_unused]] void QliftWidget::hideEvent(QHideEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQhideEvent, event);
    else
        QWidget::hideEvent(event);
}
[[maybe_unused]] void QliftWidget::leaveEvent(QEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQleaveEvent, event);
    else
        QWidget::leaveEvent(event);
}
[[maybe_unused]] void QliftWidget::moveEvent(QMoveEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQmoveEvent, event);
    else
        QWidget::moveEvent(event);
}
[[maybe_unused]] void QliftWidget::paintEvent(QPaintEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQpaintEvent, event);
    else
        QWidget::paintEvent(event);
}
[[maybe_unused]] void QliftWidget::resizeEvent(QResizeEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQresizeEvent, event);
    else
        QWidget::resizeEvent(event);
}
[[maybe_unused]] void QliftWidget::showEvent(QShowEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQshowEvent, event);
    else
        QWidget::showEvent(event);
}
[[maybe_unused]] void QliftWidget::tabletEvent(QTabletEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQtabletEvent, event);
    else
        QWidget::tabletEvent(event);
}
[[maybe_unused]] void QliftWidget::wheelEvent(QWheelEvent *event) {
    if (swiftObject != nullptr)
        m_eventFunctor(swiftObject, CQwheelEvent, event);
    else
        QWidget::wheelEvent(event);
}

[[maybe_unused]] QSize QliftWidget::sizeHintSuper() const {
    return QWidget::sizeHint();
}

[[maybe_unused]] QSize QliftWidget::sizeHint() const {
    if (swiftObject != nullptr) {
        auto *size = static_cast<QSize *>((*m_sizeHint_Functor)(swiftObject));
        return QSize{size->width(), size->height()};
    }
    return QWidget::sizeHint();
}
