#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {1, 3, 4, 2, 3};
    cout << "The numbers from array are :" << endl;

    // traditional loop
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // traditional forEach
    for (int n : numbers) // at each iteration, one value from array will be copied to n
                          // use more memory
    {
        cout << n << " ";
    }
    cout << endl;

    // forEach with range loop -- best choice for memory optimization
    for (const int &n : numbers) // &n will get just the address of each element from array
                                 // use less memory --> memory optimization
                                 // const because we don't want to change the values of array

    {
        cout << n << " ";
    }
}