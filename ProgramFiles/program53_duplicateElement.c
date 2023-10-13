/* Find duplicate element from an array */

#include <stdio.h>

void find_duplicates(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Duplicate elements in the array: ");
    find_duplicates(arr, n); printf("\n");
    return 0;
}

