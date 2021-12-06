//
// qlift-QWindow.h
//
//
// Created by Dmitriy Borovikov on 06.12.2021.
//

#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

#pragma clang diagnostic ignored "-Wnullability-completeness"

LIBRARY_API void *QWindow_new(void * _Nullable parent);
LIBRARY_API void *QWindow_baseSize(void *window);
LIBRARY_API void *QWindow_frameGeometry(void *window);
LIBRARY_API void *QWindow_frameMargins(void *window);
LIBRARY_API void *QWindow_framePosition(void *window);
LIBRARY_API void *QWindow_geometry(void *window);
LIBRARY_API void *QWindow_icon(void *window);
LIBRARY_API void *QWindow_mapFromGlobal(void *window, const void *pos);
LIBRARY_API void *QWindow_mapToGlobal(void *window, const void *pos);
LIBRARY_API void *QWindow_mask(void *window);
LIBRARY_API void *QWindow_maximumSize(void *window);
LIBRARY_API void *QWindow_minimumSize(void *window);
LIBRARY_API void *QWindow_position(void *window);
LIBRARY_API void *QWindow_sizeIncrement(void *window);
LIBRARY_API void *QWindow_size(void *window);
LIBRARY_API CQString QWindow_filePath(void *window);
LIBRARY_API CQString QWindow_title(void *window);
LIBRARY_API int QWindow_contentOrientation(void *window);
LIBRARY_API double QWindow_devicePixelRatio(void *window);
LIBRARY_API int QWindow_flags(void *window);
LIBRARY_API int QWindow_height(void *window);
LIBRARY_API bool QWindow_isActive(void *window);
LIBRARY_API bool QWindow_isExposed(void *window);
LIBRARY_API bool QWindow_isModal(void *window);
LIBRARY_API bool QWindow_isTopLevel(void *window);
LIBRARY_API bool QWindow_isVisible(void *window);
LIBRARY_API int QWindow_maximumHeight(void *window);
LIBRARY_API int QWindow_maximumWidth(void *window);
LIBRARY_API int QWindow_minimumHeight(void *window);
LIBRARY_API int QWindow_minimumWidth(void *window);
LIBRARY_API int QWindow_modality(void *window);
LIBRARY_API double QWindow_opacity(void *window);
LIBRARY_API bool QWindow_setKeyboardGrabEnabled(void *window, bool grab);
LIBRARY_API bool QWindow_setMouseGrabEnabled(void *window, bool grab);
LIBRARY_API int QWindow_type(void *window);
LIBRARY_API int QWindow_visibility(void *window);
LIBRARY_API int QWindow_width(void *window);
LIBRARY_API int QWindow_windowStates(void *window);
LIBRARY_API int QWindow_x(void *window);
LIBRARY_API int QWindow_y(void *window);
LIBRARY_API bool QWindow_close(void *window);
LIBRARY_API bool QWindow_startSystemMove(void *window);
LIBRARY_API bool QWindow_startSystemResize(void *window, int edges);

LIBRARY_API void QWindow_create(void *window);
LIBRARY_API void QWindow_destroy(void *window);
LIBRARY_API void QWindow_reportContentOrientationChange(void *window, int orientation);
LIBRARY_API void QWindow_resize(void *window, const void *newSize);
LIBRARY_API void QWindow_resizewh(void *window, int w, int h);
LIBRARY_API void QWindow_setBaseSize(void *window, const void *size);
LIBRARY_API void QWindow_setFilePath(void *window, const char *filePath);
LIBRARY_API void QWindow_setFlags(void *window, int flags);
LIBRARY_API void QWindow_setFramePosition(void *window, const void *point);
LIBRARY_API void QWindow_setIcon(void *window, const void *icon);
LIBRARY_API void QWindow_setMask(void *window, const void *region);
LIBRARY_API void QWindow_setMaximumSize(void *window, const void *size);
LIBRARY_API void QWindow_setMinimumSize(void *window, const void *size);
LIBRARY_API void QWindow_setModality(void *window, int modality);
LIBRARY_API void QWindow_setOpacity(void *window, double level);
LIBRARY_API void QWindow_setPosition(void *window, const void *pt);
LIBRARY_API void QWindow_setPositionxy(void *window, int posx, int posy);
LIBRARY_API void QWindow_setSizeIncrement(void *window, const void *size);
LIBRARY_API void QWindow_setVisibility(void *window, int v);
LIBRARY_API void QWindow_setWindowStates(void *window, int state);
LIBRARY_API void QWindow_unsetCursor(void *window);
LIBRARY_API void QWindow_alert(void *window, int msec);
LIBRARY_API void QWindow_hide(void *window);
LIBRARY_API void QWindow_lower(void *window);
LIBRARY_API void QWindow_raise(void *window);
LIBRARY_API void QWindow_requestActivate(void *window);
LIBRARY_API void QWindow_requestUpdate(void *window);
LIBRARY_API void QWindow_setGeometry(void *window, const void *rect);
LIBRARY_API void QWindow_setGeometrywh(void *window, int posx, int posy, int w, int h);
LIBRARY_API void QWindow_setHeight(void *window, int arg);
LIBRARY_API void QWindow_setMaximumHeight(void *window, int h);
LIBRARY_API void QWindow_setMaximumWidth(void *window, int w);
LIBRARY_API void QWindow_setMinimumHeight(void *window, int h);
LIBRARY_API void QWindow_setMinimumWidth(void *window, int w);
LIBRARY_API void QWindow_setTitle(void *window, const char *title);
LIBRARY_API void QWindow_setVisible(void *window, bool visible);
LIBRARY_API void QWindow_setWidth(void *window, int arg);
LIBRARY_API void QWindow_setX(void *window, int arg);
LIBRARY_API void QWindow_setY(void *window, int arg);

#pragma clang assume_nonnull begin
LIBRARY_API void QWindow_show(void *window);
LIBRARY_API void QWindow_showFullScreen(void *window);
LIBRARY_API void QWindow_showMaximized(void *window);
LIBRARY_API void QWindow_showMinimized(void *window);
LIBRARY_API void QWindow_showNormal(void *window);

#pragma clang assume_nonnull end

#ifdef __cplusplus
}
#endif
