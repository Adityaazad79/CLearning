// Write a program to find grade...

#include <stdio.h>

int main()
{
    int m;
    printf("Enter the marks\n");
    scanf("%d", &m);
    if (m > 90 && m <= 100)
    {
        printf("Congratulations you have got grade A\n");
    }
    else if (m >= 80 && m <= 90)
    {
        printf("Congratulations you have got grade B\n");
    }
    else if (m > 80 && m < 90)
    {
        printf("Congratulations you have got grade C\n");
    }
    else if (m >= 70 && m <= 80)
    {
        printf("Congratulations you have got grade D\n");
    }
    else if (m > 60 && m < 70)
    {
        printf("Congratulations you have got grade E\n");
    }
    else if (m > 100)
    {
        printf("Do you really think you are a genius..? LOL\n");
    }
    else
    {
        printf("You have failed\n");
    }
    return 0;
}