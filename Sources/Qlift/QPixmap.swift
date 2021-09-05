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

    init(ptr: UnsafeMutableRawPointer) {
        self.ptr = ptr
    }

    public init() {
        self.ptr = QPixmap_new()
    }

    public init(fileName: String, format: String? = nil) {
        self.ptr = QPixmap_from_file(fileName, format)
    }

    public init(image: QImage) {
        self.ptr = QPixmap_from_image(image.ptr)
    }

    deinit {
        if self.ptr != nil {
            QPixmap_delete(self.ptr)
            self.ptr = nil
        }
    }

    public func loadFrom(fileName: String, format: String? = nil) -> Bool {
        QPixmap_loadfromfile(ptr, fileName, format)
    }

    public func loadFrom(data: Data, format: String? = nil) -> Bool {
        return data.withUnsafeBytes { buf in
            QPixmap_loadFromData(ptr, buf.baseAddress!, UInt32(buf.count), format)
        }
    }

    public func scaled(w: Int32, h: Int32,
                       aspectMode: Qt.AspectRatioMode = .IgnoreAspectRatio,
                       mode: Qt.TransformationMode = .FastTransformation ) -> QPixmap {
        QPixmap(ptr: QPixmap_scaled(ptr, w, h, aspectMode.rawValue, mode.rawValue))
    }

    public func scaled(s: QSize,
                       aspectMode: Qt.AspectRatioMode = .IgnoreAspectRatio,
                       mode: Qt.TransformationMode = .FastTransformation ) -> QPixmap {
        QPixmap(ptr: QPixmap_scaledQsize(ptr, s.ptr, aspectMode.rawValue, mode.rawValue))
    }

    public func scaledToWidth(_ w: Int32,
                              mode: Qt.TransformationMode = .FastTransformation ) -> QPixmap {
        QPixmap(ptr: QPixmap_scaledToWidth(ptr, w, mode.rawValue))
    }
    
    public func scaledToHeight(_ h: Int32,
                               mode: Qt.TransformationMode = .FastTransformation ) -> QPixmap {
        QPixmap(ptr: QPixmap_scaledToHeight(ptr, h, mode.rawValue))
    }
}
