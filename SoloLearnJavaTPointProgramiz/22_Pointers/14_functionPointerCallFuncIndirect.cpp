// JavaTPoint
//  Function pointer
//  = a pointer used to point function
//  = used to store the address of a function

// we can call the func by using function pointer or we can pass function pointer to other func

// Function pointer contains RAM address of the first instruction from respective function

// Syntax : int (*FuncPtr) (int,int);  // function declaration
// the above function pointer can point to any function which takes 2 int and return an int value

// calling a function indirectly

#include <iostream>
using namespace std;
int add(int a, int b)
{
    return (a + b);
}
int main()
{

    int (*funcP)(int, int); // function pointer declaration
    funcP = add;            // now funcP points to add();
    int sum = funcP(5, 5);
    cout << "Sum is: " << sum << endl;

    return 0;
}