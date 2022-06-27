// Write a program to find the greatest of four numbers entered by the user.

#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the four numbers\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
    {
        printf("The greatest number is %d\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The greatest number is %d\n", b);
    }
    else if (c > b && c > a && c > d)
    {
        printf("The greatest number is %d\n", c);
    }
    else
    {
        printf("The greatest number is %d\n", d);
    }

    return 0;
}