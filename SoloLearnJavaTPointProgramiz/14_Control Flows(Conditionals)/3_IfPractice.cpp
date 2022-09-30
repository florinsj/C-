// Sololearn
// Admission to the pool is free for children under 7 years of age.
// The given program takes age as an input.

// Task
// Complete the code to output "free" if the child's age is less than 7.

#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;

    // your code goes here
    if (age < 7)
    {
        cout << "free";
    }

    return 0;
}