#include <QDialogButtonBox>

#include "qlift-QDialogButtonBox.h"
#include "qlift-QObject.h"

[[maybe_unused]] void *QDialogButtonBox_new(void *parent) {
    return new QDialogButtonBox{static_cast<QWidget *>(parent)};
}

[[maybe_unused]] int QDialogButtonBox_orientation(void *dialogButtonBox) {
    return static_cast<QDialogButtonBox *>(dialogButtonBox)->orientation();
}

[[maybe_unused]] void QDialogButtonBox_setOrientation(void *dialogButtonBox, int orientation) {
    static_cast<QDialogButtonBox *>(dialogButtonBox)
        ->setOrientation(static_cast<Qt::Orientation>(orientation));
}

[[maybe_unused]] int QDialogButtonBox_standardButtons(void *dialogButtonBox) {
    return static_cast<QDialogButtonBox *>(dialogButtonBox)->standardButtons();
}

[[maybe_unused]] bool QDialogButtonBox_centerButtons(void *dialogButtonBox) {
    return static_cast<QDialogButtonBox *>(dialogButtonBox)->centerButtons();
}

[[maybe_unused]] void QDialogButtonBox_setCenterButtons(void *dialogButtonBox, bool center) {
    static_cast<QDialogButtonBox *>(dialogButtonBox)->setCenterButtons(center);
}

[[maybe_unused]] void QDialogButtonBox_setStandardButtons(void *dialogButtonBox, int standardButtons) {
    static_cast<QDialogButtonBox *>(dialogButtonBox)->setStandardButtons(
            static_cast<QFlags<QDialogButtonBox::StandardButton>>(standardButtons));
}

[[maybe_unused]] void QDialogButtonBox_accepted_connect(void *dialogButtonBox,
                                                        void *receiver,
                                                        void (*slot_ptr)(void *)) {
    QObject::connect(
                     static_cast<QDialogButtonBox *>(dialogButtonBox),
                     &QDialogButtonBox::accepted,
                     static_cast<QObject *>(receiver),
                     [dialogButtonBox, slot_ptr]() {
                         auto context = QObject_getSwiftObject(dialogButtonBox);
                         if (context != nullptr)
                             (*slot_ptr)(context);
                     });
}

[[maybe_unused]] void QDialogButtonBox_rejected_connect(void *dialogButtonBox,
                                                        void *receiver,
                                                        void (*slot_ptr)(void *)) {
    QObject::connect(
                     static_cast<QDialogButtonBox *>(dialogButtonBox),
                     &QDialogButtonBox::rejected,
                     static_cast<QObject *>(receiver),
                     [dialogButtonBox, slot_ptr]() {
                         auto context = QObject_getSwiftObject(dialogButtonBox);
                         if (context != nullptr)
                             (*slot_ptr)(context);
                     });
}
