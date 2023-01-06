// nested namespaces

#include <iostream>
using namespace std;

namespace firstSpace
{

    void func()
    {
        cout << "Inside firstSpace!" << endl;
    }
    namespace secondSpace
    {
        void func()
        {
            cout << "Inside secondSpace!" << endl;
        }
    }

}

using namespace firstSpace::secondSpace;
int main()
{

    func(); // this calls func() from secondSpace namespace;
    return 0;
}
