// example : class constructor defined outside the class using scope(resolution operator)

#include <iostream>
using namespace std;

class Rectangle
{
    int width, height;

public:
    Rectangle(int, int); // constructor prototype
    int area()
    {
        return width * height;
    }
};

// define constructor outside the class
Rectangle::Rectangle(int w, int h)
{
    width = w;
    height = h;
}
int main()
{
    Rectangle r1(2, 2); // same with Rectangle r1=Rectangle(2,2);
    Rectangle r2 = Rectangle(3, 3);

    cout << "r1 area= " << r1.area() << endl;
    cout << "r2 area= " << r2.area() << endl;

    return 0;
}