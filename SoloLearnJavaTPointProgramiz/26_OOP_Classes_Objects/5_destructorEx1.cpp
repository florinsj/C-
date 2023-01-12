// JavaTPoint
// destructor = destruct the object of the class
// can be defined ony once in the class
// like constrctors, it is invoked automaticaly
// have no parameters, no access modifiers
// it is defined like constructor but it is preceded by tilde sign ~

#include <iostream>
using namespace std;
class Employee
{

public:
    Employee() // constructor
    {
        cout << "Constructor is invoked!" << endl;
    }

    ~Employee()
    {
        cout << "Destructor is invoked!" << endl;
    }
};

int main()
{
    Employee e1;
    Employee e2;
    cout << "we have 2 employes!" << endl;

    return 0;
}
