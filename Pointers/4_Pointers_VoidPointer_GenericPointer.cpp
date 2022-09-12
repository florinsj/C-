// int = 4 bytes size
// char = 1 byte size
// float= 4 bytes size

#include <stdio.h>
int main()
{
    int a = 1025;
    int *p; // p =pointer to an integer
    p = &a; // p = address of a  <==>  p points to a
    printf("Size of integer is %d bytes\n", sizeof(int));
    printf("Address= %d, value= %d\n", p, *p);

    // Void/Generic Pointer

    void *p0; // void/generic pointer
    char *p1; // char pointer

    p0 = p; // valid!! -- no need of typecasting
    // p1=p  error!!, -- need typecasting
    p1 = (char *)p;

    printf("Address= %d\n", p0);

    // *p0 = error because p0 don't point to specific variable
    // *p0+1 = error, arithmetic on void pointers not possible
}