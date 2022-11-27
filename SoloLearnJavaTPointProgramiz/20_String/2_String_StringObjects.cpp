// two types of strings :
// 1. strings  are objects of the string class (Standard C++ library class)
// 2. C-strings = collection of characters stored in the form of arrays

// string Objects

// we can create string objects, with no fixed length
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // getline(cin,str) - get the entered line in string str
    cout << endl
         << "You entered: " << str;

    cout << "Enter another string: " << endl;
    cin.get(str, 100);

    return 0;
}