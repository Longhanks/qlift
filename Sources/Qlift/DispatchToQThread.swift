//
//  DispatchQThread.swift
//  
//
//  Created by Dmitriy Borovikov on 19.05.2021.
//

import CQlift

private class ClosureBox {
    public var closure: () -> Void
    init(_ closure: @escaping () -> Void) {
        self.closure = closure
    }
}

public func dispatchQt(block: @escaping () -> Void) {
    let functor: @convention(c) (UnsafeMutableRawPointer?) -> Void = { raw in
        if raw != nil {
            let box = Unmanaged<ClosureBox>.fromOpaque(raw!).takeRetainedValue()
            box.closure()
        }
    }
    let box = ClosureBox(block)
    let rawClosure = Unmanaged.passRetained(box).toOpaque()
    DispatchToQTMainThread(rawClosure, functor)
}
