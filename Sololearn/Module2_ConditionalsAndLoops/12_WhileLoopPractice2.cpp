// Create a timer program that will take the number of seconds as input,
// output the remaining time and countdown to 0. You need to output every number, including 0.

#include <iostream>
using namespace std;

int main()
{
    int seconds;
    cin >> seconds;

    // your code goes here

    while (seconds >= 0)
    {
        cout << seconds << "\n";
        seconds--;
    }

    return 0;
}