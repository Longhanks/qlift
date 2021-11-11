#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBRARY_API void *QComboBox_new(void *parent);
LIBRARY_API void QComboBox_addItem(void *comboBox, const char *text);
LIBRARY_API bool QComboBox_hasFrame(void *comboBox);
LIBRARY_API void QComboBox_setFrame(void *comboBox, bool frame);
LIBRARY_API int QComboBox_insertPolicy(void *comboBox);
LIBRARY_API void QComboBox_setInsertPolicy(void *comboBox, int policy);
LIBRARY_API int QComboBox_sizeAdjustPolicy(void *comboBox);
LIBRARY_API void QComboBox_setSizeAdjustPolicy(void *comboBox, int policy);
LIBRARY_API int QComboBox_minimumContentsLength(void *comboBox);
LIBRARY_API void QComboBox_setMinimumContentsLength(void *comboBox, int characters);
LIBRARY_API CQString QComboBox_placeholderText(void *comboBox);
LIBRARY_API void QComboBox_setPlaceholderText(void *comboBox, const char *placeholderText);
LIBRARY_API int QComboBox_currentIndex(void *comboBox);
LIBRARY_API void QComboBox_setCurrentIndex(void *comboBox, int index);
LIBRARY_API CQString QComboBox_currentText(void *comboBox);
LIBRARY_API void QComboBox_setCurrentText(void *comboBox, const char *text);
LIBRARY_API CQString QComboBox_itemText(void *comboBox, int index);
LIBRARY_API int QComboBox_count(void *comboBox);
LIBRARY_API void QComboBox_setMaxCount(void *comboBox, int max);
LIBRARY_API int QComboBox_maxCount(void *comboBox);

LIBRARY_API void
QComboBox_currentIndexChanged_connect(void *comboBox,
                                      void *receiver,
                                      void *context,
                                      void (*slot_ptr)(void *, int));

#ifdef __cplusplus
}
#endif
