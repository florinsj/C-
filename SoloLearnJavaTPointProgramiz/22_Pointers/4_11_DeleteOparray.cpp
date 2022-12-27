// JavaTPoint
//  delete op array example
#include <iostream>
using namespace std;

int main()
{

    int *ptr = new int[5]; // declaration of pointer  and allocation memory

    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> ptr[i]; // ptr[i] <==> *(ptr+i)
    }
    cout << "Entered values are :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " "; // ptr[i] <==> *(ptr+i)
    }

    delete[] ptr;
    cout << endl
         << "After delete, garbage values are :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " "; // ptr[i] <==> *(ptr+i)
    }
    return 0;
}