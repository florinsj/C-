#include <iostream>
using namespace std;

namespace firstSpace
{
    void func()
    {
        cout << "Inside firstSpace" << endl;
    }
}

namespace secondSpace
{
    void func()
    {

        cout << "Inside secondSpace" << endl;
    }
}

int main()
{
    firstSpace::func();
    secondSpace::func();
}