//
// Created by Gabe on 3/27/2020.
//

#include <iostream>
#include <fstream>

int main(){
    std::ifstream in_file;
    std::string line;
    in_file.open("../section19/test.txt");
    if(!in_file){
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    std::cout << "file is good to go" << std::endl;
    in_file >> line;
    std::cout << line << std::endl;

    return 0;
}