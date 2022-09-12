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

    char *p0; // p0 points to an char variable
    // p0 = p;  --> error because p0 points to an char and p points to an integer

    p0 = (char *)p; // typecasting from integer pointer to char pointer

    printf("Size of char is %d bytes\n", sizeof(char));
    printf("Address= %d, value= %d\n", p0, *p0);
    // p and p0 --> same address
    // *p and *p0 -->diferrent values
    // p= integer value= 1025 on 4 bytes and for char system will look only to first byte --> *p0= 1
}