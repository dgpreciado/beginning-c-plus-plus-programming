//
// Created by Gabe on 17-Dec-19.
//
#include <iostream>
using namespace std;
int main656(){
    /* Arrays */
    char vowel [] {'a','e','i','o','u'};
    cout << "\nThe first vowel is: " << vowel[0];
    cout << "\nThe last vowel is: " << vowel[4] << endl;
    //cin >> vowel[5];

    double hi_temps [] {90.1,89.8,7.5,81.6};//array gets size set automatically
    cout << "\nThe first high temperture is: " << hi_temps[0] << endl;

    hi_temps[0]=100.7;//change and set the first value

    cout << "The first temperature is now: " << hi_temps[0] << endl;

    int test_scores[5]{};//no values given, not initialized.
    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Test score at index 1: " << test_scores[1] << endl;
    cout << "Test score at index 2: " << test_scores[2] << endl;
    cout << "Test score at index 3: " << test_scores[3] << endl;
    cout << "Test score at index 4: " << test_scores[4] << endl;

    cout << "\nNotice what the value of the array name is (memory address): " << test_scores << endl;

    /* MULTI-DIMENSIONAL ARRAYS */
    int movie_ratings [3][4]{
            {0,4,3,5},
            {2,3,3,5},
            {1,4,4,5}
    };

    cout << "\nmovie rating for 1, 2 is: " << movie_ratings[1][2] << endl;

    cout << endl;
    return 0;
}