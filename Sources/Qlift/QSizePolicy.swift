import CQlift


public class QSizePolicy {
    var ptr: UnsafeMutableRawPointer!

    public init(horizontal: Policy, vertical: Policy, type: ControlType = .DefaultType) {
        self.ptr = QSizePolicy_new(horizontal.rawValue, vertical.rawValue, type.rawValue)
    }

    init(ptr: UnsafeMutableRawPointer) {
        self.ptr = ptr
    }

    deinit {
        if self.ptr != nil {
            QSizePolicy_delete(self.ptr)
            self.ptr = nil
        }
    }

    public struct Policy: OptionSet {
        public let rawValue: Int32

        public init(rawValue: Int32) {
            self.rawValue = rawValue
        }

        public static let Fixed: Policy = []
        public static let Minimum = Policy(rawValue: 1)
        public static let Maximum = Policy(rawValue: 4)
        public static let Preferred = Policy(rawValue: 5)
        public static let Expanding = Policy(rawValue: 7)
        public static let MinimumExpanding = Policy(rawValue: 3)
        public static let Ignored = Policy(rawValue: 13)
    }

    public struct ControlType: OptionSet {
        public let rawValue: Int32

        public init(rawValue: Int32) {
            self.rawValue = rawValue
        }

        public static let DefaultType = ControlType(rawValue: 1)
    }
}
