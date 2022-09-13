// int type size = 4 bytes
// int A[n] - array with n integer elements;
// the size of array = n*4 bytes (because each int elelement of array= 4 bytes)

#include <stdio.h>

int main()
{
    int A[] = {2, 4, 5, 8, 1};

    printf("%d\n", &A[0]); // print the address of first element in array
    printf("%d\n", A);     // print the address of the first element in array ;
                           // A and &A[0] are the same

    printf("%d\n", A[0]); // print the value of first element in array
    printf("%d\n", *A);   // print the address of the first element in array ; A and &A[0] are the same

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", &A[i]);    // print the address of the i  element in array
        printf("%d\n", A + i);    // print the address of the i element in array ;
        printf("%d\n", A[i]);     // print the value of first element in array
        printf("%d\n", *(A + i)); // print the address of the first element in array ;
    }

    // A++;  --> error , we can make it using a pointer
    int *p;
    p = A;
    p++; // valid
    // A++; // invalid
}