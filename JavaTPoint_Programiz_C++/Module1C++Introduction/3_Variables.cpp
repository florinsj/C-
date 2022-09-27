// Variable = name of a memory location;
// = a container(storage area)
// used to store data
// a way to represent a memory location
// syntax: dataType variableName;
// each variable should be given a unique name (identifier)

// Rules for naming variables
// variable name can start with underscore or letters, cannot start with digit
// can include letters, digit and underscore
// no white space
// no keyword

#include <iostream>
using namespace std;
int main()
{

    int a;
    a = 3;
    int b = 3; // declaration and initialization
    float f = 45.3;
    char c = 'a';

    int x, y, z; // multiple variables declaration

    int houseNumber; // valid variable name
    int _age;        // valid variable name
    int _age10;      // valid variable name
    int age_10;      // valid variable name

    // int 8age;           // invalid variable name
    // int house number;   // invalid variable name

    return 0;
}