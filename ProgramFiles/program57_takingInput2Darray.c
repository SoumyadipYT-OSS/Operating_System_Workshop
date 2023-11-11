/* taking input in 2D array */

#include<stdio.h>

void takeInput2D_array(int n, int m) {
	int arr[n][m];
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			printf("Enter value of %d%d index: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}

int main() {
	int n=2;	// no. of rows
	int m=2;	// no. of columns
	takeInput2D_array(n, m);
	
	return 0;
}

