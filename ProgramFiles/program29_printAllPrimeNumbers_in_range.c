/*		Print all prime numbers in a given number		*/
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

void printPrimes(int lowerLimit, int upperLimit) {
    printf("Prime numbers between %d and %d are: ", lowerLimit, upperLimit);
    if (lowerLimit <= 2) {
        printf("2 ");
        lowerLimit = 3;
    } else if (lowerLimit % 2 == 0) {
        lowerLimit++;
    }
    for (int i = lowerLimit; i <= upperLimit; i += 2) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    } printf("\n");
}

void main() {
    int lowerLimit, upperLimit;
    printf("Enter the lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter the upper limit: ");
    scanf("%d", &upperLimit);
    printPrimes(lowerLimit, upperLimit);
}

