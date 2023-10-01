/*		Factorial using recursion	*/
#include <stdio.h>

long int factorial(int n);

long int factorial(int n) {
    if (n >= 1)
        return n*factorial(n-1);
    else
        return 1;
}


void main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factorial of %d = %ld\n", num, factorial(num));
}

