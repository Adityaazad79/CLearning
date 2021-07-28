#include <stdio.h>

void mul(int *arr, int num)
{
    printf("The multiplication table of %d : \n", num);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = num * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d = %d\n", num, i + 1, arr[i]);
    }
    printf("*******************************\n\n");
}

int main()
{
    int n;
    printf("Enter the total number of numbers to print table for \n");
    scanf("%d", &n);

    int arr[n][10];
    int num[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d numbers to print table for\n", n);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < n; i++)
    {
        mul(arr[i], num[i]);
    }

    return 0;
}