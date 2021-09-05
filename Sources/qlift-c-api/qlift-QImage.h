//
//  qlift-QImage.h
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QImage_new();
LIBRARY_API void QImage_delete(void *image);

LIBRARY_API void *QImage_new_data(const void *data, int width, int height, int format, void *cleanupInfo);
LIBRARY_API void *QImage_new_data_bpl(const void *data, int width, int height, int bytesPerLine, int format, void *cleanupInfo);
LIBRARY_API void *QImage_convertToFormat(const void *image, int format);
LIBRARY_API void *QImage_scaled(void *image, int w, int h, int aspectMode, int mode);
LIBRARY_API void *QImage_scaledQsize(void *image, void *s, int aspectMode, int mode);
LIBRARY_API void *QImage_scaledToWidth(void *image, int w, int mode);
LIBRARY_API void *QImage_scaledToHeight(void *image, int h, int mode);

#ifdef __cplusplus
}
#endif
