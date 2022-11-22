#include <iostream>
using namespace std;

int main()
{

    string arr1[3][3] = {{"e00", "e01", "e02"}, {"e10", "e11", "e12"}, {"e20", "e21", "e22"}};

    // display the array as a matrix
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << arr1[i][j] << " ";
        }

        cout << endl;
    }
}