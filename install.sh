#!/bin/bash

cd build 
cmake ..
make
cd ..
./connect_four
