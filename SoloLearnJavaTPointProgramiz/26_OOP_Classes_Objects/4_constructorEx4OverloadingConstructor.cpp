// cplusplus.com
// overloading constructors (same name constructor with different parameters)
#include <iostream>
using namespace std;

class Rectangle
{

    int width, height;

public:
    Rectangle();         // default constructor prototype
    Rectangle(int, int); // parametrized constructor prototype

    int area()
    {
        return width * height;
    }
};

// define default constructor outside class
Rectangle::Rectangle()
{
    width = 5;
    height = 5;
}

// define parametrized constructor outside class
Rectangle::Rectangle(int a, int b)
{
    width = a;
    height = b;
}

int main()
{
    Rectangle recta(3, 4); // parametrized constructor call
    Rectangle rectb;       // default constructor call

    Rectangle rectc(); // function declaration NOT constructor call

    cout << "recta= " << recta.area() << endl;
    cout << "rectb= " << rectb.area() << endl;

    return 0;
}