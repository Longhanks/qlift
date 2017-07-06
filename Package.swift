// swift-tools-version:3.1

import PackageDescription

#if os(Linux)
let packageURL = "https://github.com/Longhanks/CQlift-linux"
#else
let packageURL = "https://github.com/Longhanks/CQlift-mac"
#endif

let package = Package(
    name: "Qlift",
    dependencies: [
        .Package(url: packageURL, majorVersion: 1)
    ]
)
