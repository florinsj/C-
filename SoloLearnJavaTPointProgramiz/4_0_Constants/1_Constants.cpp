//  javatpoint.com & programiz.com

// Constants
// variables whose values cannot be changed
// must use keyword "const" or with #define preprocesor directive
// naming convention : same with variables but Upper-case letters
#include <iostream>
using namespace std;
int main()
{
    const double PI = 3.14;
    // PI=4.4;  --> error because PI is constant
    cout << PI << endl;

    return 0;
}