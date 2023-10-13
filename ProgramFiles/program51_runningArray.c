/* Running whole array to a function */

#include <stdio.h>

void myFunction(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    myFunction(arr, size); printf("\n");
    return 0;
}

