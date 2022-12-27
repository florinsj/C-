// JavaTPoint
#include <iostream>
using namespace std;
int main()
{
    int len;
    cout << "How many numbers? " << endl;
    cin >> len;
    int *ptr;

    ptr = (int *)malloc(sizeof(int) * len); // allocating memory to pointer variable

    // get numbers
    for (int i = 0; i < len; i++)
    {
        cout << "Enter a number: " << endl;
        cin >> *(ptr + i);
    }

    cout << "Elements are:" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << *(ptr + i) << endl;
    }

    free(ptr); // free (deallocate) the allocated memory for pointer ptr

    return 0;
}