// the sum elements from an array

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {11, 12, 13, 21, 22};
    int sum = 0;
    for (int x = 0; x < 5; x++)
    {
        sum += arr[x];
    }
    cout << "The sum of all elements from array= " << sum << endl;

    return 0;
}