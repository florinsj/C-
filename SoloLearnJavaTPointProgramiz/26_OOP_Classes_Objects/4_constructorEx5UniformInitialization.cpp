// constructor uniform initialization

// functional form= constructor call with arguments in parentheses

// another syntaxes

// one parameter constructor --- > className obj=argument value;

// uniform initialization= same as functional form but using braces {} instead of ()
//  ex. className obj{ value1, value2, value3...}
//  ex. className obj={ value1, value2, value3...}

/* uniform initialization is preferred over functional form, because braces {} cannot be confused
with function */

// example - four ways to call constructor that takes one single parameter

#include <iostream>
using namespace std;

class Circle
{

    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }
    double circum()
    {
        return 2 * radius * 3.14159;
    }
};

int main()
{
    Circle foo(10.0);    // functional form constructor call
    Circle bar = 20.0;   // assignment init constructor call
    Circle baz{30.0};    // uniform init constructor call
    Circle qux = {40.0}; // uniform init (second version) constructor call
    cout << "foo's circumference: " << foo.circum() << endl;
    return 0;
}