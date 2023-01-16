// JavaTPoint

// single level inheritance example . one class A inherits from one class B

#include <iostream>
using namespace std;

class Employee
{

public:
    float salary = 60000;
};

class Programmer : public Employee // Programmer = derived class, Employee= base class
{
public:
    float bonus = 5000;
};

int main()
{
    Programmer p1;
    cout << "Salary: " << p1.salary << endl; // salary inherited from Employee
    cout << "Bonus: " << p1.bonus << endl;
    return 0;
}