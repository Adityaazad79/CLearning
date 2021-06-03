#include <stdio.h>

int main()
{
    int a;
    int VipPass = 0;
    //VipPass = 1;

    printf("Enter your age \n");
    scanf("%d", &a);

    //if ((a <= 80 && a >= 18) || VipPass == 1)
    if ((a <= 80 && a >= 18) || !(VipPass == 1))
    {
        printf("Your age is %d, so you can drive\n", a);
    }
    else
    {
        printf("Your age is %d, so you can't drive \n", a);
    }

    if (a == 60)
    // If (a=60)
    {
        printf("Age is 60\n");
    }

    return 0;
}