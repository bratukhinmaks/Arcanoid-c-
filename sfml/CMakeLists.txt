cmake_minimum_required(VERSION 3.2)
project(smfl)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(smfl Ball.cpp Ball.h Block.cpp Block.h BlockField.cpp BlockField.h Game.cpp Game.h GlobalObjects.cpp GlobalObjects.h main.cpp Paddle.cpp Paddle.h ${SOURCE_FILES})

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")

find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(smfl ${SFML_LIBRARIES})
endif()

