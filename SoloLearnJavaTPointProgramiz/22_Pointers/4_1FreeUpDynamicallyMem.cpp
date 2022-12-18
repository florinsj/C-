// for local variables in the stack, managing memory is carried out automatically
// on the heap - is necesary manualy managing memory

// to free up memory - we need to use "delete" operator ( free() function in C)
// ex: delete pointer;  -- releases the memory pointed to by pointer
// forgeting free up memory alloc. with new-->memory leaks, because memory will stay until app end

// when memory is no longer needed it needs to be dealocated so the mem can be used for another
// this ca be achieved by using "delete" operator
// delete *p; // delete existing object
// delete [n] pointer_var ;  <==> delete [] pointer_var // delete existing array object

#include <iostream>
using namespace std;
int main()
{
    int *p = new int;   // request memory  (mallloc(), calloc() functions in C)
    *p = 5;             // store value at allocated address
    cout << *p << endl; // use value
    delete p;           // free up the memory ( free() function in C)
    cout << *p << endl;

    // single array declaration
    int *arr1 = new int[10];
    int *arr2 = new int[10];

    // delete array  - two ways
    delete[10] arr1;
    delete[] arr2;
}