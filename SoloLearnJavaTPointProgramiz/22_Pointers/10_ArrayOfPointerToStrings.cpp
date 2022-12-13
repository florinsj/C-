// JavaTPoint
// Array of pointers= array that consist of variables of pointer type
/*
Array of pointer to strings= array of pointers, where each pointer points to address of
first character from a string(base address of a string)

*/

// array of pointers to strings-better than two dimensional array of chars - less memory consume
// array of pointers to string - better manipulation of strings
#include <iostream>
using namespace std;
int main()
{

    // char *names[5] = {"John", "Peter", "Marco", "Devin", "Ronan"}; //equivalent with:
    char *names[] = {"John", "Peter", "Marco", "Devin", "Ronan"};

    for (int i = 0; i < 5; i++)
    {
        cout << names[i] << endl;  // output : each string
        cout << *names[i] << endl; // output : first letter from each strings
    }

    return 0;
}