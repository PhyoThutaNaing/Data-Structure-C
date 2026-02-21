#include <stdio.h>

void MinMax(int *ar, int size, int *min, int *max) {
    int i;

    *min = *ar;   // first element
    *max = *ar;

    for (i = 1; i < size; i++) {
        if (*(ar + i) < *min)
            *min = *(ar + i);

        if (*(ar + i) > *max)
            *max = *(ar + i);
    }
}

int main() {
    int arr[10], i;
    int min, max;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    MinMax(arr, 10, &min, &max);

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}
