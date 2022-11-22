// programiz.com
// functions - prototype
// In C++ a function definition should be before the function call
// however if we want to define a function after function call we need to use function prototype

// example - function prototype

#include <iostream>
using namespace std;

void displaySum(int a, int b); // function prototype before function call
int add(int a, int b);         // function prototype before function call

int main()
{
    displaySum(10, 20);
    int sum;
    sum = add(10, 20);
    return 0;
}

// function definition
void displaySum(int a, int b)
{
    cout << (a + b) << endl;
}

// function definition
int add(int a, int b)
{
    return (a + b);
}