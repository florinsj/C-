// Sololearn
// Write a program that takes body temperature in Celsius as input.
// If it is in range from 36.1 to 36.9 print "OK", otherwise print “Not OK”.
// Temperature should be provided as a floating point number.
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    float bodyTemp;
    cin >> bodyTemp;
    if (bodyTemp > 36.1 && bodyTemp < 36.9)
        cout << "OK";
    else
        cout << "Not OK";
}