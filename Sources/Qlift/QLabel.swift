import CQlift


open class QLabel: QFrame {
    public var alignment: Qt.Alignment {
        get { Qt.Alignment(rawValue: QLabel_alignment(ptr)) }
        set { QLabel_setAlignment(self.ptr, newValue.rawValue) }
    }

    public var wordWrap: Bool {
        get { QLabel_wordWrap(ptr) }
        set { QLabel_setWordWrap(ptr, newValue) }
    }

    public var text: String {
        get {
            let s = QLabel_text(ptr)
            return String(utf16CodeUnits: s.utf16, count: Int(s.size))
        }
        set {
            QLabel_setText(self.ptr, newValue)
        }
    }

    public var scaledContents: Bool {
        get { QLabel_hasScaledContents(ptr) }
        set { QLabel_setScaledContents(ptr, newValue) }
    }

    public var indent: Int32 {
        get { QLabel_indent(ptr) }
        set { QLabel_setIndent(ptr, newValue) }
    }

    public var openExternalLinks: Bool {
        get { QLabel_openExternalLinks(ptr) }
        set { QLabel_setOpenExternalLinks(ptr, newValue) }
    }

    public var pixmap: QPixmap? {
        guard let pixmapPtr = QLabel_pixmap(ptr) else { return nil }
        return QPixmap(ptr: pixmapPtr)
    }

    public var textFormat: Qt.TextFormat {
        get { Qt.TextFormat(rawValue: QLabel_textFormat(ptr)) ?? .PlainText }
        set { QLabel_setTextFormat(ptr, newValue.rawValue) }
    }

    public func setPixmap(_ pixmap: QPixmap) {
        QLabel_setPixmap(ptr, pixmap.ptr)
    }

    public func setImage(_ image: QImage) {
        QLabel_setImage(ptr, image.ptr)
    }

    public init(text: String = "", parent: QWidget? = nil, flags: Qt.WindowFlags = .Widget) {
        super.init(ptr: QLabel_new(text, parent?.ptr, flags.rawValue), parent: parent)
    }

    override init(ptr: UnsafeMutableRawPointer, parent: QWidget? = nil) {
        super.init(ptr: ptr, parent: parent)
    }

    deinit {
        checkDeleteQtObj()
    }
}
