/* Count the frequence of elements of an array */

#include <stdio.h>

void find_occurrence(int arr[], int n) {
    int count[n];
    for (int i = 0; i < n; i++) {
        count[i] = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count[i]++;
                arr[j] = -1;
            }
        }
    }
    printf("Element\t\tOccurrence\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] != -1) {
            printf("  %d\t\t  %d times\n", arr[i], count[i]);
        }
    }
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Occurrences of elements in the array:\n");
    find_occurrence(arr, n);
    return 0;
}

