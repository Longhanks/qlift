//
//  QDir.swift
//  Qlift
//
//  Created by Dmitriy Borovikov on 23.11.2021.
//

import CQlift

public class QDir {
    public static func addSearchPath(prefix: String, path: String) {
        QDir_addSearchPath(prefix, path)
    }
}
