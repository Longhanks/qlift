//
//  qlift-QPen.cpp
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

#include <QPen>

#include "qlift-QPen.h"

[[maybe_unused]] void *QPen_new() {
    return static_cast<void *>( new QPen() );
}

[[maybe_unused]] void QPen_delete(void *pen) {
    delete static_cast<QPen *>(pen);
}

[[maybe_unused]] void QPen_setStyle(void *pen, int style) {
    static_cast<QPen *>(pen)->setStyle(static_cast<Qt::PenStyle>(style) );
}

[[maybe_unused]] void QPen_setWidth(void *pen, int width) {
    static_cast<QPen *>(pen)->setWidth(width);
}

[[maybe_unused]] void QPen_setColor(void *pen, void *color) {
    static_cast<QPen *>(pen)->setColor(*static_cast<const QColor *>(color));
}

[[maybe_unused]] void QPen_setBrush(void *pen, void *brush) {
    static_cast<QPen *>(pen)->setBrush(*static_cast<const QBrush *>(brush));
}

[[maybe_unused]] void QPen_setCosmetic(void *pen, bool cosmetic) {
    static_cast<QPen *>(pen)->setCosmetic(cosmetic);
}

[[maybe_unused]] int QPen_style(void *pen) {
    return static_cast<QPen *>(pen)->style();
}

[[maybe_unused]] int QPen_width(void *pen) {
    return static_cast<QPen *>(pen)->width();
}

[[maybe_unused]] bool QPen_isCosmetic(void *pen) {
    return static_cast<QPen *>(pen)->isCosmetic();
}
