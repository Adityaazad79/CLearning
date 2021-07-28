/* Write a program using a function that calculates the sum and average of two numbers. Use pointers and print the
values of sum and average in main(). */


#include <stdio.h>

void sav(int n, int m, int *s, float *a);

int main()
{
    int x, y, s;
    float a;
    printf("Enter the number\n");
    scanf("%d%d", &x, &y);
    sav(x, y, &s, &a);
    printf("The sum is %d and average is %.1f\n", s, a);

    return 0;
}

void sav(int n, int m, int *s, float *a)
{
    *s = n + m;
    *a = (float)(*s) / 2;
}