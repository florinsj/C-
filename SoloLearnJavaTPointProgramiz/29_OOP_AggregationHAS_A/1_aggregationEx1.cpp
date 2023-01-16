// JavaTPoint
//  aggregation = it is a relation of type HAS A == composition
//  = a process in which a class defines another class as an entity reference
// = an instance of a class has a reference to an instance of another class (or same class)
// HAS A <==> composition
// Ex. A Bus object has an Engine object, a Table obj has an Rectangle obj

// example
#include <iostream>
using namespace std;

class Address
{
public:
    string addressLine, city, state;

    Address(string addressLine, string city, string state)
    {
        this->addressLine = addressLine;
        this->city = city;
        this->state = state;
    }
};

class Employee
{
private:
    Address *address; // Employee has an address
public:
    int id;
    string name;
    Employee(int id, string name, Address *address)
    {
        this->id = id;
        this->name = name;
        this->address = address;
    }

    void display()
    {
        cout << id << " " << name << " " << address->addressLine << " " << address->city << " " << address->state << endl;
    }
};
int main()
{
    Address a1 = Address("130", "Bucharest", "RO");
    Employee e1 = Employee(10, "Adrian", &a1);
    e1.display();

    return 0;
}
