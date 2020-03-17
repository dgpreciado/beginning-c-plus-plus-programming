//
// Created by Gabe on 3/16/2020.
//

#include <iomanip>
#include "iostream"

int main(){
    int num {255};
    std::cout << std::dec << num << " should display 255" << std::endl;
    std::cout << std::hex << num << " should display ff" << std::endl;
    std::cout << std::oct << num << " should display 377" << std::endl;

    std::cout << std::showbase;
    std::cout << " show base " << std::endl;
    std::cout << std::dec << num << " should display 255" << std::endl;
    std::cout << std::hex << num << " should display 0xff" << std::endl;
    std::cout << std::oct << num << " should display 0377" << std::endl;

    std::cout << " show base persists " << std::endl;
    std::cout << std::dec << num << " should display 255" << std::endl;
    std::cout << std::hex << num << " should display 0xff" << std::endl;
    std::cout << std::oct << num << " should display 0377" << std::endl;

    std::cout << std::noshowbase;
    std::cout << " no show base " << std::endl;
    std::cout << std::dec << num << " should display 255" << std::endl;
    std::cout << std::hex << num << " should display 0xff" << std::endl;
    std::cout << std::oct << num << " should display 0377" << std::endl;

    std::cout << std::showbase << std::uppercase;
    std::cout << " show base AND uppercase " << std::endl;
    std::cout << std::dec << num << " should display 255" << std::endl;
    std::cout << std::hex << num << " should display 0XFF" << std::endl;
    std::cout << std::oct << num << " should display 0377" << std::endl;
    std::cout << std::dec;

    int num2 {-255};
    std::cout << std::showpos;
    std::cout << "\n show positive " << std::endl;
    std::cout << num << " should display +255 " << std::endl;
    std::cout << num2 << " should display -255 " << std::endl;

    std::cout << std::showpos;
    std::cout << "\n no show positive " << std::endl;
    std::cout << num << " should display 255 " << std::endl;
    std::cout << num2 << " should display -255 " << std::endl;

    /* set using the setf
     * std::cout.setf(std::ios::showbase);
     * std::cout.setf(std::ios::uppercase);
     * std::cout.setf(std::ios::showpos);
     *
     * Reset to defaults
     * std::cout << std::resetiosflags(std::ios::basefield);
     * std::cout << std::resetiosflags(std::ios::showbase);
     * std::cout << std::resetiosflags(std::ios::showpos);
     * std::cout << std::resetiosflags(std::ios::uppercase);
     * **/


    return 0;
}