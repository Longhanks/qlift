//
//  qlift-QPixmap.h
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QPixmap_new();
LIBRARY_API void *QPixmap_from_file(const char *fileName, const char *format);
LIBRARY_API void *QPixmap_from_image(void *image);
LIBRARY_API bool QPixmap_loadfromfile(void *pixmap, const char *fileName, const char *format);
LIBRARY_API bool QPixmap_loadFromData(void *pixmap, const void *data, unsigned int len, const char *format);
LIBRARY_API void QPixmap_delete(void *pixmap);

#ifdef __cplusplus
}
#endif
