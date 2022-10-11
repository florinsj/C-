// Sololearn
// You are given an array of doubles of items in a store that have different prices(see template).
// Write a program that takes the "percent off" discount as input and outputs discounted item prices
// on one line in the same sequence you are given, separated by a space(" ").

// To get a discounted price use the formula : a – a *p / 100,
// where a is the initial price and p is the discount percent off.

#include <iostream>
using namespace std;

int main()
{
    double items[] = {500, 12.4, 94, 45, 3, 81, 1000.9, 85, 90, 1, 35};

    // your code goes here
    int discount;
    cin >> discount;
    for (int x = 0; x < 11; x++)
    {
        cout << (items[x] - (items[x] * discount) / 100) << " ";
    }
    return 0;
}
