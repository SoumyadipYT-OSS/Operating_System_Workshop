/*		GCD of two numbers using recursion		*/
#include<stdio.h>
int GCD(int a, int b) {		// Eucledian Algorithm
	if (b == 0)
		return a;
	
	return GCD(b, a%b);
}


void userInput() {
	int n1, n2;
	printf("__Enter the two numbers to find their GCD__\n");
	printf("Enter first number: ");
	scanf("%d", &n1);
	printf("Enter second number: ");
	scanf("%d", &n2);
	int res = GCD(n1, n2);
	printf("The GCD of %d and %d is %d.\n", n1, n2, res);
}


void main() {
	userInput();
}

