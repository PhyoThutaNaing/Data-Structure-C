#include <stdio.h>

int main() {
    FILE *fp;
    char text[1000];

    // opening the file in write mode
    fp = fopen("/Users/user/Desktop/Data Structure/File_Handling/name.txt", "w");

    // check whether file opened successfully
    if (fp == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("Enter text to write into file:\n");

    // read input from user
    fgets(text, sizeof(text), stdin);

    // write data into file
    fputs(text, fp);

    printf("Data written successfully.\n");

    // closing the file
    fclose(fp);

    printf("File closed successfully.\n");

    return 0;
}
