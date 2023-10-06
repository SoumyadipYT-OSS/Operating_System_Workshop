/* extern keyword concept in C programming language */
#include<stdio.h>
void func(void);
int val = 10;	/* global variable */

int main()
{
	int val = 20;	/* local variable */
	{
		extern int val;
		printf("Global variable val = %d\n", val);
	}
	printf("Local variable val = %d\n", val);
	return 0;
}
