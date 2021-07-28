/* Write a program to count the occurrence of a given character in a string. */

#include <stdio.h>

int occurence(char *str, char f);

int main()
{
    char f, str[20];
    int n;
    printf("Enter the message\n");
    scanf("%[^\n]%*c", str);
    printf("Enter the character to find the no of occurence for\n");
    scanf("%c", &f);
    n = occurence(str, f);
    printf("The chracter '%c' has been been found %d times\n", f, n);

    return 0;
}

int occurence(char *str, char f)
{
    int n = 0;
    while (*str != '\0')
    {
        if (*str == f)
        {
            n++;
        }
        str++;
    }
    return n;
}