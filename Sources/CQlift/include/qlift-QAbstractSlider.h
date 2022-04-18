#pragma once

#include "compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

#pragma clang diagnostic ignored "-Wnullability-completeness"
#pragma clang assume_nonnull begin
LIBRARY_API void QAbstractSlider_actionTriggered_connect(void *abstractSlider,
                                                         void *receiver,
                                                         void *context,
                                                         void (*slot_ptr)(void *, int));
LIBRARY_API void QAbstractSlider_rangeChanged_connect(void *abstractSlider,
                                                      void *receiver,
                                                      void *context,
                                                      void (*slot_ptr)(void *, int, int));
LIBRARY_API void QAbstractSlider_sliderMoved_connect(void *abstractSlider,
                                                     void *receiver,
                                                     void *context,
                                                     void (*slot_ptr)(void *, int));
LIBRARY_API void QAbstractSlider_sliderPressed_connect(void *abstractSlider,
                                                       void *receiver,
                                                       void *context,
                                                       void (*slot_ptr)(void *));
LIBRARY_API void QAbstractSlider_sliderReleased_connect(void *abstractSlider,
                                                        void *receiver,
                                                        void *context,
                                                        void (*slot_ptr)(void *));
LIBRARY_API void QAbstractSlider_valueChanged_connect(void *abstractSlider,
                                                      void *receiver,
                                                      void *context,
                                                      void (*slot_ptr)(void *, int));
#pragma clang assume_nonnull end

LIBRARY_API void QAbstractSlider_setMinimum(void *abstractSlider, int minimum);
LIBRARY_API int QAbstractSlider_minimum(void *abstractSlider);
LIBRARY_API void QAbstractSlider_setMaximum(void *abstractSlider, int maximum);
LIBRARY_API int QAbstractSlider_maximum(void *abstractSlider);
LIBRARY_API void QAbstractSlider_setSingleStep(void *abstractSlider, int singleStep);
LIBRARY_API int QAbstractSlider_singleStep(void *abstractSlider);
LIBRARY_API void QAbstractSlider_setPageStep(void *abstractSlider, int pageStep);
LIBRARY_API int QAbstractSlider_pageStep(void *abstractSlider);
LIBRARY_API void QAbstractSlider_setTracking(void *abstractSlider, bool enable);
LIBRARY_API bool QAbstractSlider_hasTracking(void *abstractSlider);
LIBRARY_API void QAbstractSlider_setSliderDown(void *abstractSlider, bool sliderDown);
LIBRARY_API bool QAbstractSlider_isSliderDown(void *abstractSlider);
LIBRARY_API void QAbstractSlider_setSliderPosition(void *abstractSlider, int sliderPosition);
LIBRARY_API int QAbstractSlider_sliderPosition(void *abstractSlider);
LIBRARY_API void QAbstractSlider_setInvertedAppearance(void *abstractSlider, bool invertedAppearance);
LIBRARY_API bool QAbstractSlider_invertedAppearance(void *abstractSlider);
LIBRARY_API void QAbstractSlider_setInvertedControls(void *abstractSlider, bool invertedControls);
LIBRARY_API bool QAbstractSlider_invertedControls(void *abstractSlider);
LIBRARY_API void QAbstractSlider_triggerAction(void *abstractSlider, int action);
LIBRARY_API int QAbstractSlider_value(void *abstractSlider);
LIBRARY_API void QAbstractSlider_setValue(void *abstractSlider, int value);
LIBRARY_API int QAbstractSlider_orientation(void *abstractSlider);
LIBRARY_API void QAbstractSlider_setOrientation(void *abstractSlider, int orientation);
LIBRARY_API void QAbstractSlider_setRange(void *abstractSlider, int min, int max);

#ifdef __cplusplus
}
#endif
