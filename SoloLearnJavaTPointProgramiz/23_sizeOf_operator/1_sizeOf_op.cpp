// C++ guarantee a minimum size for the basic data types depdending on the arhitecture

// bool - 1 byte (minimum)

// char - 1 byte (minimum)

// short -2 bytes (minimum)
// int - 2 bytes (minimum)
// long - 4 bytes (minimum)
// long long - 8 bytes (minimum)

// float - 4 bytes (minimum)
// double - 8 bytes (minimum)
// long double - 8 bytes (minimum)

// the "sizeof" operator is used to get a variable data type's size, in bytes

// ex: sizeof(int)
#include <iostream>
using namespace std;

int main()
{

    // outputs may vary , according the arhitecture and compiler

    cout << "char: " << sizeof(char) << endl;
    cout << "int: " << sizeof(int) << endl;

    int var1;
    cout << "var1 size: " << sizeof(var1) << endl;

    return 0;
}