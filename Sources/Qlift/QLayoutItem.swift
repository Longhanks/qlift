import CQlift


public protocol QLayoutItem: AnyObject {
    var qtPtr: UnsafeMutableRawPointer! { get }
    var swiftOwership: Bool { get set }
}
