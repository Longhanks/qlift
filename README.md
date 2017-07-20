# Qlift
Swift API for Qt

[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://raw.githubusercontent.com/Longhanks/qlift-swift-example/master/LICENSE)
[![Build Status](https://travis-ci.org/Longhanks/qlift.svg?branch=master)](https://travis-ci.org/Longhanks/qlift)

This package provides two things: A Swift module that wraps [qlift-c-api](https://github.com/Longhanks/qlift-c-api/) to a swifty API.

Second, an executable called `qlift-uic`, that can be used in a similiar fashion to Qt's uic: Provided with a file path, it compiles *.ui files to native Swift code.

## Build options

### Statically linking the C library

To build with [qlift-c-api](https://github.com/Longhanks/qlift-c-api/) statically embedded, use the provided `buildscript.sh`.

This can be edited and ammended with the `-c release -Xswiftc -static-stdlib` options if you wish so.

### Dynamically linking the C library

Linking [qlift-c-api](https://github.com/Longhanks/qlift-c-api/) dynamically requires you to provide the paths where you installed it, if not in LD_LIBRARY_PATH (e.g. when you passed `CMAKE_INSTALL_PREFIX=/usr`, you can just `swift build`).

If you've built qlift-c-api on macOS with the default configuration (which installs to `/usr/local`), pass these flags:

```bash
swift build -Xcc -I/usr/local/include -Xlinker -L/usr/local/lib
```

If you want to build with stdlib statically linked and the executable optimized, additionally, pass these flags (not possible on Linux until Swift 4):

```bash
swift build -c release -Xswiftc -static-stdlib
```

### Usage

Take a look at the example: [qlift-swift-example](https://github.com/Longhanks/qlift-swift-example "qlift-swift-example")

