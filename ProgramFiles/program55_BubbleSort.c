/* Bubble Sort of an array */

#include<stdio.h>

void display(int a[], int n) {
	for (int i=0; i<n; i++) {
		printf(" %d |",a[i]);
	}
}


int swap(int * x, int * y) {
	int temp = * x;
	* x = * y;
	* y = temp;
	return * x, * y;
}


void BubbleSort(int ar[], int n) {
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if (ar[i] > ar[j]) {
				swap(&ar[i],&ar[j]);
			}
		}
	}
	display(ar,n);
}


void userInput() {
	int n;
	printf("Enter the array size: ");
	scanf("%d",&n);
	int ar[n];
	printf("__Enter the elements__\n");
	for (int i=0; i<n; i++) {
		printf("Enter %d index value: ",i);
		scanf("%d",&ar[i]);
	}
	display(ar,n);
	printf("\n");
	BubbleSort(ar,n);
	printf("\n");
}



int main() {
	userInput();
	return 0;
}

