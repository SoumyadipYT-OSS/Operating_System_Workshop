/* Print Fibonacci Series */
#include<stdio.h>

void printNth_termFibonacci(int n) {
	int p1=0, p2=1, next=0;
	if (n==0 || n==1)
		printf("%d", p1);
	
	for (int i=1; i<=n; i++) {
		printf("%d\t", next);
		next = p1+p2;
		p1 = p2;
		p2 = next;
	}
	printf("\n Program Successful!\n");
}


void userInput() {
	int N;
	printf("Enter nth term for Fibonacci series: ");
	scanf("%d", &N);
	printNth_termFibonacci(N);
}


void main() {
	userInput();
}

