#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number to write table for \n");
    scanf("%d", &n);
    printf("\n");
    for (int i = 1; i <= 10; i++)
    {
        printf(" %d * %d = %d\n", n, i, i * n);
    }

    return 0;
}