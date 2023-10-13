/*	 Running out array to a function by call by reference  */

#include<stdio.h>

void display(int * a) {
	printf(" %d |", * a);
}


int main() {
	int n;
	printf("Enter the array size: ");
	scanf("%d",&n);
	int ar[n];
	printf("__Enter array elements__\n");
	for (int i=0; i<n; i++) {
		printf("Enter %d position value: ",i);
		scanf("%d",&ar[i]);
	}
	for (int i=0; i<n; i++) {
		display(&ar[i]);
	}
	printf("\n");
	return 0;
}

