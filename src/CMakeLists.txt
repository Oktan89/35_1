cmake_minimum_required(VERSION 3.0.0)

set(SOURCES main.cpp)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(Initializer ${SOURCES})

target_include_directories(Initializer PUBLIC ${MY_INCLUDE_DIR})