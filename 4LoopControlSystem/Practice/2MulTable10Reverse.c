// Write a program to print a multiplication table of 10 in reversed order.

#include <stdio.h>

int main()
{
    int i = 10;
    printf("The multiplication table of 10:\n\n");
    while (i > 0)
    {
        printf("10 * %d = %d\n", i, 10 * i);
        i--;
    }

    return 0;
}