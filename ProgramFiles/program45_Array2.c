/*  Create an array and find the sum of the elements of the array  */


#include<stdio.h>

void sumElements(int ar[], int n) {
	int sum = 0;
	for (int i=0; i<n; i++) {
		sum = sum + ar[i];
	}
	printf("\nSum: %d",sum);
}

void display(int a[], int n) {
	for (int i=0; i<n; i++) {
		printf(" %d |",a[i]);
	}
	sumElements(a,n);
}

void userInput() {
	int n;
	printf("Enter array size: ");
	scanf("%d",&n);
	int ar[n];
	printf("__Enter array elements__\n");
	for (int i=0; i<n; i++) {
		printf("Enter %d index element: ",(i+1));
		scanf("%d",&ar[i]);
	}
	display(ar,n);
}


int main() {
	userInput();
	printf("\n");
	return 0;
}

