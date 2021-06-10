// Printing number - Increasing order... While Loop - User Input

#include <stdio.h>

int main()
{
    int a, b;
    printf("Print number from ");
    scanf("%d", &a);
    printf("to ");
    scanf("%d", &b);
    while (a <= b)
    {
        printf("%d\n", a);
        a++;
    }

    return 0;
}