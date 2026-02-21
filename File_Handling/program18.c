#include <stdio.h>

int main() {
    FILE *fp;

    // opening the file
    fp = fopen("/Users/user/Desktop/Data Structure/File_Handling/name.txt", "r");

    // check whether file opened successfully
    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("File opened successfully.\n");

    // closing the file
    fclose(fp);

    printf("File closed successfully.\n");

    return 0;
}
