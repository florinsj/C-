// dynamic memory allocated for arrays

#include <iostream>
using namespace std;

int main()
{

    int *p = NULL;   // initialize pointer with NULL
    p = new int[20]; // request memory for an int with 20 elements
    delete[] p;      // free up memory; delete array pointed by p

    return 0;
}