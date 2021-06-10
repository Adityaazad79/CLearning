/* Write a program to implement program 5 using for and do-while loop.
Q.5 Write a program to sum the first ten natural numbers using a while loop. */

#include <stdio.h>

int main()
{
    int a = 0, n = 1;
    do
    {
        a = a + n;
        n++;
    } while (n <= 10);

    printf("%d\n", a);

    return 0;
}