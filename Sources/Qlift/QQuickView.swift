//
// QQuickView.swift
//
//
// Created by Dmitriy Borovikov on 06.12.2021.
//

import CQlift

open class QQuickView: QQuickWindow {
    public enum ResizeMode: Int32 { case SizeViewToRootObject, SizeRootObjectToView }
    public enum Status: Int32 { case Null, Ready, Loading, Error }
    // MARK: Init/deinit

    public override init(parent: QWindow? = nil) {
        super.init(ptr: QQuickView_new(parent?.ptr))
    }

    public override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    public init(source: String, parent: QWindow? = nil) {
        super.init(ptr: QQuickViewUrl_new(source, parent?.ptr))
    }

    deinit {
        checkDeleteQtObj()
    }

    // MARK: Propeties
    public var resizeMode: ResizeMode {
        get { .init(rawValue: QQuickView_resizeMode(ptr)) ?? .SizeRootObjectToView }
        set { QQuickView_setResizeMode(ptr, newValue.rawValue) }
    }

    public var status: Status {
        .init(rawValue: QQuickView_status(ptr)) ?? .Null
    }

    public var source: String {
        get {
            let s = QQuickView_source(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set { QQuickView_setSource(ptr, newValue) }
    }

    // MARK: Functions
    public func initialSize() -> QSize {
        .init(ptr: QQuickView_initialSize(ptr))
    }
}
