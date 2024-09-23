#!/bin/bash
rm -rf build
cmake -E make_directory build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build . --config Release --parallel 8
#sudo cpupower frequency-set --governor performance
cmake --build . --target validateLab
cmake --build . --target benchmarkLab