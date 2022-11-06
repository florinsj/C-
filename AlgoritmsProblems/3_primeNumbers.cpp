// determine if an user-input number is prime
#include <iostream>
using namespace std;

int main()
{
    int num, d; // global var , initialized with 0 value
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            d++;
        }
    }
    if (d == 0)
        cout << "\n"
             << num << " is a prime number!";
    else
        cout << "\n"
             << num << " is NOT a prime number!";
    return 0;
}
