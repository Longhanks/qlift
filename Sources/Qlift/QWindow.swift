//
// QWindow.swift
//
//
// Created by Dmitriy Borovikov on 06.12.2021.
//

import CQlift

open class QWindow: QObject {

    public enum AncestorMode: Int32 {
        case ExcludeTransients, IncludeTransients }
    public enum Visibility: Int32 {
        case Windowed, Minimized, Maximized, FullScreen, AutomaticVisibility, Hidden }

    // MARK: Init/deinit

    public init(parent: QWindow? = nil) {
        super.init(ptr: QWindow_new(parent?.ptr))
    }

    public override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }

    public var opacity: Double {
        QWindow_opacity(ptr)
    }

    public var modality : Qt.WindowModality {
        get { .init(rawValue: QWindow_modality(ptr)) ?? .NonModal }
        set { QWindow_setModality(ptr, newValue.rawValue) }
    }

    // MARK: Propeties

    public var active: Bool {
        QWindow_isActive(ptr)
    }

    public var title: String {
        get {
            let s = QWindow_title(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set { QWindow_setTitle(ptr, newValue) }
    }

    public var maximumSize: QSize {
        get { QSize(ptr: QWindow_maximumSize(ptr)) }
        set { QWindow_setMaximumSize(ptr, newValue.ptr) }
    }

    public var minimumSize: QSize {
        get { QSize(ptr: QWindow_minimumSize(ptr)) }
        set { QWindow_setMinimumSize(ptr, newValue.ptr) }
    }

    public var geometry: QRect? {
        get { QRect(ptr: QWindow_geometry(ptr)) }
        set { QWindow_setGeometry(ptr, newValue?.ptr) }
    }

    public var height: Int32 {
        QWindow_height(ptr)
    }
    public var maximumHeight: Int32 {
        QWindow_maximumHeight(ptr)
    }
    public var maximumWidth: Int32 {
        QWindow_maximumWidth(ptr)
    }
    public var minimumHeight: Int32 {
        QWindow_minimumHeight(ptr)
    }
    public var minimumWidth: Int32 {
        QWindow_minimumWidth(ptr)
    }
    public var width: Int32 {
        QWindow_width(ptr)
    }


    public var size: QSize {
        get { QSize(ptr: QWindow_size(ptr)) }
    }

    public var frameGeometry: QRect {
        get { QRect(ptr: QWindow_frameGeometry(ptr)) }
    }

    public var visible: Bool {
        get { QWindow_isVisible(ptr) }
        set { QWindow_setVisible(ptr, newValue) }
    }

    public var windowIcon: QIcon {
        get { QIcon(ptr: QWindow_icon(ptr)) }
        set { QWindow_setIcon(ptr, newValue.ptr) }
    }


    // MARK: Functions

    public func setWindowState(state: Qt.WindowStates) {
        QWindow_setWindowStates(ptr, state.rawValue)
    }

    public var windowState: Qt.WindowStates {
        Qt.WindowStates(rawValue: QWindow_windowStates(ptr))
    }

    open func close() -> Bool {
        return QWindow_close(ptr)
    }

    public func resize(width: Int32, height: Int32) {
        QWindow_resizewh(ptr, width, height)
    }

    public func mapToGlobal(point: QPoint) -> QPoint {
        QPoint(ptr: QWindow_mapToGlobal(ptr, point.ptr))
    }

    public func mapFromGlobal(point: QPoint) -> QPoint {
        QPoint(ptr: QWindow_mapFromGlobal(ptr, point.ptr))
    }

    open func show() {
        QWindow_show(ptr)
    }

    public func showFullScreen() {
        QWindow_showFullScreen(ptr)
    }

    public func showMaximized() {
        QWindow_showMaximized(ptr)
    }

    public func showMinimized() {
        QWindow_showMinimized(ptr)
    }

    public func showNormal() {
        QWindow_showNormal(ptr)
    }

    public func x() -> Int32 {
        QWindow_x(ptr)
    }

    public func y() -> Int32 {
        QWindow_y(ptr)
    }
}
