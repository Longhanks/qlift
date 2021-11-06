#include <QAbstractSlider>

#include "qlift-QAbstractSlider.h"


[[maybe_unused]] void QAbstractSlider_actionTriggered_connect(void *abstractSlider,
                                                              void *receiver,
                                                              void *context,
                                                              void (*slot_ptr)(void *, int)) {
    QObject::connect(
                     static_cast<QAbstractSlider *>(abstractSlider),
                     &QAbstractSlider::actionTriggered,
                     static_cast<QObject *>(receiver),
                     [context, slot_ptr](int action) { (*slot_ptr)(context, action); });
}

[[maybe_unused]] void QAbstractSlider_rangeChanged_connect(void *abstractSlider,
                                                           void *receiver,
                                                           void *context,
                                                           void (*slot_ptr)(void *, int, int)) {
    QObject::connect(
                     static_cast<QAbstractSlider *>(abstractSlider),
                     &QAbstractSlider::rangeChanged,
                     static_cast<QObject *>(receiver),
                     [context, slot_ptr](int min, int max) { (*slot_ptr)(context, min, max); });
}

[[maybe_unused]] void QAbstractSlider_sliderMoved_connect(void *abstractSlider,
                                                          void *receiver,
                                                          void *context,
                                                          void (*slot_ptr)(void *, int)) {
    QObject::connect(
                     static_cast<QAbstractSlider *>(abstractSlider),
                     &QAbstractSlider::sliderMoved,
                     static_cast<QObject *>(receiver),
                     [context, slot_ptr](int position) { (*slot_ptr)(context, position); });
}

[[maybe_unused]] void QAbstractSlider_sliderPressed_connect(void *abstractSlider,
                                                            void *receiver,
                                                            void *context,
                                                            void (*slot_ptr)(void *)) {
    QObject::connect(
                     static_cast<QAbstractSlider *>(abstractSlider),
                     &QAbstractSlider::sliderPressed,
                     static_cast<QObject *>(receiver),
                     [context, slot_ptr]() { (*slot_ptr)(context); });
}

[[maybe_unused]] void QAbstractSlider_sliderReleased_connect(void *abstractSlider,
                                                             void *receiver,
                                                             void *context,
                                                             void (*slot_ptr)(void *)) {
    QObject::connect(
                     static_cast<QAbstractSlider *>(abstractSlider),
                     &QAbstractSlider::sliderReleased,
                     static_cast<QObject *>(receiver),
                     [context, slot_ptr]() { (*slot_ptr)(context); });
}

[[maybe_unused]] void QAbstractSlider_valueChanged_connect(void *abstractSlider,
                                                           void *receiver,
                                                           void *context,
                                                           void (*slot_ptr)(void *, int)) {
    QObject::connect(
                     static_cast<QAbstractSlider *>(abstractSlider),
                     &QAbstractSlider::valueChanged,
                     static_cast<QObject *>(receiver),
                     [context, slot_ptr](int value) { (*slot_ptr)(context, value); });
}


[[maybe_unused]] void QAbstractSlider_setMinimum(void *abstractSlider, int minimum) {
    static_cast<QAbstractSlider *>(abstractSlider)->setMinimum(minimum);
}

[[maybe_unused]] int QAbstractSlider_minimum(void *abstractSlider) {
    return static_cast<QAbstractSlider *>(abstractSlider)->minimum();
}

[[maybe_unused]] void QAbstractSlider_setMaximum(void *abstractSlider, int maximum) {
    static_cast<QAbstractSlider *>(abstractSlider)->setMaximum(maximum);
}

[[maybe_unused]] int QAbstractSlider_maximum(void *abstractSlider) {
    return static_cast<QAbstractSlider *>(abstractSlider)->maximum();
}

[[maybe_unused]] void QAbstractSlider_setSingleStep(void *abstractSlider, int singleStep) {
    static_cast<QAbstractSlider *>(abstractSlider)->setSingleStep(singleStep);
}

[[maybe_unused]] int QAbstractSlider_singleStep(void *abstractSlider) {
    return static_cast<QAbstractSlider *>(abstractSlider)->singleStep();
}

[[maybe_unused]] void QAbstractSlider_setPageStep(void *abstractSlider, int pageStep) {
    static_cast<QAbstractSlider *>(abstractSlider)->setPageStep(pageStep);
}

[[maybe_unused]] int QAbstractSlider_pageStep(void *abstractSlider) {
    return static_cast<QAbstractSlider *>(abstractSlider)->pageStep();
}

[[maybe_unused]] void QAbstractSlider_setTracking(void *abstractSlider, bool enable) {
    static_cast<QAbstractSlider *>(abstractSlider)->setTracking(enable);
}

[[maybe_unused]] bool QAbstractSlider_hasTracking(void *abstractSlider) {
    return static_cast<QAbstractSlider *>(abstractSlider)->hasTracking();
}

[[maybe_unused]] void QAbstractSlider_setSliderDown(void *abstractSlider, bool sliderDown) {
    static_cast<QAbstractSlider *>(abstractSlider)->setSliderDown(sliderDown);
}

[[maybe_unused]] bool QAbstractSlider_isSliderDown(void *abstractSlider) {
    return static_cast<QAbstractSlider *>(abstractSlider)->isSliderDown();
}

[[maybe_unused]] void QAbstractSlider_setSliderPosition(void *abstractSlider, int sliderPosition) {
    static_cast<QAbstractSlider *>(abstractSlider)->setSliderPosition(sliderPosition);
}

[[maybe_unused]] int QAbstractSlider_sliderPosition(void *abstractSlider) {
    return static_cast<QAbstractSlider *>(abstractSlider)->sliderPosition();
}

[[maybe_unused]] void QAbstractSlider_setInvertedAppearance(void *abstractSlider, bool invertedAppearance) {
    static_cast<QAbstractSlider *>(abstractSlider)->setInvertedAppearance(invertedAppearance);
}

[[maybe_unused]] bool QAbstractSlider_invertedAppearance(void *abstractSlider) {
    return static_cast<QAbstractSlider *>(abstractSlider)->invertedAppearance();
}

[[maybe_unused]] void QAbstractSlider_setInvertedControls(void *abstractSlider, bool invertedControls) {
    static_cast<QAbstractSlider *>(abstractSlider)->setInvertedControls(invertedControls);
}

[[maybe_unused]] bool QAbstractSlider_invertedControls(void *abstractSlider) {
    return static_cast<QAbstractSlider *>(abstractSlider)->invertedControls();
}

[[maybe_unused]] int QAbstractSlider_value(void *abstractSlider) {
    return static_cast<QAbstractSlider *>(abstractSlider)->value();
}

[[maybe_unused]] void QAbstractSlider_setValue(void *abstractSlider, int value) {
    static_cast<QAbstractSlider *>(abstractSlider)->setValue(value);
}

[[maybe_unused]] void QAbstractSlider_triggerAction(void *abstractSlider, int action) {
    static_cast<QAbstractSlider *>(abstractSlider)->triggerAction(static_cast<QAbstractSlider::SliderAction>(action));
}

[[maybe_unused]] int QAbstractSlider_orientation(void *abstractSlider) {
    return static_cast<QAbstractSlider *>(abstractSlider)->orientation();
}

[[maybe_unused]] void QAbstractSlider_setOrientation(void *abstractSlider, int orientation) {
    static_cast<QAbstractSlider *>(abstractSlider)->setOrientation(static_cast<Qt::Orientation>(orientation));
}

[[maybe_unused]] void QAbstractSlider_setRange(void *abstractSlider, int min, int max) {
    static_cast<QAbstractSlider *>(abstractSlider)->setRange(min, max);
}
