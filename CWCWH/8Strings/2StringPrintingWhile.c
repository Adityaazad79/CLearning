#include <stdio.h> 

int main()
{
    char str[] = "Aditya";
    // char str[] = {'A', 'd', 'i', 't', 'y', 'a', '\0'};
    char *ptr = str;
    while (*ptr!='\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}