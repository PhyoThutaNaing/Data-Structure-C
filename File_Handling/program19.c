#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // opening the file
    fp = fopen("/Users/user/Desktop/Data Structure/File_Handling/name.txt", "r");

    // check whether file opened successfully
    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("File contents are:\n\n");

    // read and display file content
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    // closing the file
    fclose(fp);

    printf("\n\nFile closed successfully.\n");

    return 0;
}

