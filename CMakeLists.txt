cmake_minimum_required(VERSION 3.27)
project(Tanks)

set(CMAKE_CXX_STANDARD 17)

include_directories(C:\\Program Files (x86)\\MinGW\\include)

cmake_minimum_required(VERSION 3.19)
project(Tanks C)
set(CMAKE_C_STANDARD 99)
add_executable(Tanks


        main.cpp

        AllegroBase.cpp
        ../Tanks/AllegroBase.cpp
        AllegroBase.hpp
        Figure.cpp
        Square.cpp
        Player.cpp
        Screensaver.cpp
        AllegroApp.cpp


)
target_link_libraries (Tanks allegro allegro_primitives )