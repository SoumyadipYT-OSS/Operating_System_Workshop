/*	Reset Bit */
#include<stdio.h>
void ResetBit(int n, int pos, int mask) {
	int newmask=0, bitmask=0, res=0;
	bitmask = mask << pos;
	newmask = ~bitmask;
	res = n & newmask;
	printf("Result: %d\n", res);
}


void userInput() {
	int n, pos, mask=1;
	printf("Enter number: ");
	scanf("%d", &n);
	printf("Enter position to shift: ");
	scanf("%d", &pos);
	ResetBit(n, pos, mask);
}


void main() {
	userInput();
}
