// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "Qlift",
    products: [
        .executable(
            name: "qlift-uic",
            targets: [
                "qlift-uic"
            ]
        ),
        .library(
            name: "Qlift",
            targets: [
                "Qlift"
            ]
        ),
    ],
    dependencies: [
        .package(
            name: "CQlift",
            url: "https://github.com/Longhanks/qlift-c-api",
            .branch("master")
        )
    ],
    targets: [
        .target(
            name: "Qlift",
            dependencies: [
                "CQlift"
            ]
        ),
        .target(
            name: "qlift-uic"
        )
    ]
)
