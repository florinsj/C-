#include <iostream>
using namespace std;

void printArray(int arr[5]); // function prototype

void printMin(int arr[5]); // function prototype
void printMax(int arr[5]); // function prototype

int main()
{

    int arr1[5] = {100, 20, 30, 40, 50};
    int arr2[5] = {10, 2, 3, 4, 5};
    printArray(arr1);
    printArray(arr2);
    printMin(arr1);
    printMin(arr2);
    printMax(arr1);
    printMax(arr2);
}

void printArray(int arr[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}

void printMin(int arr[5])
{
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i]) // it means that min is not minimum so arr[i]= actual minimum
        {
            min = arr[i];
        }
    }
    cout << "Min is " << min << endl;
}
void printMax(int arr[5])
{
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i]) // it means that max is not maximum so arr[i]= actual maximum
        {
            max = arr[i];
        }
    }
    cout << "Max is " << max << endl;
}
