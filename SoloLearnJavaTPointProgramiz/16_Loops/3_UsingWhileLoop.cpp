// Sololearn
#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    int number;
    int sum = 0;
    while (num <= 5)
    {
        cout << "\nPlease enter " << num << "th number:";
        cin >> number;
        num++;
        sum += number;
    }
    cout << "The sum of numbers is:" << sum << endl;
    return 0;
}