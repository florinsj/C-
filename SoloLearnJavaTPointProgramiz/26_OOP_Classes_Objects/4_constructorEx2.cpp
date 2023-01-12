// JavaTPoint
//  constructors
/* constructor =special method invoked at the time o object creation,
used for initialization of data members */

// 2 types :
// default constructor (no parameter)
// parametrized constructor

// parametrized constructor - Example
#include <iostream>
using namespace std;
class Employee
{

public:
    int id;
    string name;
    float salary;

    Employee(int i, string n, float s) // parametrized constructor
    {
        cout << "parametrized  constructor invoked" << endl;
        id = i;
        name = n;
        salary = s;
    }
    void display()
    {

        cout << id << " " << name << " " << salary << endl;
    }
};
int main()
{
    Employee e1(2, "John", 2000); // creating an object Employee
    Employee e2(3, "Mary", 3100);
    e1.display();
    e2.display();
    return 0;
}
