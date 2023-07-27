# ensure  "-fvisibility-inlines-hidden" option is not set
# so that any "inline" functions are included in the shared library
echo old CXXFLAGS: $CXXFLAGS
export CXXFLAGS=${CXXFLAGS//-fvisibility-inlines-hidden/}
echo new CXXFLAGS: $CXXFLAGS

cmake ${CMAKE_ARGS} \
      -DCMAKE_BUILD_TYPE=Release \
      -S . -B build

cmake --build build -j $CPU_COUNT
cmake --build build --target install

