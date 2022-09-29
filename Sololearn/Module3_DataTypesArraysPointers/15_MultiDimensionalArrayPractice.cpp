// You are given a two - dimensional array with 3 rows and 3 columns-- 9 elements.Task
// Complete the code to output "C++".
// Hint   Don't forget that the index of the first element of the array is 0.

#include <iostream>
using namespace std;

int main()
{

    string arr[3][3] = {
        {"Python", "JS", "C++"},
        {"PHP", "SQL", "Java"},
        {"C#", "Swift", "Kotlin"},
    };
    // your code goes here
    cout << arr[0][2];
    return 0;
}
