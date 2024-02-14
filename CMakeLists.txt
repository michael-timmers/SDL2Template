cmake_minimum_required(VERSION 3.16.3)
project(SDL2Template
	VERSION 1.0
	DESCRIPTION "a blank SDL2 template."
	LANGUAGES CXX)

#C++ version
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#use custom (definetly) find moduals:
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

#SDL package
find_package(SDL2 REQUIRED)
find_package(SDL2_ttf REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_TTF_INCLUDE_DIRS})

add_executable(SDL2Template
	src/eventHandler.cpp
	src/eventHandler.hpp
	src/globals.hpp
	src/headers.hpp
	src/main.cpp
	src/renderer.cpp
	src/renderer.hpp
	src/timer.cpp
	src/timer.hpp
	src/utils.cpp
	src/utils.hpp
)

target_link_libraries(SDL2Template ${SDL2_LIBRARIES} ${SDL2_TTF_LIBRARIES})