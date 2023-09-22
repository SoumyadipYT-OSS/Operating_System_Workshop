/* Find GCD of two numbers */
#include<stdio.h>
void GCD(int a, int b) {
	int get=0;
	for (int i=1; i<=a  &&  i<=b; i++) {
		if (a%i==0  &&  b%i==0)
			get = i;
	}
	printf("GCD of %d and %d is: %d\n", a, b, get);
}


void userInput() {
	int a, b;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	GCD(a, b);
}


void main() {
	userInput();
}

