cmake_minimum_required(VERSION 3.10)
project(SensorSystem)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(sensor
    src/main.cpp
    src/scheduler.cpp
    src/sensor.cpp
    src/alert.cpp
)
