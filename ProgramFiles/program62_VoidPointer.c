/*
 A void pointer is a pointer that has no associated data type with
 it. A void pointer can hold an address of any type
 and can be type-casted to any type.
*/
#include <stdio.h>

int example1() {
    printf("example1\n");
    int a=10;
    void* ptr = &a;
    printf("%d", *(int*)ptr);
    return 0;
}

int example2() {
    printf("\nexample2\n");
    int a[2] = {3,4};
    void* ptr = &a;
    ptr = ptr + sizeof(int);
    printf("%d", *(int*) ptr);

    return 0;
}



int main() {
    example1();
    printf("\n");
    example2();
    printf("\n");

    return 0;
}
