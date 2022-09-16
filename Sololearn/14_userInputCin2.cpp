#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "enter a= "; // cout and inseration operator ; cout from <iostream>

    // to enable user input use "cin" in combination with extraction operator ">>"
    // ex.: int num; cin>>num;
    // cin is included in <iostream> header file
    // cin can be chained to request more than one input : cin>>a>>b>>c;
    cin >> a;
    cout << "enter b= ";
    cin >> b;

    return 0;
}