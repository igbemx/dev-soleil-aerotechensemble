cmake_minimum_required(VERSION 3.15)

project(Ensemblelib LANGUAGES CXX)

include(FindPkgConfig)

pkg_search_module(TANGO_PKG REQUIRED tango)

# Create library
set(SOURCES_LIST cEnsemble.cpp
    SocketPool.cpp
    AbstractAerotech.cpp
    cA3200.cpp)
set(HEADER_LIST cEnsemble.h
    SocketPool.h
    AbstractAerotech.h
    cA3200.h)

add_library(Ensemblelib SHARED ${SOURCES_LIST} ${HEADER_LIST})
target_include_directories(Ensemblelib PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${TANGO_PKG_INCLUDE_DIRS})
    
# install
include(GNUInstallDirs)

install( 
    FILES ${HEADER_LIST}
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
    )

install(TARGETS
    Ensemblelib
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)