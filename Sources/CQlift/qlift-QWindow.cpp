#include <QWindow>
#include "qlift-QWindow.h"

[[maybe_unused]] void *QWindow_new(void * _Nullable parent) {
    return new QWindow(static_cast<QWindow *>(parent));
}

[[maybe_unused]] void *QWindow_baseSize(void *window) {
    auto s = static_cast<QWindow *>(window)->baseSize();
    return new QSize(s);
}
[[maybe_unused]] void *QWindow_frameGeometry(void *window) {
    auto r = static_cast<QWindow *>(window)->frameGeometry();
    return new QRect(r);
}
[[maybe_unused]] void *QWindow_frameMargins(void *window) {
    auto m = static_cast<QWindow *>(window)->frameMargins();
    return new QMargins(m);
}
[[maybe_unused]] void *QWindow_framePosition(void *window) {
    auto r = static_cast<QWindow *>(window)->framePosition();
    return new QPoint(r);
}
[[maybe_unused]] void *QWindow_geometry(void *window) {
    auto r = static_cast<QWindow *>(window)->geometry();
    return new QRect(r);
}
[[maybe_unused]] void *QWindow_icon(void *window) {
    auto r = static_cast<QWindow *>(window)->icon();
    return new QIcon(r);
}
[[maybe_unused]] void *QWindow_mapFromGlobal(void *window, const void *pos) {
    auto r = static_cast<QWindow *>(window)->mapFromGlobal(*static_cast<const QPoint *>(pos));
    return new QPoint(r);
}
[[maybe_unused]] void *QWindow_mapToGlobal(void *window, const void *pos) {
    auto r = static_cast<QWindow *>(window)->mapToGlobal(*static_cast<const QPoint *>(pos));
    return new QPoint(r);
}
[[maybe_unused]] void *QWindow_mask(void *window) {
    auto r= static_cast<QWindow *>(window)->mask();
    return new QRegion(r);
}
[[maybe_unused]] void *QWindow_maximumSize(void *window) {
    auto r = static_cast<QWindow *>(window)->maximumSize();
    return new QSize(r);
}
[[maybe_unused]] void *QWindow_minimumSize(void *window) {
    auto r = static_cast<QWindow *>(window)->minimumSize();
    return new QSize(r);
}
[[maybe_unused]] void *QWindow_position(void *window) {
    auto r = static_cast<QWindow *>(window)->position();
    return new QPoint(r);
}
[[maybe_unused]] void *QWindow_sizeIncrement(void *window) {
    auto r = static_cast<QWindow *>(window)->sizeIncrement();
    return new QSize(r);
}
[[maybe_unused]] void *QWindow_size(void *window) {
    auto r = static_cast<QWindow *>(window)->size();
    return new QSize(r);
}
[[maybe_unused]] CQString QWindow_filePath(void *window) {
    auto text = static_cast<QWindow *>(window)->filePath();
    return CQString { text.utf16(), text.size() };
}
[[maybe_unused]] CQString QWindow_title(void *window) {
    auto text = static_cast<QWindow *>(window)->title();
    return CQString { text.utf16(), text.size() };
}
[[maybe_unused]] int QWindow_contentOrientation(void *window) {
    return static_cast<QWindow *>(window)->contentOrientation();
}
[[maybe_unused]] double QWindow_devicePixelRatio(void *window) {
    return static_cast<QWindow *>(window)->devicePixelRatio();
}
[[maybe_unused]] int QWindow_flags(void *window) {
    return static_cast<QWindow *>(window)->flags();
}
[[maybe_unused]] int QWindow_height(void *window) {
    return static_cast<QWindow *>(window)->height();
}
[[maybe_unused]] bool QWindow_isActive(void *window) {
    return static_cast<QWindow *>(window)->isActive();
}
[[maybe_unused]] bool QWindow_isExposed(void *window) {
    return static_cast<QWindow *>(window)->isExposed();
}
[[maybe_unused]] bool QWindow_isModal(void *window) {
    return static_cast<QWindow *>(window)->isModal();
}
[[maybe_unused]] bool QWindow_isTopLevel(void *window) {
    return static_cast<QWindow *>(window)->isTopLevel();
}
[[maybe_unused]] bool QWindow_isVisible(void *window) {
    return static_cast<QWindow *>(window)->isVisible();
}
[[maybe_unused]] int QWindow_maximumHeight(void *window) {
    return static_cast<QWindow *>(window)->maximumHeight();
}
[[maybe_unused]] int QWindow_maximumWidth(void *window) {
    return static_cast<QWindow *>(window)->maximumWidth();
}
[[maybe_unused]] int QWindow_minimumHeight(void *window) {
    return static_cast<QWindow *>(window)->minimumHeight();
}
[[maybe_unused]] int QWindow_minimumWidth(void *window) {
    return static_cast<QWindow *>(window)->minimumWidth();
}
[[maybe_unused]] int QWindow_modality(void *window) {
    return static_cast<QWindow *>(window)->modality();
}
[[maybe_unused]] double QWindow_opacity(void *window) {
    return static_cast<QWindow *>(window)->opacity();
}
[[maybe_unused]] bool QWindow_setKeyboardGrabEnabled(void *window, bool grab) {
    return static_cast<QWindow *>(window)->setKeyboardGrabEnabled(grab);
}
[[maybe_unused]] bool QWindow_setMouseGrabEnabled(void *window, bool grab) {
    return static_cast<QWindow *>(window)->setMouseGrabEnabled(grab);
}
[[maybe_unused]] int QWindow_type(void *window) {
    return static_cast<QWindow *>(window)->type();
}
[[maybe_unused]] int QWindow_visibility(void *window) {
    return static_cast<QWindow *>(window)->visibility();
}
[[maybe_unused]] int QWindow_width(void *window) {
    return static_cast<QWindow *>(window)->width();
}
[[maybe_unused]] int QWindow_windowStates(void *window) {
    return static_cast<QWindow *>(window)->windowStates();
}
[[maybe_unused]] int QWindow_x(void *window) {
    return static_cast<QWindow *>(window)->x();
}
[[maybe_unused]] int QWindow_y(void *window) {
    return static_cast<QWindow *>(window)->y();
}
[[maybe_unused]] bool QWindow_close(void *window) {
    return static_cast<QWindow *>(window)->close();
}
[[maybe_unused]] bool QWindow_startSystemMove(void *window) {
    return static_cast<QWindow *>(window)->startSystemMove();
}
[[maybe_unused]] bool QWindow_startSystemResize(void *window, int edges) {
    return static_cast<QWindow *>(window)->startSystemResize(static_cast<Qt::Edges>(edges));
}

[[maybe_unused]] void QWindow_create(void *window) {
    static_cast<QWindow *>(window)->create();
}
[[maybe_unused]] void QWindow_destroy(void *window) {
    static_cast<QWindow *>(window)->destroy();
}
[[maybe_unused]] void QWindow_reportContentOrientationChange(void *window, int orientation) {
    static_cast<QWindow *>(window)->reportContentOrientationChange(static_cast<Qt::ScreenOrientation>(orientation));
}
[[maybe_unused]] void QWindow_resize(void *window, const void *newSize) {
    static_cast<QWindow *>(window)->resize(*static_cast<const QSize *>(newSize));
}
[[maybe_unused]] void QWindow_resizewh(void *window, int w, int h) {
    static_cast<QWindow *>(window)->resize(w, h);
}
[[maybe_unused]] void QWindow_setBaseSize(void *window, const void *size) {
    static_cast<QWindow *>(window)->setBaseSize(*static_cast<const QSize *>(size));
}
[[maybe_unused]] void QWindow_setFilePath(void *window, const char *filePath) {
    static_cast<QWindow *>(window)->setFilePath(filePath);
}
[[maybe_unused]] void QWindow_setFlags(void *window, int flags) {
    static_cast<QWindow *>(window)->setFlags(static_cast<Qt::WindowFlags>(flags));
}
[[maybe_unused]] void QWindow_setFramePosition(void *window, const void *point) {
    static_cast<QWindow *>(window)->setFramePosition(*static_cast<const QPoint *>(point));
}
[[maybe_unused]] void QWindow_setIcon(void *window, const void *icon) {
    static_cast<QWindow *>(window)->setIcon(*static_cast<const QIcon *>(icon));
}
[[maybe_unused]] void QWindow_setMask(void *window, const void *region) {
    static_cast<QWindow *>(window)->setMask(*static_cast<const QRegion *>(region));
}
[[maybe_unused]] void QWindow_setMaximumSize(void *window, const void *size) {
    static_cast<QWindow *>(window)->setMaximumSize(*static_cast<const QSize *>(size));
}
[[maybe_unused]] void QWindow_setMinimumSize(void *window, const void *size) {
    static_cast<QWindow *>(window)->setMinimumSize(*static_cast<const QSize *>(size));
}
[[maybe_unused]] void QWindow_setModality(void *window, int modality) {
    static_cast<QWindow *>(window)->setModality(static_cast<Qt::WindowModality>(modality));
}
[[maybe_unused]] void QWindow_setOpacity(void *window, double level) {
    static_cast<QWindow *>(window)->setOpacity(level);
}
[[maybe_unused]] void QWindow_setPosition(void *window, const void *pt) {
    static_cast<QWindow *>(window)->setPosition(*static_cast<const QPoint *>(pt));
}
[[maybe_unused]] void QWindow_setPositionxy(void *window, int posx, int posy) {
    static_cast<QWindow *>(window)->setPosition(posx, posy);
}
[[maybe_unused]] void QWindow_setSizeIncrement(void *window, const void *size) {
    static_cast<QWindow *>(window)->setSizeIncrement(*static_cast<const QSize *>(size));
}
[[maybe_unused]] void QWindow_setVisibility(void *window, int v) {
    static_cast<QWindow *>(window)->setVisibility(static_cast<QWindow::Visibility>(v));
}
[[maybe_unused]] void QWindow_setWindowStates(void *window, int state) {
    static_cast<QWindow *>(window)->setWindowStates(static_cast<Qt::WindowStates>(state));
}
[[maybe_unused]] void QWindow_unsetCursor(void *window) {
    static_cast<QWindow *>(window)->unsetCursor();
}
[[maybe_unused]] void QWindow_alert(void *window, int msec) {
    static_cast<QWindow *>(window)->alert(msec);
}
[[maybe_unused]] void QWindow_hide(void *window) {
    static_cast<QWindow *>(window)->hide();
}
[[maybe_unused]] void QWindow_lower(void *window) {
    static_cast<QWindow *>(window)->lower();
}
[[maybe_unused]] void QWindow_raise(void *window) {
    static_cast<QWindow *>(window)->raise();
}
[[maybe_unused]] void QWindow_requestActivate(void *window) {
    static_cast<QWindow *>(window)->requestActivate();
}
[[maybe_unused]] void QWindow_requestUpdate(void *window) {
    static_cast<QWindow *>(window)->requestUpdate();
}
[[maybe_unused]] void QWindow_setGeometry(void *window, const void *rect) {
    static_cast<QWindow *>(window)->setGeometry(*static_cast<const QRect *>(rect));
}
[[maybe_unused]] void QWindow_setGeometrywh(void *window, int posx, int posy, int w, int h) {
    static_cast<QWindow *>(window)->setGeometry(posx, posy, w, h);
}
[[maybe_unused]] void QWindow_setHeight(void *window, int arg) {
    static_cast<QWindow *>(window)->setHeight(arg);
}
[[maybe_unused]] void QWindow_setMaximumHeight(void *window, int h) {
    static_cast<QWindow *>(window)->setMaximumHeight(h);
}
[[maybe_unused]] void QWindow_setMaximumWidth(void *window, int w) {
    static_cast<QWindow *>(window)->setMaximumWidth(w);
}
[[maybe_unused]] void QWindow_setMinimumHeight(void *window, int h) {
    static_cast<QWindow *>(window)->setMinimumHeight(h);
}
[[maybe_unused]] void QWindow_setMinimumWidth(void *window, int w) {
    static_cast<QWindow *>(window)->setMinimumWidth(w);
}
[[maybe_unused]] void QWindow_setTitle(void *window, const char *title) {
    static_cast<QWindow *>(window)->setTitle(title);
}
[[maybe_unused]] void QWindow_setVisible(void *window, bool visible) {
    static_cast<QWindow *>(window)->setVisible(visible);
}
[[maybe_unused]] void QWindow_setWidth(void *window, int arg) {
    static_cast<QWindow *>(window)->setWidth(arg);
}
[[maybe_unused]] void QWindow_setX(void *window, int arg) {
    static_cast<QWindow *>(window)->setX(arg);
}
[[maybe_unused]] void QWindow_setY(void *window, int arg) {
    static_cast<QWindow *>(window)->setY(arg);
}
[[maybe_unused]] void QWindow_show(void *window) {
    static_cast<QWindow *>(window)->show();
}
[[maybe_unused]] void QWindow_showFullScreen(void *window) {
    static_cast<QWindow *>(window)->showFullScreen();
}
[[maybe_unused]] void QWindow_showMaximized(void *window) {
    static_cast<QWindow *>(window)->showMaximized();
}
[[maybe_unused]] void QWindow_showMinimized(void *window) {
    static_cast<QWindow *>(window)->showMinimized();
}
[[maybe_unused]] void QWindow_showNormal(void *window) {
    static_cast<QWindow *>(window)->showNormal();
}
