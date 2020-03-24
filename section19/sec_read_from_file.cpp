//
// Created by Gabe on 3/23/2020.
//
#include <iostream>
#include <fstream>
//read from files use #include <fstream> or <ifstream>
/** steps to read form a file
 * 1. #include <fstream> or #include <ifstream>
 * 2. declare an fstream or ifstream object
 * 3. Connect it to a file on your file system (opens it for reading)
 * 4. Read data from the file the stream
 * 5. Close the stream
 * **/
 int main(){
     std::fstream in_file {"scratch.txt",std::ios::in};
     //Open for reading in binary mode
     std::fstream in_file1 {"scratch.txt", std::ios::in | std::ios::binary};
     return 0;
 }