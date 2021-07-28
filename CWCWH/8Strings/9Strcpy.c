#include <stdio.h>
#include <string.h> // Header file for 'strcpy' function.

int main()
{
    char str1[20] = "Aditya";
    char str2[20] = "Azad";
    strcpy(str2, str1); // 'strcpy' copies content of second string in first string while erasing previous data in first string.
    printf("%s\n", str2);
    return 0;
}