// Use of if else statement
// Program to determine if someone can drive or not; driving age 18-80 yrs.

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