# 创建静态库 matrix_ops，源码为当前目录下的eigen_matric_cal.cpp
add_library(matrix_ops STATIC eigen_matric_cal.cpp)

# PUBLIC：库自身 + 所有链接该库的程序都能访问全局include目录
target_include_directories(matrix_ops PUBLIC ${PROJECT_SOURCE_DIR}/include)

# PUBLIC：Eigen依赖传递给使用者
# 主程序app链接matrix_ops时，自动继承Eigen头文件与配置，不用再find_package
target_link_libraries(matrix_ops PUBLIC Eigen3::Eigen)
