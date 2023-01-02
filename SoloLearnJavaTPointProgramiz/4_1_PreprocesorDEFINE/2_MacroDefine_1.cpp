#include <iostream>
#define LIMIT 5 // before compiling, LIMIT is replaced with 5 , everywhere in the program
using namespace std;

int main()
{
    for (int i = 0; i < LIMIT; i++)
    {
        cout << i << endl;
    }

    return 0;
}