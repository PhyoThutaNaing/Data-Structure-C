#include <stdio.h>

int main() {
    FILE *fp;

    // create and open file in write mode
    fp = fopen("studentRecords.txt", "w");

    // check file creation
    if (fp == NULL) {
        printf("File cannot be created.");
        return 1;
    }

    printf("File created successfully.");

    fclose(fp);   // close the file
    return 0;
}
