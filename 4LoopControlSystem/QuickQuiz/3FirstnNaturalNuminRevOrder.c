//  Write a program to print n natural numbers in reverse order.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the natural number to write till\n");
    scanf("%d", &n);
    printf("\n");

    for (n; n; n--)
    {
        printf("%d\n", n);
    }

    return 0;
}