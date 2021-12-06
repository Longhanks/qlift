//
//  qlift-QQuickWindow.h
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

LIBRARY_API void *QQuickWindow_new(void * _Nullable parent);
LIBRARY_API void QQuickWindow_beginExternalCommands(void *window);
LIBRARY_API void QQuickWindow_endExternalCommands(void *window);
LIBRARY_API bool QQuickWindow_clearBeforeRendering(void *window);
LIBRARY_API void *QQuickWindow_color(void *window);
LIBRARY_API void *QQuickWindow_grabWindow(void *window);
LIBRARY_API double QQuickWindow_effectiveDevicePixelRatio(void *window);
LIBRARY_API bool QQuickWindow_isPersistentOpenGLContext(void *window);
LIBRARY_API bool QQuickWindow_isPersistentSceneGraph(void *window);
LIBRARY_API bool QQuickWindow_isSceneGraphInitialized(void *window);
LIBRARY_API void QQuickWindow_setColor(void *window, const void *color);
LIBRARY_API void QQuickWindow_setPersistentOpenGLContext(void *window, bool persistent);
LIBRARY_API void QQuickWindow_setPersistentSceneGraph(void *window, bool persistent);

#ifdef __cplusplus
}
#endif
