// programiz.com
// library functions C++ = built in functions

// to use this functions we need to include the header files in which these funct are defined
// ex. sqrt(), abs(), isdigit() ; for this we need to include cmath.h

// example - find square root of a number

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double number, squareRoot;
    number = 25.0;
    squareRoot = sqrt(number); // sqrt() function is defined in cmath header
    cout << "Square root of " << number << " = " << squareRoot;
    return 0;
}