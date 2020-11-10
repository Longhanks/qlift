# Qlift
Swift 5 API for Qt

[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://raw.githubusercontent.com/Longhanks/qlift-swift-example/master/LICENSE)

This package provides two things:

 - A Swift module that wraps [qlift-c-api](https://github.com/Longhanks/qlift-c-api/) to a swifty API.
 - An executable called `qlift-uic`, that can be used in a similiar fashion to Qt's uic: Provided with a file path, it compiles *.ui files to native Swift code.

## Building

```bash
swift build
```

### Examples

 - [swiftmine](https://github.com/Longhanks/swiftmine "swiftmine"): Minesweeper in Swift
