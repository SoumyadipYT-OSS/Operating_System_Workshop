/* Pointer concept in C programming */

#include<stdio.h>
void main() {
	int age = 20;
	int *pnt = &age;
	int _age = *pnt;
	
	// Below printf shows the address of age variable
	printf("%p\n", &age);
	printf("%p\n", pnt);
	
	// Below printf shows the address of the pointer variable
	printf("%p\n", &pnt);
	
	/* Below printfs de-references the pointer using the '*' sign, 
	to show the  the value stored in the variable */
	printf("%d\n", age);  // Normal value showcase
	printf("%d\n", _age);
	printf("%d\n", *pnt);
	printf("%d\n", *&age);
}
