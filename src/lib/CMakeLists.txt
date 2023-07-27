cmake_minimum_required(VERSION 3.15)

project(ensemble LANGUAGES CXX)

include(FindPkgConfig)

pkg_search_module(TANGO_PKG REQUIRED tango)
pkg_check_modules(YAT yat>=1.13.9 REQUIRED)
pkg_check_modules(YAT4TANGO yat4tango>=1.10.12 REQUIRED)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_STANDARD_REQUIRED YES)

# Create library
set(SOURCES_LIST cEnsemble.cpp
    SocketPool.cpp
    AbstractAerotech.cpp
    cA3200.cpp)
set(HEADER_LIST cEnsemble.h
    SocketPool.h
    AbstractAerotech.h
    cA3200.h)

add_library(ensemble SHARED ${SOURCES_LIST} ${HEADER_LIST})
target_include_directories(ensemble PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${TANGO_PKG_INCLUDE_DIRS}
    ${YAT_INCLUDE_DIRS})

# install
include(GNUInstallDirs)

install( 
    FILES ${HEADER_LIST}
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
    )

install(TARGETS
    ensemble
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)