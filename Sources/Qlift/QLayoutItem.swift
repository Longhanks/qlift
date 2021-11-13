import CQlift


public protocol QLayoutItem: AnyObject {
    var qtPtr: UnsafeMutableRawPointer! { get }
    // When noone has ownership of the item, deinit must call the appropriate
    // deconstructor, else, the underlying C++ object leaks
    var swiftOwership: Bool { get set }
}
