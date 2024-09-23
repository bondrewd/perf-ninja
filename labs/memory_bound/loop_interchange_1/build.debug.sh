#!/bin/bash
rm -rf build
cmake -E make_directory build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug .. -DCMAKE_C_FLAGS="-g" -DCMAKE_CXX_FLAGS="-g"
cmake --build . --config Debug --parallel 8
#sudo cpupower frequency-set --governor performance
cmake --build . --target validateLab
cmake --build . --target benchmarkLab