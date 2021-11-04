//
//  qlift-QPixmap.cpp
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

#include <QPixmap>

#include "qlift-QPixmap.h"

[[maybe_unused]] void *QPixmap_new() {
    return static_cast<void *>( new QPixmap() );
}

[[maybe_unused]] void *QPixmap_from_file(const char *fileName, const char *format) {
    return static_cast<void *>( new QPixmap {fileName, format, Qt::AutoColor} );
}

[[maybe_unused]] void *QPixmap_from_image(void *image) {
    return static_cast<void *>( new QPixmap { QPixmap::fromImage(*static_cast<QImage *>(image), Qt::AutoColor) });
}

[[maybe_unused]] bool QPixmap_loadfromfile(void *pixmap, const char *fileName, const char *format) {
    return static_cast<QPixmap *>(pixmap)->load(fileName, format, Qt::AutoColor);
}

[[maybe_unused]] bool QPixmap_loadFromData(void *pixmap, const void *data, uint len, const char *format) {
    return static_cast<QPixmap *>(pixmap)->loadFromData(static_cast<const uchar *>(data), len, format, Qt::AutoColor);
}

[[maybe_unused]] void QPixmap_delete(void *pixmap) {
        delete static_cast<QPixmap *>(pixmap);
}

[[maybe_unused]] void *QPixmap_scaled(void *pixmap, int w, int h, int aspectMode, int mode) {
    return static_cast<void *>(new QPixmap(static_cast<QPixmap *>(pixmap)->
                                           scaled(w, h,
                                                  static_cast<Qt::AspectRatioMode>(aspectMode),
                                                  static_cast<Qt::TransformationMode>(mode)) ));
}

[[maybe_unused]] void *QPixmap_scaledQsize(void *pixmap, void *s, int aspectMode, int mode) {
    return static_cast<void *>(new QPixmap(static_cast<QPixmap *>(pixmap)->
                                           scaled(*static_cast<const QSize *>(s),
                                                  static_cast<Qt::AspectRatioMode>(aspectMode),
                                                  static_cast<Qt::TransformationMode>(mode)) ));
}

[[maybe_unused]] void *QPixmap_scaledToWidth(void *pixmap, int w, int mode) {
    return static_cast<void *>(new QPixmap(static_cast<QPixmap *>(pixmap)->
                                           scaledToWidth(w, static_cast<Qt::TransformationMode>(mode)) ));
}

[[maybe_unused]] void *QPixmap_scaledToHeight(void *pixmap, int h, int mode) {
    return static_cast<void *>(new QPixmap(static_cast<QPixmap *>(pixmap)->
                                           scaledToHeight(h, static_cast<Qt::TransformationMode>(mode)) ));
}

[[maybe_unused]] int QPixmap_width(void *pixmap) {
    return static_cast<QPixmap *>(pixmap)->width();
}

[[maybe_unused]] int QPixmap_height(void *pixmap) {
    return static_cast<QPixmap *>(pixmap)->height();
}
