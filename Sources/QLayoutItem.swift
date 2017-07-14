import CQlift


public protocol QLayoutItem: class {
    var ptr: UnsafeMutableRawPointer? { get set }
    // When noone has ownership of the item, deinit must call the appropriate
    // deconstructor or else, the underlying C++ objet leaks
    var needsDelete: Bool { get set }
}

