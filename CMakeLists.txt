cmake_minimum_required(VERSION 3.7)
project(Metal_Slug)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp GameCharacter.cpp GameCharacter.h Weapon.cpp Weapon.h GameMap.cpp GameMap.h Box.cpp Box.h Score.cpp Score.h)
add_executable(Metal_Slug ${SOURCE_FILES})