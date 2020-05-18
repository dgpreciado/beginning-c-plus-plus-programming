//
// Created by gabe on 5/18/20.
//

#include <fstream>
#include <iostream>
#include <iomanip>

int main(){
    std::ifstream in_file;
    in_file.open("../section19/poem.txt");
    if(!in_file){
        std::cerr << "Problem opening file" << std::endl;
    }
    std::string word {};
    std::string text {};
    int count {0};
    int found {0};

    std::cout << "Enter the substring to search for: " << std::endl;
    std::cin >> word;

    while(in_file >> text){
        ++count;
        if(text.find(word) != std::string::npos){
            ++found;
        }
    }
    std::cout << count << " words were searched..\n" << "The substring " << word << " was found " << found << " times\n";
    return 0;
}