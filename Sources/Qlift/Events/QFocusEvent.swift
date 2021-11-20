//
//  QFocusEvent.swift
//  Qlift
//
//  Created by Dmitriy Borovikov on 21.11.2021.
//

import CQlift

public class QFocusEvent: QEvent {
    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }
}
