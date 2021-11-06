#include <QButtonGroup>

#include "qlift-QButtonGroup.h"

[[maybe_unused]] void QButtonGroup_idClicked_connect(void *buttonGroup,
                                                     void *receiver,
                                                     void *context,
                                                     void (*slot_ptr)(void *, int)) {
    QObject::connect(static_cast<QButtonGroup *>(buttonGroup),
                     &QButtonGroup::idClicked,
                     static_cast<QObject *>(receiver),
                     [context, slot_ptr](bool id) { (*slot_ptr)(context, id); });
}

[[maybe_unused]] void QButtonGroup_idToggled_connect(void *buttonGroup,
                                                     void *receiver,
                                                     void *context,
                                                     void (*slot_ptr)(void *, int, bool)) {
    QObject::connect(static_cast<QButtonGroup *>(buttonGroup),
                     &QButtonGroup::idToggled,
                     static_cast<QObject *>(receiver),
                     [context, slot_ptr](int id, bool checked) { (*slot_ptr)(context, id, checked); });
}

[[maybe_unused]] void QButtonGroup_idPressed_connect(void *buttonGroup,
                                                     void *receiver,
                                                     void *context,
                                                     void (*slot_ptr)(void *, int)) {
    QObject::connect(static_cast<QButtonGroup *>(buttonGroup),
                     &QButtonGroup::idPressed,
                     static_cast<QObject *>(receiver),
                     [context, slot_ptr](bool id) { (*slot_ptr)(context, id); });
}

[[maybe_unused]] void QButtonGroup_idReleased_connect(void *buttonGroup,
                                                      void *receiver,
                                                      void *context,
                                                      void (*slot_ptr)(void *, int)) {
    QObject::connect(static_cast<QButtonGroup *>(buttonGroup),
                     &QButtonGroup::idReleased,
                     static_cast<QObject *>(receiver),
                     [context, slot_ptr](bool id) { (*slot_ptr)(context, id); });
}

[[maybe_unused]] void QButtonGroup_addButton(void *buttonGroup, void *abstractButton, int id) {
    static_cast<QButtonGroup *>(buttonGroup)->addButton(static_cast<QAbstractButton *>(abstractButton), id);
}

[[maybe_unused]] int QButtonGroup_checkedId(void *buttonGroup) {
    return static_cast<QButtonGroup *>(buttonGroup)->checkedId();
}

[[maybe_unused]] bool QButtonGroup_exclusive(void *buttonGroup) {
    return static_cast<QButtonGroup *>(buttonGroup)->exclusive();
}

[[maybe_unused]] void QButtonGroup_setExclusive(void *buttonGroup, bool on) {
    static_cast<QButtonGroup *>(buttonGroup)->setExclusive(on);
}

[[maybe_unused]] int QButtonGroup_id(void *buttonGroup, void *abstractButton) {
    return static_cast<QButtonGroup *>(buttonGroup)->id(static_cast<QAbstractButton *>(abstractButton));
}

[[maybe_unused]] void QButtonGroup_setId(void *buttonGroup, void *abstractButton, int id) {
    static_cast<QButtonGroup *>(buttonGroup)->setId(static_cast<QAbstractButton *>(abstractButton), id);
}

[[maybe_unused]] void *QButtonGroup_new(void *parent) {
    return static_cast<void *>(
        new QButtonGroup{static_cast<QObject *>(parent)});
}
