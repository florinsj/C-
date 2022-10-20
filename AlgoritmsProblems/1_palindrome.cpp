// sololearn
// Palindrome Numbers

// A palindromic number is a number (such as 626) that remains the same when its digits are reversed.
// Write a function that returns true if a given number is a palindrome, and false, if it is not.
// Complete the given function, so that the code in main works and results in the expected output.

// Sample Input:
// 13431

// Sample Output:
// 13431 is a palindrome
// To check if a number is palindrome, you need to reverse it and compare with the original one.
#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    // complete the function

    int size = 0;
    int number = x;
    int reverseNumber;
    while (number % 10 != 0)
    {
        int digit = number % 10;
        cout << digit << endl;
        number = number / 10;

        size++;
    }
    cout << "\n Digits=" << size << endl;
    number = x;
    int sizeN = size;
    while (number % 10 != 0)
    {
        int digit = number % 10;
        reverseNumber += digit * pow(10, sizeN - 1);
        number = number / 10;
        sizeN--;
    }
    cout << "Your number is " << x << endl;
    cout << "Revers number is " << reverseNumber << endl;
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