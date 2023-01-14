// JavaTPoint
// multiple inheritance= process of deriving a new class that inherits from two or more classes

/*
syntax :

class D : visibilityAccessModifier B1, visibilityAccessModifier B2 ..visibilityAccessModifier Bn{

}

*/

// example Multiple inheritance

#include <iostream>
using namespace std;

class A
{
protected: // visible in same class and next derived class
    int a;

public:
    void seta(int n)
    {
        a = n;
    }
};

class B
{
protected:
    int b;

public:
    void setb(int n)
    {
        b = n;
    }
};

class C : public A, public B
{
public:
    void display()
    {
        cout << "a= " << a << endl;
        cout << "b= " << b << endl;
        cout << "a*b= " << a * b << endl;
    }
};
int main()
{
    C c;
    c.seta(10);
    c.setb(20);
    c.display();

    return 0;
}