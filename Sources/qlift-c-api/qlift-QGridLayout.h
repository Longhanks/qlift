#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QGridLayout_new(void *parent);

LIBRARY_API void QGridLayout_delete(void *gridLayout);

LIBRARY_API void QGridLayout_addItem(void *gridLayout,
                                     void *layoutItem,
                                     int row,
                                     int column,
                                     int rowSpan,
                                     int columnSpan,
                                     int alignment);

LIBRARY_API void QGridLayout_addLayout(
    void *gridLayout, void *layout, int row, int column, int alignment);

LIBRARY_API void QGridLayout_addLayoutWithSpan(void *gridLayout,
                                               void *layout,
                                               int row,
                                               int column,
                                               int rowSpan,
                                               int columnSpan,
                                               int alignment);
LIBRARY_API void QGridLayout_addWidget(
    void *gridLayout, void *widget, int row, int column, int alignment);

LIBRARY_API void QGridLayout_addWidgetWithSpan(void *gridLayout,
                                               void *widget,
                                               int fromRow,
                                               int fromColumn,
                                               int rowSpan,
                                               int columnSpan,
                                               int alignment);

#ifdef __cplusplus
}
#endif
