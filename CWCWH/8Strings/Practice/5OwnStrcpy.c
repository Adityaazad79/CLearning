/*  Write your own version of strcpy function from <string.h> */

#include <stdio.h>

void stcpy(char *str1, char *str2)
{
    int i = 0;
    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
}

int main()
{
    char str1[20] = "Aditya";
    char str2[20] = "Azad";
    stcpy(str1, str2);
    printf("%s\n", str1);
    return 0;
}