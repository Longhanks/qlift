#include <QTabWidget>
#include <wobjectimpl.h>
#include "qlift-QTabWidget.h"

[[maybe_unused]] void *QTabWidget_new(void *parent) {
    return static_cast<void *>(new QTabWidget{static_cast<QWidget *>(parent)} );
}

[[maybe_unused]] void QTabWidget_clear(void *tabwidget) {
    static_cast<QTabWidget *>(tabwidget)->clear();
}
[[maybe_unused]] void QTabWidget_removeTab(void *tabwidget, int index) {
    static_cast<QTabWidget *>(tabwidget)->removeTab(index);
}
[[maybe_unused]] void QTabWidget_setCornerWidget(void *tabwidget, void *widget, int corner) {
    static_cast<QTabWidget *>(tabwidget)->setCornerWidget(static_cast<QWidget *>(widget), static_cast<Qt::Corner>(corner));
}
[[maybe_unused]] void QTabWidget_setDocumentMode(void *tabwidget, bool set) {
    static_cast<QTabWidget *>(tabwidget)->setDocumentMode(set);
}
[[maybe_unused]] void QTabWidget_setElideMode(void *tabwidget, int mode) {
    static_cast<QTabWidget *>(tabwidget)->setElideMode(static_cast<Qt::TextElideMode>(mode));
}
[[maybe_unused]] void QTabWidget_setIconSize(void *tabwidget, const void *size) {
    static_cast<QTabWidget *>(tabwidget)->setIconSize(*static_cast<const QSize *>(size));
}
[[maybe_unused]] void QTabWidget_setMovable(void *tabwidget, bool movable) {
    static_cast<QTabWidget *>(tabwidget)->setMovable(movable);
}
[[maybe_unused]] void QTabWidget_setTabBarAutoHide(void *tabwidget, bool enabled) {
    static_cast<QTabWidget *>(tabwidget)->setTabBarAutoHide(enabled);
}
[[maybe_unused]] void QTabWidget_setTabEnabled(void *tabwidget, int index, bool enable) {
    static_cast<QTabWidget *>(tabwidget)->setTabEnabled(index, enable);
}
[[maybe_unused]] void QTabWidget_setTabIcon(void *tabwidget, int index, const void *icon) {
    static_cast<QTabWidget *>(tabwidget)->setTabIcon(index, *static_cast<const QIcon *>(icon));
}
[[maybe_unused]] void QTabWidget_setTabPosition(void *tabwidget, int position) {
    static_cast<QTabWidget *>(tabwidget)->setTabPosition(static_cast<QTabWidget::TabPosition>(position));
}
[[maybe_unused]] void QTabWidget_setTabShape(void *tabwidget, int s) {
    static_cast<QTabWidget *>(tabwidget)->setTabShape(static_cast<QTabWidget::TabShape>(s));
}
[[maybe_unused]] void QTabWidget_setTabText(void *tabwidget, int index, const char *label) {
    static_cast<QTabWidget *>(tabwidget)->setTabText(index, label);
}
[[maybe_unused]] void QTabWidget_setTabToolTip(void *tabwidget, int index, const char *tip) {
    static_cast<QTabWidget *>(tabwidget)->setTabToolTip(index, tip);
}
[[maybe_unused]] void QTabWidget_setTabVisible(void *tabwidget, int index, bool visible) {
    static_cast<QTabWidget *>(tabwidget)->setTabVisible(index, visible);
}
[[maybe_unused]] void QTabWidget_setTabWhatsThis(void *tabwidget, int index, const char *text) {
    static_cast<QTabWidget *>(tabwidget)->setTabWhatsThis(index, text);
}
[[maybe_unused]] void QTabWidget_setTabsClosable(void *tabwidget, bool closeable) {
    static_cast<QTabWidget *>(tabwidget)->setTabsClosable(closeable);
}
[[maybe_unused]] void QTabWidget_setUsesScrollButtons(void *tabwidget, bool useButtons) {
    static_cast<QTabWidget *>(tabwidget)->setUsesScrollButtons(useButtons);
}
[[maybe_unused]] int QTabWidget_addTab(void *tabwidget, void *page, const char *label) {
    return static_cast<QTabWidget *>(tabwidget)->addTab(static_cast<QWidget *>(page), label);
}
[[maybe_unused]] int QTabWidget_addTabIcon(void *tabwidget, void *page, const void *icon, const char *label) {
    return static_cast<QTabWidget *>(tabwidget)->addTab(static_cast<QWidget *>(page), *static_cast<const QIcon *>(icon), label);
}
[[maybe_unused]] int QTabWidget_count(void *tabwidget) {
    return static_cast<QTabWidget *>(tabwidget)->count();
}
[[maybe_unused]] int QTabWidget_currentIndex(void *tabwidget) {
    return static_cast<QTabWidget *>(tabwidget)->currentIndex();
}
[[maybe_unused]] bool QTabWidget_documentMode(void *tabwidget) {
    return static_cast<QTabWidget *>(tabwidget)->documentMode();
}
[[maybe_unused]] int QTabWidget_elideMode(void *tabwidget) {
    return static_cast<QTabWidget *>(tabwidget)->elideMode();
}
[[maybe_unused]] int QTabWidget_indexOf(void *tabwidget, void *w) {
    return static_cast<QTabWidget *>(tabwidget)->indexOf(static_cast<QWidget *>(w));
}
[[maybe_unused]] int QTabWidget_insertTab(void *tabwidget, int index, void *page, const char *label) {
    return static_cast<QTabWidget *>(tabwidget)->insertTab(index, static_cast<QWidget *>(page), label);
}
[[maybe_unused]] int QTabWidget_insertTabIcon(void *tabwidget, int index, void *page, const void *icon, const char *label) {
    return static_cast<QTabWidget *>(tabwidget)->insertTab(index, static_cast<QWidget *>(page), *static_cast<const QIcon *>(icon), label);
}
[[maybe_unused]] bool QTabWidget_isMovable(void *tabwidget) {
    return static_cast<QTabWidget *>(tabwidget)->isMovable();
}
[[maybe_unused]] bool QTabWidget_isTabEnabled(void *tabwidget, int index) {
    return static_cast<QTabWidget *>(tabwidget)->isTabEnabled(index);
}
[[maybe_unused]] bool QTabWidget_isTabVisible(void *tabwidget, int index) {
    return static_cast<QTabWidget *>(tabwidget)->isTabVisible(index);
}
[[maybe_unused]] bool QTabWidget_tabBarAutoHide(void *tabwidget) {
    return static_cast<QTabWidget *>(tabwidget)->tabBarAutoHide();
}
[[maybe_unused]] int QTabWidget_tabPosition(void *tabwidget) {
    return static_cast<QTabWidget *>(tabwidget)->tabPosition();
}
[[maybe_unused]] int QTabWidget_tabShape(void *tabwidget) {
    return static_cast<QTabWidget *>(tabwidget)->tabShape();
}
[[maybe_unused]] CQString QTabWidget_tabText(void *tabwidget, int index) {
    auto text = static_cast<QTabWidget *>(tabwidget)->tabText(index);
    return CQString { text.utf16(), text.size() };
}
[[maybe_unused]] CQString QTabWidget_tabToolTip(void *tabwidget, int index) {
    auto text = static_cast<QTabWidget *>(tabwidget)->tabToolTip(index);
    return CQString { text.utf16(), text.size() };
}
[[maybe_unused]] CQString QTabWidget_tabWhatsThis(void *tabwidget, int index) {
    auto text = static_cast<QTabWidget *>(tabwidget)->tabWhatsThis(index);
    return CQString { text.utf16(), text.size() };
}
[[maybe_unused]] bool QTabWidget_tabsClosable(void *tabwidget) {
    return static_cast<QTabWidget *>(tabwidget)->tabsClosable();
}
[[maybe_unused]] bool QTabWidget_usesScrollButtons(void *tabwidget) {
    return static_cast<QTabWidget *>(tabwidget)->usesScrollButtons();
}
[[maybe_unused]] void *QTabWidget_tabIcon(void *tabwidget, int index) {
    auto icon = static_cast<QTabWidget *>(tabwidget)->tabIcon(index);
    return new QIcon(icon);
}
[[maybe_unused]] void *QTabWidget_cornerWidget(void *tabwidget, int corner) {
    return static_cast<QTabWidget *>(tabwidget)->cornerWidget(static_cast<Qt::Corner>(corner));
}
[[maybe_unused]] void *QTabWidget_currentWidget(void *tabwidget) {
    return static_cast<QTabWidget *>(tabwidget)->currentWidget();
}
[[maybe_unused]] void *QTabWidget_tabBar(void *tabwidget) {
    return static_cast<QTabWidget *>(tabwidget)->tabBar();
}
[[maybe_unused]] void *QTabWidget_widget(void *tabwidget, int index) {
    return static_cast<QTabWidget *>(tabwidget)->widget(index);
}
[[maybe_unused]] void QTabWidget_setCurrentIndex(void *tabwidget, int index) {
    static_cast<QTabWidget *>(tabwidget)->setCurrentIndex(index);
}
[[maybe_unused]] void QTabWidget_setCurrentWidget(void *tabwidget, void *widget) {
    static_cast<QTabWidget *>(tabwidget)->setCurrentWidget(static_cast<QWidget *>(widget));
}

[[maybe_unused]] void QTabWidget_currentChanged_connect(void *tabwidget,
                                                        void *receiver,
                                                        void (*slot_ptr)(void *, int)) {
    QObject::connect(static_cast<QTabWidget *>(tabwidget),
                     &QTabWidget::currentChanged,
                     static_cast<QObject *>(receiver),
                     [tabwidget, slot_ptr](int index) {
                         auto context = QObject_getSwiftObject(tabwidget);
                         if (context != nullptr)
                             (*slot_ptr)(context, index);
                     });
}

[[maybe_unused]] void QTabWidget_tabBarClicked_connect(void *tabwidget,
                                                       void *receiver,
                                                       void (*slot_ptr)(void *, int)) {
    QObject::connect(static_cast<QTabWidget *>(tabwidget),
                     &QTabWidget::tabBarClicked,
                     static_cast<QObject *>(receiver),
                     [tabwidget, slot_ptr](int index) {
                         auto context = QObject_getSwiftObject(tabwidget);
                         if (context != nullptr)
                             (*slot_ptr)(context, index);
                     });
}

[[maybe_unused]] void QTabWidget_tabBarDoubleClicked_connect(void *tabwidget,
                                                             void *receiver,
                                                             void (*slot_ptr)(void *, int)) {
    QObject::connect(static_cast<QTabWidget *>(tabwidget),
                     &QTabWidget::tabBarDoubleClicked,
                     static_cast<QObject *>(receiver),
                     [tabwidget, slot_ptr](int index) {
                         auto context = QObject_getSwiftObject(tabwidget);
                         if (context != nullptr)
                             (*slot_ptr)(context, index);
                     });
}

[[maybe_unused]] void QTabWidget_tabCloseRequested_connect(void *tabwidget,
                                                           void *receiver,
                                                           void (*slot_ptr)(void *, int)) {
    QObject::connect(static_cast<QTabWidget *>(tabwidget),
                     &QTabWidget::tabCloseRequested,
                     static_cast<QObject *>(receiver),
                     [tabwidget, slot_ptr](int index) {
                         auto context = QObject_getSwiftObject(tabwidget);
                         if (context != nullptr)
                             (*slot_ptr)(context, index);
                     });

}
