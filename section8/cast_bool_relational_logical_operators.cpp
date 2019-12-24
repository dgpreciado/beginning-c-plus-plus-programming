//
// Created by Gabe on 23-Dec-19.
//
#include <iostream>
using namespace std;
int main(){
    /** static cast modern new style more restrictive sec8 68 **/
    int num1 {10}, num2 {30}, num3 {20};
    int total = num1 + num2 + num3;
    const int count {7};
    double average{0.0};

    //better way to cast
    average= static_cast<double>(total)/count;
    cout << "The average number is: " << average << endl;

    //old style to type cast
    double average_old{0.0};
    average_old = (double)total/count;
    cout << "The average number is: " << average_old << endl;

    //no cast
    double average_no{0.0};
    average_no = total/count;// warning thrown: loss of precision
    cout << "The average number is: " << average_no << endl;

    /* Booleans sec 8 69*/
    int bnum1 {50}, bnum2 {100};
    bool result {false};
    result = (bnum1 != bnum2);
    cout << "\nresult value is: " << result << endl;

    cout << "(bnum1 == bnum2) ba is: " << (bnum1 == bnum2) << endl;
    cout << boolalpha;//forces cout to display true false for any calls after it.
    cout << "(bnum1 == bnum2) is: " << (bnum1 == bnum2) << endl;

    cout << "(bnum1 != bnum2) is: " << (bnum1 != bnum2) << endl;
//    cout << noboolalpha;//returns cout to display 1 or 0 for true and false respectively for any calls after it.

    cout << "result value is: " << result << endl;

    cout << "(11.0 == 10.999999999999999999999999999) should be false but it is: "
    << (11.0 == 10.999999999999999999999999999) << endl;

    double dnum1 {11}, dnum2 {10.999999999999999999999999999};
    cout << "dnum1 == dnum2 is " << (dnum1 == dnum2) << endl;

    /* Relational Operators */
    /* 1. ">" greater than
     * 2. ">=" greater than or equal to
     * 3. "<" less than
     * 4. "<=" less than or equal to
     * 5. "<=>" three-way comparison (c++20) ?? need to research this one
     * */

    /* Logical Operators */
    /* 1. not , ! is the negation
     * 2. and , && is the logical and
     * 3. or , || is the logical or
     *
     * PRECEDENCE
     * "not" has higher precendence than "and"
     * "and" has higer precendence than "or"
     *
     * "not" is a unary operator
     * "and" and "or" are binary operators
     * */

    const int wind_speed_for_coat {25};// wind over this speed requires a coat
    const double temperature_for_coat {45};//temp below this value requires a coat
    bool wear_coat {false};
    double temperature {0.0};
    int wind_speed {0};

    cout << "\nEnter a temperature and wind speed" << endl;
//    cin >> temperature >> wind_speed;
    temperature =65;
    wind_speed=35;
    cout << "temperature is: " << temperature << " ,and wind speed is: " << wind_speed << endl;
    wear_coat = temperature < temperature_for_coat || wind_speed > wind_speed_for_coat;
    cout << "Do you need to wear a coat using OR? "<< wear_coat << endl;

    wear_coat = temperature < temperature_for_coat && wind_speed > wind_speed_for_coat;
    cout << "Do you need to wear a coat using AND? "<< wear_coat << endl;

    cout << "\nCompound Assignment" << endl;
    return 0;
}
