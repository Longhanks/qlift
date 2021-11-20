//
//  QIcon.swift
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

import CQlift
import Foundation

open class QIcon {
    public enum Mode: Int32 {
        case normal = 0
        case disabled = 1
        case active = 2
        case selected = 3
    }

    public enum State: Int32 {
        case off = 1
        case on = 0
    }

    public var ptr: UnsafeMutableRawPointer!

    public init() {
        self.ptr = QIcon_new()
    }

    public init(fileName: String) {
        self.ptr = QIcon_new_from_file(fileName)
    }

    init(ptr: UnsafeMutableRawPointer) {
        self.ptr = ptr
    }

    public func add(pixmap: QPixmap, mode: Mode = .normal, state: State = .off) {
        QIcon_addPixmap(ptr, pixmap.ptr, mode.rawValue, state.rawValue)
    }

    public func add(fileName: String, size: QSize, mode: Mode = .normal, state: State = .off) {
        QIcon_addFile(ptr, fileName, size.ptr, mode.rawValue, state.rawValue)
    }

    public init(theme: String) {
        self.ptr = QIcon_fromTheme(theme)
    }

    deinit {
        guard self.ptr != nil else {
            return
        }
        QIcon_delete(self.ptr)
        self.ptr = nil
    }
}
