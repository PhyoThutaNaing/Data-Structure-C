#include<stdio.h>

/* Function declarations */
void swapByValue(int, int);
void swapByReference(int*, int*);

int main(){
    int a = 10, b = 20;

    printf("Before Swap\n");
    printf("a=%d \t b=%d\n\n", a, b);

    printf("After Swap\n\n");

    /* Call by Value */
    swapByValue(a, b);
    printf("Result of Call by Value Function.\n");
    printf("a=%d \t b=%d\n\n", a, b);

    /* Call by Reference */
    swapByReference(&a, &b);
    printf("Result of Call by Reference Function\n");
    printf("a=%d \t b=%d\n", a, b);

    return 0;
}

/* Call by Value */
void swapByValue(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside Call by Value Function:\n");
    printf("a=%d \t b=%d\n", a, b);

}

/* Call by Reference */
void swapByReference(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside Call by Reference Function:\n");
    printf("a=%d \t b=%d\n", *a, *b);
}
