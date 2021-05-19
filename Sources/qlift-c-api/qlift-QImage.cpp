//
//  qlift-QImage.cpp
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

#include <QImage>

#include "qlift-QImage.h"

[[maybe_unused]] void *QImage_new() {
    return static_cast<void *>( new QImage() );
}

[[maybe_unused]] void QImage_delete(void *image) {
    delete static_cast<QImage *>(image);
}

[[maybe_unused]] void *QImage_new_data(const void *data, int width, int height, int format, void *cleanupInfo) {
    return static_cast<void *>( new QImage { static_cast<const uchar *>(data), width, height, static_cast<QImage::Format>(format)} );
}

[[maybe_unused]] void *QImage_new_data_bpl(const void *data, int width, int height, int bytesPerLine, int format, void *cleanupInfo) {
    return static_cast<void *>( new QImage { static_cast<const uchar *>(data), width, height, bytesPerLine, static_cast<QImage::Format>(format)} );
}

[[maybe_unused]] void *QImage_convertToFormat(const void *image, int format) {
    QImage *new_image = new QImage();
    *new_image = static_cast<const QImage *>(image)->convertToFormat(static_cast<QImage::Format>(format), Qt::AutoColor);
    return new_image;
}
