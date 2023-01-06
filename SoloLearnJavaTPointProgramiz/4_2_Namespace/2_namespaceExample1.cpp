// namespace example
// two function with same name but in different namespaces

#include <iostream>
using namespace std;

namespace firstNameSpace
{
    void func()
    {
        cout << "Inside firstNameSpace" << endl;
    }
}

namespace secondNameSpace
{

    void func()
    {

        cout << "Inside secondNameSpace" << endl;
    }
}

using namespace firstNameSpace;
int main()
{
    func(); // will use func() from firstNameSpace, because up we have using namespace firstNameSp

    // resolution operator   ::
    secondNameSpace::func(); // will use func() from secondNameSpace

    return 0;
}
