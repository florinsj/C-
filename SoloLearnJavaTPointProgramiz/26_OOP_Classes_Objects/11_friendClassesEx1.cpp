// JavaTPoint
// friend classes
// a friend cls- can access private and protected members of the class in wich was been declared

// example
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
    void display(A &a)
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