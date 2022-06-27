// Write a program to find whether a year entered by the user is a leap year or not. Take the year as input from the user.

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the year to be checked for a leap year\n");
    scanf("%d", &a);
    if (a % 400 == 0)
    {
        printf("%d is a leap year", a);
    }
    else if (a % 100 == 0)
    {
        printf("%d is not a leap year", a);
    }
    else if (a % 4 == 0)
    {
        printf("%d is a leap year", a);
    }
    else
    {
        printf("%d is not a leap year", a);
    }

    return 0;
}