// javaTPoint
//  free() and calloc() example
// calloc() allocates a block of memory with specific size and initializes all its bits to 0
// syntax  -- p=(int*)calloc(num_elems,sizeof(int));

#include <iostream>
using namespace std;
#include <cstdlib>

int main()
{
    float *ptr;                              // pointer declaration
    ptr = (float *)calloc(1, sizeof(float)); // we allocate memory for 1 float element
    *ptr = 6.7;
    cout << "The value of ptr before free() " << *ptr << endl;
    free(ptr);
    cout << "The value of ptr after free() " << *ptr << endl;

    return 0;
}