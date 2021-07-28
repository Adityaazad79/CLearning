#include <stdio.h>

int main()
{
    char *ptr = "Aditya Bhai";
    /* The compiler will automatically convert it into // char str[] = {'A', 'd', 'i', 't', 'y', 'a',' ','B', 'h', 'a', 'i', \0'}; */
    

    printf("%s",ptr); // Format specifier for strings.

    return 0;
}