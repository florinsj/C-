// JavaTPoint
// free() with NULL  example
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{

    int *p1 = NULL;
    int *p2;
    int x = 9;

    p2 = &x;

    if (p1)
    {
        cout << "Pointer not NULL" << endl;
    }
    else
    {
        cout << "Pointer is NULL" << endl;
    }
    free(p1); // here runtime error because p1 is not allocated, is NULL
    free(p2);

    return 0;
}