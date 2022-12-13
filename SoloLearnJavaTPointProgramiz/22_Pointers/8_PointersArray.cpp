// JavaTPoint
// In C++ the name of a array is considered as a pointer
// C++ consider the name of pointer as the address of the first element
// ex: int marks[20]; array name "marks" = pointer=contain the address of first element marks[0]
#include <iostream>
using namespace std;
int main()
{
    int *p1;       // integer pointer declaration
    int marks[10]; // array declaration
    cout << "Enter elements of an array:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> marks[i];
    }

    p1 = marks; // both marks and p1, point to the same element --> marks[0]
    cout << "The value of p1 is= " << *p1 << endl;
    cout << "The value of marks is= " << *marks << endl;
    return 0;
}