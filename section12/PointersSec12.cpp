//
// Created by Gabe on 08-Jan-20.
//
#include <iostream>
using namespace std;
int main_const_pointers(){

    int high_score {100};
    int low_score {65};

    int *const score_ptr{&high_score}; //pointer address cant change
    *score_ptr = 86;
    //score_ptr = &low_score;//causes error change ref if pointer

    const int * new_score_ptr{&high_score}; //value of pointer cant change
    //*new_score_ptr = 100;//causes error changing value of const value
    cout << new_score_ptr <<endl; //pointer address of high_score value
    cout << *new_score_ptr <<endl;//de-referenced.

    new_score_ptr = &low_score ;//changes the address of the pointer to the low score address.
    cout << new_score_ptr <<endl; //pointer address changed.
    cout << *new_score_ptr <<endl;//de-referenced.

    return 0;
}
