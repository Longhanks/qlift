import CQlift


public protocol QLayoutItem: AnyObject {
    var ptr: UnsafeMutableRawPointer! { get set }
    // When noone has ownership of the item, deinit must call the appropriate
    // deconstructor, else, the underlying C++ object leaks
    var needsDelete: Bool { get set }
}
