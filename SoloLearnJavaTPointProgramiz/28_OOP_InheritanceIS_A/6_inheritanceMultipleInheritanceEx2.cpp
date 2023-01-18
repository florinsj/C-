// cplusplus.com
// multiple inheritance

#include <iostream>
using namespace std;

class Polygon
{
protected:
    int width, height;

public:
    Polygon(int a, int b) : width(a), height(b) {}
};
class Output
{
public:
    static void print(int i); // prototype
};
void Output::print(int i)
{
    cout << i << endl;
}

class Rectangle : public Polygon, public Output
{
public:
    Rectangle(int a, int b) : Polygon(a, b) {} // Rectangle constructor call Polygon constructor
    int area()
    {
        return width * height;
    }
};

class Triangle : public Polygon, public Output
{
public:
    Triangle(int a, int b) : Polygon(a, b) {} // Triangle constructor call Polygon constructor
    int area()
    {
        return width * height / 2;
    }
};
int main()
{
    Rectangle rect(4, 5);
    Triangle trg(4, 5);
    rect.print(rect.area());
    trg.print(trg.area());
    return 0;
}