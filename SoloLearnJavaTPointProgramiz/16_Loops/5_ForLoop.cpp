// Sololearn
// for loop
// is a repetition control loop that allows you to run a set of statements, a specific number of times
// for(init;condition;increment) { statementsSet}
// the loop's body repeat itself until the condition become false;
// for (int i=1;i<5;i++) {//some code}
// the init and increment can be left out , but semicolons are mandatory !!
// int i=1; for(;i<10;) {  statements; i++; etc;}

#include <iostream>
using namespace std;

int main()
{

    for (int a = 0; a < 10; a++)
    {
        cout << a << endl;
    }

    int i = 10;
    for (; i < 20;) // here we left out the init and increment
    {
        cout << i << endl;
        i++;
    }

    for (int a = 0; a < 10; a += 2)
    {
        cout << a << endl;
    }

    for (int a = 100; a >= 80; a -= 2)
    {
        cout << a << endl;
    }

    return 0;
}