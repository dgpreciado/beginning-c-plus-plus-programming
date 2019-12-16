//
// Created by Gabe on 15-Dec-19.
//

#include <iostream>
using namespace std;

int main2(){
    //int age; //uninitialized
    //int age = 21; //c-like intialization
    //int age (21); //Constructor initializtion
    //int age {21}; //c++11 list intialization syntax
    int width {0};
    cout << "Enter the width of the room: " << endl;
    cin >> width;

    cout << "Enter the height of the room" << endl;
    int height {0};
    cin >> height;
    cout << "the area of the room is: " << width * height << " square feet" << endl;
    return 0;
}
