// programiz.com
// functions
// function = block of code that perform a task
// ** Standard Library Functions -- functions predefined in C++
// ** User-defined function -- created by users
// user-defined f benefits :code reusability, programe easier, readability

#include <iostream>
using namespace std;

void great() // return type -- void (no return any value)
{
    cout << "Hello World!";
}

void printNum(int num)
{
    cout << num;
}

void displayNum(int n1, float f1)
{
    cout << "\nThe int number is: " << n1;
    cout << "\nThe float number is: " << f1;
}

int add(int a, int b) // this function will return an int value
{
    return (a + b);
    // the return means that function ended; any code inside function after return won't be executed
}
int main()
{
    great(); // calling great function ; great() has no parameters

    int n = 2;
    printNum(n); // calling printNum() function with parameter n

    int a = 2;
    float f = 5.5;
    displayNum(a, f); // calling displayNum()  function with a and f parameters

    int sum;
    sum = add(100, 2);
    cout << "\nSum of " << 100 << " and " << 2 << "= " << sum;

    return 0;
}
