/*	Ternary Operator	*/
#include<stdio.h>
void operation(int n1, int n2, char ch) {
	int res=0;
	res = (ch=='+') ? (n1+n2) : (n1-n2);
	printf("Result: %d\n", res);
}


void userInput() {
	int N1, N2;
	char ops;
	printf("Enter first num: ");
	scanf("%d", &N1);
	printf("Enter second num: ");
	scanf("%d", &N2);
	printf("Enter operation: ");
	scanf(" %c", &ops);
	operation(N1, N2, ops);
}



void main() {
	userInput();
}
