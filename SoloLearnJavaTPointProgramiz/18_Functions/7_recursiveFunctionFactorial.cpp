// JavaTPoint -- recursive function -- factorial

#include <iostream>
using namespace std;

int factorial(int n);
int main()
{
    int fact, value;
    cout << "Enter a number: ";
    cin >> value;
    fact = factorial(value);
    cout << "Factorial of " << value << " is " << fact << endl;
    return 0;
}

int factorial(int n)
{
    if (n < 0)
    {
        return -1;
    }
    else if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}