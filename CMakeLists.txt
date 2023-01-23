
cmake_minimum_required (VERSION 3.8)

project ("Metric")

# Включите подпроекты.
add_subdirectory ("Metric")

add_executable(metric)
target_sources(metric PRIVATE main.cpp Metric.cpp Metric.h Digit.cpp Digit.h)