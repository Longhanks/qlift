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
            url: "https://github.com/DimaRU/qlift-c-api",
            .branch("qt5")
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
                        "-I/usr/local/opt/qt@5/lib/QtCore.framework/Headers",
                        "-I/usr/local/opt/qt@5/lib/QtGui.framework/Headers",
                        "-I/usr/local/opt/qt@5/lib/QtWidgets.framework/Headers",
                        "-I/usr/local/opt/qt@5/include"
                    ],
                    .when(platforms: [.macOS])
                )
            ],
            linkerSettings: [
                .unsafeFlags([
                        "/usr/local/opt/qt@5/lib/QtCore.framework/QtCore",
                        "/usr/local/opt/qt@5/lib/QtGui.framework/QtGui",
                        "/usr/local/opt/qt@5/lib/QtWidgets.framework/QtWidgets",
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
