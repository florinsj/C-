// JavaTPoint
//  Function pointer
//  = a pointer used to point function
//  = used to store the address of a function

// we can call the func by using function pointer or we can pass function pointer to other func

// Function pointer contains RAM address of the first instruction from respective function

// Syntax : int (*FuncPtr) (int,int);  // function declaration
// the above function pointer can point to any function which takes 2 int and return an int value

// *** passing function pointer as parameter
// the function pointer can be passed as a parameter to another function

#include <iostream>
using namespace std;
void func1()
{
    cout << "func1 is called" << endl;
}
void func2(void (*funcPointer)())
{
    funcPointer();
}
int main()
{

    void (*fpoint)();
    fpoint = func1;
    func2(fpoint);

    return 0;
}