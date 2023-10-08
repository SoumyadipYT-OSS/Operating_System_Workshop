// Swap two integer values using call-by value in a function

#include<stdio.h>
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void main() {
	int a = 10;
	int b = 20;
	printf("a = %d and b = %d\n", a, b);
	swap(&a, &b);
	printf("After swapping\n");
	printf("a = %d and b = %d\n", a, b);
}

