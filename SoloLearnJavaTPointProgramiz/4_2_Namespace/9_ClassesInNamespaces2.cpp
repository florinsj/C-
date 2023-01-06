// declaring class in namespace and defining class outside the namespace

#include <iostream>
using namespace std;
namespace ns
{
    class geek; // declaring class inside namespace
}

// defining class outside namespace
class ns::geek
{

public:
    void display()
    {

        cout << "in this example we defining class outside the namespace" << endl;
    }
};
int main()
{
    ns::geek obj;
    obj.display();
    return 0;
}