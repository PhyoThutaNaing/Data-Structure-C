#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    // opening the file in append mode
    fp = fopen("/Users/user/Desktop/Data Structure/File_Handling/name.txt", "a");

    // check whether file opened successfully
    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("Enter data to update the file:\n");

    // read input from user
    fgets(text, sizeof(text), stdin);

    // write new data at the end of file
    fputs(text, fp);

    printf("File updated successfully.\n");

    // closing the file
    fclose(fp);

    printf("File closed successfully.\n");

    return 0;
}
