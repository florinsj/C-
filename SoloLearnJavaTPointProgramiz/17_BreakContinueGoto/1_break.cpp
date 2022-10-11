// programiz.com
// break
// break --> terminates the loop when it is encountered

#include <iostream>
using namespace std;
int main()
{

    // break with for loop
    for (int i = 1; i <= 5; i++)
    {

        // break conditipon
        if (i == 3)
        {
            break;
        }
        cout << i << endl;
    }
    //___________________________________________________________________

    // break with while loop
    int number1;
    int sum1 = 0;
    while (true)
    {

        // take input from user
        cout << "Enter a number: ";
        cin >> number1;

        // break condition
        if (number1 < 0)
        {
            break;
        }
        // add all positive numbers
        sum1 += number1;
    }
    cout << "The sum1 is " << sum1 << endl;
    //___________________________________________________________________

    // break with nested loop
    int number2;
    int sum2 = 0;

    // nested  loops
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (i == 2)
                break;
            // terminates  the j-iteration for loop(inner for )
            // give the control to i-iteration for (outer for)
            cout << "i= " << i << " , j= " << j << endl;
        }
    }
    //___________________________________________________________________
    // the break statement is also used with switch statement

    return 0;
}