// programiz.com
#include <iostream>
using namespace std;

class Student
{
private:
    int age;

public:
    Student() : age(12){};
    void getAge()
    {
        cout << "Age is " << age << endl;
    }
};

int main()
{

    Student *ptr = new Student(); // dynamically declare Student object
    ptr->getAge();                // call getAge function ;
    // "->" operator is used to access class members using pointers

    delete ptr; // ptr memory is released

    return 0;
}
