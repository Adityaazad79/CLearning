// Write a program using functions to find the average of three numbers.

#include <stdio.h>
float average(int a, int b, int c);

int main()
{
    int a, b, c;
    float d; // d = average
    printf("Enter the three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    d = average(a, b, c);
    printf("The average of %d, %d, and %d is %f\n", a, b, c, d);
    return 0;
}

float average(int a, int b, int c)
{
    float d;
    d = (float)(a + b + c) / 3;
    return d;
}