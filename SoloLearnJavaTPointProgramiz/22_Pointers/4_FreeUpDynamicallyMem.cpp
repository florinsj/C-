// for local variables in the stack, managing memory is carried out automatically
// on the heap - is necesary manualy managing memory

// to free up memory - we need to use "delete" operator
// ex: delete pointer;  -- releases the memory pointed to by pointer
// forgeting free up memory alloc. with new-->memory leaks, because memory will stay until app end

#include <iostream>
using namespace std;
int main()
{
    int *p = new int;   // request memory
    *p = 5;             // store value at allocated address
    cout << *p << endl; // use value
    delete p;           // free up the memory
    cout << *p << endl;
}