#!/bin/bash

git clone https://github.com/Longhanks/qlift-c-api

cd qlift-c-api
mkdir build
cd build
cmake .. -DENABLE_SHARED=OFF -DENABLE_STATIC=ON
make -j4
cd ../..
QLIFT_C_API=$(pwd)/qlift-c-api

swift build -Xcc -I$QLIFT_C_API/src -Xlinker -L$QLIFT_C_API/build/bin -Xlinker -lQt5Core -Xlinker -lQt5Gui -Xlinker -lQt5Widgets

rm -rf qlift-c-api

