//
// Created by Gabe on 15-Dec-19.
//
#include <iostream>
#include <climits>
using namespace std;
int main648(){

    cout << "size of the information" << endl;
    cout << "========================" << endl;
    cout << "char: "<< sizeof(char) << " bytes." << endl;
    cout << "int: "<< sizeof(int) << " bytes." << endl;
    cout << "unsigned int: "<< sizeof(unsigned int) << " bytes." << endl;
    cout << "short: "<< sizeof(short) << " bytes." << endl;
    cout << "long: "<< sizeof(long) << " bytes." << endl;
    cout << "long long: "<< sizeof(long long) << " bytes." << endl;

    cout << "========================" << " bytes." << endl;
    cout << "float: "<< sizeof(float) << " bytes." << endl;
    cout << "double: "<< sizeof(double) << " bytes." << endl;
    cout << "long double: "<< sizeof(long double) << " bytes." << endl;

    cout << "========================" << endl;
    cout << "Minimum values information" << endl;
    cout << "char: "<< CHAR_MIN << endl;
    cout << "int: "<< INT_MIN << endl;
    cout << "short: "<< SHRT_MIN << endl;
    cout << "long: "<< LONG_MIN << endl;
    cout << "long long: "<< LLONG_MIN << endl;

    cout << "========================" << endl;
    cout << "Max values information" << endl;
    cout << "char: "<< CHAR_MAX << endl;
    cout << "int: "<< INT_MAX << endl;
    cout << "short: "<< SHRT_MAX << endl;
    cout << "long: "<< LONG_MAX << endl;
    cout << "long long: "<< LLONG_MAX << endl;

    cout << "========================" << endl;
    cout << "size of variable names is: "<< endl;
    int age {21};
    cout << "size of value of age is: "<< sizeof(age) << " bytes." << endl;
    cout << "size of age is: "<< sizeof age << " bytes." << endl;

    double wage {22.24};
    cout << "size of value of wage is: "<< sizeof(wage) << " bytes." << endl;
    cout << "size of wage is: "<< sizeof wage << " bytes." << endl;
}
