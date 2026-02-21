#include <stdio.h>

int main() {
    int l[] = {1, 2, 3, 4, 5};
    int size = 5, i;


    for (i = size - 1; i >= 0; i--) {
        printf("%d ", l[i]);
    }

    return 0;
}
