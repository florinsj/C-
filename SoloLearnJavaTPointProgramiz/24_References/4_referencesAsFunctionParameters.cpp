// JavaTPoint
//  references can be passed as function parameter, it does not create a copy of the argument
//  behaves like an alias of parameter
#include <iostream>
using namespace std;
int main()
{
    int a = 9;
    int b = 10;

    cout << "Before swap a=" << a << " b=" << b << endl;

    swap(a, b);
    cout << "After swap a=" << a << " b=" << b << endl;

    return 0;
}
// when we use references as function parameters, it will work on original variables
void swap(int &x, int &y) // here x will refer to a, and y to b
{
    int temp = x;
    x = y;
    y = temp;
}