// JavaTPoint
// friend functions = functions preceded with "friend" keyword (defined in the class)
// private and protecred data of the class can be accesed with friend function

// properties:
// the friend function is not in the scope of the cass to wich it was declaed as a friend
// it cannot be called using objects( as is not in the scope of the class)
// it can be invoked like a normal function, without an object
// it cannot acces member names directly, it has to use an object name and dot "." operator
// it can be declared  in private or public zone

// example : print the length of a box
#include <iostream>
using namespace std;

class Box
{

private:
    int length;

public:
    Box() : length(1) {} // constructor   // we initialize length=1

    friend int printLength(Box); // friend function prototype
};

int printLength(Box b)
{
    b.length += 10;
    return b.length;
}

int main()
{
    Box b; // create an Box object
    cout << "The length of the box is:" << printLength(b) << endl;

    return 0;
}
