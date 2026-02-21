#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    printf("No of Arguments: %d\n", argc);
    printf("The Arguments are:\n");

    for(i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
