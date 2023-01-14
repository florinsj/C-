#include <iostream>
using namespace std;

class Shape
{

public:
    int a;
    int b;
    void setab(int n, int m)
    {
        a = n;
        b = m;
    }
};

class Rectangle : public Shape
{
public:
    int rectArea()
    {
        int result = a * b;
        return result;
    }
};

class Triangle : public Shape
{
public:
    int rectArea()
    {
        int result = 0.5 * a * b;
        return result;
    }
};

int main()
{

    Rectangle r;
    Triangle t;

    int length, breadth, base, height;

    cout << "Enter length and breadth of rectangle: " << endl;
    cin >> length >> breadth;
    r.setab(length, breadth);
    int m = r.rectArea();
    cout << endl
         << "Area of rectangle= " << m << endl;

    cout << "Enter base and height of triangle: " << endl;
    cin >> height >> base;
    t.setab(height, base);
    int n = t.rectArea();
    cout << endl
         << "Area of triangle= " << n << endl;

    return 0;
}