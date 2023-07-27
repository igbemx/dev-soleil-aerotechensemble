cmake_minimum_required(VERSION 3.15)

set(MAJOR_VERSION "1")
set(MINOR_VERSION "0")
set(PATCH_NUMBER "1")
set(VERSION_STRING "${MAJOR_VERSION}.${MINOR_VERSION}.${PATCH_NUMBER}")

project(AerotechEnsembleDS VERSION ${VERSION_STRING} LANGUAGES CXX)

include(FindPkgConfig)
pkg_search_module(TANGO_PKG REQUIRED tango)
pkg_check_modules(YAT yat>=1.13.9 REQUIRED)
pkg_check_modules(YAT4TANGO yat4tango>=1.10.12 REQUIRED)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_STANDARD_REQUIRED YES)

set(EnsembleDS_HOME "./src")
set(EnsembleDS_SOURCES ${EnsembleDS_HOME}/EnsembleExpert.cpp
    ${EnsembleDS_HOME}/EnsembleExpertClass.cpp
    ${EnsembleDS_HOME}/EnsembleExpertStateMachine.cpp
    ${EnsembleDS_HOME}/AerotechAxis.cpp
    ${EnsembleDS_HOME}/AerotechAxisClass.cpp
    ${EnsembleDS_HOME}/AerotechAxisStateMachine.cpp
    ${EnsembleDS_HOME}/AerotechBox.cpp
    ${EnsembleDS_HOME}/AerotechBoxClass.cpp
    ${EnsembleDS_HOME}/AerotechBoxStateMachine.cpp
    ${EnsembleDS_HOME}/A3200Expert.cpp
    ${EnsembleDS_HOME}/A3200ExpertClass.cpp
    ${EnsembleDS_HOME}/A3200ExpertStateMachine.cpp)

add_subdirectory("${EnsembleDS_HOME}/lib")

set(SOURCES ${EnsembleDS_HOME}/ClassFactory.cpp
    ${EnsembleDS_HOME}/main.cpp)

add_executable(${PROJECT_NAME}
    ${EnsembleDS_SOURCES}
    ${SOURCES})

link_directories(${TANGO_PKG_LIBRARY_DIRS} ${YAT_LIBRARY_DIRS} ${YAT4TANGO_LIBRARY_DIRS})

target_include_directories(${PROJECT_NAME} PUBLIC
    ${EnsembleDS_HOME}
    ${TANGO_PKG_INCLUDE_DIRS}
    ${YAT_INCLUDE_DIRS}/yat
    ${YAT4TANGO_INCLUDE_DIRS})
    
target_link_libraries(${PROJECT_NAME} PUBLIC
    ${TANGO_PKG_LIBRARIES}
    yat4tango
    yat
    ensemble)

# install
include(GNUInstallDirs)

install(TARGETS
    ${PROJECT_NAME}
    RUNTIME DESTINATION "${CMAKE_INSTALL_FULL_BINDIR}"
)
