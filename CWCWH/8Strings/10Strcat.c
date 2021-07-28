#include <stdio.h>
#include <string.h> // Header file for 'strcat' function.

int main()
{
    char str[20] = "Aditya";
    char str2[20] = "Azad";
    strcat(str, str2); // Concatenates(adds) 2nd string into 1st string.
    printf("%s\n", str);
    return 0;
}