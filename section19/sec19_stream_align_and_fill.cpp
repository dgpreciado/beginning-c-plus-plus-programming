//
// Created by Gabe on 3/22/2020.
//

#include <iomanip>
#include <iostream>

void ruler(){
    std::cout << "\n12345678901234567890123456789012345678901234567890" <<std::endl;
}

int main_widths_align_fill() {
    /*
//field width setw
    double num{1234.5678};
    std::string hello{"Hello"};

    //sets width 10 for num only, does not apply to hello
    std::cout << std::setw(10) << num << hello << std::endl;
    //set width before all variables and them a width of 10 and default align is right
    std::cout << std::setw(10) << num << std::setw(10) << hello << std::setw(10) << hello << std::endl;
    //set width 10 and and align left to num only
    std::cout << std::setw(10) << std::left << num << hello << std::endl;

    //Setfill('-');, only applies if a width is specified, std::left is persistent
    std::cout << std::left << std::setfill('*') << std::setw(10) << num << hello << std::endl;
    //set width and setfill are set for both variables.
    std::cout << std::left << std::setfill('*') << std::setw(10) << num
    << std::setfill('-') << std::setw(15) << hello << std::endl;
**/
    int num1 {1234};
    double num2 {1234.56789};
    std::string hello {"Hello"};

    std::cout << "\n-- setw(10) 'width' needs to be set for setfill to persist--------" << std::endl;
    ruler();
    std::cout   << std::setw(10) << std::left << std::setfill('*') << num1
                << std::setw(10) << num2
                << std::setw(10) << hello
                << std::endl;

    return 0;
}