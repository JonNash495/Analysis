cmake_minimum_required(VERSION 3.16)

project(main)

set(AUTOMOC_MOC_OPTIONS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES main.cc ../sources/getter.cc )
set(HEADERS ../headers/getter.hpp)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

add_executable(
    main ${SOURCES}
)

target_link_libraries(main PRIVATE Qt5::Core Qt5::Widgets)
