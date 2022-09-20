// Countdown

// You need to make a countdown app.Given a number N as input,
// output numbers from N to 1 on separate lines.Also, when the current countdown number is a multiple of 5,
// the app should output "Beep".
// Hint : You can use the modulo operator% to check if a number is a multiple of 5.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // your code goes here
    for (int i = n; i >= 1; i--)
    {
        cout << i << endl;
        if (i % 5 == 0)
            cout << "Beep" << endl;
    }

    return 0;
}