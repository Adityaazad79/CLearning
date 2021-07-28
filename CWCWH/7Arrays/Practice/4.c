#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number to print table for\n");
    scanf("%d", &n);
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i]=n*(i+1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d = %d\n",n, i+1, arr[i]);
    }

    return 0;
}