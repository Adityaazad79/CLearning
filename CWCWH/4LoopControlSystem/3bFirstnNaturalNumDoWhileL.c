// Write a program to print natural number from 1 to n. n = User Input

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