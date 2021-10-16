cmake_minimum_required(VERSION 3.10)
project(SortingAlgo VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)
include_directories(lib/SFML/include)
# For including headers

add_subdirectory(src)
add_subdirectory(lib/SFML)
add_subdirectory(app)
# Always add executable last!
