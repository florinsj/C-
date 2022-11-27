// two types of strings :
// 1. strings  are objects of the string class (Standard C++ library class)
// 2. C-strings = collection of characters stored in the form of arrays

// C-strings

// C-strings = arrays of type char terminated with null character "\0"
// ex: char str[]="C++";  // the '\0' char is added automaticaly at the end of string

#include <iostream>
using namespace std;

int main()
{
     char str1[4] = "c++";
     char str2[] = {'C', '+', '+', '\0'};
     char str3[4] = {'C', '+', '+', '\0'};
     char str4[100] = "C++";

     // get input in a string  ( space is a terminated character)
     // ex. user type "c++ is fun" ..only "c++" will be read , space is terminated char
     char userInput1[100];
     char userInput2[100];
     cout << "Enter a string:";
     cin >> userInput1;
     cout << endl
          << "You entered: " << userInput1;

     // get an entire line
     cin.clear();
     cout << endl
          << "Enter a line :";
     cin.get(userInput2, 100); // read a string that contain spaces, so read an entire line
     cout << endl
          << "You entered: " << userInput2;

     return 0;
}