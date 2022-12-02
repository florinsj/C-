// in C++ we can use sizeof operator to determinate the size of an array
// we can calculate the number of elements by divide : theSizeOfArray / theSizeOfOneElement

#include <iostream>
using namespace std;
int main()
{

    int numbers[100];
    cout << "Array size= " << sizeof(numbers) << endl;
    cout << "Size of one element= " << sizeof(numbers[0]) << endl;
    cout << "Number of elements from array: " << sizeof(numbers) / sizeof(numbers[0]) << endl;

    return 0;
}