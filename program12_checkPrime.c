/*	Check the number is prime of not */
#include<stdio.h>
#include<stdbool.h>
void checkPrime(int n) {
	bool flag = true;		// for calling bool keyword in C we've to call <stdbool.h> library
	for (int i=2; i<=n/2; i++) {
		if (n%i == 0) {
			flag = false;
			break;
		}
	}
	
	if (flag == false)
		printf("Not a prime number\n");
	else 
		printf("Prime number\n");
}


void userInput() {
	int N;
	printf("Enter an integer: ");
	scanf("%d", &N);
	checkPrime(N);
}


void main() {
	userInput();
}
