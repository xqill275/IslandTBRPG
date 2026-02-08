cmake_minimum_required(VERSION 3.31)
project(islandTBRPG)

set(CMAKE_CXX_STANDARD 20)

add_executable(islandTBRPG main.cpp
        src/gameControler.cpp
        src/headers/gameControler.h
        src/player.cpp
        src/headers/player.h
        src/actor.cpp
        src/headers/actor.h)
