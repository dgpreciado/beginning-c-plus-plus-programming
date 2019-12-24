//
// Created by Gabe on 17-Dec-19.
// DECLARING A VECTOR

#include <iostream>
#include <vector>
using namespace std;
int main758(){
    vector <char> vowels {'a','e','i','o','u'};
    vector <int> test_scores {10,98,89,85,93};
    vector <double> hi_temperatures (365,80.0);//365 is the size of the vector and second number is what to init the vector with.

    //access vector using array []
    cout << "array: vector test_scores location 1 is: " << test_scores[1] << endl;

    //access vector using vector syntax: vector.at(1)
    cout << "vector syntax: vector test_scores location 1 is: " << test_scores.at(1) << endl;

    //grow vector as needed
    test_scores.push_back(80); //{10,98,89,85,93,80}; 80 added at end
    cout << "vector push back: vector test_scores location 5 is: " << test_scores.at(5) << endl;

    //cout << "vector push back: vector test_scores location 5 is: " << test_scores.at(6) << endl;//vector out of bounds error
    //terminate called after throwing an instance of 'std::out_of_range'
    //  what():  vector::_M_range_check: __n (which is 6) >= this->size() (which is 6)

    /* vector examples */
    vector <char> vowels1; //empty
    vector <char> vowels2 (5); //vector size of 5

    vector <char> vowels0 {'a','e','i','o','u'}; //vector initialized.

    cout << "test_scores[0] = " << test_scores[0] << endl;
    cout << "test_scores.at(1) = " << test_scores.at(1) << endl;
    cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;

    //add vector value
    int add {25};
    //cin >> add;
    test_scores.push_back(add);

    cout << "test_scores.at(test_scores.size()-1) should equal 25: " << test_scores.at(test_scores.size()-1);

    /* 2D - VECTOR */
    vector<vector<int>> movie_ratings
    {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}
    };

    cout << "\nMovie Ratings using Array syntax" << endl;
    cout << "movie_ratings[0][0] = " << movie_ratings[0][0] << endl;
    cout << "movie_ratings[1][1] = " << movie_ratings[1][1] << endl;
    cout << "movie_ratings[2][2] = " << movie_ratings[2][2] << endl;
    cout << "movie_ratings[2][3] = " << movie_ratings[2][3] << endl;

    cout << "\nMovie Ratings using Vector syntax" << endl;
    cout << "movie_ratings.at(0).at(0) = " << movie_ratings.at(0).at(0) << endl;
    cout << "movie_ratings.at(0).at(0) = " << movie_ratings.at(1).at(1) << endl;
    cout << "movie_ratings.at(0).at(0) = " << movie_ratings.at(2).at(2) << endl;
    cout << "movie_ratings.at(0).at(0) = " << movie_ratings.at(2).at(3) << endl;

    cout << "\nmovie_ratings.size() = " << movie_ratings.size() << endl;
    cout << "\nmovie_ratings.at(0).size() = " << movie_ratings.at(0).size() << endl;
    return 0;
}
