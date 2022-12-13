// JavaTPoint
// Pointer TypeCasting in C++
// In C no need for Type Casting for pointers

#include <iostream>
using namespace std;
int main()
{

    void *p1; // void pointer declaration

    int *p2; // int pointer declaration

    int data = 10; // int var initialization
    p1 = &data;    // storing address of data in p1 pointer

    // C++ typeCasting pointers
    p2 = (int *)p1; // assigning void pointer to integer pointer  - typecasting

    // in C no need for typeCasting
    // p2=p1;   // ok in C

    cout << *p2 << endl;
    return 0;
}
