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

void printName(char *name)
{
    cout << "Name is: " << name << endl;
}

int main()
{
    char s[20];           // array declaration
    void (*ptrF)(char *); // function pointer declaration, takes a char array and return void
    ptrF = printName;     // function pointer points to printName();
    cout << "Enter the name of the person: " << endl;
    cin >> s;
    cout << s << endl;
    ptrF(s);
    return 0;
}