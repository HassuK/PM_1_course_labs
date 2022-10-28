
#
cmake_minimum_required (VERSION 3.8)


project ("лаба 7, симейк")
# Добавьте источник в исполняемый файл этого проекта.


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_executable (cmaketest "лаба 7, симейк.cpp" "лаба 7, симейк.h" "functions.cpp")

file(COPY "input.txt" DESTINATION "/")

