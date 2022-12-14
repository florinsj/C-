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

// Properties:

// Initialization - it must be initialized at the time of declaration
// Reassignment - it cannot be reassigned - reference variable cannot be modified

#include <iostream>
using namespace std;
int main()
{

    int data1 = 10; // var initialization
    int data2 = 20;

    // 1.initialization must be made  at the time of declaration
    int &b = data1; //  !! at the time of declaration, reference must be initialized

    // error:
    // int &b;
    // &b=a;

    //----------------------------------------------------------------------------------

    // 2.reasignament - not possible - error
    // &b = data2;   // error because &b cannot be reassigned!!

    cout << "value of a= " << b << endl;
}