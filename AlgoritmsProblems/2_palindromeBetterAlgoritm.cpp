#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    // complete the function
    int number = x;
    int reverseNumber = 0;
    while (x != 0)
    {
        reverseNumber = reverseNumber * 10 + x % 10;
        x = x / 10;
    }
    if (reverseNumber == number)
        return (true);
    return (false);
}

int main()
{
    int n;
    cin >> n;

    if (isPalindrome(n))
    {
        cout << n << " is a palindrome";
    }
    else
    {
        cout << n << " is NOT a palindrome";
    }
    return 0;
}