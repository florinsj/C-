// cplusplus.com
#include <iostream>
using namespace std;

class Polygon
{
protected:
    int width, height;

public:
    void set_values(int a, int b)
    {
        width = a;
        height = b;
    }
};
class Rectangle : public Polygon
{
public:
    int area()
    {
        return width * height;
    }
};
class Triangle : public Polygon
{
public:
    int area()
    {
        return width * height / 2;
    }
};
int main()
{
    Rectangle rect;
    Triangle trg1;
    rect.set_values(4, 5);
    trg1.set_values(4, 5);
    cout << "rect's area= " << rect.area() << endl;
    cout << "trg1's area=" << trg1.area() << endl;

    return 0;
}