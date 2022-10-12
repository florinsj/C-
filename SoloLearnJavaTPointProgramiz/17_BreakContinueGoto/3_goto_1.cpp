// javaTPoint
// goto == jump statement; jump unconditionally to a specified label
// transfer the control to the other part of program

// in modern programming goto is considered a bad practice, harmful!! use continue and break instead

#include <iostream>
using namespace std;

int main()
{

ineligible:
    cout << "You are not eligile to vote!\n";
    cout << "Enter your age: ";
    int age;
    cin >> age;
    if (age < 18)
    {
        goto ineligible;
    }
    else
        cout << "You are eligible to vote!";
}