//
//  QKeyEvent.swift
//  Qlift
//
//  Created by Dmitriy Borovikov on 21.11.2021.
//

import CQlift

public class QKeyEvent: QInputEvent {
    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    public func matches(key: QKeySequence.StandardKey) -> Bool {
        QKeyEvent_matches(ptr, key.rawValue)
    }

    public func count() -> Int32 {
        QKeyEvent_count(ptr)
    }

    public func isAutoRepeat() -> Bool {
        QKeyEvent_isAutoRepeat(ptr)
    }

    public func key() -> Int32 {
        QKeyEvent_key(ptr)
    }

    public override func modifiers() -> Qt.KeyboardModifiers {
        .init(rawValue: QKeyEvent_modifiers(ptr))
    }

    public func nativeModifiers() -> UInt32 {
        QKeyEvent_nativeModifiers(ptr)
    }

    public func nativeScanCode() -> UInt32 {
        QKeyEvent_nativeScanCode(ptr)
    }

    public func nativeVirtualKey() -> UInt32 {
        QKeyEvent_nativeVirtualKey(ptr)
    }

    public func text() -> String {
        let s = QKeyEvent_text(ptr)
        return String(utf16CodeUnits: s.utf16, count: Int(s.size))
    }

    deinit {
        checkDeleteQtObj()
    }
}
