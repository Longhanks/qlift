#include <QDialogButtonBox>

#include "qlift-QDialogButtonBox.h"

[[maybe_unused]] void *QDialogButtonBox_new(void *parent) {
    return static_cast<void *>(
        new QDialogButtonBox{static_cast<QWidget *>(parent)});
}

[[maybe_unused]] void QDialogButtonBox_delete(void *dialogButtonBox) {
    delete static_cast<QDialogButtonBox *>(dialogButtonBox);
}

[[maybe_unused]] int QDialogButtonBox_orientation(void *dialogButtonBox) {
    return static_cast<QDialogButtonBox *>(dialogButtonBox)->orientation();
}

[[maybe_unused]] void QDialogButtonBox_setOrientation(void *dialogButtonBox,
                                                      int orientation) {
    static_cast<QDialogButtonBox *>(dialogButtonBox)
        ->setOrientation(static_cast<Qt::Orientation>(orientation));
}

[[maybe_unused]] int QDialogButtonBox_standardButtons(void *dialogButtonBox) {
    return static_cast<int>(
        static_cast<QDialogButtonBox *>(dialogButtonBox)->standardButtons());
}

[[maybe_unused]] void
QDialogButtonBox_setStandardButtons(void *dialogButtonBox,
                                    int standardButtons) {
    static_cast<QDialogButtonBox *>(dialogButtonBox)
        ->setStandardButtons(
            static_cast<QFlags<QDialogButtonBox::StandardButton>>(
                standardButtons));
}

[[maybe_unused]] void
QDialogButtonBox_accepted_connect(void *dialogButtonBox,
                                  void *receiver,
                                  void *context,
                                  void (*slot_ptr)(void *)) {
    QObject::connect(static_cast<QDialogButtonBox *>(dialogButtonBox),
                     &QDialogButtonBox::accepted,
                     static_cast<QObject *>(receiver),
                     [context, slot_ptr]() { (*slot_ptr)(context); });
}

[[maybe_unused]] void
QDialogButtonBox_rejected_connect(void *dialogButtonBox,
                                  void *receiver,
                                  void *context,
                                  void (*slot_ptr)(void *)) {
    QObject::connect(static_cast<QDialogButtonBox *>(dialogButtonBox),
                     &QDialogButtonBox::rejected,
                     static_cast<QObject *>(receiver),
                     [context, slot_ptr]() { (*slot_ptr)(context); });
}
