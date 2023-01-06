#include <iostream>
using namespace std;

namespace first
{

    int val = 500;
}

int val = 100;
int main()
{

    int val = 200;
    cout << first::val << endl; // 500
    cout << val << endl;        // 200
    return 0;
}