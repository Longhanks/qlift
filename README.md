# Qlift
## Swift 5 API for Qt5

[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://raw.githubusercontent.com/Longhanks/qlift-swift-example/master/LICENSE)

![Mac OS](https://img.shields.io/badge/mac%20os-000000?style=for-the-badge&logo=macos&logoColor=F0F0F0)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![Windows](https://img.shields.io/badge/Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white)

This package provides:

 - A Swift package that wraps Qt5 to a swifty API.

 An executable called `qlift-uic`, that can be used in a similiar fashion to Qt's uic: generate Swift code from Qt user interface files (.ui), moved to separate repository: [https://github.com/DimaRU/QliftUIC]()

 #### Tested under:
 - macOS (Intel & Apple Silicon)
 - Linux (both Intel x64 & Arm64)
 - Windows 10

## Building

Qt5 must be installed. On macOS, use `brew install qt@5`. On Linux, `pkgconfig` is used to find the build flags. On macOS, `.pc` files also is used to find Qt frameworks and build flags. Use Xcode from 13.3 (now beta) for build macOS applications. 
For macOS, add next line to `.zprofile`:

```bash
launchctl setenv PKG_CONFIG_PATH /opt/homebrew/opt/qt5/lib/pkgconfig
```
on Apple Silicon Mac or

```bash
launchctl setenv PKG_CONFIG_PATH /usr/local/opt/qt5/lib/pkgconfig
```
on Intel Mac or Apple Silicon Mac for develop under Rosetta

### swiftpm

`swift build`

### Xcode

Add `https://github.com/DimaRU/qlift.git` to Package Dependencies list

### Examples

 - [swiftmine](https://github.com/Longhanks/swiftmine "swiftmine"): Minesweeper in Swift

## Note

This Qt wrapper have incomplete implementation, most of the Qt classes are not implemented. Also, support for already implemented Qt classes may be incomplete.
Again, the architecture of the project has some flaws with release objects.
