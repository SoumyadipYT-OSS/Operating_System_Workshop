/*	Reverse a number using loop and check the number is palindrome or not */

#include<stdio.h>
void reverse(int n) {
	int originalNumber = n;
	int rev = 0;
	while (n != 0) {
		int rem = n % 10;
		rev = rev*10 + rem;
		n = n / 10;
	}
	printf("\nOriginal Number: %d\n", originalNumber);
	printf("\nReverse Number: %d\n", rev);
	if (rev == originalNumber)
		printf("Number is palindrome!\n");
	else 
		printf("Not a palindrome number.\n");
}


void main() {
	int N=0;
	printf("Enter an integer: ");
	scanf("%d", &N);
	reverse(N);
}
