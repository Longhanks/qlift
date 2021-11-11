#include <QComboBox>

#include "qlift-QComboBox.h"

[[maybe_unused]] void *QComboBox_new(void *parent) {
    return static_cast<void *>(new QComboBox{static_cast<QWidget *>(parent)});
}

[[maybe_unused]] void
QComboBox_addItem(void *comboBox, const char *text) {
    static_cast<QComboBox *>(comboBox)->addItem(text);
}

[[maybe_unused]] bool QComboBox_hasFrame(void *comboBox) {
    return static_cast<QComboBox*>(comboBox)->hasFrame();
}
[[maybe_unused]] void QComboBox_setFrame(void *comboBox, bool frame) {
    static_cast<QComboBox*>(comboBox)->setFrame(frame);
}
[[maybe_unused]] void QComboBox_setInsertPolicy(void *comboBox, int policy) {
    static_cast<QComboBox*>(comboBox)->setInsertPolicy(static_cast<QComboBox::InsertPolicy>(policy) );
}
[[maybe_unused]] void QComboBox_setSizeAdjustPolicy(void *comboBox, int policy) {
    static_cast<QComboBox*>(comboBox)->setSizeAdjustPolicy(static_cast<QComboBox::SizeAdjustPolicy>(policy) );
}
[[maybe_unused]] void QComboBox_setMinimumContentsLength(void *comboBox, int characters) {
    static_cast<QComboBox*>(comboBox)->setMinimumContentsLength(characters);
}
[[maybe_unused]] void QComboBox_setPlaceholderText(void *comboBox, const char *placeholderText) {
    static_cast<QComboBox*>(comboBox)->setPlaceholderText(placeholderText);
}
[[maybe_unused]] void QComboBox_setCurrentIndex(void *comboBox, int index) {
    static_cast<QComboBox*>(comboBox)->setCurrentIndex(index);
}
[[maybe_unused]] void QComboBox_setCurrentText(void *comboBox, const char *text) {
    static_cast<QComboBox*>(comboBox)->setCurrentText(text);
}

[[maybe_unused]] int QComboBox_insertPolicy(void *comboBox) {
    return static_cast<QComboBox*>(comboBox)->insertPolicy();
}
[[maybe_unused]] int QComboBox_sizeAdjustPolicy(void *comboBox) {
    return static_cast<QComboBox*>(comboBox)->sizeAdjustPolicy();
}
[[maybe_unused]] int QComboBox_minimumContentsLength(void *comboBox) {
    return static_cast<QComboBox*>(comboBox)->minimumContentsLength();
}
[[maybe_unused]] CQString QComboBox_placeholderText(void *comboBox) {
    auto text = static_cast<QComboBox*>(comboBox)->placeholderText();
    return CQString { text.utf16(), text.size() };
}
[[maybe_unused]] int QComboBox_currentIndex(void *comboBox) {
    return static_cast<QComboBox*>(comboBox)->currentIndex();
}
[[maybe_unused]] CQString QComboBox_itemText(void *comboBox, int index) {
    auto text = static_cast<QComboBox*>(comboBox)->itemText(index);
    return CQString { text.utf16(), text.size() };
}
[[maybe_unused]] CQString QComboBox_currentText(void *comboBox) {
    auto text = static_cast<QComboBox*>(comboBox)->currentText();
    return CQString { text.utf16(), text.size() };
}
[[maybe_unused]] void QComboBox_setMaxCount(void *comboBox, int max) {
    static_cast<QComboBox*>(comboBox)->setMaxCount(max);
}
[[maybe_unused]] int QComboBox_count(void *comboBox) {
    return static_cast<QComboBox*>(comboBox)->count();
}
[[maybe_unused]] int QComboBox_maxCount(void *comboBox) {
    return static_cast<QComboBox*>(comboBox)->maxCount();
}

[[maybe_unused]] void
QComboBox_currentIndexChanged_connect(void *comboBox,
                                         void *receiver,
                                         void *context,
                                         void (*slot_ptr)(void *, int)) {
    QObject::connect(
        static_cast<QComboBox *>(comboBox),
        static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged),
        static_cast<QObject *>(receiver),
        [context, slot_ptr](int index) { (*slot_ptr)(context, index); });
}
