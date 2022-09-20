// do while loop
// unlike "while" and "for" wich tests the condition on top, do()while checks the cond at bottom
// do while similar with while, the difference is that do while execute the code at least one time!!
// do {statements} while(condition);
// if the condition evaluate to false, do while run at list one time
// first execute the set of statements at least once, and then test the condition
// if condition never evaluate to false, do while will run forever;

#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    do
    {
        cout << a << endl;
        a++;

    } while (a < 5);

    int b = 30;
    do
    {
        cout << b << endl;
        b++;

    } while (b < 5); // condition false but do while run statements one time

    int c = 30;
    do
    {
        cout << c << endl;
        c++;

    } while (c > 0); // condition never evaluate to false --> do while run forever
    return 0;
}