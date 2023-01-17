// member initialization can be made in different ways in C++ constructor

/*
class Rectangle {
    int width,height;
    public:
    Rectangle(int,int);
    int area(){
        return width*height;
    }
};
Rectangle::Rectangle(int x,int y) {width=x;height=y;}  // usual initialization

Rectangle::Rectangle(int x,int y) : width(x)   {height=y;}  // member initialization
Rectangle::Rectangle(int x,int y) : width(x), height(y)  {}  // member initialization


*/

#include <iostream>
using namespace std;

class Circle
{
    double radius;

public:
    Circle(double r) : radius(r) {} // constructor- member initialization
    double area()
    {
        return 2 * radius * 3.14159;
    }
};

class Cylinder
{
    Circle base;
    double height;

public:
    Cylinder(double r, double h) : base(r), height(h) {} // constructor - member initialization
    // Cylinder(double r, double h) : base{r}, height{h} {} // same but with uniform init - {}

    double volume()
    {
        return base.area() * height;
    }
};

int main()
{
    Cylinder foo = {10, 20}; // constructor with uniform initialization
    cout << "foo's volume: " << foo.volume() << endl;
    return 0;
}