
// character arrays and pointers _1

#include <stdio.h>
void print1(char *C)
{
    int i = 0;
    while (C[i] != '\0') // C[i] <==> *(C+i)
    {
        printf("%c", C[i]);
        i++;
    }
    printf("\n");
}

void print2(char *C)
{

    while (*C != '\0') // C=&C[0] and *C=*C[0]
    {
        printf("%c", *C);
        C++; // increment to next address (next element from array)
    }
    printf("\n");
}

int main()
{
    char C[20] = "Hello"; // the null char is implicit
    print1(C);
    print2(C);
}