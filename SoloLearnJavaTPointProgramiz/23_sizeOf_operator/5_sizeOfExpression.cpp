// JavaTPoint
#include <iostream>
using namespace std;
int main()
{
    int num1;                    // size of int= 4 bytes
    double num2;                 // size of double= 8 bytes
    cout << sizeof(num1 + num2); // size of sum will be the size of operand wich is bigger

    return 0;
}