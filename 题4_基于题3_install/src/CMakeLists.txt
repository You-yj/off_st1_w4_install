add_subdirectory(matrix)# 先编译矩阵算法库模块
add_subdirectory(app)# 再编译应用程序模块（app依赖matrix_ops库，顺序不能颠倒）
