#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, i, n, sum = 0;
    float avg;
    char sec;
    printf("Enter Section: ");
    scanf(" %c", &sec);
    printf("Enter Number of Students: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
 

    for (i = 0; i < n; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &ptr[i]);
}

    for (i = 0; i < n; i++) {
        sum += ptr[i];
}

    avg = (float)sum / n;

    printf("Average marks of section %c: %.2f\n", sec, avg);

}
