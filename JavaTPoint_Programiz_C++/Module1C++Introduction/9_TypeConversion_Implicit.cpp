// DataType conversion -- Implicit conversion
// C++ allow us to convert data of one type to another type

// two types of conversion :
// 1.Implicit Conversion = is automatically done by compiler= automatic conversion
// 2.Explicit Conversion (Type Casting)

// Data loss durinng conversion happen when a larger datatype is converted to data of smaller type

// Implicit conversion
#include <iostream>
using namespace std;
int main()
{

    int num1_int = 1;

    double num1_double = 9.99;

    // implicit conversion example1 (int to double )
    num1_double = num1_int;
    // implicit conversion;assigning an int value to a double value
    // the int value is automatically converted to double;

    cout << "num1_int=" << num1_int << endl;
    cout << "num1_double=" << num1_double << endl;

    int num2_int = 2;

    double num2_double = 4.99;
    // implicit conversion example2;
    num2_int = num2_double;
    // the double value is automatically converted to int;
    cout << "num2_int=" << num2_int << endl;
    cout << "num2_double=" << num2_double << endl;

    return 0;
}