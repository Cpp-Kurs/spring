cmake_minimum_required(VERSION 3.10)
project(spring VERSION 0.1.0 LANGUAGES CXX)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(spring main.cc viewer.h)
target_compile_features(spring PRIVATE cxx_std_11)
target_link_libraries(spring PRIVATE Qt5::Widgets)
set_target_properties(spring PROPERTIES AUTOMOC TRUE)
