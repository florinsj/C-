// JavaTPoint
// struct Rectangle example

#include <iostream>
using namespace std;

struct Rectangle
{
    int width, height;
};

int main()
{
    struct Rectangle rec; // rec is an variable(instance) of struct Rectangle
    rec.width = 8;        // rec is an variable(instance) of struct Rectangle
    rec.height = 5;

    cout << "Area of rectangle rec is: " << (rec.height * rec.width) << endl;

    return 0;
}