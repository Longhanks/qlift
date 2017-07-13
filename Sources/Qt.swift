public struct Qt {
    public struct Alignments: OptionSet {
        public let rawValue: Int32
        
        public init(rawValue: Int32) {
            self.rawValue = rawValue
        }

        public static let AlignLeft = Alignments(rawValue: 1)
        public static let AlignRight = Alignments(rawValue: 2)
        public static let AlignHCenter = Alignments(rawValue: 4)
        public static let AlignJustify = Alignments(rawValue: 8)
        public static let AlignAbsolute = Alignments(rawValue: 16)
        public static let AlignTop = Alignments(rawValue: 32)
        public static let AlignBottom = Alignments(rawValue: 64)
        public static let AlignVCenter = Alignments(rawValue: 128)
        public static let AlignBaseline = Alignments(rawValue: 256)
        public static let AlignCenter: Alignments = [.AlignVCenter, .AlignHCenter]
        public static let AlignHorizontal_Mask: Alignments  = [.AlignLeft, .AlignRight, .AlignHCenter, .AlignJustify, .AlignAbsolute]
        public static let AlignVertical_Mask: Alignments = [.AlignTop, .AlignBottom, .AlignVCenter, .AlignBaseline]
    }
}

