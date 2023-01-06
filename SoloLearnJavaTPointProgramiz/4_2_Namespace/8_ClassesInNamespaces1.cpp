#include <iostream>
using namespace std;
namespace ns
{
    class geek
    {
    public:
        void display()
        {
            cout << "ns::geek::display()" << endl;
        }
    };
}
int main()
{
    ns::geek obj; // creating an object of type geek
    obj.display();

    return 0;
}