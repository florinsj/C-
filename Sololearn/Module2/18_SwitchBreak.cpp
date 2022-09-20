// switch - test  variable for equality against multiple values
// alternative to multiple if
// switch statement test a variable against a list of values wich are called cases
// if variable = case value, it execute the code from that case

// break statement --> terminate switch statement
// after a match case, all the code is executed(even those that don't match) until encountering a break
// the code from default case is executed when none of the cases match the switch variable

/*
switch (expression)
{
case value1:
    code;
    break;
case value2:
    code;
    break;
case valueN:
    code;
    break;
default:
    code;
    break; //optional break statement for default case
}
*/
#include <iostream>
using namespace std;

int main()
{
    int age = 42;
    switch (age)
    {
    case 16:
        cout << "Too young!";

    case 42: // here match case . from here all the code is executed until encountering a  break statement

        cout << "Adult!";
    case 70:               // executed
        cout << "Senior!"; // executed
    }
    return 0;
}
