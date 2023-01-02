// JavaTPoint

#include <iostream>
using namespace std;
void func1(); // prototype
void func2(); // prototype

#pragma startup func1 // if called , func1 will run first
#pragma exit func2    // if called , func2 will run last, before exit

void func1()
{
    cout << "Inside func1" << endl;
}
void func2()
{
    cout << "Inside func2" << endl;
}

int main()
{

    func1();
    func2();
    cout << "Inside main()" << endl;
    return 0;
}

// output  :
// Inside func1
// Inside main()
// Inside func2
