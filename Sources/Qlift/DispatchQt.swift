//
//  DispatchQt.swift
//  
//
//  Created by Dmitriy Borovikov on 19.05.2021.
//

import CQlift
#if os(Linux)
import Foundation
import CoreFoundation
import CDispatch
#endif

private class ClosureBox {
    public var closure: () -> Void
    init(_ closure: @escaping () -> Void) {
        self.closure = closure
    }
}

public func dispatchQt(block: @escaping () -> Void) {
    let box = ClosureBox(block)
    let rawClosure = Unmanaged.passRetained(box).toOpaque()
    DispatchToQTMainThread(rawClosure) { raw in
        if raw != nil {
            let box = Unmanaged<ClosureBox>.fromOpaque(raw!).takeRetainedValue()
            box.closure()
        }
    }
}

#if os(Linux)
public func bindMainRunloopQt() {
    let act: CFRunLoopActivity = [.entry]
    let observer = CFRunLoopObserverCreateWithHandler(kCFAllocatorDefault, act.rawValue, true, 1) {
        _, _ in
        dispatchQt {
            while RunLoop.main.run(mode: .default, before: .distantFuture) {}
        }
    }
    let mainLoop = CFRunLoopGetMain()
    CFRunLoopAddObserver(mainLoop, observer, kCFRunLoopDefaultMode)
}
#endif
