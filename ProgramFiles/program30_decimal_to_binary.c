/*		Convert Decimal to Binary	*/
#include <stdio.h>
#include <stdbool.h>

void decToBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    int binaryNum[10];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    } printf("\n");
}

int main() {
    int decimalNum;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    printf("Binary representation of %d is: ", decimalNum);
    decToBinary(decimalNum);
    return 0;
}

