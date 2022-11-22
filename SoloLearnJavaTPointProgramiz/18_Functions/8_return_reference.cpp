#include <iostream>
using namespace std;

int num;
int &test(); // return a reference ( return an address)
int main()
{
    test() = 5;
    cout << num << endl;
    return 0;
}

int &test()
{
    return num;
}