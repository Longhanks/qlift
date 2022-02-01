//
//  qlift-QTouchDevice.h
//  
//
//  Created by Dmitriy Borovikov on 01.02.2022.
//

#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QTouchDevice_new();
LIBRARY_API void QTouchDevice_delete(void *touchDevice);
LIBRARY_API int QTouchDevice_capabilities(void *touchDevice);
LIBRARY_API int QTouchDevice_maximumTouchPoints(void *touchDevice);
LIBRARY_API CQString QTouchDevice_name(void *touchDevice);
LIBRARY_API void QTouchDevice_setCapabilities(void *touchDevice, int caps);
LIBRARY_API void QTouchDevice_setMaximumTouchPoints(void *touchDevice, int max);
LIBRARY_API void QTouchDevice_setName(void *touchDevice, const char *name);
LIBRARY_API void QTouchDevice_setType(void *touchDevice, int devType);
LIBRARY_API int QTouchDevice_type(void *touchDevice);

#ifdef __cplusplus
}
#endif
