/*		Armstrong Number		*/

#include<stdio.h>

void ArmstrongNumber(int n) {
	int res=0;
	int rem=n;
	int pointDigit;
	int givenNumber = n;
	while (rem != 0) {
		rem = givenNumber % 10;
		pointDigit = rem*rem*rem;
		res += pointDigit;
		givenNumber = givenNumber / 10;
	}
	if (res == n)
		printf("Armstrong Number\n");
	else 
		printf("Not an Armstrong Number\n");
}


void inputUser() {
	printf("Enter an integer: ");
	int N;
	scanf("%d", &N);
	ArmstrongNumber(N);
}



void main() {
	inputUser();
}
