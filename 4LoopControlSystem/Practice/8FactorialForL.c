// Write a program to calculate the factorial of a given number using for loop.

#include <stdio.h>

int main()
{
    int a, i, b;
    i = b = 1;
    printf("Enter the number to find factorial for \n");
    scanf("%d", &a);
    printf("\n");
    
    for (b; b <= a; b++)
    {
        i *= b;
    }
    printf("The Factorial of %d is %d\n", a, i);

    return 0;
}