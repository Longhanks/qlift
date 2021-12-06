//
//  qlift-QQuickView.h
//  
//
//  Created by Dmitriy Borovikov on 06.12.2021.
//

#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

#pragma clang diagnostic ignored "-Wnullability-completeness"

#pragma clang assume_nonnull begin

LIBRARY_API void *QQuickViewUrl_new(const char *source, void * _Nullable parent);
LIBRARY_API void *QQuickView_new(void * _Nullable parent);
LIBRARY_API void *QQuickView_initialSize(void *view);
LIBRARY_API CQString QQuickView_source(void *view);
LIBRARY_API int QQuickView_resizeMode(void *view);
LIBRARY_API int QQuickView_status(void *view);
LIBRARY_API void QQuickView_setResizeMode(void *view, int);
LIBRARY_API void QQuickView_setSource(void *view, const char *url);

#pragma clang assume_nonnull end

#ifdef __cplusplus
}
#endif
