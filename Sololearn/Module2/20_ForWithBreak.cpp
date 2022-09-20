// for can be terminate with break statement

#include <iostream>
using namespace std;

int main()
{

    for (int a = 0; a < 10; a++)
    {
        cout << a << endl;

        if (a == 5)
            break; // when a=5, the break statement terminate the for loop
    }

    return 0;
}