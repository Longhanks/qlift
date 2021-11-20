//
//  qlift-QPen.h
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QPen_new();
LIBRARY_API void QPen_delete(void *pen);
LIBRARY_API void QPen_setStyle(void *pen, int penstyle);
LIBRARY_API void QPen_setWidth(void *pen, int width);
LIBRARY_API void QPen_setColor(void *pen, void *color);
LIBRARY_API void QPen_setBrush(void *pen, void *brush);
LIBRARY_API void QPen_setCosmetic(void *pen, bool cosmetic);
LIBRARY_API int QPen_style(void *pen);
LIBRARY_API int QPen_width(void *pen);
LIBRARY_API bool QPen_isCosmetic(void *pen);


#ifdef __cplusplus
}
#endif
