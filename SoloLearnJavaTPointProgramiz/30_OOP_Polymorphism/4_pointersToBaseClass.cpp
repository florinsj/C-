// cpluplus.com
// pointer to base class cannot access members of derived class

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

    Polygon *ppoly1 = &rect;
    // pointer to Polygon object and assign it Rectangle/Triangle object
    // valid because Rectangle/Triangle is derived from Polygon
    // because pointer points to Polygon object, it can access only members of Polygon
    Polygon *ppoly2 = &trg;
    // same as above

    ppoly1->setValues(4, 5); // same as *ppoly1.setValues(4,5)
    ppoly2->setValues(4, 5); // same as *ppoly2.setValues(4,5)

    // cout<<ppoly1.area()<<endl;  Polygon pointer cannot access member of derived class of Polygon
    cout << rect.area() << endl;
    cout << trg.area() << endl;
    return 0;
}