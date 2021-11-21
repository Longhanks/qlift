//
//  qlift-QPalette.h
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QPalette_new();
LIBRARY_API void QPalette_delete(const void *palette);
LIBRARY_API void *QPalette_new_butt(const void *button);
LIBRARY_API void *QPalette_new_butt_win(const void *button, const void *window);
LIBRARY_API void *QPalette_new_brush(const void *windowText, const void *button, const void *light,
                           const void *dark, const void *mid, const void *text,
                           const void *bright_text, const void *base, const void *window);
LIBRARY_API void *QPalette_new_color(const void *windowText, const void *window, const void *light,
                           const void *dark, const void *mid, const void *text, const void *base);
LIBRARY_API void *QPalette_new_palette(const void *palette);
LIBRARY_API void QPalette_setColor(void *palette, int colorGroup, int colorRole, const void *color);
LIBRARY_API void QPalette_setBrush(void *palette, int colorGroup, int colorRole, const void *brush);

#ifdef __cplusplus
}
#endif
