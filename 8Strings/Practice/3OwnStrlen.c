/* Write your own version of strlen function from <string.h> */

#include <stdio.h>

int strlen(char *st)
{
    int n = 0;
    while (*st != '\0')
    {
        n++;
        st++;
    }
    return n;
}

int main()
{
    char st[50];
    scanf("%[^\n]%*c", st);
    int i = 0, n = 0;

    printf("%d\n", strlen(st));

    return 0;
}