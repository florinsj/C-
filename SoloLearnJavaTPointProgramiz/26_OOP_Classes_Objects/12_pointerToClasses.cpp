// cplusplus.com
// pointer to classes
// Rectngle* prect; // prect = pointer to an object of class Rectangle
// members of an object can be accessed directly from pointer with arrow operator "->"

// pointer to class example

#include <iostream>
using namespace std;
class Rectangle
{
    int width, height;

public:
    Rectangle(int x, int y) : width(x), height(y) {}
    int area()
    {
        return width * height;
    }
};
int main()
{
    Rectangle obj(3, 4);
    Rectangle *foo, *bar, *baz; // pointers to objects of Rectangle
    foo = &obj;                 // foo points to objl

    bar = new Rectangle(5, 6);              // allocates memory for object Rectangle(5,6) and bar points to
    baz = new Rectangle[2]{{2, 5}, {3, 6}}; // array of 2 Rectangles objects

    cout << "obj's area: " << obj.area() << endl;
    cout << "*foo's area: " << foo->area() << endl;
    cout << "*bar's area: " << bar->area() << endl;
    cout << "baz[0]'s area: " << baz[0].area() << endl;
    cout << "baz[0]'s area: " << baz->area() << endl;
    cout << "baz[1]'s area: " << baz[1].area() << endl;
    cout << "baz[1]'s area: " << (baz + 1)->area() << endl;

    delete bar;
    delete[] baz;

    return 0;
}