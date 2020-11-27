project(zgame)
set(CMAKE_CXX_STANDARD 17)
cmake_minimum_required(VERSION 3.1)

include_directories(core/header)

set(HEADERS core/header/logger.hpp core/header/engine.hpp)
set(SOURCE_FILES core/src/logger.cpp core/src/engine.cpp)

add_executable(zgame ${HEADERS} ${SOURCE_FILES})
