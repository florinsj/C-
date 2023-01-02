#include <iostream>
using namespace std;

#define AREA(a, b) (a * b) // compiler replace everywhere, all the "AREA(a,b)"  with (a*b)

#define BETTERAREA(a, b) ((a) * (b))
// compiler replace everywhere, all the "AREA(a,b)"  with ((a)*(b))

int main()
{
    int area, l1 = 10, l2 = 20;

    // here, AREA(l1,l2) will be replaced with (l1*l2)
    area = AREA(l1, l2);
    cout << "Area of rectangle is:" << area << endl;

    // here, AREA(l1+1,l2+2) will be replaced with (l1+1*l2+2) ..error
    area = AREA(l1 + 1, l2 + 2);
    cout << "Area(logic error) of rectangle is:" << area << endl;

    // here, BETTERAREA(l1+1,l2+2) will be replaced with (l1+1*l2+2)
    area = BETTERAREA(l1 + 1, l2 + 2);
    cout << "Area of rectangle is:" << area << endl;

    return 0;
}