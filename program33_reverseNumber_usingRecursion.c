/*		Reverse a number using recursion		*/
#include <stdio.h>

int reverse(int num);

void main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Reverse of %d is %d.\n", number, reverse(number));
}


int reverse(int num) {
    int rev_num = 0;
    while (num != 0) {
        rev_num = rev_num * 10 + num % 10;
        num /= 10;
    }
    return rev_num;
}

