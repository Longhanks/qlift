# Qlift
Swift 4 API for Qt

[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://raw.githubusercontent.com/Longhanks/qlift-swift-example/master/LICENSE)
[![Build Status](https://travis-ci.org/Longhanks/qlift.svg?branch=master)](https://travis-ci.org/Longhanks/qlift)

This package provides two things:

 - A Swift module that wraps [qlift-c-api](https://github.com/Longhanks/qlift-c-api/) to a swifty API.
 - An executable called `qlift-uic`, that can be used in a similiar fashion to Qt's uic: Provided with a file path, it compiles *.ui files to native Swift code.

## Building

To build with [qlift-c-api](https://github.com/Longhanks/qlift-c-api/) statically embedded, use the provided `buildscript.sh`.

Linking [qlift-c-api](https://github.com/Longhanks/qlift-c-api/) dynamically requires you to provide the paths where you installed it, if not in LD_LIBRARY_PATH (e.g. when you passed `CMAKE_INSTALL_PREFIX=/usr`, you can just `swift build`).

For exmaple, if you've built qlift-c-api on macOS with the default configuration (which installs to `/usr/local`), pass these flags:

```bash
swift build -Xcc -I/usr/local/include -Xlinker -L/usr/local/lib
```

### Examples

 - [swiftmine](https://github.com/Longhanks/swiftmine "swiftmine"): Minesweeper in Swift

