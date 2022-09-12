// Pointers as function arguments

// Call by value - versus - Call by reference

#include <stdio.h>

// call by value
// when called , the formal argument will take the value of actual argument
// "a" from argument will be a copy of "a" from called Increment(a), but not same variable
void IncrementCallByValue(int a)
{
    a = a + 1;
    printf("Address of a in IncrementCallByValue()=%d\n", &a);
}

// call by reference
// at argument we have a pointer, argument will be an address
// when called , the formal argument will take the value from address of actual argument
// all the operations will be made on value from address of actual argument
void IncrementCallByReference(int *a)
{
    *a = (*a) + 1;
    printf("Address of a in IncrementCallByReference=%d\n", a);
}

int main()
{
    int a;
    a = 10;

    printf("Value of a before IncrementCallByValue= %d\n", a);
    IncrementCallByValue(a);
    printf("Address of a in main()=%d\n", &a);
    printf("Value of a after IncrementByCallValue= %d\n", a);
    printf("Value of a= %d\n", a);

    printf("Value of a before IncrementCallByReference= %d\n", a);
    IncrementCallByReference(&a);
    printf("Address of a in main()=%d\n", &a);
    printf("Value of a after IncrementByCallReference= %d\n", a);
    printf("Value of a= %d\n", a);
}