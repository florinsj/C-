// cplusplus.com
// friend function example

#include <iostream>
using namespace std;

class Rectangle
{
    int width, height;

public:
    Rectangle() // default constructor
    {
    }
    Rectangle(int x, int y) : width(x), height(y){}; // parametrized constructor
    int area()
    {
        return height * width;
    }

    // friend function that take a constant Rectangle reference as a parameter
    // const - prevent modification of the object
    friend Rectangle duplicate(const Rectangle &);
};

Rectangle duplicate(const Rectangle &param)
// duplicate(..) = friend function, so it can access private members of Rectangle class
{
    Rectangle res;
    res.width = param.width * 2;
    res.height = param.height * 2;
    return res;
}

int main()
{
    Rectangle foo;
    Rectangle bar(2, 3);
    foo = duplicate(bar);
    cout << "bar's area= " << bar.area() << endl;
    cout << "foo's area= " << foo.area() << endl;
}