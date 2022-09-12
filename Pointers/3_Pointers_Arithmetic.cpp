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

    printf("Address= %d, value= %d\n", p + 1, *(p + 1));
    // p+1 = next address = current address + 4 (because p= int pointer, size of int=4 bytes)

    char *p0;
    p0 = (char *)p;
    printf("Address= %d, value= %d\n", p0 + 1, *(p0 + 1));
    // p0+1 = next address = current address + 1 (because p0= char pointer, size of char=1 byte)
}