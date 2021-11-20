//
//  QShowEvent.swift
//  Qlift
//
//  Created by Dmitriy Borovikov on 21.11.2021.
//

import CQlift

public class QShowEvent: QEvent {
    override init(ptr: UnsafeMutableRawPointer) {
        super.init(ptr: ptr)
    }

    deinit {
        checkDeleteQtObj()
    }
}
