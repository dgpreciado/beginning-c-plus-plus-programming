//
// Created by Gabe on 3/22/2020.
//
#include <iostream>
#include <iomanip>

int main_float_point(){
    //default precision is 6 digits

    double num {123456789.987654321};

    //std::cout << std::setprecision(9);
    //std::cout << "Should display 123456790 : " << num << std::endl;

    //std::cout << std::setprecision(6) << std::fixed;
    //std::cout << "Precision after the decimal point 6, should display 123456789.987654 : " << num << std::endl;

    //std::cout << std::setprecision(3) << std::fixed;
    //std::cout << "Precision after the decimal point 3, should display 123456789.988 : " << num << std::endl;

    //std::cout << std::setprecision(3) << std::scientific << std::uppercase << std::showpos;
    //std::cout << "Precision 3, scientific, uppercase, showpos, should display +1.235E+008 : " << num << std::endl;

    std::cout << std::setprecision(9) << std::scientific << std::uppercase << std::showpoint << std::noshowpos;
    std::cout <<"Precision 9, scientific, uppercase, showpoint, should display 1.234567900E+008 : " << num << std::endl;

    //two ways to reset the flags, setf and the resetiosflags
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout <<std::resetiosflags(std::ios::floatfield);
    return 0;
}
