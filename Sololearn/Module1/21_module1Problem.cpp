// Transportation

// You are making a program for a bus service.
// A bus can transport 50 passengers at once.
// Given the number of passengers waiting in the bus station as input,
//  you need to calculate and output how many empty seats the last bus will have.

#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int seats = 50;
    cout << "How many passangers wait in station?";
    int waitingPassangers;
    cin >> waitingPassangers;
    int remainingEmptySeats = seats - (waitingPassangers % seats);
    cout << "Remaining Empty Seats=" << remainingEmptySeats;
    return 0;
}