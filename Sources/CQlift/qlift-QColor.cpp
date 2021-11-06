//
//  qlift-QColor.cpp
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

#include <QColor>

#include "qlift-QColor.h"

[[maybe_unused]] void *QColor_new() {
    return static_cast<void *>( new QColor() );
}

[[maybe_unused]] void QColor_delete(void *color) {
    delete static_cast<QColor *>(color);
}

[[maybe_unused]] void *QColor_new_color(const void *color) {
    return static_cast<void *>( new QColor { *static_cast<const QColor *>(color) });
}

[[maybe_unused]] void *QColor_new_name(const char *name) {
    return static_cast<void *>( new QColor { name });
}

[[maybe_unused]] void *QColor_new_rgba(int r, int g, int b, int a) {
    return static_cast<void *>( new QColor(r, g, b, a) );
}

[[maybe_unused]] void QColor_setNamedColor(void *color, const char *name) {
    static_cast<QColor *>(color)->setNamedColor(name);
}

[[maybe_unused]] void QColor_setRgb(void *color, int r, int g, int b, int a) {
    static_cast<QColor *>(color)->setRgb(r, g, b, a);
}

[[maybe_unused]] void QColor_setRgbF(void *color, double r, double g, double b, double a) {
    static_cast<QColor *>(color)->setRgbF(r, g, b, a);
}
