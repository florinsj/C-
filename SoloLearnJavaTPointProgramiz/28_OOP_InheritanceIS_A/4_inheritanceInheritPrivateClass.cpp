// JavaTPoint

// example : inherit class as private

#include <iostream>
using namespace std;
class A
{
    int a = 4;
    int b = 5;

public:
    int mul()
    {
        int c = a * b;
        return c;
    }
};

class B : private A
{

    // because A is inherited private, members of A cannot be accesed by B objects

public:
    void display()
    {
        int result = mul();
        cout << "Result of multiplication is :" << result << endl;
    }
    // members of A can be acceses just by members of B in this case display() function
};

int main()
{
    B b;
    b.display();
}