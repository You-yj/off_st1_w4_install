#include <iostream>
#include "eigen_matric_cal.hpp"

void printMatric_1(const std::string& name , const Eigen::Matrix<double, 10, 10> & matrix)
{
    std::cout << "\n" << name << " =\n" << matrix << std::endl;
}

void printMatric_2(const std::string& name , const Eigen::Matrix<double, 5, 1> & matrix)
{
    std::cout << "\n" << name << " =\n" << matrix << std::endl;
}

