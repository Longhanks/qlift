// swift-tools-version:3.1

import PackageDescription

#if os(Linux)
let packageURL = "https://github.com/Longhanks/qlift-modulemap-linux"
#else
let packageURL = "https://github.com/Longhanks/qlift-modulemap-mac"
#endif

let package = Package(
    name: "Qlift"
)

