// defining methods outside the namespace
#include <iostream>
using namespace std;
namespace ns
{
    void display();
    class geek
    {
    public:
        void display();
    };
}

// defining methods outside the namespace
void ns::geek::display()
{
    cout << "ns::geek::display()" << endl;
}
void ns::display()
{
    cout << "ns::display()" << endl;
}

int main()
{
    ns::geek obj;
    obj.display();
    ns::display();

    return 0;
}