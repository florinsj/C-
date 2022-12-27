// JavaTPoint
// free() and malloc() example
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{

    int *ptr;                             // declare the pointer
    ptr = (int *)malloc(5 * sizeof(int)); // allocate memory

    cout << "Enter 5 integers: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> *(ptr + i); //  <==> cin>>ptr[i]
    }
    cout << endl
         << "The entered values are:" << endl;

    for (int i = 0; i < 5; i++)
    {

        cout << *(ptr + i) << " ";
    }

    free(ptr); // destroy allocated memory

    cout << endl
         << "Let's print the garbage values, after ptr is free: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }
    return 0;
}