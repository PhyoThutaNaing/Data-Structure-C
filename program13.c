#include <stdio.h>

int main()
{
    char str[1000];      // String using array
    char *ptr;          // Pointer declaration

    printf("Enter a string: ");
    fgets(str, 1000, stdin);   // Reading string

    ptr = str;          // Pointer points to string

    printf("\nDisplaying string using pointer:\n");

  /*  while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;          // Move pointer to next character
    }
*/
    return 0;
}
