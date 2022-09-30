// Sololearn

// basic arithmetic

#include <iostream>
using namespace std;

int main()
{
    int a = 30;
    int b = 20;
    int c = 10;

    // C++ - operators
    //  +   adition
    int sum = a + b;

    //  -   substraction
    int dif = a - b;

    // *    multiplication
    int square = c * c;

    // /    division   - integer division -- any remainder is dropped to return an integer value
    // if one or both of the operands are floating values, the division op performs floating division
    // !! dividing by 0 will crash the program
    int div1 = a / c; // 3
    int div2 = a / b; // 1
    int div3 = c / a; // 0
    cout << "Division by 0 will crash the program !!";
    int divCrash = c / 0;
    cout << "In this moment the program is not working !" << divCrash;

    // % modulus operator(remainder op) = return remainder from an integer division

    int mod1 = a % c; // 0
    int mod2 = a % b; // 10
    int mod3 = c % a; // 30

    // C++ - operator's precedence

    // * and / have higher precedence than + and -
    int preced1 = 5 + 2 * 2; // 9
    int preced2 = 5 - 2 * 2; // 1
    int preced3 = 5 - 2 / 2; // 4

    // parathesis () have the highest precedence

    int preced4 = 5 + 2 * 2;   // 9
    int preced5 = (5 + 2) * 2; // 14

    // precedence : 1.Parathesis  2. multiplication/division/modulus  3.adition/substraction

    return 0;
}