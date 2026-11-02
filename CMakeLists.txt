cmake_minimum_required(VERSION 4.2)

project(retro-raycaster)

add_subdirectory(./lib/SDL)

add_executable(retro-raycaster 
	src/main.c 
	src/map.c
	src/window.c
)

target_link_libraries(retro-raycaster SDL3::SDL3)


