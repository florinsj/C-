// Expression
// = operators, constants and variables wich are arranged according the rules of the language
// it can also contain function calls wich return values
// every expression produce some value

// (a+b)-c
// (x/y)-z
#include <iostream>
using namespace std;
int main()
{

    // constant expressions - consist of only constant values and produce a constant expression
    int x = 2;        // constant expression
    double z = 45;    // constant expression
    z = (3 / 2) * 4;  // constant expression
    static int a = 3; // constant expression

    // integral expression  -  produce integer value as output
    int(x * z) - 5;    // integral expression
    x = z + int(10.0); // integral

    // float expression  -  produce integer value as output
    float a = 2.3;
    float b = 3.1;
    float c;
    c = a + b; // float expression
    c = a + float(10);

    // pointer expression  -  produce pointer value as output
    int arr[] = {1, 2, 4};
    int *ptr;
    ptr = arr; // pointer expression
    ptr = &x;  // pointer expression
    ptr++;     // pointer expression

    // relational expression - produce a value of type bool
    bool var = a > b; // relatinal expression
    cout << (b <= a);

    // logical expression - combine two or more relational expressions and produce a bool value
    cout << ((a > b) || (a > c)); // logical expression

    // bitwise expression - used to manipulate the data at bit level
    int bit = 1;
    cout << (bit >> 2); // bitwise expression , right shift with 2 bit

    // special assignment expressions

    (a = b) = 30;       // chained assignment expression
    a = 10 + (b = 100); // embedded assignement expression
    a += 10;            // compund asssignment expression =combination of asignment and binary op

    return 0;
}