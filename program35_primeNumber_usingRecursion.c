/*		Check prime number using recursion		*/
#include <stdio.h>
#include <math.h>

int isPrime(int, int);

int isPrime(int num, int i) {
    if (i == 1) {
        return 1;
    } else {
       if (num % i == 0) {
         return 0;
       } else {
         return isPrime(num, i - 1);
       }  
    }
}


void main() {
    int num, check;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sqr = sqrt(num);
    check = isPrime(num, sqr);
    if (check == 1) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }
}

