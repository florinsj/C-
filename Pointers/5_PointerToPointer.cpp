// int *p - the type of pointer p este int*

#include <stdio.h>
int main()
{

    int x = 5;

    int *p = &x;
    // declaration and initialization of pointer p
    // equivalent with int *p;p=&x;
    // p is a pointer of type int* and points to an int variable (x in our case)
    *p = 6;

    int **q = &p;
    // q is a pointer of type int** and points to an int* variable (p in our case)

    int ***r = &q;
    // r is a pointer of type int*** and points to and int** variable (q in our case)

    printf("*p= %d\n", *p);             // value of x (because p points to x)
    printf("*q= %d\n", *q);             // value of p (because q points to p)
    printf("*(*q)= %d\n", *(*q));       // dereferencing *p because *q=value of p -->*(*q)=*p=value of x
    printf("*(*r)= %d\n", *(*r));       // *(*r) = *q = p    --> value of p
    printf("*(*(*r))= %d\n", *(*(*r))); // *(*(*r))=*(*q)=*p=x --> value of x
    printf("***r= %d\n", ***r);

    // *(*(*r)) = ***r
    // *(*q)=**q

    *(*(*r)) = 10;
    printf("***r= %d\n", ***r);
    printf("Value of x=%d\n", x);
    ***r = 11;
    printf("Value of x=%d\n", x);

    **q = *p + 2; // **q=x, *p=x so **q=*p+2 <==> x=x+2;
    printf("Value of x after (**q=*p+2) =%d\n", x);
}
