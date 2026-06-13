# task_4_part_1

## 题1 完成全过程

1. 打开终端，`cd ~/新生yyj/OSWT_4_part_1/题1`进入该目录

2. `vim pie.cpp`

   <kbd>I</kbd> 进入编辑，写好程序，<kbd>Esc</kbd>，输入`:wq`保存退出

3. 完成分阶段编译:

   ```bash
   g++ -E pie.cpp -o pie.i
   g++ -S pie.i -o pie.s
   g++ -c pie.s -o pie.o
   g++ pie.o -o pie
   ./pie
   ```

4. 结果截图：

<div align="center">
    <img src="https://github.com/You-yj/off_st1_w4_install/blob/main/learning_note_photo/p1_t1.png?raw=true" width="500" />
</div>

## 题2 完成全过程

### 编写 C++/Eigen 程序

1. 打开终端，`cd ~/新生yyj/OSWT_4_part_1/题2`进入该目录

2. `touch eigen_matric_cal.cpp`

3. `vim eigen_matric_cal.cpp`

   <kbd>I</kbd> 进入编辑，写好程序，<kbd>Esc</kbd>，输入`:wq`保存退出

4. `g++ eigen_matric_cal.cpp -o run -I/usr/include/eigen3`或者

   `g++ eigen_matric_cal.cpp  -I/usr/include/eigen3 -o run`都可，会生成一个名为 run 的文件(图标像设置)

   > - `g++`：Linux 下 C++ 编译器
   >
   > - `eigen_matric_cal.cpp`：你的源代码文件
   >
   > - `-o run`：指定编译后生成的可执行程序名叫 `run`，**运行时输入 `./run`**
   >
   > - `-I/usr/include/eigen3`：**告诉编译器去哪里找 Eigen 的头文件**
   >
   >   系统安装的 eigen 头文件在 `/usr/include/eigen3`，不加这个参数会报 `#include <Eigen/Core>` 找不到头文件。

5. `./run`执行，得出结果

结果如下：
```
A^{T}B =
  -0.368265   -0.572461    -0.67645   -0.229234    0.161109   -0.756554    0.698603   -0.630231    0.353529     1.02758
    1.35305     2.40387   -0.185318  -0.0792432    -1.47387    -1.10715   -0.242229     -0.9312    0.731043    0.418759
 -0.0636341    0.328715    -1.26366     1.39426    0.808022     1.88478   -0.258543    -1.01905    -1.34851     1.02479
   0.815684     1.29528    -2.07476      1.6585    -1.21234   0.0375544   -0.688339    -2.96986    0.115329     1.17971
   0.042581    -1.28228   -0.160439    -1.30961    -1.42743     2.08882     1.07822     1.26295   -0.235131    -1.36422
   0.407366   -0.814303     1.23071    -1.40429  -0.0154727    -2.17856   -0.206326    0.177601  -0.0685428   -0.323985
   0.782941    0.425037       1.525    0.079822     1.35984    0.191618   0.0873626    -1.00285    -1.27292   -0.409633
   0.740746   -0.127938   -0.666676   -0.308433    -2.00904    -1.53192   -0.303264    -1.87589    0.833903   -0.531464
    1.41898     1.64002    0.229604    0.728502    -1.63327   0.0753715    -1.17845    -1.20119     2.42132 -0.00915438
   -1.32871    0.289472   -0.540467    0.237763    0.310223   -0.265736    -0.12275    0.160757   -0.025118   -0.280647
Mb =
55
85
70
64
85
```

### 编写 Python 程序

由于C++ `std::rand()` 和 Python `np.random` 是两套完全不同的随机算法，同样 seed=666 生成的随机矩阵 A、B数值不完全一样，故这里写了第二个计算

结果如下：
```
Mb = [55 85 70 64 85]
```

## 题3 完成全过程

1. 打开终端，`cd ~/新生yyj/OSWT_4_part_1/题3`进入该目录

2. `mkdir include` 新建名为 include 的文件夹，用于存放头文件(.hpp)

   `cd include` ，`touch eigen_matric_cal.hpp`

   `vim eigen_matric_cal.cpp`

   <kbd>I</kbd> 进入编辑，写好程序，<kbd>Esc</kbd>，输入`:wq`保存退出

3. `cd ~/新生yyj/OSWT_4_part_1/题3`进入该目录

   `mkdir src` 新建名为 src 的文件夹，用于存放我写的源文件(.cpp ，主要包括函数、主函数mian())

   - `cd src`，`touch eigen_matric_cal.cpp`

     <kbd>I</kbd> 进入编辑，写好(封装)函数完整逻辑，<kbd>Esc</kbd>，输入`:wq`保存退出

   - `cd ..`，`touch main.cpp`

     <kbd>I</kbd> 进入编辑，写好业务流程，定义矩阵、运算、调用上面封装好的工具函数，<kbd>Esc</kbd>，输入`:wq`保存退出

4. `cd ~/新生yyj/OSWT_4_part_1/题3`进入该目录

   `mkdir bin` 新建名为 bin 的文件夹，用于存放编译得到的可执行文件

5. 手动编译

   ```
   g++ src/main.cpp src/eigen_matric_cal.cpp \
       -Iinclude -I/usr/include/eigen3 \
       -o bin/run_3
   ```

   执行完后，在 bin 文件夹下会出现一个名为 run_3 的可执行文件

   ```
   ./bin/run_3
   ```

   执行该文件，得到结果，如下所示

   ```
   A^{T}B =
     -0.368265   -0.572461    -0.67645   -0.229234    0.161109   -0.756554    0.698603   -0.630231    0.353529     1.02758
       1.35305     2.40387   -0.185318  -0.0792432    -1.47387    -1.10715   -0.242229     -0.9312    0.731043    0.418759
    -0.0636341    0.328715    -1.26366     1.39426    0.808022     1.88478   -0.258543    -1.01905    -1.34851     1.02479
      0.815684     1.29528    -2.07476      1.6585    -1.21234   0.0375544   -0.688339    -2.96986    0.115329     1.17971
      0.042581    -1.28228   -0.160439    -1.30961    -1.42743     2.08882     1.07822     1.26295   -0.235131    -1.36422
      0.407366   -0.814303     1.23071    -1.40429  -0.0154727    -2.17856   -0.206326    0.177601  -0.0685428   -0.323985
      0.782941    0.425037       1.525    0.079822     1.35984    0.191618   0.0873626    -1.00285    -1.27292   -0.409633
      0.740746   -0.127938   -0.666676   -0.308433    -2.00904    -1.53192   -0.303264    -1.87589    0.833903   -0.531464
       1.41898     1.64002    0.229604    0.728502    -1.63327   0.0753715    -1.17845    -1.20119     2.42132 -0.00915438
      -1.32871    0.289472   -0.540467    0.237763    0.310223   -0.265736    -0.12275    0.160757   -0.025118   -0.280647
   
   Mb =
   55
   85
   70
   64
   85
   ```

## 题4 完成全过程

1. Eigen 的 `rowwise()`、`colwise()`；

   - `rowwise()`：按**行**遍历矩阵，把每一行当成独立一维向量操作

     `colwise()`：按**列**遍历矩阵，把每一列当成独立一维向量操作

   - 归约运算（每行 / 列压缩成一个标量）

     支持 `sum()/mean()/maxCoeff()/minCoeff()/norm()`

     ```cpp
     MatrixXd M(3,4);
     auto row_mean = M.rowwise().mean();  // 3×1 列向量，每行均值
     auto col_sum  = M.colwise().sum();   // 1×4 行向量，每列总和
     ```

2. Eigen 与 NumPy/PyTorch 自动广播机制的差异

   Eigen**无自动广播**，向量与矩阵运算维度不匹配会直接报错，必须手动用 `rowwise()`/`colwise()` 或 `replicate()` 显式扩展向量。

   示例：

   ```cpp
   #include <iostream>
   #include <Eigen/Core>
   
   int main()
   {
       Eigen::Matrix<double, 3, 4> A;
       Eigen::Matrix<double, 1, 3> b;
       Eigen::Matrix<double, 1, 4> a;
   
       // 手动赋值
       A << 1, 2, 3, 4,
            6, 7, 8, 9,
            2, 3, 4, 5;
       b << 2, 0, 1;
       a << 3, 12, 1, 1;
   
       std::cout << "A = \n" << A << std::endl;
       std::cout << "b = \n" << b << std::endl;
       std::cout << "a = \n" << a << std::endl;
       std::cout << "A_row_mean\n" << A.rowwise().mean() << std::endl; // 3×1 列向量，每行均值
       std::cout << "A_col_sum\n" << A.colwise().sum() << std::endl;   // 1×4 行向量，每行求和
       std::cout << "A的每行都与a相加\n" << A.rowwise() + a  << std::endl;   // 由于A的每行都与a形状相同，这个结果就类似于numpy的广播机制
   }
   ```

   结果：

   ```
   A = 
   1 2 3 4
   6 7 8 9
   2 3 4 5
   b = 
   2 0 1
   a = 
    3 12  1  1
   A_row_mean
   2.5
   7.5
   3.5
   A_col_sum
    9 12 15 18
   A的每行都与a相加
    4 14  4  5
    9 19  9 10
    5 15  5  6
   ```

3. 必须显式指定方向的场景

   矩阵 × 行向量 / 矩阵 × 列向量，做逐行 / 逐列四则、归一、偏移、缩放时，不加 `rowwise/colwise` 会触发维度错误。

## 问题一：vscode的 C/C++ 插件找不到 Eigen 的头文件

> **注意事项**：感觉尽量用终端而不是用vscode，终端更方便(就不会遇到上面的问题了)，vscode还得加东西(上面的，还得在该文件夹下`code .`打开，有时候还没反应)

现象：`<Eigen/Core>` 报红、波浪线失效

原因：`includePath` 没配置正确

解决：

1. 更新软件源（必做，防止找不到包）

   打开终端输入：`sudo apt update`

   输入电脑密码，等待更新完成。

2. 执行安装命令`sudo apt install libeigen3-dev -y`

   `-y` 代表自动确认安装，不用手动输 yes。

3. 验证是否安装成功、路径是否正确

   - 验证 1：查看目录是否存在`ls /usr/include/eigen3`

     能看到 `Eigen` 文件夹说明安装到位。

   - 验证 2：直接查看你要用的头文件`ls /usr/include/eigen3/Eigen/Core`

     输出文件存在 = 路径完全正确

4. **配套 VSCode 配置（解决红色波浪线）**

   - 终端进入你的项目文件夹，用 `code .` 打开整个文件夹

   - Ctrl+Shift+P → `C/C++: Edit Configurations (JSON)`

   - 在 includePath 里加上全局路径：

     ```json
     "includePath": [
         "${workspaceFolder}/**",
         "/usr/include/eigen3"
     ]
     ```

- Ctrl+Shift+P 执行 `Reload Window`。

# task_4_part_2

## 题1 完成全过程

基于**part_1中的题1**

1. 在`题1`目录下新建`CMakeLists.txt`文件，编辑内容如下：

   ```cmake
   # 1. 指定最低支持的 CMake 版本
   cmake_minimum_required(VERSION 3.18)
   
   # 2. 定义项目名，指定只使用 C++ 语言
   project(Task4_part2 LANGUAGES CXX)
   
   # 3. 设置 C++17 标准
   set(CMAKE_CXX_STANDARD 17)
   # 强制要求编译器必须支持 C++17，不自动降级
   set(CMAKE_CXX_STANDARD_REQUIRED ON)
   
   # 4. 生成可执行程序 run_1，依赖源码 src/main.cpp
   add_executable(run_1 src/main.cpp)
   
   # 5. 声明头文件路径
   target_include_directories(run_1 PRIVATE include)
   ```

2. 使用以下命令构建并运行：

   ```bash
   cmake -S . -B build
   cmake --build build
   ./build/run_1
   ```

<div align="center">
    <img src="https://github.com/You-yj/off_st1_w4_install/blob/main/learning_note_photo/p2_t1.png?raw=true" width="500" />
</div>

## 题2、3 完成全过程

由于我的part_1中除了题1，其他均用到了Eigen，故这里将part_2中的题2、3放在一起完成

基于**part_1中的题3**

1. 打开终端，`cd ~/新生yyj/OSWT_4_part_2/题2_与题3一起写了`进入该目录

2. `vim CMakeLists.tst`

   <kbd>I</kbd> 进入编辑(若没有该文件会自动创建)，编辑内容如下：

   ```cmake
   cmake_minimum_required(VERSION 3.18)
   project(Task4_part2_tesk2 LANGUAGES CXX)
   set(CMAKE_CXX_STANDARD 17)
   set(CMAKE_CXX_STANDARD_REQUIRED ON)
   #=======================================#
   
   #创建静态库(计算库) matrix_ops  
   add_library(matrix_ops STATIC
       src/eigen_matric_cal.cpp
   )
   
   # 给创建的计算库指定头文件目录 PUBLIC
   target_include_directories(matrix_ops PUBLIC include)
   
   add_executable(run_2 src/main.cpp)
   
   #将可执行文件链接到创建的计算库
   target_link_libraries(run_2 PRIVATE matrix_ops)
   
   #集成 Eigen
   find_package(Eigen3 3.3 REQUIRED NO_MODULE)
   ##选择该方式的原因：
   #系统环境已安装 Eigen
   
   target_link_libraries(matrix_ops PUBLIC Eigen3::Eigen)
   ```

   写好程序，<kbd>Esc</kbd>，输入`:wq`保存退出

3. 说明 `PUBLIC` / `PRIVATE` 的使用理由

   - ```cmake
     target_include_directories(matrix_ops PUBLIC include)
     ```

     - PRIVATE：仅当前库 `matrix_ops` 编译自己的 .cpp 时可见，链接它的 `run_2` 不会继承这个 include 路径
     - PUBLIC：`matrix_ops` 自己能用，所有链接 `matrix_ops` 的目标（`run_2`）自动继承该头文件路径

   - ```cmake
     target_link_libraries(run_2 PRIVATE matrix_ops)
     ```

     - `run_2` 是最终可执行程序，不会被其他任何 target 再链接；
     - 如果写成 PUBLIC matrix_ops：CMake 会假设：任何后续链接 `run_2` 的程序，也必须自动链接 `matrix_ops`。但 `run_2` 是可执行文件，没有别人会链接它，用 PUBLIC 多余，规范写法统一用 PRIVATE

   - ```cmake
     target_link_libraries(matrix_ops PUBLIC Eigen3::Eigen)
     ```

     - 如果写 `PRIVATE Eigen3::Eigen`：

       1. 只有 `matrix_ops` 库内部编译时能找到 Eigen 头文件；

       2. `run_2` 编译 main.cpp 时，不会继承 Eigen 的头文件路径，直接报错 `fatal error: Eigen/Core: No such file or directory`

     - 如果写 `PUBLIC Eigen3::Eigen`：

       1. `matrix_ops` 编译自身 `.cpp` 可以使用 Eigen；
       2. **所有链接 `matrix_ops` 的可执行 / 其他库，自动继承 Eigen 全部配置**；
       3. `run_2` 只需要 `target_link_libraries(run_2 PRIVATE matrix_ops)`，不用重复 `find_package(Eigen3)`。

4. 使用以下命令构建并运行：

   ```bash
   cmake -S . -B build
   cmake --build build
   ./build/run_2
   ```

   ```text
   题2_与题3一起写了/
   ├── CMakeLists.txt
   ├── include/
   │   └── eigen_matric_cal.hpp
   └── src/
      ├── eigen_matric_cal.cpp
      └── main.cpp
   ```

<div align="center">
    <img src="https://github.com/You-yj/off_st1_w4_install/blob/main/learning_note_photo/p2_t2_t3.png?raw=true" width="500" />
</div>

## 题4 完成全过程

利用part1中的分目录式管理CMakeLists.txt，我基于上述得到的文件进行了分目录管理CMakeLists.txt操作，

```text
题4_基于题3_install/
├── CMakeLists.txt            # 根入口，全局配置、依赖、加载src子目录
├── include/                        # 全局公共头文件（所有模块共享）
│   └── eigen_matric_cal.hpp
└── src/
    ├── CMakeLists.txt        # 中转层：依次加载矩阵库、应用程序
    ├── app/                            # 可执行程序模块
    │   ├── CMakeLists.txt  
    │   └── main.cpp
    └── matrix/                      # 矩阵算法静态库模块
        ├── CMakeLists.txt
        └── eigen_matric_cal.cpp
```

然后在`include`根目录 CMakeLists.txt 末尾追加 install 代码

```cmake
install(TARGETS run_4
        RUNTIME DESTINATION bin)

install(TARGETS matrix_ops
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib)

install(DIRECTORY include/
        DESTINATION include)
```

执行：

```bash
cmake -S . -B build -DCMAKE_INSTALL_PREFIX=install
cmake --build build
cmake --install build
```

得到：

```text
install/
├── bin/
│   └── run_4
├── lib/
│   └── libmatrix_ops.a
└── include/
    └── eigen_matric_cal.hpp
```

执行：

```text
# 进入项目根目录执行
./install/bin/run_4
```

<div align="center">
    <img src="https://github.com/You-yj/off_st1_w4_install/blob/main/learning_note_photo/p2_t4.png?raw=true" width="500" />
</div>

## 组队互验报告

- 双方姓名或 Git 用户名；
- 操作系统与 CMake 版本；
- 构建命令；
- 成功或失败证据；
- 遇到的问题与解决方式；
- 对 CMake 可复现性的简短总结。

### 双方信息

- **甲方（验证方）**：You-yj

  **乙方（被验证方）**：zhouyao-suanhai

### 测试环境

| 项目       | 甲方环境                               | 乙方环境       |
| ---------- | -------------------------------------- | -------------- |
| 操作系统   | Ubuntu 24.04 (Linux 6.17.0-35-generic) | Ubuntu 22.04.5 |
| CMake 版本 | 3.28.3                                 | 3.22.1         |

### 构建命令

使用以下标准流程：

```bash
git clone <对方仓库地址>
cd <仓库目录>
cmake -S . -B build -DCMAKE_INSTALL_PREFIX=install
cmake --build build
cmake --install build
```

### 甲方（You-yj）验证乙方（zhouyao-suanhai）仓库报告

- **克隆命令**：`git clone git@github.com:zhouyao-suanhai/task4_cmake_matrix.git`
- **构建命令**：同上
- **成功/失败**：成功 ✅
- **证据**：乙方仓库结构均基于 Eigen3 实现矩阵运算，CMake 配置正确，生成 `task_4_project` 可执行文件并输出预期结果（详见下方运行截图）。

<div align="center">
    <img src="https://github.com/You-yj/off_st1_w4_install/blob/main/learning_note_photo/zudui_1.png?raw=true" width="500" />
</div>
<div align="center">
    <img src="https://github.com/You-yj/off_st1_w4_install/blob/main/learning_note_photo/zudui_2.png?raw=true" width="800" />
</div>


**证据说明**：

- 构建日志完整（CMake 输出、make 输出）——乙方仓库的 `build/CMakeFiles/CMakeConfigureLog.yaml` 及 `CMakeCache.txt` 均记录了完整配置信息。
- 运行输出与代码逻辑一致（`A` 为 10×10 对角阵 1~10，`B` 为全 1 矩阵，`A.transpose()*B` 每行乘以对角元；`M` 为 5×5 单位阵，`b=(1,2,3,4,5)^T`，乘积即为 `b` 本身）。
- 甲方实际克隆、构建并运行，得到上述输出，无错误或警告。

一、CMake 正确性验证

| 标准要求                                  | 乙方仓库情况 |
| ----------------------------------------- | ------------ |
| 使用 target-based 写法                    | ✅ 符合       |
| 构建目录与源码目录分离                    | ✅ 符合       |
| include 路径、库链接和 Eigen 依赖声明清晰 | ✅ 符合       |
| 不依赖绝对路径                            | ✅ 符合       |

二、项目结构验证

| 标准要求                                | 乙方仓库情况 |
| --------------------------------------- | ------------ |
| 可执行文件与计算库职责分离              | ✅ 符合       |
| 头文件、源文件、CMakeLists.txt 位置合理 | ✅ 符合       |
| 新增源文件时，构建规则容易维护          | ✅ 符合       |

三、可复现性验证

| 标准要求                               | 乙方仓库情况     |
| -------------------------------------- | ---------------- |
| 能按说明构建和运行，或失败时能定位原因 | ✅ 成功构建并运行 |
| 构建日志完整                           | ✅ 完整           |
| 报告有具体证据（非仅“成功/失败”）      | ✅ 提供(上述截图) |

### CMake 可复现性的简短总结

本次互验充分体现了 CMake 在 **跨环境可复现构建** 方面的优点：

1. **声明式依赖**：`find_package(Eigen3)` 与 `target_link_libraries` 结合，无需手动指定头文件路径，在不同机器上只要 Eigen3 已安装即可自动定位。
2. **目标隔离**：静态库 `matrix_ops` 与可执行文件 `task_4_project` 职责分离，依赖传递使用 `PUBLIC`/`PRIVATE` 精准控制可见性。
3. **源码外构建**：`mkdir build && cd build` 实现了构建目录与源码目录完全分离，不产生任何污染。
4. **跨环境一致性**：甲方(CMake 3.28.3)在 Ubuntu 24.04 环境中克隆、配置、构建、运行，得到与乙方(CMake 3.22.1 , Ubuntu 22.04.5 )预期完全一致的结果。

总体评价：CMake 配置良好的项目，在不同开发者之间能够可靠地重现构建结果，满足协作开发的基本要求。





