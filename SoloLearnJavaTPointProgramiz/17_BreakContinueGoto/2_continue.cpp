// programiz.com
// continue
// continue --> skip the current iteration, control flow jumps to update expression

#include <iostream>
using namespace std;

int main()
{

    // continue with for loop
    for (int i = 1; i <= 5; i++)
    {

        // condition for continue
        if (i == 3)
        {
            continue;
            // if i==3, continue statement skips the current iteration and start the next iteration
        }
        cout << i << endl;
    }
    return 0;
}
