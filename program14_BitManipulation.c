/*
	__Bit Manipulation__
	Bit Manipulation is a technique used in a variety of problems to get the solution in an optimized way. 
	This technique is very effective from a Competitive Programming point of view. It is all about Bitwise 
	Operators which directly works upon binary numbers or bits of numbers that help the implementation fast. 
	Below are the Bitwise Operators that are used:

		Bitwise AND (&)
		Bitwise OR (|)
		Bitwise XOR (^)
		Bitwise NOT (!)	
		
		
	-> Example:   let's take a decimal number 10, its binary is 1010
						then left shift its binary value by 1, so it becomes 0100,
						now, perform Bitwise AND (&) operation between (1010 & 0100) = 
*/

#include<stdio.h>
void BitManipulation() {
    int n, pos, mask = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("Enter the number of times to left shift: ");
    scanf("%d", &pos);

    int bitmask = mask << pos;
    int result = n & bitmask;
    int bit = result >> pos;
    printf("Result: %d\n", bit);
}


int main() {
    BitManipulation();
}
