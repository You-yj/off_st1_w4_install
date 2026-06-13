#ifndef EIGEN_MATRIC_CAL_HPP
#define EIGEN_MATRIC_CAL_HPP

#include <iostream>
#include <Eigen/Core>

void printMatric_1(const std::string& name , const Eigen::Matrix<double, 10, 10> & matrix);//用于10阶矩阵的乘积

void printMatric_2(const std::string& name , const Eigen::Matrix<double, 5, 1> & matrix);//用于5阶矩阵与列向量乘积

#endif 
