// JavaTPoint
//  Function pointer
//  = a pointer used to point function
//  = used to store the address of a function

// we can call the func by using function pointer or we can pass function pointer to other func

// Function pointer contains RAM address of the first instruction from respective function

// Syntax : int (*FuncPtr) (int,int);  // function declaration
// the above function pointer can point to any function which takes 2 int and return an int value

// address of a function  -->  ex: &main - return the address of main() function

#include <iostream>
using namespace std;

int main()
{
    cout << "Address of main() is: " << &main << endl;

    return 0;
}