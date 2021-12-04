#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

#pragma clang diagnostic ignored "-Wnullability-completeness"

LIBRARY_API void *QTabWidget_new(void *parent);
LIBRARY_API int QTabWidget_addTab(void *tabwidget, void *page, const char *label);
LIBRARY_API int QTabWidget_addTabIcon(void *tabwidget, void *page, const void *icon, const char *label);
LIBRARY_API void QTabWidget_clear(void *tabwidget);
LIBRARY_API int QTabWidget_count(void *tabwidget);
LIBRARY_API int QTabWidget_currentIndex(void *tabwidget);
LIBRARY_API bool QTabWidget_documentMode(void *tabwidget);
LIBRARY_API int QTabWidget_elideMode(void *tabwidget);
LIBRARY_API int QTabWidget_indexOf(void *tabwidget, void *w);
LIBRARY_API int QTabWidget_insertTab(void *tabwidget, int index, void *page, const char *label);
LIBRARY_API int QTabWidget_insertTabIcon(void *tabwidget, int index, void *page, const void *icon, const char *label);
LIBRARY_API bool QTabWidget_isMovable(void *tabwidget);
LIBRARY_API bool QTabWidget_isTabEnabled(void *tabwidget, int index);
LIBRARY_API bool QTabWidget_isTabVisible(void *tabwidget, int index);
LIBRARY_API void QTabWidget_removeTab(void *tabwidget, int index);
LIBRARY_API void QTabWidget_setCornerWidget(void *tabwidget, void *widget, int corner);
LIBRARY_API void QTabWidget_setDocumentMode(void *tabwidget, bool set);
LIBRARY_API void QTabWidget_setElideMode(void *tabwidget, int mode);
LIBRARY_API void QTabWidget_setIconSize(void *tabwidget, const void *size);
LIBRARY_API void QTabWidget_setMovable(void *tabwidget, bool movable);
LIBRARY_API void QTabWidget_setTabBarAutoHide(void *tabwidget, bool enabled);
LIBRARY_API void QTabWidget_setTabEnabled(void *tabwidget, int index, bool enable);
LIBRARY_API void QTabWidget_setTabIcon(void *tabwidget, int index, const void *icon);
LIBRARY_API void QTabWidget_setTabPosition(void *tabwidget, int position);
LIBRARY_API void QTabWidget_setTabShape(void *tabwidget, int s);
LIBRARY_API void QTabWidget_setTabText(void *tabwidget, int index, const char *label);
LIBRARY_API void QTabWidget_setTabToolTip(void *tabwidget, int index, const char *tip);
LIBRARY_API void QTabWidget_setTabVisible(void *tabwidget, int index, bool visible);
LIBRARY_API void QTabWidget_setTabWhatsThis(void *tabwidget, int index, const char *text);
LIBRARY_API void QTabWidget_setTabsClosable(void *tabwidget, bool closeable);
LIBRARY_API void QTabWidget_setUsesScrollButtons(void *tabwidget, bool useButtons);
LIBRARY_API bool QTabWidget_tabBarAutoHide(void *tabwidget);
LIBRARY_API int QTabWidget_tabPosition(void *tabwidget);
LIBRARY_API int QTabWidget_tabShape(void *tabwidget);
LIBRARY_API CQString QTabWidget_tabText(void *tabwidget, int index);
LIBRARY_API CQString QTabWidget_tabToolTip(void *tabwidget, int index);
LIBRARY_API CQString QTabWidget_tabWhatsThis(void *tabwidget, int index);
LIBRARY_API bool QTabWidget_tabsClosable(void *tabwidget);
LIBRARY_API bool QTabWidget_usesScrollButtons(void *tabwidget);
LIBRARY_API void *QTabWidget_tabIcon(void *tabwidget, int index);
LIBRARY_API void *QTabWidget_cornerWidget(void *tabwidget, int corner);
LIBRARY_API void *QTabWidget_currentWidget(void *tabwidget);
LIBRARY_API void *QTabWidget_tabBar(void *tabwidget);
LIBRARY_API void *QTabWidget_widget(void *tabwidget, int index);
LIBRARY_API void QTabWidget_setCurrentIndex(void *tabwidget, int index);
LIBRARY_API void QTabWidget_setCurrentWidget(void *tabwidget, void *widget);
//LIBRARY_API QSize QTabWidget_iconSize();

#pragma clang assume_nonnull begin

LIBRARY_API void QTabWidget_currentChanged_connect(void *tabwidget,
                                                   void *receiver,
                                                   void (*slot_ptr)(void *, int));
LIBRARY_API void QTabWidget_tabBarClicked_connect(void *tabwidget,
                                                  void *receiver,
                                                  void (*slot_ptr)(void *, int));
LIBRARY_API void QTabWidget_tabBarDoubleClicked_connect(void *tabwidget,
                                                        void *receiver,
                                                        void (*slot_ptr)(void *, int));
LIBRARY_API void QTabWidget_tabCloseRequested_connect(void *tabwidget,
                                                      void *receiver,
                                                      void (*slot_ptr)(void *, int));
#pragma clang assume_nonnull end

#ifdef __cplusplus
}
#endif
