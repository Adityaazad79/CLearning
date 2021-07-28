#include <stdio.h>

int occurence(char *str, char *ptr);

int main()
{
    char ptr[20], str[20];
    int n;
    printf("Enter the message\n");
    scanf("%[^\n]%*c", str);
    printf("Enter the letter(s) to find the no of occurence(s)\n");
    scanf("%[^\n]%*c", ptr);
    n = occurence(str, ptr);
    printf("%d\n", n);
    // puts(ptr);

    return 0;
}

int occurence(char *str, char *ptr)
{
    int n = 0;
    while (*str != '\0')
    {
        if (*str == *ptr)
        {
            n++;
        }
        str++;
    }
    return n;
}