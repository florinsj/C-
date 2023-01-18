// JavaTPoint
// friend classes
// a friend cls- can access private and protected members of the class in which was been declared

// friendship is not bidirectional.it has to by explicitly in every class
// friendship is not transitive.friend of friend is NOT friend.It has to be explicitly!

//  example
#include <iostream>
using namespace std;

class A
{
private:
    int x = 5;

    friend class B; // friend class B -- B can access members of class A
public:
    void setX(int x)
    {
        this->x = x;
    }
};

class B
{

public:
    void display(A &a) // function with parameter= a reference to an A object
    {
        cout << "value of x is :" << a.x << endl;
    }
};

int main()
{
    A a1;
    A a2;
    a1.setX(5);
    a2.setX(10);

    B b;
    b.display(a1);
    b.display(a2);
    return 0;
}