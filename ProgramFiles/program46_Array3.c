/*  Add two array elements and store the result in the third array  */
#include<stdio.h>

void addTwoArrays(int a1[], int a2[], int n) {
	int N = n;
	int a3[N];
	for (int i=0; i<N; i++) {
		int sum = a1[i]+a2[i];
		a3[i] = sum;
	}
	printf("\n__Resultant array__\n");
	for (int i=0; i<N; i++) {
		printf(" %d |",a3[i]);
	}
}

void display(int a[], int n) {
	for (int i=0; i<n; i++) {
		printf(" %d |",a[i]);
	}
}

void userInput() {
	int n;
	printf("Enter array size: ");
	scanf("%d",&n);
	int ar1[n];
	printf("\n__Enter first array elements__\n");
	for (int i=0; i<n; i++) {
		printf("Enter %d index element: ",(i+1));
		scanf("%d",&ar1[i]);
	}
	display(ar1,n);
	
	int ar2[n];
	printf("\n__Enter second array elements__\n");
	for (int i=0; i<n; i++) {
		printf("Enter %d index element: ",(i+1));
		scanf("%d",&ar2[i]);
	}
	display(ar2,n);
	printf("\n");
	addTwoArrays(ar1,ar2,n);
}


int main() {
	userInput();
	printf("\n");
	return 0;
}

