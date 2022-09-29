// array - loops
// to iterate over the elements of an array, usually, this is accomplished with loop
#include <iostream>
using namespace std;
int main()
{
    int myArr[5];
    for (int x = 0; x < 5; x++)
    {
        myArr[x] = 42;
        cout << myArr[x] << endl;
        }

    return 0;
}