/*
    __Syntax__

    datatype * ptr;

    ptr is the name of the pointer
    datatype is the type of data it is pointing to.
*/

#include<stdio.h>
#include<string.h>

// IntegerPointer
int IntegerPointerType() {
    int v1 = 15;
    int *integer_ptr;
    integer_ptr = &v1;
    printf("__Integer Pointer__\n");
    printf("value: %d\n", v1);
    printf("integer pointer value: %p\n", integer_ptr);
    printf("value at *integer_pointer: %d\n", *integer_ptr);
    return 0;
}

// Array Pointer
int ArrayPointerType() {
    printf("\n__Array Pointer__\n");
    int arr[] = { 3, 5, 6, 7, 9 };
    int *p = arr;
    int (*ptr)[5] = &arr;

    printf("p = %p, ptr = %p\n", p, ptr);
    printf("*p = %d, *ptr = %p\n", *p, *ptr);

    printf("sizeof(p) = %lu, sizeof(*p) = %lu\n",
           sizeof(p), sizeof(*p));
    printf("sizeof(ptr) = %lu, sizeof(*ptr) = %lu\n",
           sizeof(ptr), sizeof(*ptr));
    return 0;
}

// Structure Pointer
struct PointerExample {
    int reg_no;
    char name[30];
    char branch[40];
    int batch;
};
int StructurePointerType() {
    printf("__Structure Pointer__\n");
    struct PointerExample s1;
    struct PointerExample* ptr = &s1;

    s1.reg_no = 2141013055;
    strcpy(s1.name, "Soumyadip Majumder");
    strcpy(s1.branch, "Computer Science and Engineering");
    s1.batch = 2025;

    printf("Registration Number: %d\n", (*ptr).reg_no);
    printf("Name: %s\n", (*ptr).name);
    printf("Branch: %s\n", (*ptr).branch);
    printf("Batch: %d\n", (*ptr).batch);

    return 0;
}

// Function Pointer
void fun(int a) {
    printf("Value of a is %d\n", a);
}
int FunctionPointerType() {
    printf("\n__Function Pointer__\n");
    // fun_ptr is a pointer to function fun()
    void (*fun_ptr)(int) = &fun;
    /* The above line is equivalent of following two
       void (*fun_ptr)(int);
       fun_ptr = &fun;
    */
    // Invoking fun() using fun_ptr
    (*fun_ptr)(10);
    return 0;
}


// Concept of Pointers
int PointerConcept() {
    printf("__Pointer Concept__\n");
    int var=10;     // initialize variable
    int * ptr;      // initialize pointer
    ptr = &var;     // using '&' sign we are fetching the address of the 'var'
    printf("Value of ptr: %p\n", ptr);
    printf("Value of 'var': %d\n", var);
    printf("Value at *ptr = %d\n", *ptr);
    return 0;
}


// main method
int main() {
    PointerConcept();
    printf("\n");
    IntegerPointerType();
    printf("\n");
    ArrayPointerType();
    printf("\n");
    StructurePointerType();
    printf("\n");
    FunctionPointerType();
    return 0;
}
