/* Limit rows */

#include<stdio.h>

void main() {
	int n = 0;
	printf("Enter the number as limit of rows: ");
	scanf("%d", &n);
	int cn = 0;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=i; j++) {
			printf(" %d", ++cn);
		}
		printf("\n");
	}
}
