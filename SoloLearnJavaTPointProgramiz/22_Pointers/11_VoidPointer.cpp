// JavaTPoint
/* Void pointer= general purpose pointer that can hold the address of any data type but is not
associated with any data type */

#include <iostream>
using namespace std;

int main()
{
    int *p1; // integer pointer
    int a = 9;
    float f = 10.3;
    // p1=&f;      // error because p1 must point to an integer value and f is a float value

    void *p2;
    void *p3;

    p2 = &a;
    p3 = &f;

    cout << &a << endl;
    cout << p2 << endl;

    cout << &f << endl;
    cout << p3 << endl;
    return 0;
}