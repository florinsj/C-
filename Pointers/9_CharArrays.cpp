// string = array of chars

// to store a string in an arrayOfChars, the number of elementsOfArray >= numberOfChars + 1
// the extra element is needed to mark the end of the string and will be the null character '\0'

// string literals = group of chars in double quote  ex: "JOHN" declared and initialized in one line
// if we declare as a literal string(char C[3]="ADA"), the number of elementsOfArray >= numberOfChars

// Rule : A string in C/C++ has to be terminated with null character  '\0'
// if we declare as a literal string(char C[]]="ADA"), the null character is added impl

#include <stdio.h>
#include <string.h> // include functions for string manipulation

int main()
{
    char C[4];
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    int lenC = strlen(C); // strlen(B) -return the size number of elements from a string
    printf("String from C: %s\n", C);
    // print the string and also some garbage chars because the array don't terminated with null char
    printf("Length of C= %d\n", lenC); // will print 5 - incorect length

    char A[5];
    A[0] = 'J';
    A[1] = 'O';
    A[2] = 'H';
    A[3] = 'N';
    A[4] = '\0'; // last element of array is null char wich mark the string end
    int lenA = strlen(A);
    printf("String from A= %s\n", A);  // print the string untill it finds null character
    printf("Length of A= %d\n", lenA); // will print 4 - correct length

    // !! if we use string literals like: char B[]="JOHN", the terminated null is implicit
    // for string literals we have to declare and initialize the string in one line

    char B[] = "JOHN WAYNE"; // string literal ,no need to mark the end of string
    int lenB = strlen(B);
    printf("String from B= %s\n", B);
    printf("Length of B= %d\n", lenB);
    printf("The size in bytes of B= %d\n", sizeof(B)); // (nrOfChars+1)*1 bytes , charSize=1 byte
}