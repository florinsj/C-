// Sololearn
// multi-dimensional array = an array which holds one or more arrays
// Declaration syntax : type name[size1][size2][size3]..[sizeN];

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int arr[3][4]; // two dimensional array 3x4; 3 rows, 4 columns

    int x[2][3] = {{2, 3, 4}, {8, 9, 10}}; // 2 rows x 3 column
    cout << x[0][2] << endl;               // access elements of array using index of row and column

    string threeD[42][8][3]; // three dimensional array

    return 0;
}
