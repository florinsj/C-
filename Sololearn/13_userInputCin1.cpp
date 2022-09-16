#include <iostream>
using namespace std;

int main()
{

    int a;
    cout << "Please enter a number: "; // cout and inseration operator ; cout from <iostream>

    // to enable user input use "cin" in combination with extraction operator ">>"
    // ex.: int num; cin>>num;
    // cin is included in <iostream> header file
    // cin can be chained to request more than one input : cin>>a>>b>>c;

    cin >> a;
    cout << "\nYou entered: " << a;

    return 0;
}