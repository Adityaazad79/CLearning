// Write a program in C to search a number from an array of values using Binary Search and user-defined function.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, n, x, f, l, m, *a, flag = 0;

    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        scanf("%d", &a);
    scanf("%d", &x);

    /* Binary Search  logic */
    f = 0;
    l = n - 1;
    while (f <= l)
    {
        m = (f + l) / 2;
        if (x == a)
        {
            flag = 1;
            break;
        }
        else if (x < a)
            l = m - 1;
        else
            f = m + 1;
    }

    if (flag == 0)
        printf("0");
    else
        printf("1");
}