// JavaTPoint
// struct Rectangle with constructor and method example

#include <iostream>
using namespace std;

struct Rectangle
{
    int width, height;

    Rectangle(int w, int h)
    {
        width = w;
        height = h;
    }
    void areaOfRectabngle()
    {
        cout << "Area of rectangle is: " << (height * width) << endl;
    }
};

int main()
{
    struct Rectangle rec = Rectangle(4, 5); // rec is an structure variable(instance)

    rec.areaOfRectabngle();

    return 0;
}