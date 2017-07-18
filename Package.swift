// swift-tools-version:3.1

import PackageDescription


let package = Package(
    name: "Qlift",
    targets: [
        Target(name: "Qlift"),
        Target(name: "qlift-uic", dependencies: ["Qlift"])
    ]
)

