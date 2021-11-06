//
//  qlift-QBrush.cpp
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

#include <QBrush>

#include "qlift-QBrush.h"

[[maybe_unused]] void *QBrush_new() {
    return static_cast<void *>( new QBrush() );
}

[[maybe_unused]] void QBrush_delete(void *brush) {
    delete static_cast<QBrush *>(brush);
}

[[maybe_unused]] void *QBrush_new_brush(const void *brush) {
    return static_cast<void *>( new QBrush { *static_cast<const QBrush *>(brush) } );
}

[[maybe_unused]] void *QBrush_new_pixmap(const void *pixmap) {
    return static_cast<void *>( new QBrush { *static_cast<const QPixmap *>(pixmap) } );
}

[[maybe_unused]] void *QBrush_new_color_pixmap(const void *color, const void *pixmap) {
    return static_cast<void *>( new QBrush { *static_cast<const QColor *>(color), *static_cast<const QPixmap *>(pixmap) } );
}

[[maybe_unused]] void *QBrush_new_color_style(const void *color, int style) {
    return static_cast<void *>( new QBrush { *static_cast<const QColor *>(color), static_cast<Qt::BrushStyle>(style) } );
}

[[maybe_unused]] void *QBrush_new_style(int style) {
    return static_cast<void *>( new QBrush { static_cast<Qt::BrushStyle>(style) } );
}

[[maybe_unused]] void *QBrush_new_color(const void *color) {
    return static_cast<void *>( new QBrush { *static_cast<const QBrush *>(color) });
}

[[maybe_unused]] void *QBrush_new_name(const char *name) {
    return static_cast<void *>( new QBrush { name });
}
