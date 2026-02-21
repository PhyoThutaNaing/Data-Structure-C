#include<stdio.h>

int main() {
    int arr[5], i;

    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nStored array elements are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}
