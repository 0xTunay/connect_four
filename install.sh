#!/bin/bash

cd build || mkdir -p build && cd build
cmake ..
make
cd ..
./connect_four
