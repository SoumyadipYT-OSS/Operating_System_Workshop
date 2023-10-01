/* Set Bit */

#include<stdio.h>
void setBit() {
	int n, pos;
	printf("Enter decimal number: ");
	scanf("%d", &n);
	printf("Enter position to shift: ");
	scanf("%d", &pos);
	int bitmask = 1 << pos;
	int res = n | bitmask;
	printf("Result: %d\n", res);
}


void main() {
	setBit();
}
