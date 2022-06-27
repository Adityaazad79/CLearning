// Use of equal operator

#include <stdio.h>

int main()
{
    int a;
    printf("Enter your age \n");
    scanf("%d", &a);

    if (a > 80)
    {
        printf("Your age is %d, so you can't drive\n", a);
    }
    else
    {
        printf("Your age is %d, so you can drive \n", a);
    }

    if (a == 60)
    // If (a=60)
    {
        printf("Age is 60\n");
    }

    return 0;
}