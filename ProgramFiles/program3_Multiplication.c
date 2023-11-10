#include<stdio.h>
int multiplication(float a, float b) {
	float mul = a*b;
	printf("Result: ");
	printf("%f\n", mul);
    return 0;
}

int main() {
	printf("Enter first number: ");
	float a, b;
	scanf("%f", &a);
	printf("Enter second number: ");
	scanf("%f", &b);
	multiplication(a, b);
    return 0;
}
