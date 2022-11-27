// JavaTPoint
// Storage classes = visibility and scope of a variable

// Static

// keyword -- static
// the static variable is initialized once in program and exists to the end of program
// the static variable value remains between multiple functions call
// lifetime -- whole program
// visibility -- local

#include <iostream>
using namespace std;

void func()
{

    static int i_static = 0;
    int j_normal = 0;
    i_static++;
    j_normal++;
    cout << "i static= " << i_static << endl;
    cout << "j normal= " << j_normal << endl;
}

int main()
{
    func();
    func();
    func();

    return 0;
}