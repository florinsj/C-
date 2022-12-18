// JavaTPoint

// "new" operator - create a new object in memory == allocate memory

// int *p= new int; // declaration
// *p=10; // initialization
// int *q=new int(10) ;  // declaration  and initialization

// int *arr=new int[10]; // declaration of an array with 10 elements

// "delete" operator - delete the object == deallocate memory

// delete p;

// delete [] arr;

#include <iostream>
using namespace std;

int main()
{

    int size;
    int *arr = new int[size];
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "\nEnter the elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "\nThe elements of array are :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }

    delete[] arr;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }

    return 0;
}
