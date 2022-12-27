// programiz.com
// use array name as a pointer

#include <iostream>
using namespace std;
int main()
{
    float arr[5];

    // inserting data using pointer notation
    cout << "Enter 5 numbers: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> *(arr + i); // same with: cin >> arr[i]
    }

    // display data usig pointer notation
    cout << "the entered values are:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << endl; // same with cout << arr[i]
    }

    return 0;
}