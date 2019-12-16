//
// Created by Gabe on 15-Dec-19.
//

/* Literal constants
 * declared constants
 * "const" keyword
 *
 * Constant expression
 * "constexpr" keyword
 *
 * Enumerated constants
 * "enum" keyword
 *
 * Defined constants *dont use defined const in modern c++*
 * "#define"
*/
#include <iostream>
using namespace std;

/*literal constants. the "30"s in the code*/
//int main(){
//    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl << endl;
//    cout << endl;
//    cout << "\nHow many rooms would you like cleaned? " << endl;
//
//    int number_of_rooms {0};
//    cin >> number_of_rooms;
//
//    cout << "\nEstimate for carpet cleaning service" << endl;
//    cout << "Number of rooms: " << number_of_rooms << endl;
//    cout << "Price per room: $ " << 30 << endl;
//    cout << "Cost: $ " << 30 * number_of_rooms << endl;
//    cout << "Tax: $ " << 30 * number_of_rooms * 0.06 << endl;
//    cout << "========================" << endl;
//    cout << "Total estimate: $ " << (30 * number_of_rooms) +(30 * number_of_rooms * 0.06) << endl;
//    cout << "\nThis estimate is valid for " << 30 << " days" << endl;
//    return 0;
//}

/*DECLARED CONSTANTS*/
//int main(){
//    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
//    cout << "\nHow many rooms would you like cleaned? " << endl;
//
//    int number_of_rooms {0};
//    cin >> number_of_rooms;
//
//    const double price_per_room {32.50};
//    const double sales_tax {0.06};
//    const int estimate_expiration {30};//days
//
//    cout << "\nEstimate for carpet cleaning service" << endl;
//    cout << "Number of rooms: " << number_of_rooms << endl;
//    cout << "Price per room: $ " << price_per_room << endl;
//    cout << "Cost: $ " << price_per_room * number_of_rooms << endl;
//    cout << "Tax: $ " << price_per_room * number_of_rooms * sales_tax << endl;
//    cout << "========================" << endl;
//    cout << "Total estimate: $ " << (price_per_room * number_of_rooms) +(price_per_room * number_of_rooms * sales_tax) << endl;
//    cout << "\nThis estimate is valid for " << estimate_expiration << " days" << endl;
//
//    return 0;
//}

/*Section 6 challenge*/
int main(){
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "\nHow many small rooms would you like cleaned? " << endl;
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;

    cout << "\nHow many Large rooms would you like cleaned? " << endl;
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;

    const double price_per_small_room {25};
    const double price_per_large_room {35};

    const int estimate_expiration {30};//days

    const double cost_of_small_rms {number_of_small_rooms * price_per_small_room};
    const double cost_of_large_rms {number_of_large_rooms * price_per_large_room};
    const double sales_tax {(cost_of_small_rms + cost_of_large_rms) * 0.06};

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per room: $ " << price_per_small_room << endl;
    cout << "Price per room: $ " << price_per_large_room << endl;
    cout << "Cost: $ " << cost_of_small_rms + cost_of_large_rms << endl;
    cout << "Tax: $ " << sales_tax << endl;
    cout << "========================" << endl;
    cout << "Total estimate: $ " << cost_of_small_rms + cost_of_large_rms + sales_tax << endl;
    cout << "\nThis estimate is valid for " << estimate_expiration << " days" << endl;

    return 0;
}