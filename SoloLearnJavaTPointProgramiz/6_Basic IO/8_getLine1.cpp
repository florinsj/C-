/*
 getline()
 getline() = C++ standard library function, part of <string> header

- extracts chars from input stream and appends to the string objects until delimiter is encountered
- can be used with or withoud delimiter

Syntax:
getline(stringVar,maxLength)
getline(stringVar,charVarDelimitator)

*/

#include <iostream>
using namespace std;

#define MAX_NAME 60;
#define MAX_ADDRESS 120;
#define MAX_ABOUT 250;

int main()
{
    const int a = MAX_NAME;
    const int b = MAX_ADDRESS;
    const int c = MAX_ABOUT;
    char yName[a];
    char yAddress[b];
    char yAbout[c];

    cout << "Enter your name: " << endl;
    cin.getline(yName, a);

    cout << "Enter your City: " << endl;
    cin.getline(yAddress, b);

    cout << "Enter your profession: (press $ to complete) " << endl;
    cin.getline(yAbout, c, '$'); // '$' is a delimiter
    cout << "Name: " << yName << endl;
    cout << "Address: " << yAddress << endl;
    cout << "About: " << yAbout << endl;

    return 0;
}