#include <stdio.h>
#include <string.h> // Header file for 'strlen' function.

int main()
{
    char *str = "Aditya";
    int len = strlen(str); // strlen is used to count the number of chracters excluding the null character.
    printf("%d", len);

    return 0;
}