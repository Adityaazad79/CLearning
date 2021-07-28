/* Write a program to change the value of a variable to ten times its current value. Write a function and pass the value
by reference. */

#include <stdio.h>

int m10(int *n);

int main()
{
    int n, x, m;
    printf("Enter the number\n");
    scanf("%d", &n);
    m = n;
    x = m10(&n);
    printf("Ten time of the value %d is %d\n", m, x);
    printf("Teh value of n after call by reference is %d (Chanaged)\n", n);

    return 0;
}

int m10(int *n)
{
    int m;
    m = *n;
    *n = m * 10;
    return *n;
}