/*

--> the "delete" operator frees up the memory allocated for the variable ,
but does not delete the pointer itself, as the pointer is located in the stack memory

--> dangling pointers = pointers that are left pointing to non-existent memory locations
--> NULL pointer    = constant with a value of zero(defined in several libraries, includin iostream)
--> Good practice to assign NULL to a pointer when you declare it,
in case  you don't have the exact address
Ex: int *ptr=NULL;

*/

#include <iostream>
using namespace std;

int main()
{

    int *p1 = new int; // request memory
    *p1 = 5;           // store value

    delete p1;    // free up the memory  --> now p is a dangling pointer
    p1 = new int; // reuse p for a new address

    int *p2 = NULL; // p2 is a NULL pointer
    return 0;
}