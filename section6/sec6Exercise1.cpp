//
// Created by Gabe on 15-Dec-19.
//
#include <iostream>
#include <string>
using namespace std;

int age {18}; //global variable

int main(){
    //employee_profile
    cout << "Enter name" << endl;
    string name ="";
    cin >> name;

    int age {16};//local variable
    //cin >> age;

    double hourly_wage {23.50};

    cout << name << " " << age << " " << hourly_wage;

    return 0;
}
