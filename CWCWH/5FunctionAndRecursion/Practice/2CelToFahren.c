//  Write a function to convert Celcius temperature into Fahrenheit.

#include <stdio.h>
float fah(float a);

int main()
{
    float a, b;
    printf("Enter the Celcius temperature\n");
    scanf("%f", &a);
    b = fah(a);
    printf("%f degree celcius is equivalent to %f degree fahrenheit\n", a, b);

    return 0;
}

float fah(float a)
{
    float b;
    b = 9 * a / 5 + 32;
    return b;
}