// JavaTPoint
// friend functions = functions preceded with "friend" keyword (defined in the class)
// private and protecred data of the class can be accesed with friend function

// properties:
// the friend function is not in the scope of the cass to which it was declaed as a friend
// it cannot be called using objects( as is not in the scope of the class)
// it can be invoked like a normal function, without an object
// it cannot acces member names directly, it has to use an object name and dot "." operator
// it can be declared  in private or public zone

// example friend function on two classes

#include <iostream>
using namespace std;

class B;
class A
{
private:
    int x;

public:
    void setData(int i)
    {
        x = i;
    }
    friend void min(A, B); // same with : friend void min(A a,B b);
};

class B
{
private:
    int y;

public:
    void setData(int i)
    {
        y = i;
    }
    friend void min(A, B); // same with : friend void min(A a,B b);
};

void min(A a, B b)
{
    if (a.x <= b.y)
    {
        cout << a.x << endl;
    }
    else
    {
        cout << b.y << endl;
    }
}

int main()
{
    A a;
    B b;
    a.setData(10);
    b.setData(4);
    min(a, b);
    return 0;
}
