#include <stdio.h>

int occurence(char *str, char f);

int main()
{
    char f, str[20];
    int n;
    printf("Enter the message\n");
    scanf("%[^\n]%*c", str);
    printf("Enter the letter whose presence is to be found\n");
    scanf("%c", &f);
    n = occurence(str, f);
    if (n == 1)
    {
        printf("The character is present");
    }
    else
    {
        printf("The character is not present");
    }

    return 0;
}

int occurence(char *str, char f)
{
    int n = 0;
    while (*str != '\0')
    {
        if (*str == f)
        {
            n = 1;
        }
        str++;
    }
    return n;
}