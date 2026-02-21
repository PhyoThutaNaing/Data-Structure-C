#include <stdio.h>

void print(int *ar, int size) {
    int i;
    printf("Array is:\n");
    for (i = 0; i < size; i++) {
        printf("%d\t", *(ar + i));   
    }
}

int main() {
    int arr[10], i;

    printf("Enter array elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

 
    print(arr + 3, 7);

    return 0;
}
