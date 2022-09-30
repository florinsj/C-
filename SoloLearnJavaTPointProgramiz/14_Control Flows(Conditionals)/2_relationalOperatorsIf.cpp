// Sololearn
// relational operators

// >=   greater than or equal to
// <=   less than or equal to
// ==   equal to
// !=   not equal to

#include <iostream>
using namespace std;

int main()
{
    if (10 == 10)
    {
        cout << "10=10 true\n";
    }
    if (10 != 10)
    {
        cout << "10!=10 true? or false ?\n";
    }

    int a = 50;
    int b = 20;
    if (a > b)
    {
        cout << "a greater than b\n";
    }
    if (b > a)
    {
        cout << "b greater than a\n";
    }

    return 0;
}