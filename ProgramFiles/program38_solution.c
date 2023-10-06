/* 
	Print number 1 to 10 in such a manner that when an ODD number
   is coming print that (number+1) and for EVEN do the opposite
   i.e. -1, using indirect recursion.
*/

#include<stdio.h>
void ODD(int n);
void EVEN(int n);

void ODD(int n) {
	if (n <= 10) {
		printf("%d ", n+1);
		EVEN(n+1);
	}
}

void EVEN(int n) {
	if (n <= 10) {
		printf("%d ", n-1);
		ODD(n+1);
	}
}

int main() {	
	ODD(1);
	printf("\n");
	return 0;
}

