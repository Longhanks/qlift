//
//  qlift-QIcon.cpp
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

#include <QIcon>

#include "qlift-QIcon.h"

[[maybe_unused]] void *QIcon_new() {
    return static_cast<void *>( new QIcon() );
}

[[maybe_unused]] void QIcon_delete(void *icon) {
    delete static_cast<QIcon *>(icon);
}

[[maybe_unused]] void *QIcon_new_from_file(const char *fileName) {
    return static_cast<void *>( new QIcon {fileName} );
}

[[maybe_unused]] void *QIcon_new_from_pixmap(void *pixmap) {
    return static_cast<void *>( new QIcon { *(static_cast<QPixmap const*>(pixmap)) } );
}

[[maybe_unused]] void QIcon_addPixmap(void *icon, void *pixmap, int mode, int state) {
    static_cast<QIcon *>(icon)->addPixmap(*(static_cast<QPixmap const*>(pixmap)),
                                          static_cast<QIcon::Mode>(mode),
                                          static_cast<QIcon::State>(state));
}

[[maybe_unused]] void QIcon_addFile(void *icon, const char *fileName, void *size, int mode, int state) {
    static_cast<QIcon *>(icon)->addFile(fileName,
                                        *static_cast<QSize *>(size),
                                        static_cast<QIcon::Mode>(mode),
                                        static_cast<QIcon::State>(state));
}

[[maybe_unused]] void *QIcon_fromTheme(const char *theme) {
    return static_cast<void *>( new QIcon { QIcon::fromTheme(theme) } );
}
