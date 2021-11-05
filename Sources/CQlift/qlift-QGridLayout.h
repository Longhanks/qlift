#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QGridLayout_new(void *parent);

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

LIBRARY_API void QGridLayout_setHorizontalSpacing(void *gridLayout, int spacing);
LIBRARY_API int QGridLayout_horizontalSpacing(void *gridLayout);
LIBRARY_API void QGridLayout_setVerticalSpacing(void *gridLayout, int spacing);
LIBRARY_API int QGridLayout_verticalSpacing(void *gridLayout);

//QRect    cellRect(int row, int column)
//QLayoutItem *    itemAtPosition(int row, int column)
//Qt::Corner    originCorner()
//void    setOriginCorner(Qt::Corner corner)
LIBRARY_API void    QGridLayout_getItemPosition(void *gridLayout, int index, int *row, int *column, int *rowSpan, int *columnSpan);
LIBRARY_API int    QGridLayout_columnCount(void *gridLayout);
LIBRARY_API int    QGridLayout_columnMinimumWidth(void *gridLayout, int column);
LIBRARY_API int    QGridLayout_columnStretch(void *gridLayout, int column);
LIBRARY_API int    QGridLayout_rowCount(void *gridLayout);
LIBRARY_API int    QGridLayout_rowMinimumHeight(void *gridLayout, int row);
LIBRARY_API int    QGridLayout_rowStretch(void *gridLayout, int row);
LIBRARY_API void    QGridLayout_setColumnMinimumWidth(void *gridLayout, int column, int minSize);
LIBRARY_API void    QGridLayout_setColumnStretch(void *gridLayout, int column, int stretch);
LIBRARY_API void    QGridLayout_setRowMinimumHeight(void *gridLayout, int row, int minSize);
LIBRARY_API void    QGridLayout_setRowStretch(void *gridLayout, int row, int stretch);
LIBRARY_API void    QGridLayout_setSpacing(void *gridLayout, int spacing);
LIBRARY_API int    QGridLayout_spacing(void *gridLayout);

#ifdef __cplusplus
}
#endif
