#include <iostream>
using namespace std;
void swap(int *a, int *b); // function prototype

int main()
{
    int a = 100;
    int b = 200;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    cout << "after swap.. " << endl;
    swap(&a, &b);
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;

    return 0;
}

void swap(int *a, int *b)
{

    int swap = *a;
    *a = *b;
    *b = swap;
}