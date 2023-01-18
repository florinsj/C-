// JavaTPoint
// friend functions = functions preceded with "friend" keyword (declared in the class)

// private and protected data of the class CANNOT be accessed from outside of the class
// private and protected data of the class however CAN be accessed by friend functions

/*
a non-member function can access the private/protected member of a class if it is declared as
a frind of that class.That is done by including a declaration of this external function inside
class and preceded by keyword "friend"
*/

// friend function is NOT a member class !!
// friend function has access to peivate/protected members of the class without being a member

// properties:
// the friend function is not in the scope of the class to which it was declared as a friend
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
