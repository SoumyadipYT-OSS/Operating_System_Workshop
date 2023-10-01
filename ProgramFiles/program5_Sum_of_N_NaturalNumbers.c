/* Sum of first N natural Numbers */
#include<stdio.h>

void calculation(int n) {
	int res=0;
	int pointer=0;
	while (pointer<=n) {
		res = res+pointer;
		pointer++;
	}
	printf("Sum of first %d natural numbers: %d\n", n, res);
}

void userInput() {
	printf("Enter an positive integer: ");
	int N;
	scanf("%d", &N);
	calculation(N);
}




void main() {
	userInput();
}
