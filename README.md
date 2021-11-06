# Qlift
Swift 5 API for Qt5

[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://raw.githubusercontent.com/Longhanks/qlift-swift-example/master/LICENSE)

This package provides two things:

 - A Swift package that wraps Qt5 to a swifty API.
 - An executable called `qlift-uic`, that can be used in a similiar fashion to Qt's uic: Provided with a file path, it compiles *.ui files to native Swift code.

## Building

Qt5 must be installed. On macOS, use `brew install qt@5`. On Linux, `pkgconfig` is used to find the build flags. On macOS, `.pc` files also is used to find Qt frameworks and build flags, but it requires additional preparation. Add this lines to build target:

```swift
linkerSettings: [
    .linkedFramework("QtWidgets", .when(platforms: [.macOS])),
    .linkedFramework("QtCore", .when(platforms: [.macOS])),
    .linkedFramework("QtGui", .when(platforms: [.macOS]))
]
```
When this [bug fix](https://github.com/apple/swift-package-manager/pull/3801) arrived to Xcode release, additional linker setting may be removed.

### swiftpm

`swift build`

### Examples

 - [swiftmine](https://github.com/Longhanks/swiftmine "swiftmine"): Minesweeper in Swift
