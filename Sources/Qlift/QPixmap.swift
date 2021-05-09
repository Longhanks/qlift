//
//  QPixmap.swift
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

import CQlift
import Foundation

open class QPixmap {
    public var ptr: UnsafeMutableRawPointer!

    public init() {
        self.ptr = QPixmap_new()
    }

    public init(fileName: String, format: String? = nil) {
        self.ptr = QPixmap_from_file(fileName, format)
    }

    public func loadFrom(fileName: String, format: String? = nil) -> Bool {
        QPixmap_loadfromfile(ptr, fileName, format)
    }

    public func loadFrom(data: Data, format: String? = nil) -> Bool {
        return data.withUnsafeBytes { buf in
            QPixmap_loadFromData(ptr, buf.baseAddress!.assumingMemoryBound(to: UInt8.self), UInt32(buf.count), format)
        }
    }

    deinit {
        if self.ptr != nil {
            QPixmap_delete(self.ptr)
            self.ptr = nil
        }
    }
}
