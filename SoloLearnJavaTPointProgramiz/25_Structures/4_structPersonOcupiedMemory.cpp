// programiz.com

#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
    float salary;
};

int main()
{

    Person jon;
    jon.age = 32;
    jon.salary = 2850;
    jon.name = "Dan";
    cout << "Size of variable jon.age= " << sizeof(jon.age) << "bytes" << endl;
    cout << "Size of variable jon.salary= " << sizeof(jon.salary) << "bytes" << endl;

    cout << endl
         << "Size of string type= " << sizeof(string) << "bytes" << endl;
    cout << "Size of variable jon.name= " << sizeof(jon.name) << "bytes" << endl;
    cout << endl
         << "Size of struct variable jon= " << sizeof(jon) << "bytes" << endl;

    return 0;
}