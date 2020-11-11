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
            ],
            cxxSettings: [
                .unsafeFlags([
                        "-I/usr/local/opt/qt/lib/QtCore.framework/Headers",
                        "-I/usr/local/opt/qt/lib/QtGui.framework/Headers",
                        "-I/usr/local/opt/qt/lib/QtWidgets.framework/Headers",
                        "-I/usr/local/opt/qt/include"
                    ],
                    .when(platforms: [.macOS])
                )
            ],
            linkerSettings: [
                .unsafeFlags([
                        "/usr/local/opt/qt/lib/QtCore.framework/QtCore",
                        "/usr/local/opt/qt/lib/QtGui.framework/QtGui",
                        "/usr/local/opt/qt/lib/QtWidgets.framework/QtWidgets",
                    ],
                    .when(platforms: [.macOS])
                )
            ]
        ),
        .target(
            name: "qlift-uic"
        )
    ]
)
