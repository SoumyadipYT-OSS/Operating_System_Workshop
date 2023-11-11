/* Take input 2D array and print it and also calculate transpose of the matrix */

#include<stdio.h>

#define MAX 100 // define a constant value for the maximum size of the array

// method to find transpose of a matrix
void transposeMatrix(int r, int c, int a[MAX][MAX]) {
	printf("Transpose:\n");
	int transpose[MAX][MAX];
	for (int k=0; k<c; k++) {
		for (int l=0; l<r; l++) {
			transpose[k][l] = a[l][k];
			printf(" %d |", transpose[k][l]);
		}
		printf("\n"); // print a new line after each row
	}
}

// taking input
void takeInput(int rows, int cols) {
	int newArr[MAX][MAX];
	for (int i=0; i<rows; i++) {
		for (int j=0; j<cols; j++) {
			printf("Enter the value of %d%d index: ", i, j);
			scanf("%d", &newArr[i][j]);
		}
	}
	// printing the 2D array
	printf("Your array:\n");
	for (int i=0; i<rows; i++) {
		for (int j=0; j<cols; j++) {
			printf(" %d |", newArr[i][j]);
		}
		printf("\n"); // print a new line after each row
	}
	transposeMatrix(rows,cols,newArr);
}


// main method
int main() {
	int r, c;
	printf("__Transpose of a 2D array or matrix__\n");
	printf("Enter no. of rows: ");
	scanf("%d", &r);
	printf("Enter no. of cols: ");
	scanf("%d", &c);
	
	takeInput(r,c);
	
	return 0;
}

