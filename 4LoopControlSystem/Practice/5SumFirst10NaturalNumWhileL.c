//  Write a program to sum the first ten natural numbers using a while loop.

#include <stdio.h>

int main()
{
    int a = 0, n = 1;
    while (n < 11)
    {
        a += n;
        n++;
    }

    printf("%d\n", a);

    return 0;
}