// programiz.com
// continue
// continue --> skip the current iteration, control flow jumps to update expression

// app
// calculate sum of all positive numbers(user input) till 50
// if negative number-- loop terminate, if above 50 --> skip iteration

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int number = 0;
    while (number >= 0)
    {
        sum += number;
        cout << "Enter a number: ";
        cin >> number;

        // continue condition
        if (number > 50)
        {
            cout << "the number is greater than 50 and won't be calculated..";
            number = 0;
            continue;
        }
    }
    cout << "The sum is: " << sum << endl;
    return 0;
}