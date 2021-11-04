//
//  qlift-QIcon.h
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QIcon_new();
LIBRARY_API void QIcon_delete(void *icon);
LIBRARY_API void *QIcon_new_from_file(const char *fileName);
LIBRARY_API void *QIcon_new_from_pixmap(void *pixmap);

LIBRARY_API void QIcon_addPixmap(void *icon, void *pixmap, int mode, int state);
LIBRARY_API void QIcon_addFile(void *icon, const char *fileName, void *size, int mode, int state);
LIBRARY_API void *QIcon_fromTheme(const char *theme);

#ifdef __cplusplus
}
#endif
