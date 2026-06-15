cmake_minimum_required(VERSION 3.22)
project(Box2DTest)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

# Download Box2D automatically
FetchContent_Declare(
  box2d
  GIT_REPOSITORY https://github.com/erincatto/box2d.git
  GIT_TAG main
)

FetchContent_MakeAvailable(box2d)

add_executable(box2d_test src/main.cpp)

target_link_libraries(box2d_test PRIVATE box2d)