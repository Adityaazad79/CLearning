#include <stdio.h>

int main()
{
    int a;
    printf("Enter your age \n");
    scanf("%d", &a);

    if (a > 80)
    {
        printf("Your age is %d, so you can't drive", a);
    }
    else
    {
        printf("Your age is %d, so you can drive", a);
    }

    return 0;
}