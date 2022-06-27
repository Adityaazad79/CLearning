// Printing number - Increasing order only + Inavlid Input Enabled... While Loop - User Input

#include <stdio.h>

int main()
{
    int a, b;

    printf("Print number from ");
    scanf("%d", &a);

    printf("to ");
    scanf("%d", &b);

    if (a <= b)
        while (a <= b)
        {
            printf("%d\n", a);
            a++;
        }
    else
    {
        printf("Invalid Input\n");
    }
    return 0;
}