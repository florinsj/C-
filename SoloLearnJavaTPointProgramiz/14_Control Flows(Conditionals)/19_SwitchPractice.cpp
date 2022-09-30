// Sololearn
// switch statement

// A coffee vending machine makes 5 types of coffee :
//  1 - Latte 2 - Americano 3 - Espresso 4 - Cappuccino 5 - Macchiato
// Write a program that will take a number from the customer as input and serve the corresponding coffee type.
// Remember to terminate each case using the "break" statement.

#include <iostream>
using namespace std;

int main()
{
    int choice = 0;
    cin >> choice;
    /*1 - Latte
    2 - Americano
    3 - Espresso
    4 - Cappuccino
    5 - Macchiato */

    // your code goes here
    switch (choice)
    {

    case 1:
        cout << "Latte";
        break;
    case 2:
        cout << "Americano";
        break;
    case 3:
        cout << "Espresso";
        break;
    case 4:
        cout << "Cappuccino";
        break;
    case 5:
        cout << "Macchiato";
        break;
    }

    return 0;
}