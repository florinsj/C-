// Pointers
// = variable that store the address of another variable

#include <stdio.h>

int main()
{

	int a = 1; // integer
	int *p;	   // pointer to an integer variable;
			   // int* p or int *p = same
	p = &a;	   // p=address of a;
	printf("a= %d\n", a);
	printf("Address of a= %d\n", p);
	//*p = dereferencing = value of variable pointed by p0
	// value of a <==> p*

	printf("Change the value of a...a=10\n");
	a = 10; // change the value of a to 10
	printf("Value of a= %d\n", a);

	printf("Change the value of a by dereferencing p...-> *p=20\n");
	*p = 20; // change the value of a to 2 with pointer dereferencing

	printf("Value of a= %d\n", a);
	printf("Value of a by dereferencing p= %d\n", *p);

	// printf("a=%d",a);

	// char c='c';		// character
	// char *p0;	// pointer to an character variable

	// double d=1.1;	// double
	// double *p1	// pointer to an double variable
}