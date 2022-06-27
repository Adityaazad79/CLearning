// Finding factorial

#include <stdio.h>
int fact(int n);

int main()
{
    int r, n;
    printf("Enter num\n");
    scanf("%d", &n);
    r = fact(n);
    printf("%d factorial is %d\n", n, r);

    return 0;
}

int fact(int n)
{
    int r;
    if (n == 0)
    {
        r = 1;
    }
    else
    {
        r = n * fact(n - 1);
    }
    return r;
}