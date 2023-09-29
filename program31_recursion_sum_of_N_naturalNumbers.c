/*		Sum of 'N' natural numbers using recursion		*/
#include<stdio.h>
int addNumbers(int n) {
	if (n != 0)
		return n + addNumbers(n - 1);
	else
		return n;
}


void main() {	
	int n;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	printf("Sum = %d\n", addNumbers(n));
}	
