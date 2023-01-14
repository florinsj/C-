// JavaTPoint
// multiple inheritance= process of deriving a new class that inherits from two or more classes

// example : multiple inheritance, ambiquity function name - same function in all base classes
#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "Class A" << endl;
    }
};
class B
{
public:
    void display()
    {
        cout << "Class B" << endl;
    }
};

class C : public A, public B
{
public:
    void view()
    {
        //  display();   // error ambigous, because A and B have same method with same name
        A::display(); // correct call
        B::display(); // correct call
    }
};
int main()
{
    C c;
    c.view();

    return 0;
}