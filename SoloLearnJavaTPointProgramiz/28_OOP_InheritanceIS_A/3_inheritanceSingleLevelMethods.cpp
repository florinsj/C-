// JavaTPoint

// example : inherits methods

#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "eating" << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "barking" << endl;
    }
};

int main()
{
    Dog d1;
    d1.eat(); // inherited method
    d1.bark();
}