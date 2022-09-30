// Sololearn
// while loop
// a loop repeatly execute a set of statements until a particular condition is satisfied
// while loop execute a set of statements repeatedly, until the given condition remain true
// while(condition) { statements}
// without  a condition that eventualy will be false , while loop will continue indefinitely

#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    while (num < 6)
    {
        cout << "Number: " << num << endl;
        num++; // the increment can be changed , ex: num=num+3;
    }
}