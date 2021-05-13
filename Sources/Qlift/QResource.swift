//
//  QResource.swift
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

import CQlift
import Foundation

open class QResource {
    public var ptr: UnsafeMutableRawPointer!

    public init() {
        self.ptr = QResource_new()
    }

    public init(fileName: String) {
        self.ptr = QResource_new_from_file(fileName)
    }

    public static func registerResource(rccFilename: String) -> Bool {
        QResource_registerResource(rccFilename)
    }

    public static func unregisterResource(rccFilename: String) -> Bool {
        QResource_unregisterResource(rccFilename)
    }

    public static func registerResource(rccData: Data) -> Bool {
        return rccData.withUnsafeBytes { buf in
            QResource_registerResource_data(buf.baseAddress!.assumingMemoryBound(to: UInt8.self))
        }
    }

    public static func unregisterResource(rccData: Data) -> Bool {
        return rccData.withUnsafeBytes { buf in
            QResource_unregisterResource_data(buf.baseAddress!.assumingMemoryBound(to: UInt8.self))
        }
    }

    deinit {
        guard self.ptr != nil else {
            return
        }
        QResource_delete(self.ptr)
        self.ptr = nil
    }
}
