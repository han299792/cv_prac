cmake_minimum_required(VERSION 3.10)
project(CameraMultiView CXX)

find_package(OpenCV REQUIRED)

add_executable(camera_app main.cpp)

target_link_libraries(camera_app PRIVATE ${OpenCV_LIBS})
target_include_directories(camera_app PRIVATE ${OpenCV_INCLUDE_DIRS})