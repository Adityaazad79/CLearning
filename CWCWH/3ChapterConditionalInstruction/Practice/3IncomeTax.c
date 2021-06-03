

#include <stdio.h>

int main()
{
    float i, t;

    // t=tax, i =income

    printf("Please enter your income in x.x lac format\n");
    scanf("%f", &i);
    if (i < 2.5)
    {
        printf("You are exempted from income tax\n");
    }

    else if (i >= 2.5 && i <= 5.0)
    {
        printf("Your income tax is %flac\n", (i - 2.5) * 5 / 100);
    }

    else if (i > 5.0 && i <= 10.0)
    {
        printf("Your income tax is %flac\n", ((2.5) * 5 / 100) + ((i - 5) * 20 / 100));
    }
    else
    {
        printf("Your income tax is %flac\n", ((2.5) * 5 / 100) + ((5) * 20 / 100) + ((i - 10) * 30 / 100));
    }

    return 0;
}