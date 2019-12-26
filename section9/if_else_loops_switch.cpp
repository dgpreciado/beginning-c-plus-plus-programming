//
// Created by Gabe on 25-Dec-19.
//

#include <iostream>
using namespace std;
int main(){

    /*
    enum Color {
        red,green,blue
    };
    Color screen_color {green};

    switch (screen_color){
        case red: cout << "1 selected"; break;
        case green: cout << "1 selected"; break;
        case blue: cout << "1 selected";
            break;
        default: cout << "red, green, blue not selected";
    }
    */

    /*char letter_grade {'f'};
    cout << "Enter the letter grade you expect on the exam:" << endl;

    switch (letter_grade){
        case 'a':
        case 'A':
            cout << "You need a 90 or above, Study hard!" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You need 80-89 for a B, go Study!" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need 79-79 for an average grade!" << endl;
            break;
        case 'd':
        case 'D':
            cout << "Hmm, you should strive for a better grade. all you need is 60-69" << endl;
            break;
        case 'f':
        case 'F':
        {
            char confirm {'n'};
            cout << "Are you sure (Y/N)?" << endl;
            //cin >> confirm;
            if(confirm == 'y' || confirm == 'Y'){
                cout << "Ok, I guess you didnt study..." << endl;
            } else if (confirm == 'n' || confirm == 'N'){
                cout << "Good, go study!" << endl;
            } else {
                cout << "Illegal choice entered" << endl;
            }
            break;
        }
        default:
            cout << "Sorry, not a valid grade";
    }//end of switch

    enum Direction{
        left, right, up, down
    };
    Direction heading {left};
    int day_code {};
    switch (day_code){
        case 0: cout << "Sunday"; break;
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        default: cout << "Error - illegal day code";
    }//end of switch
    */

    /* Conditional Operator */
    /*int a {10}, b {20};
    int score {92};
    double result {0.0};
    result = (a > b) ? a : b;
    cout << (result) << endl;

    result = (a < b) ? (b-a) : (a-b);
    cout << (result) << endl;

    result = (b != 0) ? (a/b) : 0;
    cout << (result) << endl;

    cout << ((score > 90) ? "Excellent" :  "Good") << endl;

    int num {};
    cout << "Enter an interger: ";
    //cin >> num;
    if (num % 2 == 0){
        cout << num << " is even" << endl;
    } else {
        cout << num << " is odd" << endl;
    }
    // same thing as above
    cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;

    //check is a and b are the same
    if(a != b){
        cout << "Largest number is: " << ((a > b) ? a : b) << endl;
    }else {
        cout << " they are the same" << endl;
    }
    */
    /* Looping */

    return 0;
}