// programiz.com
// goto statement
// in modern programming goto is considered a bad practice, harmful!! use continue and break instead

#include <iostream>
using namespace std;
int main()
{
    float num, average, sum = 0.0;
    int i, n;
    cout << "Maximum number of inputs: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "Enter num" << i << ": ";
        cin >> num;
        if (num < 0.0)
        {
            goto jump;
        }
        sum += num;
    }
jump:
    average = sum / (i - 1);
    cout << "\nAverage= " << average;
    return 0;
}