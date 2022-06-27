// Write a program to print first n natural numbers using for loop.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the natural number to write till\n");
    scanf("%d", &n);
    printf("\n");

    if (n < 1)
        printf("Invalid Input!\n");

    else
        for (int i = 1; i <= n; i++)
        {
            printf("%d\n", i);
        }

    return 0;
}