/*	Armstrong Number */
#include<stdio.h>
void ArmstrongNumber(int n) {
	int originalNumber = n;
	int res = 0;
	while (n > 0) {
		int rem = n%10;
		res = res + (rem*rem*rem);
		n = n/10;
	}
	
	if (res == originalNumber)
		printf("Armstrong Number\n");
	else 
		printf("Not an Armstrong Number\n");
}


void userInput() {
	int N;
	printf("Enter an integer: ");
	scanf("%d", &N);
	ArmstrongNumber(N);
}



void main() {
	userInput();
}
