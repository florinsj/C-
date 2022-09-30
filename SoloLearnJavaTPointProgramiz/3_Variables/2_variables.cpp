// Sololearn
// A variable is a reserved memory location or a space in memory for storing values

// A variable need to be declared with a data type and an identifier(name of variable)
// identifier is the name for a variable, function, class, module, etc
// identifier can start with a letter or an underscore "_" , folowed by additional letters,digits,etc
// identifier is case sensitive ;  "myvar" is not same with "myVar"
// C++ offer built-in data types as well as user-defined datatypes
// on different Os , the datatypes can have different sizes

#include <iostream>
using namespace std;

int main()
{
    int myVariable; // declaration of myVariable of type int  (integer value)itn
    myVariable = 4; // initialization of myVariable

    int var1, var2, var3; // multiple declaration of variables of same type, on single line

    int myVar2 = 10; // declaration and initialization on single line

    int a = 1;
    int b = 2;
    int sum = a + b;

    return 0;
}