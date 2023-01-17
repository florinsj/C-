// JavaTPoint , cplusplus.com
#include <iostream>
using namespace std;

int main()
{

    class Rectangle
    {
        int width, height; // default access modifier = private

    public:
        void setValues(int i, int j)
        {
            width = i;
            height = j;
        }
        int area()
        {
            return width * height;
        }

    } rect; // declare class and object variable in same time

    rect.setValues(4, 4);
    cout << "rect area=" << rect.area() << endl;

    return 0;
}