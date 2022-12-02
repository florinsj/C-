// in C++ memory is divided in two :
// the stack = all local variables
// the heap = unused program memory that can be used to dynamically allocate the memory

// for allocate memory at runtime within the heap for the variable of a datatype use "new" op
// ex: new int; -allocate memory to store an int on the heap and return that address

// the allocated memory can be stored in a pointer, which can then be dereferenced to access the var
// ex:  int *p=new int;  *p=5; -- we allocated dynamically memory for an int and assign value 5
// p is stored in stack as local var and holds the heap's allocated address
// the value of 5 is stored at that address in the heap

#include <iostream>
using namespace std;
int main()
{

    int *p = new int; // allocate dynamically memory for an int
    *p = 5;
    cout << p << endl;  // outputs the address of p
    cout << *p << endl; // outputs the value from dereferenced p
}