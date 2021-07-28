/* Write a function slice() to slice a string. It should change the 
original string such that it is now the sliced strings.
Take m and n as the start and ending position for slice. */

#include <stdio.h>

void slice(char *ptr, int m, int n)
{
    int i = 0;
    while ((m + i) < n)
    {
        ptr[i] = ptr[i + m];
        i++;
    }
    ptr[i] = '\0';
}

int main()
{
    char str[50] = "AdityaAzad";
    slice(str, 1, 4);
    printf("%s\n", str);

    return 0;
}