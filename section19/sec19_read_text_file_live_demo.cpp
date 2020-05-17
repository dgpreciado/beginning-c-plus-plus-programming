//
// Created by Gabe on 3/27/2020.
//

#include <iostream>
#include <fstream>
#include <iomanip>

int main225(){
    std::ifstream in_file;
    std::string line;
    in_file.open("../section19/test2.txt");
    if(!in_file){
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    std::cout << "file is good to go" << std::endl;
    //in_file >> line;
    //std::cout << line << std::endl;
    int num {};
    double total {};

    /*single line read*/
    /*in_file>> line >> num >> total;
    std::cout << line << std::endl;
    std::cout << num << std::endl;
    std::cout << total << std::endl;
    */
    /*multi line read*/
    while (!in_file.eof()){
        in_file>> line >> num >> total;
        std::cout << std::left << std::setw(8) << line << std::setw(5) << num
             << total << std::endl;
    }
    in_file.close();
    return 0;
}