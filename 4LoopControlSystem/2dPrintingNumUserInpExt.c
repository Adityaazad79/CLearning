// Printing number - Increasing + Decreasing order... While Loop - User Input

#include <stdio.h>

int main()
{
    int a, b;

    printf("Print number from ");
    scanf("%d", &a);

    printf("to ");
    scanf("%d", &b);

    printf("\n");

    switch (a <= b)
    {
    case (1):
        while (a <= b)
        {
            printf("%d\n", a);
            a++;
        }
        break;
    default:
    
        switch (a > b)
        {
        case (1):
            while (a >= b)
            {
                printf("%d\n", a);
                a--;
            }
            break;
        }
    }
    return 0;
}