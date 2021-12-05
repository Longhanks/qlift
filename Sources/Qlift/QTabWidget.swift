//
//  QTabWidget.swift
//
//
//  Created by Dmitriy Borovikov on 04.12.2021.
//

import CQlift


open class QTabWidget: QWidget {

    public enum TabPosition: Int32 {
        case North, South, West, East
    }
    public enum TabShape: Int32 {
        case Rounded, Triangular
    }

    public init(parent: QWidget? = nil) {
        super.init(ptr: QTabWidget_new(parent?.ptr))
    }

    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }

    public var count: Int32 {
        QTabWidget_count(ptr)
    }

    public var currentIndex: Int32 {
        get { QTabWidget_currentIndex(ptr) }
        set { QTabWidget_setCurrentIndex(ptr, newValue) }
    }

    public var documentMode: Bool {
        get { QTabWidget_documentMode(ptr) }
        set { QTabWidget_setDocumentMode(ptr, newValue) }
    }

    public var elideMode: Qt.TextElideMode {
        get { .init(rawValue: QTabWidget_elideMode(ptr)) ?? .ElideLeft }
        set { QTabWidget_setElideMode(ptr, newValue.rawValue) }
    }

    public var movable: Bool {
        get { QTabWidget_isMovable(ptr) }
        set { QTabWidget_setMovable(ptr, newValue) }
    }

    public var tabBarAutoHide: Bool {
        get { QTabWidget_tabBarAutoHide(ptr) }
        set { QTabWidget_setTabBarAutoHide(ptr, newValue) }
    }

    public var tabsClosable: Bool {
        get { QTabWidget_tabsClosable(ptr) }
        set { QTabWidget_setTabsClosable(ptr, newValue) }
    }

    public var usesScrollButtons: Bool {
        get { QTabWidget_usesScrollButtons(ptr) }
        set { QTabWidget_setUsesScrollButtons(ptr, newValue) }
    }

    public var tabPosition: TabPosition {
        get { TabPosition(rawValue: QTabWidget_tabPosition(ptr)) ?? .East }
        set { QTabWidget_setTabPosition(ptr, newValue.rawValue) }
    }

    public var tabShape: TabShape {
        get { TabShape(rawValue: QTabWidget_tabShape(ptr)) ?? .Rounded}
        set { QTabWidget_setTabShape(ptr, newValue.rawValue) }
    }


    public func addTab(_ page: QWidget, label: String) -> Int32 {
        QTabWidget_addTab(ptr, page.ptr, label)
    }
    public func addTab(_ page: QWidget, icon: QIcon, label: String) -> Int32 {
        QTabWidget_addTabIcon(ptr, page.ptr, icon.ptr, label)
    }
    public func indexOf(_ widget: QWidget) -> Int32 {
        QTabWidget_indexOf(ptr, widget.ptr)
    }
    public func insertTab(index: Int32, page: QWidget, label: String) -> Int32 {
        QTabWidget_insertTab(ptr, index, page.ptr, label)
    }
    public func insertTab(index: Int32, page: QWidget, icon: QIcon, label: String) -> Int32 {
        QTabWidget_insertTabIcon(ptr, index, page.ptr, icon.ptr, label)
    }
    public func clear() {
        QTabWidget_clear(ptr)
    }
    public func removeTab(index: Int32) {
        QTabWidget_removeTab(ptr, index)
    }
    public func setCornerWidget(_ widget: QWidget, corner: Qt.Corner) {
        QTabWidget_setCornerWidget(ptr, widget.ptr, corner.rawValue)
    }
    public func setIconSize(_ size: QSize) {
        QTabWidget_setIconSize(ptr, size.ptr)
    }
    public func setTabIcon(index: Int32, icon: QIcon) {
        QTabWidget_setTabIcon(ptr, index, icon.ptr)
    }
    public func setTabText(index: Int32, label: String) {
        QTabWidget_setTabText(ptr, index, label)
    }
    public func setTabToolTip(index: Int32, tip: String) {
        QTabWidget_setTabToolTip(ptr, index, tip)
    }
    public func setTabVisible(index: Int32, visible: Bool) {
        QTabWidget_setTabVisible(ptr, index, visible)
    }
    public func setTabWhatsThis(index: Int32, text: String) {
        QTabWidget_setTabWhatsThis(ptr, index, text)
    }
    public func setCurrentWidget(_ widget: QWidget) {
        QTabWidget_setCurrentWidget(ptr, widget.ptr)
    }
    public func tabText(index: Int32) -> String {
        let s = QTabWidget_tabText(ptr, index)
        return String(utf16CodeUnits: s.utf16, count: Int(s.size))
    }
    public func tabToolTip(index: Int32) -> String {
        let s = QTabWidget_tabToolTip(ptr, index)
        return String(utf16CodeUnits: s.utf16, count: Int(s.size))
    }
    public func tabWhatsThis(index: Int32) -> String {
        let s = QTabWidget_tabWhatsThis(ptr, index)
        return String(utf16CodeUnits: s.utf16, count: Int(s.size))
    }

    var currentChangedCallBack: ((Int32) -> Void)?
    var tabBarClickedCallBack: ((Int32) -> Void)?
    var tabBarDoubleClickedCallBack: ((Int32) -> Void)?
    var tabCloseRequestedCallBack: ((Int32) -> Void)?

    open func connectCurrentChanged(receiver: QObject? = nil, to slot: @escaping ((Int32) -> Void)) {
        let object: QObject = receiver ?? self
        self.currentChangedCallBack = slot

        QTabWidget_currentChanged_connect(self.ptr, object.ptr) { raw, index in
            let mySelf = Unmanaged<QTabWidget>.fromOpaque(raw).takeUnretainedValue()
            mySelf.currentChangedCallBack?(index)
        }
    }

    open func connectTabBarClicked(receiver: QObject? = nil, to slot: @escaping ((Int32) -> Void)) {
        let object: QObject = receiver ?? self
        self.tabBarClickedCallBack = slot

        QTabWidget_tabBarClicked_connect(self.ptr, object.ptr) { raw, index in
            let mySelf = Unmanaged<QTabWidget>.fromOpaque(raw).takeUnretainedValue()
            mySelf.tabBarClickedCallBack?(index)
        }
    }

    open func connectTabBarDoubleClicked(receiver: QObject? = nil, to slot: @escaping ((Int32) -> Void)) {
        let object: QObject = receiver ?? self
        self.tabBarDoubleClickedCallBack = slot

        QTabWidget_tabBarDoubleClicked_connect(self.ptr, object.ptr) { raw, index in
            let mySelf = Unmanaged<QTabWidget>.fromOpaque(raw).takeUnretainedValue()
            mySelf.tabBarDoubleClickedCallBack?(index)
        }
    }

    open func connectTabCloseRequested(receiver: QObject? = nil, to slot: @escaping ((Int32) -> Void)) {
        let object: QObject = receiver ?? self
        self.tabCloseRequestedCallBack = slot

        QTabWidget_tabCloseRequested_connect(self.ptr, object.ptr) { raw, index in
            let mySelf = Unmanaged<QTabWidget>.fromOpaque(raw).takeUnretainedValue()
            mySelf.tabCloseRequestedCallBack?(index)
        }
    }
}
