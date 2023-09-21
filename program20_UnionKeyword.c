/* Union Keyword in C programming */
#include<stdio.h>
union sample {
	int n;
	char c;
	float f;
};


void main() {
	union sample v1;
	v1.n = 20;
	printf("The value stored in int datatype: %d\n", v1.n);
} 
