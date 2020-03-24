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

     /*
     std::fstream in_file {"scratch.txt",std::ios::in};
     //Open for reading in binary mode
     std::fstream in_file1 {"scratch.txt", std::ios::in | std::ios::binary};

    std::ifstream in_file2 {"scratch.txt",std::ios::in};
    std::ifstream in_file3 {"scratch.txt"};
    //Open for reading in binary mode
    std::ifstream in_file4 {"scratch.txt", std::ios::in | std::ios::binary};

    //get file from user on run time
    std::ifstream in_file5;
    std::string filename;
    std::cin >> filename; //get the file's name

    in_file.open(filename);
    //or
    in_file.open(filename, std::ios::binary);

    //TO CHECK IF OPEN
    if (in_file.is_open()){
        //read from it
    } else {
        //file could not be opened
        //does not exist
        //should the program terminate?
    }

    int num {0};
    double total {0};
    std::string name {""};
    in_file >> num;
    in_file >> total >> name;

    //file close
    in_file.close();
    in_file1.close();
    in_file2.close();
    in_file3.close();
    in_file4.close();
    in_file5.close();
    **/

     std::ifstream in_file("../section19/scratch.txt"); //open file
     std::string line {};
     if(!in_file){ //check if file is open
         std::cerr << "File open error" <<std::endl;
         return 1; //exit main
     }
     /*while(!in_file.eof()){ //while not at the end
         std::getline(in_file, line); //read line
         std::cout << line << std::endl; //display line
     }*/
     while(std::getline(in_file,line)) //getline returns true if the read was successful
         std::cout <<line << std::endl; //display the line

     in_file.close();//close the file

    return 0;
 }