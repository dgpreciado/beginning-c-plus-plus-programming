//
// Created by Gabe on 01-Jan-20.
//
#include <iostream>
using namespace std;
#include <string> //codingEx 25
#include <typeinfo> //codingEx 25

string print_guest_list( const std::string[], const size_t );//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
void clear_guest_list( std::string[], size_t );//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
void event_guest_list();



int maince25(){
    event_guest_list();

    return 0;
}

//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void event_guest_list() {
    string guest_list[] {"Larry", "Moe", "Curly"};
    size_t guest_list_size {3};
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE THE FUNCTION CALLS BELOW THIS LINE----
    print_guest_list(guest_list,guest_list_size);
    clear_guest_list(guest_list,guest_list_size);
    print_guest_list(guest_list,guest_list_size);

    //----WRITE THE FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}
//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----
string print_guest_list( const std::string guest_list[], const size_t guest_list_size ) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
    for(int i {0};i<guest_list_size;++i){
        cout<<guest_list[i]<<endl;
    }
    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return typeid(guest_list).name();
}
//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----
void clear_guest_list( std::string guest_list[], size_t guest_list_size) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THEPARENTHESES
    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
    for(int i {0};i<guest_list_size;++i){
        guest_list[i] = " ";
    }
    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}