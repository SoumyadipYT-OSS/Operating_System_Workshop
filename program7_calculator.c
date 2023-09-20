/* ___Calculator___ */

#include<stdio.h>

void calculator(float n1, float n2, char symb) {
	float res=0;
	switch(symb) {
		case '+':
			res = n1+n2;
			break;
		case '-':
			res = n1-n2;
			break;
		case '*':
			res = n1*n2;
			break;
		case '/':
			res = n1/n2;
			break;
	}
	printf("Result: %.2f\n", res);
}


void userInput() {
	printf("Enter first number: ");
	float N1;
	scanf("%f", &N1);
	printf("Enter second number: ");
	float N2;
	scanf("%f", &N2);
	printf("Enter arithmetic symbol: ");
	char ch;
	scanf(" %c", &ch);
	calculator(N1, N2, ch);
}



void main() {
	userInput();
}
