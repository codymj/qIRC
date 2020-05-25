cmake_minimum_required(VERSION 3.16)


project(qIRC)


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


if(CMAKE_VERSION VERSION_LESS "3.7.0")
	set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()


find_package(Qt5 COMPONENTS Core REQUIRED)
find_package(Qt5 COMPONENTS Gui REQUIRED)
find_package(Qt5 COMPONENTS Network REQUIRED)
find_package(Qt5 COMPONENTS Widgets REQUIRED)


add_executable(qIRC
	src/main.cpp
	src/main_window.ui
	src/main_window.h
	src/main_window.cpp
)


target_link_libraries(qIRC Qt5::Core)
target_link_libraries(qIRC Qt5::Gui)
target_link_libraries(qIRC Qt5::Network)
target_link_libraries(qIRC Qt5::Widgets)
