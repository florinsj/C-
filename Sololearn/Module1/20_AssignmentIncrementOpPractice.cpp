// A robot can type 300 letters per minute.The given program takes the text input time(in minutes).

//     Task
// Complete the code to calculate and output the number of letters that will be typed
// in a given time.

#include <iostream>
using namespace std;

int main()
{
    int count = 300; // letter in a minute
    int time;
    cin >> time;

    // your code goes here
    count *= time;

    cout << count << endl;
    return 0;
}