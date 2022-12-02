// Pointer operations - SoloLearn

// two operators for pointers:
// & = address of = returns the address of its operand
// * = contents of (dereference) =returns the value of the variable which pointer points to

#include <iostream>
using namespace std;

int main()
{

    int v = 50;
    int *p; // a pointer to an int -- here asterisk is used to declare a pointer
    p = &v; // p =address of v

    cout << v << endl; // outputs 50
    cout << p << endl; // outputs the address of v

    cout << *p << endl; // outputs the value from the address which p points to --- 50
                        // here, asterisk is used as dereference operator

    int x = 5;
    int *px = &x; // px=address of x -- here asterisk is used for pointer declaration

    x = x + 4; // x=9

    x = *px + 4;   // x=13; here asterisk * is used as dereference operator ...  *px =x
    *px = *px + 4; // x=17;
    cout << "x= " << x << endl;
}