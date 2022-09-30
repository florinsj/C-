// Sololearn
// else statement

// if can be followed by an opitonal else statement
// else execute when condition from if is false

/*
if (condition)
{
    statements
}
else
{
    statements
}
*/

#include <iostream>
using namespace std;

int main()
{
    int mark = 90;
    if (mark < 50)
    {
        cout << "You failed!" << endl;
    }
    else
    {
        cout << "You passed!" << endl;
    }

    return 0;
}