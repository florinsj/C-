// cplusplus.com
// pointer to base class cannot access members of derived class
// to solve this problem we create a virtual function in base class
// the virtual function will be redefined (overrided) in each derived class
// pointers will have access to virtual function, and this function is overrided in derived classes

#include <iostream>
using namespace std;

class Polygon
{
protected:
    int width, height;

public:
    void setValues(int a, int b)
    {
        width = a;
        height = b;
    }
    virtual int area() { return 0; }
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
    Triangle trg;
    Polygon poly;

    Polygon *ppoly1 = &rect;
    Polygon *ppoly2 = &trg;
    Polygon *ppoly3 = &poly;

    ppoly1->setValues(4, 5); // same as *ppoly1.setValues(4,5)
    ppoly2->setValues(4, 5); // same as *ppoly2.setValues(4,5)
    ppoly3->setValues(4, 5); // same as *ppoly3.setValues(4,5)

    cout << ppoly1->area() << endl; // call area from Rectangle
    cout << ppoly2->area() << endl; // call area from Triangle
    cout << ppoly3->area() << endl; // call area from Polygon
    // if "virtual" keyword will be removed, all 3 calls will call area from Polygon -- 0

    return 0;
}