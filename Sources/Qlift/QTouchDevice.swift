//
//  QTouchDevice.swift
//  
//
//  Created by Dmitriy Borovikov on 01.02.2022.
//

import CQlift
public class QTouchDevice {
    public struct Capabilities: OptionSet {
        public let rawValue: Int32

        public init(rawValue: Int32) {
            self.rawValue = rawValue
        }
        
        public static let Position = Capabilities(rawValue: 0x0001)
        public static let Area = Capabilities(rawValue: 0x0002)
        public static let Pressure = Capabilities(rawValue: 0x0004)
        public static let Velocity = Capabilities(rawValue: 0x0008)
        public static let RawPositions = Capabilities(rawValue: 0x0010)
        public static let NormalizedPosition = Capabilities(rawValue: 0x0020)
        public static let MouseEmulation = Capabilities(rawValue: 0x0040)
    }
    
    public enum DeviceType: Int32 {
        case TouchScreen
        case TouchPad
    }
    
    var ptr: UnsafeMutableRawPointer!

    init(ptr: UnsafeMutableRawPointer) {
        self.ptr = ptr
    }

    public func capabilities() -> Capabilities {
        Capabilities(rawValue: QTouchDevice_capabilities(ptr))
    }

    public func maximumTouchPoints() -> Int32 {
        QTouchDevice_maximumTouchPoints(ptr)
    }
    public func name() -> String {
        let s = QTouchDevice_name(ptr)
        return String(utf16CodeUnits: s.utf16, count: Int(s.size))
    }
    public func setCapabilities(_ caps: Capabilities) {
        QTouchDevice_setCapabilities(ptr, caps.rawValue)
    }
    public func setMaximumTouchPoints(max: Int32) {
        QTouchDevice_setMaximumTouchPoints(ptr, max)
    }
    public func setName(name: String) {
        QTouchDevice_setName(ptr, name)
    }
    public func setType(devType: DeviceType) {
        QTouchDevice_setType(ptr, devType.rawValue)
    }
    public func type() -> DeviceType {
        DeviceType(rawValue: QTouchDevice_type(ptr))!
    }

    
//    int QTouchDevice_maximumTouchPoints(void *touchDevice);
//    CQString QTouchDevice_name(void *touchDevice);
//    void QTouchDevice_setCapabilities(void *touchDevice, int caps);
//    void QTouchDevice_setMaximumTouchPoints(void *touchDevice, int max);
//    void QTouchDevice_setName(void *touchDevice, const char *name);
//    void QTouchDevice_setType(void *touchDevice, int devType);
//    int QTouchDevice_type(void *touchDevice);

}
