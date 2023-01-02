// #define and # operator
// stringification

#include <iostream>
using namespace std;

#define C(x) #x // will replace C(x) with x as a string literal.it encloses x in double quotes

int main()
{
    cout << C(a) << endl;
    cout << C(23) "a" << endl;
    return 0;
}