// cplusplus.com
// scope(resolution) operator

#include <iostream>
using namespace std;

class Rectangle
{
    int width, height; // private by default
public:
    void setvalues(int, int); // method prototype
    int area()
    {
        return width * height;
    }
};

// define function member outside of class using scope(resolution) operator
void Rectangle::setvalues(int x, int y)
{
    width = x;
    height = y;
}
int main()
{
    Rectangle rect;
    rect.setvalues(4, 5);
    cout << "rect area= " << rect.area() << endl;
    return 0;
}