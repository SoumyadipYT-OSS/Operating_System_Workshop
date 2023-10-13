/* Passing whole array to a function */

#include<stdio.h>

void sum(int ar[], int n) {
	int sum = 0;
	for (int i=0; i<n; i++) {
		sum += ar[i];
	}
	printf("Sum: %d",sum);
}


int main() {
	int n;
	printf("Enter array size: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	sum(arr,n);
	printf("\n");
	return 0;
}

