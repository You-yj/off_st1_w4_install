cmake_minimum_required(VERSION 3.18)

project(Task4_part2_tesk2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Eigen3 3.3 REQUIRED NO_MODULE)

add_subdirectory(src) # 递归进入src目录，执行src/CMakeLists.txt

install(TARGETS run_4
        RUNTIME DESTINATION bin)

install(TARGETS matrix_ops
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib)

install(DIRECTORY include/
        DESTINATION include)
