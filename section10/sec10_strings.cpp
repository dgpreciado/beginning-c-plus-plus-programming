//
// Created by Gabe on 28-Dec-19.
//
/* isalpha(c), true if c is a letter
 * isalnum(c), true if c is a letter or digit
 * isdigit(c), true if c is a digit
 * islower(c), true if c is a lower case letter
 * isprint(c), true if c is a a printable character
 * ispunct(c), true if c is a punctuation character
 * isupper(c), true if c is a uppercase letter
 * isspace(c), true if c is a white space
 *
 * conversion functions
 *
 * tolower(c), returns a lowercase c
 * toupper(c), returns uppercase C
 * */
#include <iostream>
#include <cstring>//strcpy()
#include <cstdlib>//to convert c-style strings to ints floats long etc.

void strings_and_functions();

using namespace std;
int main(){
    /*char my_name[8]{};
    //my_name = "Dennis"; //causes an error
    strcpy(my_name,"Dennis");//ok

    char str[80];
    strcpy(str,"Hello ");//copy
    cout << str << endl;
    cout << "hello strlen: " << strlen(str) << endl;

    strcat(str,"There ");//concatenate
    cout << str << endl;
    cout << "there strlen: " << strlen(str) << endl;

    strcmp(str,"Another ");//-1
    cout << str << endl;
    cout << "another strlen: " << strlen(str) << endl;*/

    //sec10 vid 96
    /*char first_name[20] {"Dennis"};
    char last_name[20] {"Preciado"};
    char full_name[50] {};
    char temp[50] {};
    cout << "Please enter your first and last name: ";
    //cin >> first_name >> last_name;
    cout<<"-----------------------------------------\n"<<endl;
    cout<<"Hello, "<<first_name<<" your first name has "<<strlen(first_name)<<" characters"<<endl;
    cout<<"And your last name is: "<<last_name<<" your last name has "<<strlen(last_name)<<" characters"<<endl;

    strcpy(full_name,first_name);//copy first name to full_name
    strcat(full_name," ");//concat first name with a space char
    strcat(full_name,last_name);//concat last name to full name
    cout << "your full name is: " << full_name<<endl;
    cout<<"----------------------------------------\n"<<endl;

    cout<<"Enter your full name: ";
    cin.getline(full_name,50);
    cout<<"your full name is "<< full_name<<endl;
    cout<<"----------------------------------------\n"<<endl;
    strcpy(temp,full_name);
    if(strcmp(temp,full_name)==0){
        cout<<temp<<" and "<<full_name<<" are the same"<<endl;
    } else{
        cout<<temp<<" and "<<full_name<<" are different"<<endl;
    }
    cout<<"----------------------------------------\n"<<endl;
    for (size_t i{0}; i < strlen(full_name);++i){
        if(isalpha(full_name[i])){
            full_name[i] = toupper(full_name[i]);
        }
    }
    cout<<"your full name is "<< full_name<<endl;
    cout<<"----------------------------------------\n"<<endl;

    if(strcmp(temp,full_name)==0){
        cout<<temp<<" and "<<full_name<<" are the same"<<endl;
    } else{
        cout<<temp<<" and "<<full_name<<" are different"<<endl;
    }
    cout<<"----------------------------------------\n"<<endl;
    cout<<"Result of comparing "<< temp << " and "<< full_name <<": "<<strcmp(temp,full_name)<<endl;
    //returns a 1 base on second string is larger

    cout<<"Result of comparing "<< full_name << " and "<< temp <<": "<<strcmp(full_name,temp)<<endl;
    //returns a -1 because first str is larger*/

    //strings_and_functions();

    cout<<"----------------------------------------\n"<<endl;
    string s1;
    string s2 {"Frank"};//Frank
    string s3 {s2};//Frank
    string s4 {"Frank",3};//Fra
    string s5 {s3,0,2};//Fr
    string s6 {3,'X'};//XXX

    string part1 {"C++"};
    string part2 {"is a powerful"};
    string sentence;
    sentence = part1 + " "+part2 + " language";
    //C++ is a powerful language

    //sentence = "C++"+ " is a powerful";//this is illegal. Cant concat string literals.

    for(char c:s2){
        cout<<c<<endl;
    }

    for(int c:s2){
        //displays the ascii value for the chars
        cout<<c<<endl;
    }

    cout<<"------------------------STRING COMPARE----------------\n"<<endl;
    string ss1 {"Apple"};
    string ss2 {"Banana"};
    string ss3 {"Kiwi"};
    string ss4 {"apple"};
    string ss5 {ss1}; //Apple
    cout<<(ss1 == ss5)<<endl; //true
    cout<<(ss1 == ss2)<<endl; //false
    cout<<(ss1 != ss2)<<endl; //true
    cout<<(ss1 < ss2)<<endl; //true
    cout<<(ss2 > ss1)<<endl; //true
    cout<<(ss4 == ss5)<<endl; //false
    cout<<(ss1 == "Apple")<<endl; //true

    cout<<"------------------------EXTRACT SUB-STRING----------------\n"<<endl;
    //object.substr(start_index, length);
    string sub1 {"This is a test"};
    cout<<sub1.substr(0,4)<<endl;//this
    cout<<sub1.substr(5,2)<<endl;//is
    cout<<sub1.substr(10,4)<<endl;//test

    cout<<"------------------------FIND SUB-STRING----------------\n"<<endl;
    cout<<sub1.find("This")<<endl;//0
    cout<<sub1.find("is")<<endl;//2
    cout<<sub1.find("test")<<endl;//10
    cout<<sub1.find('e')<<endl;//11
    cout<<sub1.find("is",4)<<endl;//5
    cout<<sub1.find("XX")<<endl;//string::npos "4294967295"

    cout<<"------------------------ERASE CLEAR SUB-STRING----------------\n"<<endl;
    //object.erase(start_index,length);
    string e {"This is a test"};
    cout<<e.erase(0,5)<<endl;//is a test
    cout<<e.erase(5,4)<<endl;//is a
    e.clear();
    cout << "cleared: " << e << endl;//empty string

    cout<<"------------------------STRING.LENGTH()----------------\n"<<endl;
    string sl{"Frank"};
    cout<<sl.length()<<endl;
    sl+=" James";
    cout<<sl<<endl;

    cout<<"\n------------------------STRING.LENGTH()----------------"<<endl;
    /*
     * string s1;
     * cin >> s1; //user enters "Hello there"
     * //app only accepts "Hello" because it stops at the first white space it encounters
     * cout<<s1<endl; //Hello
     *
     * getline(cin, s1);//reads entire line until user hits [Enter]
     * cout << s1 << endl;// Hello there
     *
     * getline(cin, s1,'x');//reads entire line until app sees an x e.g This isx
     * cout << s1 << endl;// This is
     *
     * */






    return 0;
}

void strings_and_functions() {
    //challenge vid 96
    //----WRITE YOUR CODE BELOW THIS LINE----
    char first_name[] {"Bjarne"};
    char last_name[] {"Stroustrup"};

    size_t first_name_length {strlen(first_name)};
    size_t last_name_length {strlen(last_name)};
    char whole_name [16];
    strcpy(whole_name,first_name);
    strcat(whole_name,last_name);
    size_t whole_name_length {strlen(whole_name)};


    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----

    cout << "The length of the first name, " << first_name << ", is " << first_name_length <<
    " letters long and the length of the last name, " << last_name << ", is " << last_name_length <<
    " letters long. This means that the length of the whole name must be " << whole_name_length << " letters long.";
}