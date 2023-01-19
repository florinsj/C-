// runtime polymorphism overriding using two derived classes

#include <iostream>
using namespace std;

class Shape
{ // base class
public:
    virtual void draw() // virtual function
    {
        cout << "drawing Shape" << endl;
    }
};
class Rectangle : public Shape // inheriting Shape class

{
public:
    void draw()
    {
        cout << "drawing rectangle" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "drawing circle" << endl;
    }
};

int main()
{
    Shape *s;      // s= pointer to an object of Shape
    Shape sh;      // s= object of Shape
    Rectangle rec; // Rectangle obj
    Circle cir;    // Circle obj
    s = &sh;       // s points to sh object
    s->draw();
    s = &rec; // s points to rec
    s->draw();
    s = &cir; // s points to cir
    s->draw();

    return 0;
}
