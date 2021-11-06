//
//  qlift-QPalette.cpp
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

#include <QPalette>

#include "qlift-QPalette.h"

[[maybe_unused]] void *QPalette_new() {
    return static_cast<void *>( new QPalette() );
}

[[maybe_unused]] void QPalette_delete(const void *palette) {
    delete static_cast<const QPalette *>(palette);
}

[[maybe_unused]] void *QPalette_new_butt(const void *button) {
    return static_cast<void *>( new QPalette{
        *static_cast<const QColor *>(button)
    } );
}
[[maybe_unused]] void *QPalette_new_butt_win(const void *button, const void *window) {
    return static_cast<void *>( new QPalette{
        *static_cast<const QColor *>(button),
        *static_cast<const QColor *>(window),
    } );
}
[[maybe_unused]] void *QPalette_new_brush(const void *windowText, const void *button, const void *light,
                                          const void *dark, const void *mid, const void *text,
                                          const void *bright_text, const void *base, const void *window) {
    return static_cast<void *>( new QPalette{
        *static_cast<const QBrush *>(windowText),
        *static_cast<const QBrush *>(button),
        *static_cast<const QBrush *>(light),
        *static_cast<const QBrush *>(dark),
        *static_cast<const QBrush *>(mid),
        *static_cast<const QBrush *>(text),
        *static_cast<const QBrush *>(bright_text),
        *static_cast<const QBrush *>(base),
        *static_cast<const QBrush *>(window)
    } );
}

[[maybe_unused]] void *QPalette_new_color(const void *windowText, const void *window, const void *light,
                                          const void *dark, const void *mid, const void *text, const void *base) {
    return static_cast<void *>( new QPalette{
        *static_cast<const QColor *>(windowText),
        *static_cast<const QColor *>(window),
        *static_cast<const QColor *>(light),
        *static_cast<const QColor *>(dark),
        *static_cast<const QColor *>(mid),
        *static_cast<const QColor *>(text),
        *static_cast<const QColor *>(base)
    } );
}

[[maybe_unused]] void *QPalette_new_palette(const void *palette) {
    return static_cast<void *>( new QPalette{
        *static_cast<const QPalette *>(palette)
    } );
}

[[maybe_unused]] void QPalette_setColor(void *palette, int colorGroup, int colorRole, const void *color) {
    static_cast<QPalette *>(palette)->setColor(static_cast<const QPalette::ColorGroup>(colorGroup),
                                               static_cast<const QPalette::ColorRole>(colorRole),
                                               *static_cast<const QColor *>(color));
}

[[maybe_unused]] void QPalette_setBrush(void *palette, int colorGroup, int colorRole, const void *brush) {
    static_cast<QPalette *>(palette)->setBrush(static_cast<const QPalette::ColorGroup>(colorGroup),
                                               static_cast<const QPalette::ColorRole>(colorRole),
                                               *static_cast<const QBrush *>(brush));
}
