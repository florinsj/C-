// JavaTPoint
// polymorphsm (poly morphs = many forms)
// an object can have many forms
// Ex. A woman teacher=teacher in class, daughter for her dad, mother for childs, customer at shop

// two types of polymorphism

// compile time polymorphism = function overloading and operator overloading -static(early) binding

// run time polymorphism = function overwriting (virtual function, pointers) -dynamic(late) binding
// virtual function= member function in base class which is expected to be redefined in derived cls

// example - run time polymorfism in C++

#include <iostream>
using namespace std;

class Animal
{

public:
    void eat()
    {
        cout << "Eating.." << endl;
    }
};

class Dog : public Animal
{

public:
    void eat() // function overriding
    {
        cout << "Eating meat.." << endl;
    }
};

int main()
{
    Dog d = Dog();
    d.eat();
    return 0;
}