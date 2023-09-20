/* Check Even Odd number */

#include<stdio.h>

void checkEvenOdd(int n) {
	if (n%2==0)
		printf("Even number\n");
	else if (n%2!=0)
		printf("Odd number\n");
}


void userInput() {
	printf("__Check Even Odd__\n");
	printf("Enter an integer: ");
	int N;
	scanf("%d", &N);
	checkEvenOdd(N);
}


void main() {
	userInput();
}
