//
//  QImage.swift
//  
//
//  Created by Dmitriy Borovikov on 09.05.2021.
//

import CQlift
import Foundation

open class QImage {
    public enum Format: Int32 {
        case Format_Invalid = 0
        case Format_Mono
        case Format_MonoLSB
        case Format_Indexed8
        case Format_RGB32
        case Format_ARGB32
        case Format_ARGB32_Premultiplied
        case Format_RGB16
        case Format_ARGB8565_Premultiplied
        case Format_RGB666
        case Format_ARGB6666_Premultiplied
        case Format_RGB555
        case Format_ARGB8555_Premultiplied
        case Format_RGB888
        case Format_RGB444
        case Format_ARGB4444_Premultiplied
        case Format_RGBX8888
        case Format_RGBA8888
        case Format_RGBA8888_Premultiplied
        case Format_BGR30
        case Format_A2BGR30_Premultiplied
        case Format_RGB30
        case Format_A2RGB30_Premultiplied
        case Format_Alpha8
        case Format_Grayscale8
        case Format_RGBX64
        case Format_RGBA64
        case Format_RGBA64_Premultiplied
        case Format_Grayscale16
        case Format_BGR888
    }

    public enum InvertMode: Int32 {
        case InvertRgb = 0, InvertRgba }

    public var ptr: UnsafeMutableRawPointer!

    public init() {
        self.ptr = QImage_new()
    }

    public init(ptr: UnsafeMutableRawPointer) {
        self.ptr = ptr
    }


    public init(data: Data, width: Int, height: Int, format: Format) {
        self.ptr = data.withUnsafeBytes { ptr in
            QImage_new_data(ptr.baseAddress!, Int32(width), Int32(height), format.rawValue, nil)
        }
    }

    public init(data: UnsafeRawPointer, width: Int, height: Int, format: Format) {
        self.ptr = QImage_new_data(data, Int32(width), Int32(height), format.rawValue, nil)
    }

    public init(data: Data, width: Int, height: Int, format: Format, bytesPerLine: Int) {
        self.ptr = data.withUnsafeBytes { ptr in
            QImage_new_data_bpl(ptr.baseAddress!, Int32(width), Int32(height), Int32(bytesPerLine), format.rawValue, nil)
        }
    }

    public init(data: UnsafeRawPointer, width: Int, height: Int, format: Format, bytesPerLine: Int) {
        self.ptr = QImage_new_data_bpl(data, Int32(width), Int32(height), Int32(bytesPerLine), format.rawValue, nil)
    }

    public func convertToFormat(format: Format) -> QImage {
        QImage(ptr: QImage_convertToFormat(ptr, format.rawValue))
    }

    deinit {
        guard self.ptr != nil else {
            return
        }
        QImage_delete(self.ptr)
        self.ptr = nil
    }
}
