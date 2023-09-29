/*		Sum of digit using recursion		*/
#include <stdio.h>

int sumOfDigits(int num);

void main() {
    int num, sum;
    printf("Enter any number to find the sum of its digits: ");
    scanf("%d", &num);
    sum = sumOfDigits(num);
    printf("Sum of digits of %d = %d", num, sum);
}

int sumOfDigits(int num) {
    if (num == 0)
        return 0;
    else
        return (num % 10) + sumOfDigits(num / 10);
}

