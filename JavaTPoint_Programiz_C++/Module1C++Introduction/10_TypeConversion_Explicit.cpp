// DataType conversion -- Explicit conversion
// C++ allow us to convert data of one type to another type

// two types of conversion :
// 1.Implicit Conversion = is automatically done by compiler= automatic conversion
// 2.Explicit Conversion (Type Casting) = when use manualy changes data from a type to another

// Data loss durinng conversion happen when a larger datatype is converted to data of smaller type

// Explicit conversion
// 3 styles :
// 1.C-style                    -- Syntax: (double)expression
// 2.function notation          -- Syntax: double(expression)
// 3.type conversion operators  -- static_cast, dynamic_cast. const_cast, reinterpret_cast

#include <iostream>
using namespace std;
int main()
{
    int nume_int = 26;
    cout << "nume_int= " << nume_int << endl;

    double num1_double;
    double num2_double;
    num1_double = (double)nume_int; // C-style
    num2_double = double(nume_int); // function notation

    cout << "nume1_double= " << num1_double << endl;
    cout << "nume2_double= " << num2_double << endl;

    return 0;
}