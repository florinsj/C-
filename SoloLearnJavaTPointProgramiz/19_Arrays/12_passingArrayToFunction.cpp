#include <iostream>
using namespace std;

void display(int arr[5])
{
    cout << "Elements of array:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Element " << i + 1 << ": " << arr[i] << endl;
    }
}
int main()
{

    int array1[5] = {1, 4, 3, 21, 43};
    display(array1);
    return 0;
}