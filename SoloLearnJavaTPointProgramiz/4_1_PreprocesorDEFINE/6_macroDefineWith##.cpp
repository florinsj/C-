// #define and ## operator
#include <iostream>
using namespace std;

#define F(a, b) a##b // will replace with ab (concatenation)

int main()
{

    int ab = 1;
    int c = 2;

    cout << F(a, b) << endl; // will replace F(a,b) in ab..cout<<ab<<endl..will print 1
    return 0;
}