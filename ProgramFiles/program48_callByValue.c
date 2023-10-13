/* Passing out an array to a function by call by value  */

#include<stdio.h>

void display(int n) {
	printf(" %d |",n);
}

void userInput() {
	int n;
	printf("Enter size of the array: ");
	scanf("%d",&n);
	int ar[n];
	printf("__Enter array elements__:\n");
	for (int i=0; i<n; i++) {
		printf("Enter %d index value: ",i);
		scanf("%d",&ar[i]);
	}
	for (int j=0; j<n; j++) {
		display(ar[j]);
	}
}


int main() {
	userInput();
	printf("\n");
	return 0;
}

