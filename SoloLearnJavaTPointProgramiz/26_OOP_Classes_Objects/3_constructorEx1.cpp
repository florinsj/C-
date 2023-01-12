// JavaTPoint
//  constructors
/* constructor =special method invoked at the time o object creation,
used for initialization of data members */

// 2 types :
// default constructor (no parameter)
// parametrized constructor

// default constructor - ex
#include <iostream>
using namespace std;
class Employee
{

public:
    Employee() // default constructor (no parameters)
    {
        cout << "Default constructor invoked" << endl;
    }
};
int main()
{
    Employee e1; // creating an object of Employee
    Employee e2;
    return 0;
}
