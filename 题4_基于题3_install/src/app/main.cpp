#include <iostream>
#include <Eigen/Core>
#include "eigen_matric_cal.hpp"

int main()
{
    // 全局固定随机种子，所有 setRandom 结果固定
    std::srand(666);

    // 10×10 固定二维矩阵
    Eigen::Matrix<double, 10, 10> A, B;
    Eigen::Matrix<double, 5, 5> M;

    // 5维列向量
    Eigen::Matrix<double, 5, 1> b;

    // 矩阵：无参 setRandom，不能传数字
    A.setRandom();
    B.setRandom();

    // 手动赋值
    M << 1, 2, 3, 4, 5,
         6, 7, 8, 9, 1,
         2, 3, 4, 5, 6,
         7, 8, 9, 1, 2,
         3, 4, 5, 6, 7;

    b << 1, 2, 3, 4, 5;

    printMatric_1("A^{T}B",A.transpose() * B);
    printMatric_2("Mb",M * b);
    return 0;
}






