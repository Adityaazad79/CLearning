// Using If Else If... if-else if-else ladder.
// Check the number

#include <stdio.h>

int main()
{
    int a;
    printf("Enter your number\n");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("Your number is 1\n");
    }
    else if (a == 2)
    {
        printf("Your number is 2\n");
    }
    else if (a == 3)
    {
        printf("Your number is 3\n");
    }
    else
    {
        printf("Your number is not 1,2,or 3");
    }
    return 0;
}