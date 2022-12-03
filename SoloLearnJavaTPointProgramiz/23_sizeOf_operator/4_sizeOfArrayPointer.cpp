// JavaTPoint
// size of pointers will remain the same for all data types-- 4bytes (32bit os) , 8 bytes(64bit os)

#include <iostream>
using namespace std;
void fun(int arr[])
{
    cout << "Size of array is: " << sizeof(arr) << endl; // here will be the size of pointer
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    fun(arr); // output will  be the size of integer pointer wich points to array=8bytes (64bit os)

    int *p1 = new int[10];
    cout << "size of pointer p1=" << sizeof(p1) << endl;
    cout << "size of pointer *p1=" << sizeof(*p1) << endl;
    char *p2 = new char('a');
    cout << "size of pointer p2=" << sizeof(p2) << endl;
    cout << "size of pointer *p2=" << sizeof(*p2) << endl;
    char *p3;
    cout << "size of pointer p3=" << sizeof(p3) << endl;
    return 0;
}