// Write a program using recursion to calculate the nth element of the Fibonacci series. i.e 0,1,1,2,3,5,8,13,21,34....

#include <stdio.h>
int fibo(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}
int main()
{
    int n, m;
    printf("Enter the element order\n");
    scanf("%d", &n);
    m = fibo(n);
    printf("\nThe required element of the series is %d\n", m);
    return 0;
}