// Sololearn
// You are on a 5 hour sea voyage. The ship sails at a speed of 40 km per hour.
// Write a program that will output how many kilometers the ship has traveled by each hour.
// ​Remember to use endl to create a new line for every iteration output.

#include <iostream>
using namespace std;

int main()
{
    int distance = 0;
    // your code goes here
    for (int h = 1; h <= 5; h++)
    {
        cout << h * 40 << endl;
    }

    return 0;
}