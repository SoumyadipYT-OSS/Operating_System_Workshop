/*	
	__Sum of digit__
 Let's take a digit 154
 so the sum of the digit is 1+5+4=10
*/
#include<stdio.h>
void sumOfDigit(int num) {
	int res = 0;
	int rem = num;
	int digitPoint = 0;
	
	while (rem != 0) {
		digitPoint = rem % 10;	// returns remainder
		res = res + digitPoint;		// addition of every remainder digit during this loop
		rem = rem / 10;	// integer division to decrease the main number after each iteration
	}
	
	printf("Sum of the digits of the number: %d\n", res);
}


void userInput() {
	int N;
	printf("Enter an integer: ");
	scanf("%d", &N);
	sumOfDigit(N);
}


void main() {
	userInput();
}
