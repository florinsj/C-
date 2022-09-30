// Sololearn
// A supermarket has launched a campaign offering a 15% discount on 3 items.
// Write a program that takes the total price for every purchase as input
// and outputs the relevant discount.
// ​ Use cin inside the loop to the get an input for every iteration.

#include <iostream>
using namespace std;

int main()
{
    int purchaseAmount = 0;
    double totalPrice;

    // your code goes here

    do
    {
        cin >> totalPrice;
        cout << totalPrice * 0.15 << endl;

        purchaseAmount++;

    } while (purchaseAmount < 3);

    return 0;
}