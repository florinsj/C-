// JavaTPoint

/*
- enum = datatype that contains fix set of constants
- enum constansts = static and final implicitly
- enum can be thought of as classes that have fixed set of constants

- enum can be used for cardinal direction (NORTH,SOUTH,EAST,WEST) , days of week (SUNDAY,MONDAY,..)

Enums
    - can be traversed
    - can be used in switch
    - can have fields, methds, constructors

    -can implement many interfaces but cannot extend any class because it intern extend Enum class


*/

// Exmaple Enum

#include <iostream>
using namespace std;
enum week
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
int main()
{
    week day;
    day = Friday;

    cout << day << endl;
    cout << day + 1 << endl;

    return 0;
}