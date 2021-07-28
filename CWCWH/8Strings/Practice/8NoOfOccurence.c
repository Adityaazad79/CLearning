#include <stdio.h>

int occurence(char *str, char f);

int main()
{
    char f, str[20];
    int n;
    printf("Enter the message\n");
    scanf("%[^\n]%*c", str);
    printf("Enter the letter to find the no of occurence\n");
    scanf("%c", &f);
    n = occurence(str, f);
    printf("%d", n);

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