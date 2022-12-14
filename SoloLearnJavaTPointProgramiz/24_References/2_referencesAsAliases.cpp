// JavaTPoint
/*
types of variables in C++
    - ordinary variable - ex: int a=10;
    - pointer variable - ex: int *p=&a;

    -reference variable = a variable that behaves as an alias for another variable
        - reference to non-const values
        - reference as aliases

    how to create a reference variable ? we use ampersand operator

    ex: int &b=a;   - b is a reference variable of a

*/

// reference as aliasses

#include <iostream>
using namespace std;
int main()
{
    int a = 70;
    int &b = a;
    int &c = a;
    cout << "a= " << a;
    cout << "b= " << b;
    cout << "c= " << c;
    return 0;
}