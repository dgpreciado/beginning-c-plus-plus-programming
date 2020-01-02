//
// Created by Gabe on 31-Dec-19.
//
#include <iostream>
#include <cmath>//for sqrt, cbrt, sine, etc.
#include <cstdlib>//required for rand() && coding exercise 21
#include <ctime>//required for time()

using namespace std;
void c_math_functions();

const double pi{3.14159};//global const

double calc_area_circle(double radius){
    return pi * radius * radius;
}
void area_circle(double radius){
    cout<<"\nThe area of a circle with a radius of: "<< radius << " is: "<< calc_area_circle(radius)<<endl;
}
double calc_volume_cylinder(double radius, double height){
    return pi * radius * radius * height;
}
void volume_cylinder(double radius, double height){
    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is: "
    <<calc_volume_cylinder( radius, height ) <<endl;
}

double calc_cost(double base_cost, double tax_rate = 0.06);//default argument
double calc_cost2(double base_cost = 100.0, double tax_rate = 0.06);//default argument must start at the tail end.

void print(int  = 1){}//overloaded function w/default arg causes "print() is ambiguous" error.
void print(double = 1){}//overloaded function w/default arg causes "print() is ambiguous" error.
int main_part1(){
    /*double num {};
    cout<<"Enter a number (double): ";
    cin>>num;
    cout<<"The sqrt of "<<num<<" is: "<< sqrt(num)<<endl;
    cout<<"The cubed root of "<<num<<" is: "<< cbrt(num)<<endl;
    cout<<"The sine of "<<num<<" is: "<< sin(num)<<endl;
    cout<<"The cosine of "<<num<<" is: "<< cos(num)<<endl;
    cout<<"The ceil of "<<num<<" is: "<< ceil(num)<<endl;
    cout<<"The floor of "<<num<<" is: "<< floor(num)<<endl;
    cout<<"The round of "<<num<<" is: "<< (num)<<endl;

    double power {};
    cout<<"\nEnter a power to raise "<< num << " to: ";
    cin>>power;
    cout<<num<<" Raised to the "<<power<<" power is: "<<pow(num, power)<<endl;*/

    /* Random numbers */
    /*int random_number{};
    size_t count {10};
    int min{1};
    int max{6};
    cout<<"RAND_MAX on my system is: "<<RAND_MAX<<endl;
    srand(time(nullptr));//seeds the random num generator

    for(size_t i{1};i<=count;++i){
        random_number = rand()%max+min;//generate a random number [min, max]
        cout<<i<<" : "<<random_number<<endl;
        random_number = rand();//generate a random number [min, max]
        cout<<i<<" no min max : "<<random_number<<endl;
    }*/

    /* coding exercise 21 */
    //c_math_functions();

    /* FUNCTIONS */
    //area_circle(10.3);
    //volume_cylinder(10.2,30.1);

    /* DEFAULT ARGUMENT */
    /*cout << calc_cost(200.0 ) << endl;//default argument.
    cout << calc_cost(100.00, 0.08 ) << endl;
    cout << calc_cost2() << endl;*/

    /* OVERLOADED FUNCTIONS */
    //print();//will cause error because both overloaded functions have default args defined.

    return 0;
}
void c_math_functions() {
    double bill_total {102.78};
    int number_of_guests {5};

    //DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    double individual_bill = bill_total / number_of_guests;

    double individual_bill_1 = floor(individual_bill);
    double individual_bill_2 = round(individual_bill);
    double individual_bill_3 = ceil(individual_bill*100)/100;

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout << "The individual bill at location 1 will be $" << individual_bill_1 << "\n"
    << "The individual bill at location 2 will be $" << individual_bill_2 << "\n"
    << "The individual bill at location 3 will be $" << individual_bill_3;
}

double calc_cost(double base_cost, double tax_rate ){
    return base_cost +=(base_cost * tax_rate);
}
double calc_cost2(double base_cost, double tax_rate ){
    return base_cost +=(base_cost * tax_rate);
}