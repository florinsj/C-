#include <iostream>
using namespace std;

int main()
{

    int a = 20;
    int b = 30;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << " after swap" << endl;

    int aux;
    aux = a;
    a = b;
    b = aux;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}