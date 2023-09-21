/*	struct keyword call in main method */
#include<stdio.h>
struct var {
	int n;
	char c;
	float f;
};


void main() {
	struct var v1;
	v1.n = 30;
	v1.c = 'a';
	v1.f = 25.4;
	printf("%d\n", v1.n);
	printf("%c\n", v1.c);
	printf("%f\n", v1.f);
}
