#include <QComboBox>

#include "qlift-QComboBox.h"

[[maybe_unused]] void *QComboBox_new(void *parent) {
    return static_cast<void *>(new QComboBox{static_cast<QWidget *>(parent)});
}

[[maybe_unused]] void
QComboBox_addItem(void *comboBox, const char *text, void *userData) {
    if (userData != nullptr) {
        static_cast<QComboBox *>(comboBox)->addItem(
            text, *static_cast<QVariant *>(userData));
    } else {
        static_cast<QComboBox *>(comboBox)->addItem(text);
    }
}

[[maybe_unused]] void
QComboBox_currentIndexChangedInt_connect(void *comboBox,
                                         void *receiver,
                                         void *context,
                                         void (*slot_ptr)(void *, int)) {
    QObject::connect(
        static_cast<QComboBox *>(comboBox),
        static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged),
        static_cast<QObject *>(receiver),
        [context, slot_ptr](int index) { (*slot_ptr)(context, index); });
}

[[maybe_unused]] void QComboBox_currentIndexChangedString_connect(
    void *comboBox,
    void *receiver,
    void *context,
    void (*slot_ptr)(void *, const char *)) {
    QObject::connect(
        static_cast<QComboBox *>(comboBox),
        static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged),
        static_cast<QObject *>(receiver),
        [comboBox, context, slot_ptr](int index) {
            (*slot_ptr)(context,
                        static_cast<QComboBox *>(comboBox)
                            ->itemText(index)
                            .toLocal8Bit()
                            .data());
        });
}
