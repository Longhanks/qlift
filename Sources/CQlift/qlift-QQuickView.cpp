//
//  qlift-QQuickView.cpp
//  
//
//  Created by Dmitriy Borovikov on 06.12.2021.
//

#include "qlift-QQuickView.h"
#include <QQuickView>

[[maybe_unused]] void *QQuickViewUrl_new(const char *source, void *parent) {
    return new QQuickView { QUrl(source), static_cast<QWindow *>(parent) };
}
[[maybe_unused]] void *QQuickView_new(void *parent) {
    return new QQuickView { static_cast<QWindow *>(parent) };
}
[[maybe_unused]] void *QQuickView_initialSize(void *view) {
    auto r = static_cast<QQuickView *>(view)->initialSize();
    return new QSize(r);
}
[[maybe_unused]] CQString QQuickView_source(void *view) {
    auto text = static_cast<QQuickView *>(view)->source().toString();
    return CQString { text.utf16(), text.size() };
}
[[maybe_unused]] int QQuickView_resizeMode(void *view) {
    return static_cast<QQuickView *>(view)->resizeMode();
}
[[maybe_unused]] int QQuickView_status(void *view) {
    return static_cast<QQuickView *>(view)->status();
}
[[maybe_unused]] void QQuickView_setResizeMode(void *view, int mode) {
    return static_cast<QQuickView *>(view)->setResizeMode(static_cast<QQuickView::ResizeMode>(mode));
}
[[maybe_unused]] void QQuickView_setSource(void *view, const char *url) {
    return static_cast<QQuickView *>(view)->setSource(QUrl(url));
}
