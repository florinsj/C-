// JavaTPoint
//  delete op example
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int *ptr;
    ptr = new int;
    *ptr = 68;
    cout << "The value of p before delete is: " << *ptr << endl;
    delete ptr;
    cout << "The value of p after delete is: " << *ptr << endl;

    return 0;
}