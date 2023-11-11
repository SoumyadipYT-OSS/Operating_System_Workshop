#include<stdio.h>

int access2D_array_usingPointer() {
    int arr[2][3] = {{11,15,12}, {3,8,10}};
    int (*p)[3] = arr;

    printf("Using pointer arithmetic:\n");
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            printf("%d ", *(*(p+i)+j));
        }
        printf("\n");
    }

    printf("Using array subscript:\n");
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// main method
int main() {
    access2D_array_usingPointer();
    return 0;
}
