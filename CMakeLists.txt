project(zgame)
set(CMAKE_CXX_STANDARD 17)
cmake_minimum_required(VERSION 3.1)

include_directories(core/header utils)

set(HEADERS core/header/logger.hpp core/header/game.hpp core/header/windowSettings.hpp utils/stringutils.hpp core/header/clock.hpp core/header/window.hpp)
set(SOURCE_FILES core/src/logger.cpp core/src/game.cpp core/src/clock.cpp core/src/window.cpp)

add_executable(zgame ${HEADERS} ${SOURCE_FILES})
