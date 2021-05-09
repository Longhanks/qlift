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

[[maybe_unused]] bool QPixmap_loadfromfile(void *pixmap, const char *fileName, const char *format) {
    return static_cast<QPixmap *>(pixmap)->load(fileName, format, Qt::AutoColor);
}

[[maybe_unused]] bool QPixmap_loadFromData(void *pixmap, const uchar *data, uint len, const char *format) {
    return static_cast<QPixmap *>(pixmap)->loadFromData(data, len, format, Qt::AutoColor);
}

[[maybe_unused]] void QPixmap_delete(void *pixmap) {
        delete static_cast<QPixmap *>(pixmap);
}
