// Write a program to check whether a given number is prime or not using loops.
// Logic - Prime number has a total no of factor(s) = 2.
// Using 'while' loop.

#include <stdio.h>

int main()
{
    int a, b = 1, c = 0;
    printf("Enter the number to check prime for : \n");
    scanf("%d", &a);

    if (a < 2)
    {
        printf("Prime Number starts from 2\n");
    }
    else
    {
        while (b <= a)
        {
            if (a % b == 0)
            {
                c++;
            }
            b++;
        }
        if (c == 2)
        {
            printf("\n%d is a prime number\n", a);
        }
        else
        {
            printf("\n%d is not a prime number\n", a);
        }
    }

    return 0;
}