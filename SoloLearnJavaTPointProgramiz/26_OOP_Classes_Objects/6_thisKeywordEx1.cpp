// javaTPoint
// this
// in C++ this = keyword that refers to current instance of the class
// this= kind of pointer that points to current instance of the class
// for accessing member we use  -> operator (like pointer wich point to structs/class)

// 3 main ussages :
// to pass current obj as a param to another method
// to refer current class instance variable
// to declare indexers

#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    float salary;
    Employee(int id, string name, float salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
    void display()
    {
        cout << id << " " << name << " " << salary << endl;
    }
};
int main()
{
    Employee e1 = Employee(100, "George", 3000);
    Employee e2 = Employee(102, "Saul", 3000);
    e1.display();
    e2.display();

    return 0;
}