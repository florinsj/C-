// JavaTPoint
// Array of pointers= array that consist of variables of pointer type

#include <iostream>
using namespace std;

int main()
{
    int p1[5];  // integer array declaration
    int *p2[5]; // array of 5 integer pointers

    int a;
    p2[2] = &a;              // the 3rd element of array contain address of a
    int thirdValue = *p2[2]; // dereferencing third element of array

    cout << "Enter five numbers: " << endl;

    // get elements of array - user input
    for (int i = 0; i < 5; i++)
    {
        cin >> p1[i];
    }

    // assign to each pointer(from array pointer) the corespondent address of  element from array p1
    for (int i = 0; i < 5; i++)
    {
        p2[i] = &p1[i];
    }

    // print the values of array with pointer dereferencing
    cout << "The values of array are:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << *p2[i] << endl;
    }
    return 0;
}