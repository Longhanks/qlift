public class QSizePolicy {
    public struct Policy: OptionSet {
        public let rawValue: Int32
        
        public init(rawValue: Int32) {
            self.rawValue = rawValue
        }
        
        public static let Fixed = Policy(rawValue: 0)
        public static let Minimum = Policy(rawValue: 1)
        public static let Maximum = Policy(rawValue: 4)
        public static let Prefered = Policy(rawValue: 5)
        public static let Expanding = Policy(rawValue: 7)
        public static let MinimumExpanding = Policy(rawValue: 3)
        public static let Ignored = Policy(rawValue: 13)
    }
}

