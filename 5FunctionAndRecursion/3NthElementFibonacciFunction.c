// Write a program using function to calculate the nth element of the Fibonacci series. i.e 0,1,1,2,3,5,8,13,21,34....


#include <stdio.h>
int fib(int n);

int main()
{
    int n, a;
    printf("Enter the element order\n");
    scanf("%d", &n);
    a = fib(n);
    printf("\nThe required element of the series is %d\n", a);

    return 0;
}

int fib(int n)
{
    int a = 0, b = 1, c;
    for (int i = 1; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}