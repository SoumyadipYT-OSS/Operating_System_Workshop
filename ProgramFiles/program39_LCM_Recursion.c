/* 
	Write a program to calculate LCM of two numbers
 	using recursion
*/
#include<stdio.h>
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	} else {
		return gcd(b, a%b);
	}
}


int LCM(int a, int b) {
	return (a*b) / gcd(a,b);
}



int main() {
	int n1, n2;
	printf("Enter first number: ");
	scanf("%d", &n1);
	printf("Enter second number: ");
	scanf("%d", &n2);
	printf("LCM of %d and %d is %d\n", n1, n2, LCM(n1, n2));
	return 0;
}

