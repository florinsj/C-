// Arrays as   function arguments

#include <stdio.h>
void Double(int *A, int size)
{

    // here A is passed as a pointer
    // "int* A"  or " int A[]" .. it's the same
    // Arrays in function argument are passed as references / pointer
    // any modification on array argument is made to real array

    // we cannot calculate the size of array here because argument is a pointer to array
    // sizeof int* A = sizeof(A[0])= 1 byte because int* A, A= &A[0] (A points to A[0])

    // !!! Always arrays are passed as reference  !! always call by reference !!

    int i;

    for (i = 0; i < size; i++)
    {
        A[i] *= 2;
    }
}

int main()
{

    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    Double(A, size);
    printf("\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
}
