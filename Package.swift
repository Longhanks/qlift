// swift-tools-version:5.0

import PackageDescription


let package = Package(
    name: "Qlift",
    products: [
        .executable(name: "qlift-uic", targets: ["qlift-uic"]),
        .library(name: "Qlift", targets: ["Qlift"]),
    ],
    targets: [
        .target(
            name: "Qlift"
            ),
        .target(
            name: "qlift-uic"
            )
    ]
)

