// Write a program to print the value of a variable i by using the "pointer to pointer" type of variable.

#include <stdio.h>

int main()
{
    int i = 7, *n, **m;
    n = &i; // Pointer
    m = &n; // Pointer to pointer
    printf("%d\n", **m);

    return 0;
}