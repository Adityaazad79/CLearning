// Write a program to print natural numbers from 10 to 20 when the initial loop counter i is initialized to 0.

#include <stdio.h>

int main()
{
    int a = 1, n;
    printf("Enter the natural number to write till\n");
    scanf("%d", &n);
    printf("\n");
    if (n < 1)
        printf("Invalid Input!\n");

    else
        do
        {
            printf("%d\n", a);
            a++;
        } while (a <= n);

    return 0;
}