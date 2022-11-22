#include <iostream>
using namespace std;

void display(int arr[][2]) // !! it is mandatory to specify the number of columns
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int array1[3][2] = {{3, 2}, {12, 14}, {20, 30}};
    display(array1);
    return 0;
}