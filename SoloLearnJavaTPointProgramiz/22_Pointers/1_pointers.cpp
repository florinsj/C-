// Pointers  - soloLearn

// variable = memory location
// every memory location -- has an address
// the address can be accesed with ampersand "&" operator (address operator)

// pointer = variable with the address of another variable as value
// the address data type = long hexadecimal number
// different pointers= pointers that points to different data type value

// to declare a pointer , we use asterisk sign and the type of variable that pointer points to
// ex: int *ip;

#include <iostream>
using namespace std;

int main()
{

    // address operator  &
    int score = 5;
    cout << &score << endl; // prints the address of score variable

    // pointer declaration  *
    int *ip;    // pointer to an integer;
    double *dp; // pointer to a double
    float *fp;  // pointer to a float
    char *cf;   // pointer to a char

    int *scorePtr;
    scorePtr = &score; // scorePtr=address of score variable
    cout << scorePtr << endl;
    return 0;
}