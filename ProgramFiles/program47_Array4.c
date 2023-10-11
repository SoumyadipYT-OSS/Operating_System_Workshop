/*  Reverse the array  */

#include<stdio.h>

void display(int a[], int n) {
	for (int i=0; i<n; i++) {
		printf(" %d |",a[i]);
	}
}
void reverseArray(int a[], int n) {
	printf("_Reverse Array_\n");
	for (int i=n-1; i>=0; i--) {
		printf(" %d |",a[i]);
	}
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
	printf("\n");
	reverseArray(ar,n);
}


int main() {
	userInput();
	printf("\n");
	return 0;
}

