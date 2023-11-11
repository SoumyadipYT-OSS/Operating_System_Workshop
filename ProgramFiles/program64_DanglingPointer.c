/*
Dangling pointer
A pointer pointing to a memory location that has been deleted (or freed)
is called dangling pointer.
There are three different ways where Pointer acts as dangling pointer
*/

// De-allocation of memory
#include <stdlib.h>
#include <stdio.h>

int example_deAllocation() {
    printf("De-Allocation\n");
    int *ptr = (int *)malloc(sizeof(int));

    // After below free call, ptr becomes a
    // dangling pointer
    free(ptr);
    printf("%p\n", ptr);

    // No more dangling pointer
    ptr = NULL;
    return 0;
}


int *fun() {
    // x is local variable and goes out of
    // scope after an execution of fun() is
    // over.
    int x=5;
    int *ptr = &x;

    return ptr;
}
int example_FunctionCall() {
    printf("\nexample_FunctionCall\n");
    int *p = fun();
    fflush(stdin);

    // p points to something which is not
    // valid anymore
    printf("pointer points to something which is not valid anymore: %d address\n", *p);
    return 0;
}


// main method
int main() {
    example_deAllocation();
    example_FunctionCall();
    return 0;
}
