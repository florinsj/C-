// Sololearn
// Arrays
// Array is used to store a collection of data= colection of variables, all of the same type
// when declaring an array specify the number of elements and the type of elements.

// Syntax examples
// int a[6];            // array declaration - type and number of elements

// int a[3]={1,2,3}     // array declaration -type, number of elements and initialization

// int b[]={1,2,3}      // array declaration -type, initialization, without number of elements
// when number of elements missing, an array big enough to hold ininitialization is created

// each elements has an index, starting with 0 index; index is also the position of elem in array
// to access the element : array[index] ; Ex : a[0]

#include <iostream>
using namespace std;
int main()
{

    int b[] = {11, 45, 62, 70, 88};
    cout << b[0] << endl;
    cout << b[3] << endl;
    b[3] = 11; // assign another value to element at index 3
    cout << b[3] << endl;
    return 0;
}
