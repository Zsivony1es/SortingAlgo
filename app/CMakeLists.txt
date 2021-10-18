link_directories(../lib/SFML)
add_executable(${PROJECT_NAME} main.cpp)
include_directories(../lib/SFML/include)
target_link_libraries(${PROJECT_NAME} Functions Sorters SFML)

