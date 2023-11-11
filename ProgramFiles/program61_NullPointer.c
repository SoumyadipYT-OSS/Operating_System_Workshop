#include <stdio.h>

int main() {
    // declaring null pointer
    int* ptr = NULL;
    // de-referencing only if the pointer have any value
    if (ptr == NULL) {
        printf("Pointer does not point to anything\n");
    }
    else {
        printf("Value pointed by pointer: %d\n", *ptr);
    }

    return 0;
}
