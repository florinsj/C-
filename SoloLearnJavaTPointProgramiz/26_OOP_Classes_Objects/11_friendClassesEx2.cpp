// cplusplus.com
// friend class
#include <iostream>
using namespace std;

class Square; // class prototype/declaration

class Rectangle
{
    int width, height;

public:
    int area()
    {
        return width *
               height;
    }
    void convert(Square a); // prototype
};

class Square
{
    friend class Rectangle;
    // Rectangle members class can access private/protected members of Square

private:
    int side;

public:
    Square(int a) : side(a){}; // constructor
};
void Rectangle::convert(Square a) // defining friend function outside the class
{
    width = a.side;
    height = a.side;
}

int main()
{

    Rectangle rect;
    Square sqr(4); // sqr = Square object with side=4
    rect.convert(sqr);
    cout << "rect's area=" << rect.area() << endl;
    return 0;
}
