// JavaTPoint

// if we not use free() func at correct place , this can lead to dangling pointers

#include <iostream>
using namespace std;

int *func()
{
    int *p;
    p = (int *)(malloc)(sizeof(int));
    free(p);
    return p; // in this case we return a dangling pointer because p memory was released
}
int main()
{
    int *ptr;
    ptr = func(); // dangling pointer because point to a released memory
    free(ptr);

    return 0;
}