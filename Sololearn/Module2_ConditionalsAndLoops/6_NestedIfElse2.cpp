#include <iostream>
using namespace std;

int main()
{
    int age = 18;
    if (age > 14)
    {
        if (age >= 18)
        {
            cout << "Adult" << endl;
        }
        else
        {
            cout << "Teenager" << endl;
        }
    }
    else
    {
        if (age > 0)
        {
            cout << "Child" << endl;
        }
        else
        {
            cout << "something wrong!" << endl;
        }
    }
    return 0;
}