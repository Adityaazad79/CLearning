// Write a program to calculate the sum of the numbers occurring in the multiplication table of 8.(Consider 8x1 to 8x10).
// Replace '8' with the desired num in line 10 to to get sum of the mul of that number.

#include <stdio.h>

int main()
{
    int a = 0, n = 0;
    while (n <= 10)
    {
        a = a + 8 * n;
        n++;
    }

    printf("%d\n", a);

    return 0;
}