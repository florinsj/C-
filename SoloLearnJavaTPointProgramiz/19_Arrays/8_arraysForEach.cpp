#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 32, 33, 21};
    for (int i : arr)
    {
        cout << i << endl;
    }
    return 0;
}