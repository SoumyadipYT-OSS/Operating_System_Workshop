// check size of pointer

#include<stdio.h>
void main() {
	int a = 10;
	char ch = 'A';
	float ft = 2.64f;
	
	int *pt1 = &a;
	char *pt2 = &ch;
	float *pt3 = &ft;
	
	printf("Size of pointer1 -> %ld\n", sizeof(pt1));
	printf("Size of pointer2 -> %ld\n", sizeof(pt2));
	printf("Size of pointer3 -> %ld\n", sizeof(pt3));
}
