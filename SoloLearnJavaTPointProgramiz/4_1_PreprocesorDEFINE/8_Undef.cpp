// JavaTPoint
#include <iostream>
using namespace std;

#define a 1
#define b (a + 1)
#undef a
#define a 10

// finaly, everywhere in source code , a will be replaced with 10 and b replaced with 11

int main()
{
    cout << "b=" << b << endl;

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    return 0;
}