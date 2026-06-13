# 生成可执行文件 run_4
add_executable(run_4 main.cpp)

# PRIVATE：app仅内部使用matrix_ops，不向外传递依赖
target_link_libraries(run_4 PRIVATE matrix_ops)
