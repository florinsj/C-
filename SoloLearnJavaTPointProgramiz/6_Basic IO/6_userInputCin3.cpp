// Sololearn
#include <iostream>
using namespace std;

int main()
{
    // to enable user input use "cin" in combination with extraction operator ">>"
    // ex.: int num; cin>>num;
    // cin is included in <iostream> header file
    // cin can be chained to request more than one input : cin>>a>>b>>c;

    int a, b;
    int sum;
    cout << "Enter a:\n";
    cin >> a;
    cout << "Enter b:\n";
    cin >> b;
    sum = a + b;
    cout << "Sum of a and b is: " << sum << endl;

    return 0;
}