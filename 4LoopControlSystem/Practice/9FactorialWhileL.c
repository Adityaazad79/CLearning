/* Repeat 8 using a while loop.
Q8. Write a program to calculate the factorial of a given number using for loop. */

#include <stdio.h>

int main()
{
    int a, i, b;
    i = b = 1;
    printf("Enter the number to find factorial for \n");
    scanf("%d", &a);
    printf("\n");
    
    while (b <= a)
    {
        i *= b;
        b++;
    }
    printf("The Factorial of %d is %d\n", a, i);

    return 0;
}